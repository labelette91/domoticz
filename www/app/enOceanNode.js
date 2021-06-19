
function tt(name) {
    return name;
}


function SendCmd(devIdx,cmd,payload) {
var result = {} ;
    $.ajax({
        url: "json.htm?type=enocean&hwid=" + $.hwid + "&cmd=" + cmd,
        data: payload,
        async: false,
        dataType: 'json',
        success: function (data) {
			if (data.status == 'OK') {
            	result = data.result ;
			}
			else {
				if (typeof data.message != 'undefined')
					ShowNotify($.t('Problem sending message '+ cmd + ':' + data.message ), 2500, true);
				else
					ShowNotify($.t('Problem sending message '+ cmd  ), 2500, true);

			}
		},
		error: function () {
			HideNotify();
			ShowNotify($.t('Problem sending message '+ cmd  ), 2500, true);
		}

    });

	return result ;
}
function EnOceanGetProfileCases(profil)
{
    var result= [] ;

    var Item = {};
    Item.Num = "1";
    Item.Title = "Case1";
    Item.Description = "Case1";
    result.push( Item ) ;

    var Item2 = {};
    Item2.Num = "2";
    Item2.Title = "Case2";
    Item2.Description = "Case2";
    result[1] = Item2;

    var Item3 = {};
    Item3.Num = "3";
    Item3.Title = "Case3";
    Item3.Description = "Case3";
    result[2] = Item3;

    //result.push(Item);
	var payload = {};
	payload["profil"] = profil ;

    result = SendCmd($.devIdx, "getCases2", payload);

    return result;

}
function RefreshDeviceCombo(ComboName, List, clear) {
		    //get list

		    var Combo = $(ComboName);

		    if (clear) Combo.find('option').remove().end();

		    $.each(List, function (i, item) {
		        var option = $('<option />');
//		        option.attr('value', item.Num).text(item.Title);
		        option.attr('value', i ).text(item.Title);
//		        option.attr('value', i ).text(item.Title);
		        Combo.append(option);
		    });

		    var option = $('<option />');
		    option.attr('value', '0').text('');
		    //    Combo.append(option);

		}


function ComboChange() {
    $.caseNb = $("#dialog-enoceansend  #CaseCombo").val();
    $("#dialog-enoceansend #description").val($.Cases[$.caseNb].Description);

    $.shortCuts = EnOceanGetProfileCase($.profil, $.caseNb);
    var i;
    for (i = 0; i < $.shortCuts.length ; i++) {
        $("#dialog-enoceansend  #Short" + i + " #LblParam" ).html($.shortCuts[i].Short);
        $("#dialog-enoceansend  #Short" + i + " #ValParam").val("0");
        $("#dialog-enoceansend  #Short" + i + " #DesParam").html($.shortCuts[i].Desc);
        $("#dialog-enoceansend  #Short" + i).show();

    }
    for (i = $.shortCuts.length; i < 26; i++) {
        name = "#dialog-enoceansend  #Short" + i;
        $(name).hide();

    }

}

function EnOceanGetProfileCase(profil,caseNb) {
    var result = [];

    result.push({
        Short: "     Sh1" ,
        Desc : "Des  sh1", 
        Enum : "Enum sh1" 
    });

    if (caseNb >= 1) {
        result.push({
            Short: "     Sh2",
            Desc: "Des  sh2",
            Enum: "Enum sh2"
        });

    }
    if (caseNb >= 2) 

    result.push({
        Short: "     Sh3",
        Desc: "Des  sh3",
        Enum: "Enum sh3"
    });


    var payload = {};
	payload["profil"] = profil ;
    payload["casenb"] = caseNb;
    result = SendCmd($.devIdx, "getCaseShortCut2", payload);
    
    return result;


}
EnoceanDeviceSendDialogOpen = function (hwid, profil, deviceId ) {
		        $.t = tt;
		        $.profil = profil;
		        $.devIdx = deviceId;
				$.hwid  = hwid;
		    //creation boutton et dialog enoceansend
			    EnoceanDeviceSendAddXmlDialog();
			    EnoceanDeviceSendCreateDialog(profil, deviceId);

			    var Cases = EnOceanGetProfileCases(profil);

			    $.Cases = Cases;



				$("#dialog-enoceansend #name").val(profil);
				$("#dialog-enoceansend #description").val(Cases[0].Description);

				RefreshDeviceCombo("#dialog-enoceansend #CaseCombo", Cases, true);

				$("#dialog-enoceansend #CaseCombo").change( ComboChange ) ;

    //					$("#dialog-enoceansend #CaseCombo").change();
				ComboChange();
				    
//				$("#dialog-enoceansend").i18n();
				$("#dialog-enoceansend").dialog("open");
			
        };


		ButtonActionOk = function (profil, deviceId) {
             var caseNb =  $("#dialog-enoceansend  #CaseCombo").val();

	        var bValid = true;
	        if (bValid) {


	            $("#dialog-enoceansend").dialog("close");

	            var payload = {};
	            var i;
	            for (i = 0; i < $.shortCuts.length ; i++) {
	                var name = "#dialog-enoceansend  #Short" + i + " #ValParam" ;
	                payload[i] = $(name).val();
	                if ( isNaN(payload[i]) )
              			ShowNotify($.t('Invalid value '+ payload[i] ), 2500, true);
	                if ( isNaN(parseInt(payload[i]))) 
              			ShowNotify($.t('Invalid value '+ payload[i] ), 2500, true);

	            }

	            {
            	    payload["profil"]=profil;
            	    payload["casenb"]= $.caseNb ;
            	    payload["devidx"]= $.devIdx ;
            	    result = SendCmd($.devIdx, "sendvld",payload );

	            }

	        }

	    }
		EnoceanDeviceSendCreateDialog = function (profil, deviceId) {
            var dialog_buttons = {};

            dialog_buttons[$.t("Ok")] = function () {
                ButtonActionOk(profil, deviceId);
            };
            dialog_buttons[$.t("Cancel")] = function () {
                $(this).dialog("close");
            };


            $("#dialog-enoceansend").dialog({
                autoOpen: false,
                width: 'auto',
                height: 'auto',
                modal: true,
                resizable: false,
                title: $.t("Send VLD"),
                buttons: dialog_buttons,
                close: function () {
                    $(this).dialog("close");
                }
            });


        }

		EnoceanDeviceSendAddXmlDialog = function () {
		    var obj = $("#dialog-enoceansend");
            if (obj.length == 0 )
	        $(document.body).append(`
<div id="dialog-enoceansend" title="Edit Device" style="display:none;">
    <form>
        <table class ="display" id="metertable" border="0" cellpadding="0" cellspacing="0">
        <tr>
          <td align="right" style="width:60px"><label ><span data-i18n="Name">Name</span>: </label></td>
          <td><input type="text" id="name" style="width: 250px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
        </tr>
		<tr>
			<td align="right" style="width:120px"><label ><span data-i18n="Description"></span>: </label></td>
			<td><textarea id="description" name="description" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
		</tr>
		<tr >
			<td align="right" style="width:120px"><label ><span data-i18n="Case">Case</span>: </label></td>
			<td><select id="CaseCombo" style="width:150px" class ="combobox ui-corner-all">
        <option value="one">one</option>
        <option value="two">two</option>
        <option value="three">three</option>				<!--#embed-->
			</select></td>
		</tr>

		</table>
        <table class ="display" id="virtualThermostat" border="0" cellpadding="0" cellspacing="0">
        <tr id="Short0" >
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>

        </tr>
        <tr id="Short1">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short2">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short3">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short4">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short5">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short6">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short7">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short8">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
        <tr id="Short9">
          <td align="right" style="width:60px"><label id="LblParam" >Param1 </label></td>
          <td><input type="text" id="ValParam" style="width: 50px; padding: .4em;" class ="text ui-widget-content ui-corner-all" /></td>
		<td><textarea id="DesParam" name="DesParam" rows="4" style="width: 356px; padding: .2em;" class ="text ui-widget-content ui-corner-all"></textarea></td>
        </tr>
		</table>
    </form>
</div>
        `);

	    };


		
define(['app'], function (app) {

    app.component('enoceanHardware', {
		bindings: {
			hardware: '<'
		},
		templateUrl: 'app/hardware/setup/EnOcean.html',
		controller: EnOceanHardwareController
	});

	function EnOceanHardwareController($scope, $interval, $http, dataTableDefaultSettings) {
		var $ctrl = this;

		getNodeName = function (node) {
			return node ? node.nodeName : '';
		};
		getGroupName = function (group) {
			return group ? group.groupName : '';
		};

		$ctrl.$onInit = function () {
			$scope.ozw_node_id = "-";
			$scope.ozw_node_desc = "-";

			EditEnOcean($ctrl.hardware.idx, $ctrl.hardware.Name, 1, 2, 3, 4, 5, 6);
		};

		EnOceanVldSend = function () {
		    var oTable = $('#nodestable').dataTable();
		    var anSelected = fnGetSelected(oTable);
		    var data = oTable.fnGetData(anSelected[0]);
		    EnoceanDeviceSendDialogOpen($.hwid, data[5], data[0]);
		}
		EnOceanCmd = function (cmd, MinIdSelected, MaxIdSelected , MinEntrySelected,MaxEntrySelected) {

		    //		    $.ajax({ type: 'POST', url: url + "api/" + topic, data: payload, async: true });
		    var oTable = $('#nodestable').dataTable();
		    var anSelected = fnGetSelected(oTable);
		    var payload = {};
		    for (i = 0; i < anSelected.length ; i++) {
		        var data = oTable.fnGetData(anSelected[i]);
		        payload[i] = data[0];
		    }

		    var deviceIdSelected = {} ;
		    
		    var totalselected = $('#nodestable input:checkbox:checked').length;

		    if (totalselected == 0) {
		        var data = oTable.fnGetData(anSelected[0]);
		    }
		    if (totalselected < MinIdSelected)  {
		        bootbox.alert($.t('No Devices selected !'));
		        return;
		    }
		    if (totalselected > MaxIdSelected)  {
		        bootbox.alert($.t('Maximum ' + MaxIdSelected + ' Devices selected !'));
		        return;
		    }

            //number entry selected
		    totalLinkSelected = $('#inboundlinktable input:checkbox:checked').length;
		    if (totalLinkSelected < MinEntrySelected) {
		        bootbox.alert($.t('No Entry selected !'));
		        return;
		    }
		    if (totalLinkSelected > MaxEntrySelected) {
		        bootbox.alert($.t('Maximum ' + MaxEntrySelected + ' ; selected !'));
		        return;
		    }


		    payload = {};
		    var cnt = 0;
		    $('#nodestable input:checkbox:checked').each(function () {
		        lineNo = $(this).val();
		        var data = oTable.fnGetData(lineNo);
		        payload[cnt] = data[0] + ";" + data[1];
		        deviceIdSelected[cnt] = data[0];
		        cnt++;
		    });



		    oLinkTable = $('#inboundlinktable').dataTable();
		    var selectedEntry ="" ;
		    $('#inboundlinktable input:checkbox:checked').each(function () {
		        lineNo = $(this).val();
		        var entry = oLinkTable.fnGetData(lineNo);
		        if (selectedEntry == "")
		            selectedEntry = entry["entry"] + ';';
		        selectedEntry = selectedEntry + entry[0] + ';';
		    });

		    payload["entry"] = selectedEntry;

		    $.ajax({
		        //		        type: 'POST',
		        url: "json.htm?type=enocean&hwid=" + $.hwid + "&cmd=" + cmd,
		        data: payload,
		        async: false,
		        dataType: 'json',
		        success: function (data) {
		            if (data.status == "ERR")
		                bootbox.alert($.t('Error funcion '+cmd + ' : ' + data.message ));

		            if ((cmd == "GetLinkTable") || (cmd == "DeleteEntrys"))
		                refreshLinkTable(deviceIdSelected[0]);
		            if (typeof data.result != 'undefined') {

		            }
		        },
		        error: function (response) {
		        }
		    });

		}

		refreshLinkTable = function (DeviceID) {
		    var oTableLink = $('#inboundlinktable').dataTable();

		    oTableLink.fnClearTable();
		    var statusImg = '<img src="images/' + status + '.png" />';
		    var healButton = '<img src="images/heal.png" onclick="ZWaveHealNode(' + '1' + ')" class="lcursor" title="' + $.t("Heal node") + '" />';
            var payload = {};
            payload[0] = DeviceID + ";1" ;

		    $.ajax({
		        url: "json.htm?type=enocean&hwid=" + $.hwid + "&cmd=GetLinkTableList" ,
                data: payload,
                async: false,
		        dataType: 'json',
		        success: function (data) {
		            if (typeof data.result != 'undefined') {

		                $.each(data.result, function (i, item) {
		                    var itemChecker = '<input type="checkbox" class="noscheck" name="Check-' + i + ' id="Check-' + i + '" value="' + i + '" />';

		                    var n = "" + i; if (i <= 9) n = "0" + n;
		                    var addId = oTableLink.fnAddData({
		                        //		                        "Name": item.Name,
		                        "entry": DeviceID,
		                        "0": n,
		                        "1": item.Profile,
		                        "2": item.Name,
		                        "3": item.SenderId,
		                        "4": item.Channel,
		                        //		                                    "4": statusImg + '&nbsp;&nbsp;' + healButton,
		                        "5": itemChecker,

		                    });
		                });
		            }
		        }
		    });


}

		RefreshOpenEnOceanNodeTable = function () {
		    $('#modal').show();

		    $('#updelclr #nodeupdate').attr("class", "btnstyle3-dis");
		    $('#updelclr #nodedelete').attr("class", "btnstyle3-dis");
		    //		    $("#hardwarecontent #configuration").html("");
		    $("#hardwarecontent #nodeparamstable #nodename").val("");

		    var oTable = $('#nodestable').dataTable();
		    oTable.fnClearTable();

		    $.ajax({
		        url: "json.htm?type=enocean&hwid=" + $.hwid + "&cmd=GetNodeList",
		        async: false,
		        dataType: 'json',
		        success: function (data) {
		            if (typeof data.result != 'undefined') {

		                $("#ownNodeId").val(String(data.ownNodeId));

		                $.each(data.result, function (i, item) {
		                    var status = "ok";
		                    var statusImg = '<img src="images/' + status + '.png" />';
		                    var healButton = '<img src="images/heal.png" onclick="EnoceanDeviceSendDialogOpen(' +  $.hwid + ',\''+ item.Profile + '\',\'' +  item.DeviceID +  '\')" class="lcursor" title="' + $.t("Heal node") + '" />';
//		                    var itemChecker = '<input type="checkbox" class="noscheck" name="Check-' + item.DeviceID + ' id="Check-' + item.DeviceID + '" value="' + item.DeviceID + '" />';
		                    var itemChecker = '<input type="checkbox" class="noscheck" name="Check-' + item.DeviceID + ' id="Check-' + item.DeviceID + '" value="' + i + '" />';

		                    //		                    var Description = item.Description;
		                    //		                    var nodeStr = addLeadingZeros(item.NodeID, 3) + " (0x" + addLeadingZeros(item.NodeID.toString(16), 2) + ")";
		                    var addId = oTable.fnAddData({
		                        //		                        "Name": item.Name,
		                        //"State": item.State,
		                        //"NodeID"  : item.ID,
		                        "DeviceID": item.DeviceID,
		                        "0": item.DeviceID,
		                        "1": item.Unit,
		                        "2": item.Name,
		                        "3": item.Description,
		                        "4": item.Manufacturer_name,
		                        "5": item.Profile,
		                        "6": item.TypeName,
		                        "7": item.BaseAddress,
		                        "8": item.EnoTypeName,
		                        //		                        "8": statusImg + '&nbsp;&nbsp;' + healButton,
		                        "9": healButton + '&nbsp;&nbsp;' + itemChecker,
		                    });
		                });
		            }
		        }
		    });

		    var oTableLink = $('#inboundlinktable').dataTable();
		    $("#inboundlinktable tbody").on('click', 'tr', function () {
		        if ($(this).hasClass('row_selected')) {
		            $(this).removeClass('row_selected');
		        }
		        else {
		            var oTable = $('#inboundlinktable').dataTable();
		            oTable.$('tr.row_selected').removeClass('row_selected');
		            $(this).addClass('row_selected');

		        }
		    });


		    /* Add a click handler to the rows - this could be used as a callback */
		    $("#nodestable tbody").off();
		    $("#nodestable tbody").on('click', 'tr', function () {
		        $('#updelclr #nodedelete').attr("class", "btnstyle3-dis");
		        if ($(this).hasClass('row_selected')) {
//		            $(this).removeClass('row_selected');

		            /*		            $('#updelclr #nodeupdate').attr("class", "btnstyle3-dis");
                                        $("#hardwarecontent #configuration").html("");
                                        $("#hardwarecontent #nodeparamstable #nodename").val("");
                                        $('#hardwarecontent #usercodegrp').hide();
                    */
		        }
		        else {
		            var oTable = $('#nodestable').dataTable();
		            oTable.$('tr.row_selected').removeClass('row_selected');
		            $(this).addClass('row_selected');

		        }

		        {
		            var iOwnNodeId = parseInt($("#ownNodeId").val());
		            var oTable = $('#nodestable').dataTable();
		            //		            oTable.$('tr.row_selected').removeClass('row_selected');

		            $('#updelclr #nodeupdate').attr("class", "btnstyle3");
		            //		            var anSelected = fnGetSelected(oTable);
		            //		            if (anSelected.length !== 0) 
		            {
		                //		                var data = oTable.fnGetData(anSelected[0]);
		                var data = oTable.fnGetData($(this));
		                var DeviceID = data["DeviceID"];

		                //		                var szConfig = "";
		                //		                $("#hardwarecontent #configuration").html(szConfig);
		                //$("#hardwarecontent #configuration").i18n();
		                //refreshLinkTable(DeviceID);

		            }
		        }
		    });

		    $('#modal').hide();
		}

		EditEnOcean = function (idx, name, Mode1, Mode2, Mode3, Mode4, Mode5, Mode6) {
		    $.hwid = idx;
		    $.devName = name;
		    cursordefault();
		    var htmlcontent = '';
//		    htmlcontent = '<p><center><h2><span data-i18n="Device"></span>: ' + name + '</h2></center></p>\n';
		    htmlcontent += $('#enocean').html();
//		    $('#hardwarecontent').html(GetBackbuttonHTMLTable('ShowHardware') + htmlcontent);
		    $('#hardwarecontent').html( htmlcontent);
		    $('#hardwarecontent').i18n();

		    var oTable = $('#nodestable').dataTable({
		        "sDom": '<"H"lfrC>t<"F"ip>',
		        "oTableTools": {
		            "sRowSelect": "single",
		        },
		        "aaSorting": [[0, "desc"]],
		        "bSortClasses": false,
		        "bProcessing": true,
		        "bStateSave": true,
		        "bJQueryUI": true,
		        "aLengthMenu": [[25, 50, 100, -1], [25, 50, 100, "All"]],
		        "iDisplayLength": 25,
		        "sPaginationType": "full_numbers",
		        language: $.DataTableLanguage
		    });

		    $('#hardwarecontent #idx').val(idx);

		    RefreshOpenEnOceanNodeTable();
		}

		EnOceanSetCode = function () {
		    bootbox.dialog({
		        message: $.t("Please enter the code protection:") + "<input type='text' id='add_node' data-toggle='tooltip' title='NodeId or NodeId.Instance'></input><br>",
		        title: 'Set Code  ' ,
		        buttons: {
		            main: {
		                label: $.t("Save"),
		                className: "btn-primary",
		                callback: function () {
		                    var addnode = $("#add_node").val();
		                    $http({
		                        url: "json.htm?type=enocean&hwid=" + $.hwid + "&cmd=SetCode" + "&code=" + addnode ,
		                        async: true,
		                        dataType: 'json'
		                    }).then(function successCallback(response) {
		                        //RefreshGroupTable();
		                    }, function errorCallback(response) {
		                    });
		                }
		            },
		            nothanks: {
		                label: $.t("Cancel"),
		                className: "btn-cancel",
		                callback: function () {
		                }
		            }
		        }
		    });
		};


	}
});

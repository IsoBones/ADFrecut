/*
	Author: P1NGA

	Description:
	Load ADF News Feed

	Parameter(s):
	_this select 0: DISPLAY - display where newsfeed with idc 1101 is

*/

if (!isDedicated) then
{
	if !(uinamespace getvariable ["BIS_fnc_guiNewsfeed_disable",false]) then
	{
		private ["_displays", "_display", "_newsOnline", "_newsOffline", "_ctrlHTML", "_htmlLoaded"];

		waitUntil { (count(uinamespace getvariable ["GUI_displays",[]])) >= 1; };

		_displays = (uinamespace getvariable ["GUI_displays",[]]);
		_display = _displays select 0;

		//diag_log _displays;
		//diag_log _display;

		_latestVersion htmlLoad "http://adf-uncut.com/ADFU_uncut_version.php";
		diag_log _latestVersion;
		_newsOnline = "http://adf-uncut.com/ADFU_uncut_update.php";
		_newsOffline = "ADFU_ui\ADFU_version.html";

		//Load the correct HTML into the control
		_ctrlHTML = _display displayCtrl 1125;
		_ctrlHTML htmlLoad _newsOnline;

		//Offline back-up
		_htmlLoaded = ctrlHTMLLoaded _ctrlHTML;
		if (!_htmlLoaded) then {
			_ctrlHTML htmlLoad _newsOffline;
		};
		_htmlLoaded;
	} else {
		false
	};
};
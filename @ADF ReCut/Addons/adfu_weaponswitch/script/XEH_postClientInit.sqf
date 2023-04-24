
ADFU_fnc_disposable_launcher = compile preProcessFileLineNumbers "\ADFU_weaponswitch\script\fnc_launcher_dispose.sqf";
ADFU_fnc_weaponSwitch = { call compile preprocessFile "\ADFU_weaponswitch\script\fnc_weapon_switch.sqf"; };
ADFU_fnc_opticSwitch = { call compile preprocessFile "\ADFU_weaponswitch\script\fnc_optic_switch.sqf"; };
//ADFU_fnc_pointerSwitch = call compile preprocessFile "\ADFU_weaponswitch\script\fnc_pointer_switch.sqf";

["ADF Uncut", "adfu_toggle_weapon", "Toggle Weapon", { _this call ADFU_fnc_weaponSwitch }, {}, [DIK_NUMPAD8, [false, false, false]]] call CBA_fnc_addKeybind;
["ADF Uncut", "adfu_toggle_optic", "Toggle Optic", { _this call ADFU_fnc_opticSwitch }, {}, [DIK_NUMPAD8, [true, false, false]]] call CBA_fnc_addKeybind;
//["ADF Uncut", "adfu_toggle_pointer", "Toggle Pointer", { _this call ADFU_fnc_pointerSwitch }, {}, [72, [true, true, false]]] call CBA_fnc_addKeybind;

player addEventHandler ["Fired", ADFU_fnc_disposable_launcher];
// Current Primary Weapon
private ["_currentOptic", "_switchEnabled", "_alt_Optic", "_handled"];

_handled = false;

_currentOptic = (primaryWeaponItems player) select 2;

if (isClass(configFile >> "cfgWeapons" >> _currentOptic)) then
{
	_switchEnabled = [(configFile >> "cfgWeapons" >> _currentOptic),"ADFU_optic_switch",0] call BIS_fnc_returnConfigEntry;

	if (_switchEnabled == 1) then
	{
		_alt_Optic = getText (configFile >> "cfgWeapons" >> _currentOptic >> "ADFU_optic_alternate");

		if (isClass(configFile >> "cfgWeapons" >> _alt_Optic)) then
		{
			player removePrimaryWeaponItem _currentOptic;
			player addPrimaryWeaponItem _alt_Optic;
		};
	};
};

_handled;

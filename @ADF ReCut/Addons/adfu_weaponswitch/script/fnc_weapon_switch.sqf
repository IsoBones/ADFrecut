// Current Primary Weapon
private ["_currentWeapon", "_switchEnabled", "_alt_Weapon", "_alt_Magazine", "_handled"];
_handled = false;
_currentWeapon = currentWeapon player;

_switchEnabled = [(configFile >> "cfgWeapons" >> _currentWeapon),"ADFU_weapon_switch",0] call BIS_fnc_returnConfigEntry;

if (_switchEnabled == 1) then
{

	_alt_Weapon = getText (configFile >> "cfgWeapons" >> _currentWeapon >> "ADFU_weapon_alternate");
	_alt_Magazine = getText (configFile >> "cfgWeapons" >> _currentWeapon >> "ADFU_weapon_magazine");

	if (isClass(configFile >> "cfgWeapons" >> _alt_Weapon)) then
	{
		if (isClass(configFile >> "cfgMagazines" >> _alt_Magazine)) then {
			player addMagazine _alt_Magazine;
		};
		player addWeapon _alt_Weapon;
		player selectWeapon _alt_Weapon;
	};
};

_handled;

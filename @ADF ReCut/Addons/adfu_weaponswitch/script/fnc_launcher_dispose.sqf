/*
		ADF Uncut - Disposable Launcher Script
		Modified from INKO Disposable.

		Input = Array from Fired Event Handler

		_unit = player vehicle which fired the weapon
		_weapon = weapon which was fired by the player
		_handled = return value to say script was executed.
*/
private ["_unit", "_weapon", "_vehicle", "_tubeModel", "_handled"];

_unit = _this select 0;
_weapon = _this select 3;
_handled = false;

if (_unit == player) then
{
	if (_weapon == "ADFU_weapon_m72a6_ARMED") then
	{
		change_weapon = [_unit] spawn {
			_vehicle = _this select 0;
			_tubeModel = "ADFU_weapon_m72a6_USED";
			waitUntil {
				sleep 0.1;
				(true);
			};
			_vehicle addWeapon "ADFU_weapon_m72a6_USED";
			_vehicle selectWeapon "ADFU_weapon_m72a6_USED";
		};
		throw_weapon = [_unit] spawn
		{
			_vehicle = _this select 0;

			while {true} do
			{
				waitUntil {
							sleep 0.1;
							((currentWeapon _vehicle) != "ADFU_weapon_m72a6_USED");
				};
				_unitDirection = getDir _vehicle;
				_unitVelocity = velocity _vehicle;

				_selectionPosition = _vehicle selectionPosition "RightShoulder";
				_worldPosition = _vehicle modelToWorld _selectionPosition;

				_vehicle removeWeaponGlobal "ADFU_weapon_m72a6_USED";

				_tube = createVehicle ["weaponholdersimulated", _worldPosition, [], 0, "can_Collide"];
				_tube addWeaponCargoGlobal ["ADFU_weapon_m72a6_USED", 1];

				playSound3D ["ADFU_weapon_m72a6\sound\M72A6_LAW_DROP.ogg", _tube, false, (position _tube), 0.85,1,100];

				_tube setPos [(_worldPosition select 0) + ((cos _unitDirection) / 3), (_worldPosition select 1) - ((sin _unitDirection) / 3), _worldPosition select 2];
				_tube setDir ((_unitDirection) - 90);
				_tube setVelocity  [(_unitVelocity select 0) + (cos _unitDirection), (_unitVelocity select 1) - (sin _unitDirection), _unitVelocity select 2];
				if (true) exitWith {};
			};
		};
	};
};

_handled;

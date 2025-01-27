class CfgVehicles {

    //?
    //? Imports
    //?

	class Car_F;
	class MRAP_01_base_F : Car_F {
		class AnimationSources;
		class CargoTurret;
		class EventHandlers;
		class NewTurret;

        class Turrets {
			class MainTurret : NewTurret {
				class Components;
				class ViewGunner;
			};
		};

		class HitPoints {
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLF2Wheel;
			class HitLFWheel;
			class HitRF2Wheel;
			class HitRFWheel;
		};

		class ACE_SelfActions;
	};

    //?
    //? Protected
    //?

    class ADFRC_Bushmaster_Base_F : MRAP_01_base_F {
		attenuationEffectType                   = "CarAttenuation";
		author                                  = "ADF Re-Cut";
		crew                                    = "ADFRC_MD_AMCU_Soldier_Crewman";
		destrType                               = "DestructWreck";
		differentialType                        = "all_limited";
		driverAction                            = "adfrc_bushmaster_driver";
		driverInAction                          = "adfrc_bushmaster_driver";
		driverLeftHandAnimName                  = "driveWheel";
		driverOpticsModel                       = "";
		driverRightHandAnimName                 = "driveWheel";
		dustBackLeftPos                         = "wheel_1_2_bound";
		dustBackRightPos                        = "wheel_2_2_bound";
		dustFrontLeftPos                        = "wheel_1_1_bound";
		dustFrontRightPos                       = "wheel_2_1_bound";
		faction                                 = "ADFRC_F_GWOT";
		getInAction                             = "GetInLow";
		getOutAction                            = "GetOutLow";
		memoryPointDriverOptics                 = "driverview";
		memoryPointsGetInDriver                 = "pos_driver";
		memoryPointsGetInDriverDir              = "pos_driver_dir";
		memoryPointTrackBLL                     = "track_bll"; //! FIXME
		memoryPointTrackBLR                     = "track_blr"; //! FIXME
		memoryPointTrackBRL                     = "track_brl"; //! FIXME
		memoryPointTrackBRR                     = "track_brr"; //! FIXME
		memoryPointTrackFLL                     = "track_fll"; //! FIXME
		memoryPointTrackFLR                     = "track_flr"; //! FIXME
		memoryPointTrackFRL                     = "track_frl"; //! FIXME
		memoryPointTrackFRR                     = "track_frr"; //! FIXME
		picture                                 = "\adf_mrap\adfrc_bushmaster\data\ui\bushmaster_picture_ca.paa";
		simulation                              = "CarX";
		vehicleClass                            = "Car";

		accuracy                                = 0.25;
		antiRollbarForceCoef                    = 12;
		antiRollbarForceLimit                   = 10;
		antiRollbarSpeedMax                     = 50;
		antiRollbarSpeedMin                     = 20;
		armor                                   = 200;
		armorStructural                         = 4;
		brakeIdleSpeed                          = 1.78;
		centreBias                              = 1.3;
		clutchStrength                          = 20;
		crewCrashProtection                     = 0.15;
		crewExplosionProtection                 = 1;
		crewVulnerable                          = 0;
		damageResistance                        = 0.0062;
		dampersBumpCoef                         = 0.3;
		dampingRateFullThrottle                 = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		dampingRateZeroThrottleClutchEngaged    = 2;
		driverForceOptics                       = 0;
		enginePower                             = 224;
		forceHideDriver                         = 1;
		frontBias                               = 1.3;
		frontRearSplit                          = 0.5;
		fuelCapacity                            = 319;
		fuelExplosionPower                      = 5;
		hideProxyInCombat                       = 1;
		idleRpm                                 = 750;
		latency                                 = 1;
		maxOmega                                = 293.215066;
		maxSpeed                                = 130;
		peakTorque                              = 1166;
		rearBias                                = 1.3;
		redRpm                                  = 2400;
		scope                                   = 1;
		side                                    = 1;
		size                                    = 10;
		switchTime                              = 0.31;
		thrustDelay                             = 0.1;
		transportSoldier                        = 5;
		viewCargoShadow                         = 1;
		viewCargoShadowAmb                      = 1;
		viewCargoShadowDiff                     = 1;
		viewDriverInExternal                    = 1;
		viewGunnerInexternal                    = 1;
		wheelCircumference                      = 3.924;

		aggregateReflectors[]                   = { { "Left" }, { "Right" } };
		cargoGetOutAction[]                     = { "GetOutLow" };
		cargoProxyIndexes[]                     = { 4, 5, 6, 7, 8 };
		changeGearMinEffectivity[]              = { 0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95 };
		getInProxyOrder[]                       = { 4, 5, 6, 7, 8, 1, 2, 3 };
		magazines[]                             = { };
		threat[]                                = { 0.8, 0.6, 0.3 };
        cargoGetInAction[]                      = { "GetInLow" };
        cargoIsCoDriver[]                       = { 0, 0, 0, 0, 0 };
        weapons[]                               = { "TruckHorn2" };

        torqueCurve[]= {
			{ 0, 0 },
			{ 0.125, 0.5 },
			{ 0.25, 0.85 },
			{ 0.4, 0.9 },
			{ 0.5, 1 },
			{ 0.725, 0.95 },
			{ 0.85, 0.6 },
			{ 1, 0.3 }
		};

        hiddenSelections[] = {
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};

		hiddenSelectionsTextures[] = {
			"\adf_mrap\adfrc_bushmaster\data\textures\exterior\bmhull1_co.paa",
			"\adf_mrap\adfrc_bushmaster\data\textures\exterior\bmhull2_co.paa",
			"\adf_mrap\adfrc_bushmaster\data\textures\exterior\bmsusp_co.paa",
			"\adf_mrap\adfrc_bushmaster\data\textures\labels\labels_army_01.paa"
		};

		cargoAction[] = {
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};

		memoryPointsGetInCargo[] = {
			"pos_cargo",
			"pos_cargo",
			"pos_cargo",
			"pos_cargo",
			"pos_cargo",
			"pos_cargo",
			"pos_cargo",
			"pos_cargo"
		};

		memoryPointsGetInCargoDir[] = {
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir",
			"pos_cargo_dir"
		};

		slingLoadCargoMemoryPoints[] = {
			"slingload_point_1",
			"slingload_point_2",
			"slingload_point_3",
			"slingload_point_4"
		};

		class Exhausts {
			class Exhaust1 {
				direction = "exhaust2_dir";
				effect    = "ExhaustEffectTankSide";
				position  = "exhaust2_pos";
			};

			class AirCon_Vents {
				direction = "exhaust1_dir";
				effect    = "ADFRC_ExhaustEffect_BushmasterRefract";
				position  = "exhaust1_pos";
			};
		};

		class EventHandlers : EventHandlers {
			init = "if (local (_this select 0)) then { [(_this select 0), '', [], false] call bis_fnc_initVehicle; };";
		};

        class Reflectors {
			class Left {
				direction    = "light_car_head_l_1_end";
				hitpoint     = "light_l";
				position     = "light_car_head_l_1";
				selection    = "light_l";

				coneFadeCoef = 10;
				dayLight     = 0;
				flareSize    = 1;
				innerAngle   = 100;
				intensity    = 1;
				outerAngle   = 179;
				size         = 1;
				useFlare     = 0;

				ambient[]    = { 5, 5, 5 };
                color[]      = { 1900, 1800, 1700 };

				class Attenuation {
					constant       = 0;
					hardLimitEnd   = 60;
					hardLimitStart = 30;
					linear         = 0;
					quadratic      = 0.25;
					start          = 1;
				};
			};

			class Right : Left {
				direction = "light_car_head_r_1_end";
				hitpoint  = "light_r";
				position  = "light_car_head_r_1";
				selection = "light_r";
			};

			class Rear : Left {
				direction    = "";
				hitpoint     = "";
				position     = "";
				selection    = "light_rear";

				coneFadeCoef = 0;
				dayLight     = 0;
				flareSize    = 0;
				innerAngle   = 0;
				intensity    = 0;
				outerAngle   = 0;
				size         = 0;
				useFlare     = 0;

				ambient[]    = { 0, 0, 0 };
				color[]      = { 0, 0, 0 };

				class Attenuation {
					constant       = 0;
					hardLimitEnd   = 0;
					hardLimitStart = 0;
					linear         = 0;
					quadratic      = 0;
					start          = 0;
				};
			};
		};

        class UserActions {
			class WireCuttersExtend {
				condition     = "(this animationPhase 'deploy_wire_cutters') <= 0.5 && (alive this) && (player in [driver this])";
				displayName   = "Extend Wire Cutters";
				position      = "Center_Point";
				statement     = "this animate ['deploy_wire_cutters', 1];";

				onlyForPlayer = 0;
				priority      = 0;
				radius        = 20;
				showWindow    = 0;
				userActionID  = 50;
			};

			class WireCuttersRetract : WireCuttersExtend {
				condition    = "(this animationPhase 'deploy_wire_cutters') > 0.5 && (alive this) && (player in [driver this])";
				displayName  = "Retract Wire Cutters";
				statement    = "this animate ['deploy_wire_cutters', 0];";

				userActionID = 51;
			};
		};

        class RenderTargets {
			class DriverCamera {
				renderTarget = "rendertarget0";

				class CameraView1 {
					pointDirection   = "pip_1_dir";
					pointPosition    = "pip_1_pos";

					fov              = 0.7;
					renderQuality    = 2;
					renderVisionMode = 4;
				};
			};

			class RemoteWeaponCamera {
				renderTarget = "rendertarget1";

				class CameraView1 {
					pointDirection   = "gun_camera_dir";
					pointPosition    = "gun_camera";

					fov              = 0.7;
					renderQuality    = 2;
					renderVisionMode = 0;
				};
			};
		};

        class Wheels {
			class LF {
				boneName                            = "wheel_1_1";
				boundary                            = "wheel_1_1_bound";
				center                              = "wheel_1_1_axis";
				side                                = "left";
				suspForceAppPointOffset             = "wheel_1_1_axis";
				tireForceAppPointOffset             = "wheel_1_1_axis";

				dampingRate                         = 0.1;
				dampingRateDamaged                  = 1;
				dampingRateDestroyed                = 1000;
				latStiffX                           = 25;
				latStiffY                           = 180;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass                                = 150;
				maxBrakeTorque                      = 15000;
				maxCompression                      = 0.15;
				maxHandBrakeTorque                  = 0;
				maxDroop                            = 0.15;
				MOI                                 = 40;
				springDamperRate                    = 11073.3;
				springStrength                      = 830497.5;
				sprungMass                          = 2768.325;
				steering                            = 1;
				width                               = 0.2;

				frictionVsSlipGraph[]               = { { 0, 1 }, { 0.5, 1 }, { 1, 1 } };
				suspTravelDirection[]               = { 0, -1, 0 };
			};

			class LR : LF {
				boneName                = "wheel_1_2";
				boundary                = "wheel_1_2_bound";
				center                  = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";

				maxHandBrakeTorque      = 30000;
				steering                = 0;
			};

			class RF : LF {
				boneName                = "wheel_2_1";
				boundary                = "wheel_2_1_bound";
				center                  = "wheel_2_1_axis";
				side                    = "right";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";

				steering                = 1;
			};

			class RR : RF {
				boneName                = "wheel_2_2";
				boundary                = "wheel_2_2_bound";
				center                  = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";

				maxHandBrakeTorque      = 30000;
				steering                = 0;
			};
		};

        class complexGearbox {
			driveString                = "D";
			gearBoxMode                = "auto";
			neutralString              = "N";
			reverseString              = "R";

			moveOffGear                = 1;

            GearboxRatios[] = {
				"R1", -4.84,
				"N",  0,
				"D1", 2.43,
				"D2", 2.01,
				"D3", 1.42,
				"D4", 1,
				"D5", 0.83,
				"D6", 0.59
			};

			TransmissionRatios[] = {
				"High", 5.539
			};
		};

        class HitPoints : HitPoints {
			class HitLFWheel : HitLFWheel {
				name               = "wheel_1_1_steering";

				armor              = -250;
				explosionShielding = 1;
				passThrough        = 0;
				radius             = 0.25;
			};

			class HitLF2Wheel : HitLF2Wheel {
				name               = "wheel_1_2_steering";

				armor              = -250;
				explosionShielding = 1;
				radius             = 0.25;
			};

			class HitRFWheel : HitRFWheel {
				name               = "wheel_2_1_steering";

				armor              = -250;
				explosionShielding = 1;
				radius             = 0.25;
			};

			class HitRF2Wheel : HitRF2Wheel {
				name               = "wheel_2_2_steering";

				armor              = -250;
				explosionShielding = 1;
				radius             = 0.25;
			};

			class HitFuel : HitLFWheel {
				name               = "fuel";
				visual             = "";

				armor              = -250;
				explosionShielding = 0.2;
				passThrough        = 0;
				radius             = 0.1;
			};

			class HitEngine : HitFuel {
				name   = "motor";

				armor  = 0.8;
				radius = 0.15;
			};

			class HitBody : HitFuel {
				name   = "body";

				armor  = 1;
				radius = 0.25;
			};
		};

        #include <TextureSources.hpp>
        #include <AnimationSources.hpp>
        #include <Sounds.hpp>

		//?
		//? Task Force Radio Compat
		//?

		tf_RadioType              = "TFAR_rt1523g_big";

		tf_hasLRradio             = 1;
		tf_isolatedAmount         = 0.2;
		tfar_hasIntercom          = 1;

		tfar_additionalLR_cargo[] = { 0, 1 };

		class ACE_SelfActions : ACE_SelfActions {
			class TFAR_IntercomChannel {
				condition   = "true";
				displayName = "$STR_TFAR_Core_Intercom_ACESelfAction_Name";
				icon        = "";
				statement   = "";

				class TFAR_IntercomChannel_disabled {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != -1";
					displayName = "Disabled";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};

				class TFAR_IntercomChannel_1 {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 0";
					displayName = "$STR_TFAR_Core_Intercom_ACESelfAction_Channel1";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};

				class TFAR_IntercomChannel_2 {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 1";
					displayName = "$STR_TFAR_Core_Intercom_ACESelfAction_Channel2";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};

				class TFAR_IntercomChannel_Misc_1 {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 2";
					displayName = "Misc channel 1";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};

				class TFAR_IntercomChannel_Misc_2 {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 3";
					displayName = "Misc channel 2";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
				};

				class TFAR_IntercomChannel_Misc_3 {
					condition   = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 4";
					displayName = "Misc channel 3";
					statement   = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
				};
			};
		};
    };

    //?
    //? Public
    //?

    class ADFRC_F_GWOT_Bushmaster_Unarmed_F : ADFRC_Bushmaster_Base_F {
		displayName   = "Bushmaster";
		editorPreview = "\adf_mrap\adfrc_bushmaster\data\previews\adfrc_bushmaster_unarmed_f.jpg";
		icon          = "\adf_mrap\adfrc_bushmaster\data\ui\bushmaster_map_unarmed.paa";
		model         = "\adf_mrap\adfrc_bushmaster\adfrc_bushmaster_unarmed.p3d";

		scopeCurator  = 2;
        scope         = 2;

		animationList[] = {
			"show_ecm", 0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1,
			"show_cover", 0.5,
			"show_spare", 1
		};

		textureList[] = {
			"adf_001", 1,
			"adf_002", 1,
			"adf_003", 1,
			"adf_004", 1,
			"adf_005", 1,
			"adf_006", 1,
			"adf_007", 1,
			"adf_008", 1,
			"adf_009", 1,
			"adf_010", 1
		};

		class Turrets : Turrets {
			class Turret_01 : CargoTurret {
				animationSourceHatch       = "HatchGunner";
				gunnerCompartments         = "Compartment1";
				gunnerGetInAction          = "GetInLow";
				gunnerGetOutAction         = "GetOutLow";
				gunnerInAction             = "adfrc_bushmaster_ffv_front";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
                gunnerAction               = "vehicle_turnout_1";
                gunnerName                 = "Front Cover";
                memoryPointsGetInGunner    = "pos_gunner";

				commanding                 = 1;
				gunnerForceOptics          = 0;
				gunnerOutForceOptics       = 0;
				initTurn                   = 0;
				isPersonTurret             = 1;
				LODTurnedOut               = 1;
				maxElev                    = 45;
				maxTurn                    = 75;
				minElev                    = -45;
				minTurn                    = -75;
				preciseGetInOut            = 0;
				proxyIndex                 = 1;
			};

			class Turret_02 : Turret_01 {
				animationSourceHatch       = "HatchGunnerRearLeft";
				gunnerInAction             = "adfrc_bushmaster_ffv_rearleft";
				gunnerName                 = "Left Rear Cover";
				memoryPointsGetInGunner    = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";

				commanding                 = 2;
                proxyIndex                 = 2;
			};

			class Turret_03 : Turret_01 {
				animationSourceHatch       = "HatchGunnerRearRight";
				gunnerInAction             = "adfrc_bushmaster_ffv_rearright";
				memoryPointsGetInGunner    = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
                gunnerName                 = "Right Rear Cover";

				commanding                 = 3;
				proxyIndex                 = 3;
			};
		};
	};

	class ADFRC_F_GWOT_Bushmaster_RWS_M2_F : ADFRC_Bushmaster_Base_F {
		displayName   = "Bushmaster (RWS M2)";
		editorPreview = "\adf_mrap\adfrc_bushmaster\data\previews\adfrc_bushmaster_unarmed_f.jpg";
		icon          = "\adf_mrap\adfrc_bushmaster\data\ui\bushmaster_map_unarmed.paa";
		model         = "\adf_mrap\adfrc_bushmaster\adfrc_bushmaster_rws_m2.p3d";

		scopeCurator  = 2;
        scope         = 2;

		animationList[] = {
			"show_ecm", 0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1,
			"show_cover", 0.5,
			"show_spare", 1
		};

		textureList[] = {
			"adf_001", 1,
			"adf_002", 1,
			"adf_003", 1,
			"adf_004", 1,
			"adf_005", 1,
			"adf_006", 1,
			"adf_007", 1,
			"adf_008", 1,
			"adf_009", 1,
			"adf_010", 1
		};

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				animationSourceStickX     = "joystick_gunner_x";
				animationSourceStickY     = "joystick_gunner_y";
				body                      = "mainTurret";
				gun                       = "mainGun";
				gunBeg                    = "m2_muzzle";
				gunEnd                    = "m2_chamber";
				gunnerDoor                = "";
				gunnerInAction            = "adfrc_bushmaster_gunner";
				gunnerLeftHandAnimName    = "";
				gunnerOpticsModel         = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerRightHandAnimName   = "joystick_gunner";
				memoryPointGunnerOptics   = "gunnerviewout";
				turretInfoType            = "RscOptics_crows";

				castGunnerShadow          = 1;
				discreteDistanceInitIndex = 2;
				forceHideGunner           = 1;
				gunnerForceOptics         = 0;
				initElev                  = 0;
				maxElev                   = 60;
				minElev                   = -25;
				proxyIndex                = 1;
				stabilizedInAxes          = 3;
				usePip                    = 1;
				viewGunnerInExternal      = 1;

				discreteDistance[]        = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000 };
				magazines[]               = { "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag", "200Rnd_127x99_mag" };
				soundServo[]              = { "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01", 0.17782794, 1, 10 };
				soundServoVertical[]      = { "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01", 0.17782794, 1, 10 };
				weapons[]                 = { "HMG_127" };

				class ViewOptics : RCWSOptics { };

				class ViewGunner : ViewGunner {
					initAngleX = -5;
					initFov    = 0.9;
					maxFov     = 1.25;
					minFov     = 0.25;
				};

				class HitPoints : HitPoints {
					class HitTurret {
						armorComponent     = "hit_main_turret";
						name               = "hit_main_turret_point";
						visual             = "otocvez";

						armor              = -250;
						explosionShielding = 0.4;
						isTurret           = 1;
						material           = -1;
						minimalHit         = 0.03;
						passThrough        = 0;
						radius             = 0.25;
					};

					class HitGun {
						armorComponent     = "hit_main_gun";
						name               = "hit_main_gun_point";
						visual             = "otochlaven";

						armor              = -250;
						explosionShielding = 0.2;
						isGun              = 1;
						material           = -1;
						minimalHit         = 0.03;
						passThrough        = 0;
						radius             = 0.2;
					};
				};
			};

			class Turret_01 : CargoTurret {
				animationSourceHatch       = "HatchGunnerRearLeft";
				gunnerCompartments         = "Compartment1";
				gunnerGetInAction          = "GetInLow";
				gunnerGetOutAction         = "GetOutLow";
				gunnerInAction             = "adfrc_bushmaster_ffv_rearleft";
				gunnerName                 = "Left Rear Cover";
				memoryPointsGetInGunner    = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
                gunnerAction               = "vehicle_turnout_1";

				commanding                 = 1;
				gunnerForceOptics          = 0;
				gunnerOutForceOptics       = 0;
				initTurn                   = 0;
				isPersonTurret             = 1;
				LODTurnedOut               = 1;
				maxElev                    = 45;
				maxTurn                    = 75;
				minElev                    = -45;
				minTurn                    = -75;
				preciseGetInOut            = 0;
                proxyIndex                 = 2;
			};

			class Turret_02 : Turret_01 {
				animationSourceHatch       = "HatchGunnerRearRight";
				gunnerInAction             = "adfrc_bushmaster_ffv_rearright";
				memoryPointsGetInGunner    = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
                gunnerName                 = "Right Rear Cover";

				commanding                 = 2;
				proxyIndex                 = 3;
			};
		};
	};
};
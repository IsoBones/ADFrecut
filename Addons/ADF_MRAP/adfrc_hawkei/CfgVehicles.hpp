class CfgVehicles {

    //?
    //? Imports
    //?

    class LandVehicle;
	class Car : LandVehicle {
		class NewTurret;
	};

	class Car_F : Car {
		class AnimationSources;
		class ViewCargo;
        class CargoTurret;
        class EventHandlers;

		class Turrets {
			class MainTurret : NewTurret {
				class Components;
				class ViewGunner;
			};
		};

		class HitPoints {
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitLF2Wheel;
			class HitLFWheel;
			class HitRF2Wheel;
			class HitRFWheel;
		};
	};

	class MRAP_01_base_F     : Car_F { };

    //?
    //? Protected
    //?

    class ADFRC_Hawkei_Base_F : MRAP_01_base_F {
		author                                  = "ADF Re-Cut";
		crew                                    = "ADFRC_MD_AMCU_Soldier_Crewman";
		destrType                               = "DestructWreck";
		differentialType                        = "all_limited";
		dustBackLeftPos                         = "wheel_1_2_bound";
		dustBackRightPos                        = "wheel_2_2_bound";
		dustFrontLeftPos                        = "wheel_1_1_bound";
		dustFrontRightPos                       = "wheel_2_1_bound";
		driverInAction                          = "driver_mrap_01";
		faction                                 = "ADFRC_F_MD";
		getInAction                             = "GetInLow";
		getOutAction                            = "GetOutLow";
		memoryPointDriverOptics                 = "driverview";
		memoryPointsGetInDriver                 = "pos_driver";
		memoryPointsGetInDriverDir              = "pos_driver_dir";
		memoryPointTrackBLL                     = "track_bll";
		memoryPointTrackBLR                     = "track_blr";
		memoryPointTrackBRL                     = "track_brl";
		memoryPointTrackBRR                     = "track_brr";
		memoryPointTrackFLL                     = "track_fll";
		memoryPointTrackFLR                     = "track_flr";
		memoryPointTrackFRL                     = "track_frl";
		memoryPointTrackFRR                     = "track_frr";
		picture                                 = "";
		simulation                              = "CarX";
		vehicleClass                            = "Car";

		accuracy                                = 0.25;
		armor                                   = 225;
		armorStructural                         = 5;
		crewCrashProtection                     = 1.35;
		crewExplosionProtection                 = 1;
		crewVulnerable                          = 0;
		damageResistance                        = 0.0062;
		dampersBumpCoef                         = 0.3;
		driverForceOptics                       = 0;
		forceHideDriver                         = 1;
		fuelCapacity                            = 26;
		fuelExplosionPower                      = 5;
		hideProxyInCombat                       = 1;
		maxSpeed                                = 115;
		scope                                   = 1;
		side                                    = 1;
		size                                    = 10;
		transportSoldier                        = 3;
		viewCargoShadow                         = 1;
		viewCargoShadowAmb                      = 1;
		viewCargoShadowDiff                     = 1;
		viewDriverInExternal                    = 1;
		viewGunnerInexternal                    = 1;
		wheelCircumference                      = 3.924;

		aggregateReflectors[]                   = { { "Left" }, { "Right" } };
		cargoGetOutAction[]                     = { "GetOutMRAP_01" };
		// cargoProxyIndexes[]                     = { 4, 5, 6, 7, 8 };
		changeGearMinEffectivity[]              = { 0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95 };
		extCameraPosition[]                     = { 0, 1, -10 };
		// getInProxyOrder[]                       = { 4, 5, 6, 7, 8, 1, 2, 3 };
		magazines[]                             = { };
		threat[]                                = { 0.8, 0.6, 0.3 };
        cargoGetInAction[]                      = { "GetInMRAP_01_cargo" };
        // cargoIsCoDriver[]                       = { 0, 0, 0, 0, 0 };
        weapons[]                               = { "TruckHorn2" };

        torqueCurve[] = {
			{ 0, 0.9 },
			{ 0.2, 1 },
			{ 0.33, 1 },
			{ 0.5, 1 },
			{ 0.75, 0.9 },
			{ 1, 0.8 }
		};

        hiddenSelections[] = {
			"Camo1",
			"Camo2",
			"Camo3"
		};

		cargoAction[] = {
			"passenger_MRAP_01_front",
			"passenger_MRAP_01_back",
			"passenger_generic01_foldhands"
		};

		slingLoadCargoMemoryPoints[] = {
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};

		class Exhausts {
			class Exhaust1 {
				direction = "exhaust_dir";
				effect    = "ExhaustEffectHTruck";
				position  = "exhaust_pos";
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
				maxBrakeTorque                      = 20000;
				maxCompression                      = 0.2;
				maxHandBrakeTorque                  = 11250;
				maxDroop                            = 0.2;
				MOI                                 = 40;
				springDamperRate                    = 20600;
				springStrength                      = 389843;
				sprungMass                          = 2495;
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

				maxHandBrakeTorque      = 275000;
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

				maxHandBrakeTorque      = 275000;
				steering                = 0;
			};
		};

        class complexGearbox {
			driveString          = "D";
			gearBoxMode          = "auto";
			neutralString        = "N";
			reverseString        = "R";

			moveOffGear          = 1;

            GearboxRatios[] = {
				"R1", -3.50,
				"N",  0,
				"D1", 4.71,
				"D2", 3.14,
				"D3", 2.11,
				"D4", 1.67,
				"D5", 1.29,
				"D6", 1.00,
				"D7", 0.84,
				"D8", 0.67
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

        class Damage {
			tex[] = { };

			mat[] = {
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_adds_destruct.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_base_destruct.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int_damage.rvmat",
				"A3\soft_f\MRAP_01\Data\MRAP_01_int_destruct.rvmat",
				"A3\Data_F\Glass_veh.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_int.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat",
				"A3\Data_F\Glass_veh_armored_damage.rvmat"
			};
		};

        // #include <TextureSources.hpp>
        // #include <AnimationSources.hpp>
        // #include <Sounds.hpp>

		// tf_RadioType  =  "TFAR_rt1523g_big";
		// tf_hasLRradio  =  1;  // 1  =  true, 0  =  false
		// tf_isolatedAmount  =  0.2;
		// tfar_additionalLR_cargo[]  =  {0, 1};
		// tfar_hasIntercom  =  1;
		// class ACE_SelfActions : ACE_SelfActions {
		// 	class TFAR_IntercomChannel {
		// 		displayName  =  "Intercom";
		// 		condition  =  "true";
		// 		statement  =  "";
		// 		icon  =  "";
		// 		class TFAR_IntercomChannel_disabled {
		// 			displayName  =  "Disable";
		// 			condition  =  "((vehicle ACE_Player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0]) ! =  -1";
		// 			statement  =  "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -1, true];";
		// 		};
		// 		class TFAR_IntercomChannel_1 {
		// 			displayName  =  "Crew";
		// 			condition  =  "((vehicle ACE_Player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0]) ! =  0";
		// 			statement  =  "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], 0, true];";
		// 		};
		// 	};
		// };
    };

    //?
    //? Public
    //?

    class ADFRC_Hawkei_Unarmed_F : ADFRC_Hawkei_Base_F {
		displayName   = "Hawkei";
		editorPreview = "";
		icon          = "";
		model         = "\adf_mrap\adfrc_hawkei\adfrc_hawkei_4dr.p3d";

		scopeCurator  = 2;
        scope         = 2;

		animationList[] = { };

		textureList[] = { };

		class Turrets { };
	};
};
/* Header */
class CfgPatches
{
	class adfrc_apache
	{
		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"ADF_Core"
		};
		requiredVersion = 0.1;
		units[] =
        {
			"adfrc_apache"
        };
		weapons[] = {/* Automated */};
	};
};

/* Definitions & Inheritance */
#include "\ADF_Core\basicDefines_A3.hpp"
#include "\ADF_Core\sensors.hpp"

/* Configuration */
class CfgVehicles
{
    /* Inheritance Tree */
    #include "cfgHelis.hpp"

    /* Bases */
	class Heli_Attack_03_base_F: Helicopter_Base_F
    {
        author = "AveryTheKitty | Adapted by ADFRC";
		mapSize = 15.5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_air_gunship_s};
				speechPlural[] = {veh_air_gunship_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_air_gunship_s;
		textPlural = $STR_A3_nameSound_veh_air_gunship_p;
		nameSound = veh_air_gunship_s;
		scope = private;
		displayName = "AH-64D Apache Guardian";
		model = "\ADF_Air\adfrc_apache\Heli_Attack_03_F.p3d";
		icon = "\ADF_Air\adfrc_apache\data\ui\Map_Heli_Attack_03_CA.paa";
		picture = "\ADF_Air\adfrc_apache\data\ui\Heli_Attack_03_CA.paa";
		vehicleClass = Air;
		editorSubcategory = EdSubcat_Helicopters;
		accuracy = 0.5;
		cost = 3000000;
		threat[] =
        {
            0.8,    // Soft
            1.0,    // Armor
            0.8     // Air
        };
        availableForSupportTypes[] = {CAS_Heli};
        class Library
        {
            libTextDesc = $STR_A3_A_CfgVehicles_Heli_Attack_03_base_F_Library0;
        };
        
        /* RTD */
        class RotorLibHelicopterProperties
		{
			RTDconfig = "ADF_Air\adfrc_apache\RTD_Heli_Attack_03.xml";
			defaultCollective = 0.621;
			autoHoverCorrection[] =
			{
				0,      // X
				2.88,   // Y
				0       // Z
			};
			retreatBladeStallWarningSpeed = 79.536;
			maxTorque = 3500;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 100000;
			maxHorizontalStabilizerRightStress = 100000;
			maxVerticalStabilizerStress = 100000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 180000;
			maxTailRotorStress = 35000;
		};

        /* Handling */
		fuelCapacity = 1420;
		fuelConsumptionRate = 0.0366;
        altFullForce = 3000;
		altNoForce = 6000;
		maxSpeed = 293;
		mainBladeCenter = rotor_center;
		mainBladeRadius = 7.315;
		tailBladeCenter = rotor_02_center;
		tailBladeRadius = 1.395;
		liftForceCoef = 1.0;
		bodyFrictionCoef = 1.1;
		cyclicAsideForceCoef = 1.2;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		mainRotorSpeed = 1;
		backRotorSpeed = 3;
        maxFordingDepth = 0.6;
		numberPhysicalWheels = 3;

        /* Crew */
		crewVulnerable = false;
		castDriverShadow = true;
		viewCargoShadow = true;
		driverAction = Heli_Attack_03_pilot;
		driverInAction = Heli_Attack_03_pilot;
		driverCanEject = false;
        driverLeftHandAnimName = lever_pilot;
        driverRightHandAnimName = stick_pilot;
        driverLeftLegAnimName = "";
        driverRightLegAnimName = "";

        /* Enter & Exit Animations */
		preciseGetInOut = false;
		getInRadius = 1.5;
		getinAction = GetInHigh;
		getoutaction = GetOutHigh;

        /* View */
		class ViewPilot: ViewPilot
		{
			initAngleX = -4;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};

        /* Damage */
		armor = 100; 
		damageResistance = 0.002; 
		destrType = DestructWreck;

		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 999;  
				visual = "zbytek";
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel: HitFuel {
				armor = 5;  
				radius = 0.25;
				minimalHit = 0.2; 
			};
			class HitAvionics: HitAvionics {
				armor = 8;  
				radius = 0.3;
				minimalHit = 0.1;  
				visual = "elektronika";
			};
			class HitMissiles: HitMissiles {
				armor = 2;  
				radius = 0.15;
				minimalHit = 0.1;
			};
			class HitEngine1 {
				armor = 15; 
				radius = 0.3;
				name = "engine_1_hit";
				explosionShielding = 5; 
				minimalHit = 0.2;
				visual = "motor";
				passThrough = 0.5;
				convexComponent = "engine_1_hit";
				material = 51;
			};
			class HitEngine2: HitEngine1 {
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitHRotor: HitHRotor {
				armor = 10;  
				radius = 0.3;
				minimalHit = 0.2;
				explosionShielding = 5;
			};
			class HitVRotor: HitVRotor {
				armor = 8;  
				radius = 0.2;
				minimalHit = 0.2;
				explosionShielding = 5;
			};
			class HitGlass1: HitGlass1 {
				name = "glass1";
				visual = "glass1";
				armor = 3;  
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
				passThrough = false;
			};
			class HitGlass2: HitGlass1 {
				name = "glass2";
				visual = "glass2";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass3: HitGlass1 {
				name = "glass3";
				visual = "glass3";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass4: HitGlass1 {
				name = "glass4";
				visual = "glass4";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass5: HitGlass1 {
				name = "glass5";
				visual = "glass5";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass6: HitGlass1 {
				name = "glass6";
				visual = "glass6";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass7: HitGlass1 {
				name = "glass7";
				visual = "glass7";
				armor = 3;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitWinch: HitWinch {
				class DestructionEffects{};
			};
		};
        class Damage
		{
			tex[] = {};
			mat[] =
            {
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_body.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_damage.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_destruct.rvmat",

                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_details.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_damage.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_destruct.rvmat",

                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_damage.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_destruct.rvmat",

                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass_damage.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass_damage.rvmat",

                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass_in.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass_in_damage.rvmat",
                "ADF_Air\adfrc_apache\Data\Heli_Attack_03_glass_in_damage.rvmat",

                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_damage.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_destruct.rvmat"
            };
		};

        /* Sensors & Components */
		lockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Radar_Missiles + CM_All_Missiles;
		laserScanner = true;
		showAllTargets = 2;
		radarTargetSize = 1.1;
		irTargetSize = 1.2;
		canLock = 1;
		class Components : Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 0;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 0;
                            maxRange = 3000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 70;
                        animDirection = "mainGun";
                        angleRangeHorizontal = 34;
                        angleRangeVertical = 34;
                        aimDown = 27;
                    };
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 0;
                            maxRange = 3000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 0;
                            maxRange = 3000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 70;
                        animDirection = "mainGun";
                        angleRangeHorizontal = 34;
                        angleRangeVertical = 34;
                        aimDown = 27;
                    };
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 0;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 0;
                            maxRange = 6000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 125;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 90;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class LaserSensorComponent: SensorTemplateLaser {};
                    class NVSensorComponent: SensorTemplateNV {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components : components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoAirborneMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehiclePrimaryGunnerDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "PrimaryGunner";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components : components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoAirborneMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class VehiclePrimaryGunnerDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "PrimaryGunner";
                    };
                    class VehicleMissileDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "Missile";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 16000, 8000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class TransportPylonsComponent {
                uiPicture = "\ADF_Air\adfrc_apache\data\ui\Heli_Attack_03_EDEN_CA.paa";
                class Pylons {
                    class PylonLeft1 {
                        attachment = "PylonMissile_1Rnd_LG_scalpel";
                        priority = 5;
                        hardpoints[] = {"B_ASRAAM", "UNI_SCALPEL"};
                        turret[] = {};
                        UIposition[] = {0.06, 0.4}; // X, Y
                    };
                    class PylonLeft2: PylonLeft1 {
                        attachment = "PylonRack_12Rnd_missiles";
                        priority = 4;
                        hardpoints[] = {"DAR", "UNI_SCALPEL", "gatling_30mm_base", "B_ASRRAM_EJECTOR"};
						turret[] = {};
                        UIposition[] = {0.08, 0.35}; // X, Y
                    };
                    class PylonLeft3: PylonLeft1 {
                        attachment = "PylonRack_4Rnd_LG_scalpel";
                        priority = 3;
                        hardpoints[] = {"DAR", "UNI_SCALPEL", "gatling_30mm_base", "B_ASRRAM_EJECTOR"};
						turret[] = {0};
                        UIposition[] = {0.1, 0.3}; // X, Y
                    };
                    class PylonRight3: PylonLeft3 {
                        mirroredMissilePos = 3;
                        UIposition[] = {0.59, 0.3}; // X, Y
                    };
                    class PylonRight2: PylonLeft2 {
                        mirroredMissilePos = 2;
						UIposition[] = {0.62, 0.35}; // X, Y
                    };
                    class PylonRight1: PylonLeft1 {
                        mirroredMissilePos = 1;
                        UIposition[] = {0.64, 0.4}; // X, Y
                    };
                };
                class Presets {
                    class Empty {
                        displayName = "$STR_empty";
                        attachment[] = {};
                    };
                    class Default {
                        displayName = "$STR_vehicle_default";
                        attachment[] = {"PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_missiles", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_LG_scalpel"};
                    };
                    class CAS {
                        displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
                        attachment[] = {"PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_missiles", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_AAA_missiles"};
                    };
                    class AT {
                        displayName = "$STR_A3_cfgmagazines_titan_at_dns";
                        attachment[] = {"PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_missiles", "PylonRack_12Rnd_missiles", "PylonRack_12Rnd_missiles", "PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_LG_scalpel"};
                    };
                };
			};
		};

        /* Pilot Camera */
		driverWeaponsInfoType = RscOptics_Heli_Attack_01_pilot;
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					directionStabilized = true;
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = (30 / 120);
					minFov = (30 / 120);
					maxFov = (30 / 120);
					visionMode[] =
                    {
                        Normal,
                        NVG,
                        Ti
                    };
					thermalMode[] =
                    {
                        TiWHot,
                        TiBHot
                    };
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = (6 / 120);
					minFov = (6 / 120);
					maxFov = (6 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (2 / 120);
					minFov = (2 / 120);
					maxFov = (2 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn = -110;
			maxTurn = 110;
			initTurn = 0;
			minElev = -15;
			maxElev = 60;
			initElev = 5;
			maxXRotSpeed = 1.0;
			maxYRotSpeed = 1.0;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
        
        /* MFD */
		defaultUserMFDvalues[] =
        {
            0.0,    // R
            1.0,    // B
            0.3,    // G
            1       // A
        };
        #include "mfd_driver.hpp"

        /* Weapons & Ammunition */
		weapons[] = {"CMFlareLauncher", "missiles_SCALPEL", "missiles_DAR"};
		magazines[] = {"192Rnd_CMFlare_Chaff_Magazine", "PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_missiles"};

        /* Turrets */
		enableManualFire = true;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = RscOptics_Heli_Attack_01_gunner;
				commanding = -1;
				isCopilot = true;
				CanEject = false;
				startEngine = false;
				primaryGunner = true;

				/* Servos */
				minElev = -60;
				maxElev = 10;
				initElev = 0;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
				stabilizedInAxes = "StabilizedInAxesBoth";
				canLock = 1;

				/* Sounds */
				soundServo[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", db-5, 1, 30};
				soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", db-5, 1, 30};
				soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", db+10, 1};
				soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", db+10, 1};
				soundEngine[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", db-5, 1, 30};

				/* Optics */
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\optics_empty.p3d";
				gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
				gunnerForceOptics = false;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						directionStabilized = true;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -60;
						maxAngleX = 15;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "MFOV";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						initAngleX = 0;
						initAngleY = 0;
						visionMode[] = {"Normal", "NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};

				/* Sensors & Components */
				showAllTargets = 2;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components: components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};

				/* MFD */
				#include "mfd_gunner.hpp"

				/* Weapons & Ammunition */
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"ADFRC_Chaingun_30mm", "Laserdesignator_mounted"};
				magazines[] = {"ADFRC_1200Rnd_Chaingun_30mm", "Laserbatteries"};

				/* FCS */
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2500};
				discreteDistanceInitIndex = 5;

				/* Crew */
				castGunnerShadow = true;
				viewGunnerShadow = true;
				outGunnerMayFire = true;
				gunnerAction = "Heli_Attack_03_Gunner";
				gunnerInAction = "Heli_Attack_03_Gunner";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";

				/* Enter & Exit Animations */
				preciseGetInOut = false;
				getInRadius = 1.5;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";

				/* Damage */
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret_hit";
						visual = "main_trav";
						passThrough = 0.3;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "main_gun_hit";
						visual = "main_elev";
						passThrough = 0.3;
						radius = 0.2;
					};
				};

				/* Selections & Memory Points */
				selectionFireAnim = "zasleh";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "machinegun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
			};
		};

        /* Liveries */
		class TextureSources
		{
			/*
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = "AveryTheKitty";
				textures[] =
				{
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_grey_CO.paa",
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_grey_CO.paa",
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_grey_CO.paa"
				};
				factions[] = {};
			}; */
			class Indep
			{
				displayName = $STR_A3_TextureSources_Indep0;
				author = "AveryTheKitty";
				textures[] =
				{
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_INDP_CO.paa",
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_INDP_CO.paa",
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_INDP_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = "Australian Army";
				author = "ADFRC | Bones";
				textures[] =
				{
                    "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_CO.paa",
					"\ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_CO.paa",
					"\ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_CO.paa"
				};
				factions[] = {};
			};
        };

        /* Textures */
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
        {
            "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_CO.paa",
            "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_CO.paa",
            "\ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_CO.paa"
        };

        /* Lights */
        class MarkerLights
        {
            class PositionLight_red_1
            {
				color[] =
				{
					0.8,    // R
					0.0,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.08,   // R
					0.0,    // G
					0.0     // B
				};
				intensity = 75;
				name = PositionLight_red_1_pos;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = false;
				blinking = false;
				dayLight = false;
				useFlare = true;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
            };
			class PositionLight_green_1: PositionLight_red_1
			{
				color[] =
				{
					0.0,    // R
					0.8,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.0,    // R
					0.08,   // G
					0.0     // B
				};
				name = PositionLight_green_1_pos;
			};
			class PositionLight_white_1: PositionLight_red_1
			{
				color[] =
				{
					1.0,    // R
					1.0,    // G
					1.0     // B
				};
				ambient[] =
				{
					0.1,    // R
					0.1,    // G
					0.1     // B
				};
				name = PositionLight_white_1_pos;
			};
			class CollisionLight_white_1: PositionLight_red_1
			{
				color[] =
				{
					1.0,    // R
					1.0,    // G
					1.0     // B
				};
				ambient[] =
				{
					0.1,    // R
					0.1,    // G
					0.1     // B
				};
				name = CollisionLight_white_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = true;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
			};
			class CollisionLight_red_1: CollisionLight_white_1
			{
				color[] =
				{
					0.8,    // R
					0.0,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.08,   // R
					0.0,    // G
					0.0     // B
				};
				name = CollisionLight_red_1_pos;
			};
        };
        class Reflectors
        {
            class Light_R
            {
                color[] =
                {
                    7000,   // R
                    7500,   // G
                    10000,  // B
                    1       // A
                };
                ambient[] =
                {
                    70,     // R
                    75,     // G
                    100,    // B
                    0       // A
                };
                position = Light_R_pos;
                direction = Light_R_dir;
                hitpoint = Light_R_hitpoint;
                selection = Light_R;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = true;
                dayLight = false;
                FlareSize = 10;
                flareMaxDistance = 250;
                class Attenuation
                {
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
                };
            };
        };

        /* Selections & Memory Points */
		selectionClan = clan;
		selectionFireAnim = zasleh;
        selectionHRotorStill = "main rotor static";
        selectionHRotorMove = "main rotor blur";
        selectionVRotorStill = "tail rotor static";
        selectionVRotorMove = "tail rotor blur";
		selectionShowDamage = poskozeni;
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointLMissile = Missile_1;
		memoryPointRMissile = Missile_2;
		memoryPointLRocket = Rocket_1;
		memoryPointRRocket = Rocket_2;
		memoryPointTaskMarker = TaskMarker_1_pos;
        memoryPointDriverOptics = PilotCamera_pos;

        /* Animation Sources */
		class AnimationSources: AnimationSources
        {
			class HitGlass1
			{
				source = Hit;
				hitpoint = HitGlass1;
				raw = true;
				passThrough = false;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = HitGlass2;
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = HitGlass3;
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = HitGlass4;
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = HitGlass5;
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = HitGlass6;
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = HitGlass7;
			};
			class Muzzle_flash
			{
				source = ammorandom;
				weapon = gatling_30mm;
			};
        };

        /* Particles */
        class Exhausts
		{
			class Exhaust1
			{
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectHeliCom;
			};
			class Exhaust2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectHeliCom;
			};
		};

        /* Inventory */
        class TransportBackpacks
		{
            bag_xx(B_Parachute,2);
		};
		class TransportMagazines
		{
            mag_xx(SmokeShell,2);
            mag_xx(SmokeShellGreen,2);
            mag_xx(30Rnd_556x45_Stanag,4);
		};
		class TransportWeapons
		{
            weap_xx(arifle_Mk20C_F,2);
		};
		class TransportItems
		{
            item_xx(FirstAidKit,2);
            item_xx(Toolkit,1);
            item_xx(ItemGPS,1);
		};

        /* Scripts */
        class EventHandlers: EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		
		/*Sounds*/
		#include "sounds.hpp"
		
    };

    /* Factions */
    /* ADF */
	class adfrc_apache: Heli_Attack_03_base_F
	{
		author = ADF Re-Cut;
		displayName = "AH-64E Apache Guardian";
		editorPreview = "\ADF_Air\adfrc_apache\preview\adfrc_apache.jpg";
		scope = 2;
		scopeCurator = 2;
		side = TWest;
		faction = "ADF";
		crew = adfrc_pilot_dpcu;
		typicalCargo[] = {adfrc_pilot_dpcu};
		textureList[] = {ADF,1};
		hiddenSelectionsTextures[] =
		{
			"\ADF_Air\adfrc_apache\Data\Heli_Attack_03_body_CO.paa",
			"\ADF_Air\adfrc_apache\Data\Heli_Attack_03_details_CO.paa",
			"\ADF_Air\adfrc_apache\Data\Heli_Attack_03_adds_CO.paa"
		};
	
		/* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				/* Weapons & Ammunition */
				magazines[] =
				{
					"ADFRC_1200Rnd_Chaingun_30mm",
					"Laserbatteries"
				};
			};
		};
	
		/* Inventory */
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
	};
};
#include "cfgWeapons.hpp"
class CfgNonAIVehicles
{
	class ProxyRetex
	{
		autocenter = 0;
		scope = 0;
		animated = 0;
		model = "";
		simulation = "Proxyretex";
		hiddenSelections[] = {};
	};
	class proxyHeli_Attack_03_wreck_F: ProxyRetex
	{
		model = "\ADF_Air\adfrc_apache\Heli_Attack_03_wreck_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
	};
};
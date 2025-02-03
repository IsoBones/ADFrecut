class CfgPatches
{
	class adfrc_boxer
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta","A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"B_APC_Wheeled_01_cannon_F"};
		weapons[] = {};
	};
};
#include "c_ammo.hpp"
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F{};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F{};
	class adfrc_boxer_base: B_APC_Wheeled_01_cannon_F
	{
		author = "ADFRC - Quiggs / Index";
		mapSize=10.25;
		accuracy=0.25;
		brakeIdleSpeed=1.78;
		maxSpeed=110;
		fuelCapacity=30;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		normalSpeedForwardCoef=0.51999998;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=30;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		simulation="carx";
		dampersBumpCoef=3;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		enginePower=700;
		peakTorque=5500;
		maxOmega=220;
		minOmega=40;
		idleRpm=450;
		redRpm=3000;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/2260)"
			},
			
			{
				"(1200/2300)",
				"(1625/2260)"
			},
			
			{
				"(1400/2300)",
				"(2100/2260)"
			},
			
			{
				"(1500/2300)",
				"(2200/2260)"
			},
			
			{
				"(1550/2300)",
				"(2260/2260)"
			},
			
			{
				"(1600/2300)",
				"(2200/2260)"
			},
			
			{
				"(2300/2300)",
				"(1700/2260)"
			},
			
			{
				"(4700/2300)",
				"(0/2260)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.5,
				"D2",
				2.2,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				7.3000002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0;
		latency=1.4;
		thrustDelay=0.5;
		clutchStrength=65;
		numberPhysicalWheels=8;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				width="0.33";
				mass=187.5;
				MOI=50;
				dampingRate=1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				maxCompression=0.18;
				maxDroop=0.18;
				sprungMass=5000;
				springStrength=300000;
				springDamperRate=25000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=10;
				latStiffY=100;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
		};
		editorSubcategory="EdSubcat_APCs";
		terrainCoef=1.5;
		turnCoef=3;
		canFloat=0;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		engineShiftY=1.1;
		wheelDestroyRadiusCoef=0.60000002;
		armor=400;
		armorStructural=5;
		armorLights=0.1;
		crewVulnerable=0;
		crewCrashProtection=1.35;
		crewExplosionProtection=0.99949998;
		damageResistance=0.0071899998;
		driverAction="Driver_APC_Wheeled_03_cannon_F_out";
		driverInAction="Driver_APC_Wheeled_03_cannon_F_in";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic02b",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic01"
		};
		hideWeaponsCargo=0;
		LODDriverTurnedOut=1100;
		LODDriverTurnedin=1100;
		memoryPointDriverOptics="driverview";
		memoryPointDriverOutOptics="driverview";
		gunnerCompartments = "Compartment1";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		viewDriverInExternal=0;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=1;
		LODDriverOpticsIn=1;
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
		unitInfoType="RscUnitInfoTank";
		driverLeftLegAnimName="pedal_brake";
		showNVGDriver=0;
		showNVGCommander=0;
		showNVGGunner=0;
		class ViewOptics: ViewOptics
		{
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 1;
			minFov=0.95;
			maxFov=1.5;
			maxMoveX = 0.2;
			maxMoveY = 0;
			maxMoveZ = 0;
			minMoveX = 0.2;
			minMoveY = 0;
			minMoveZ = 0;
			thermalMode[] = {0,1};
			visionMode[] = {"Normal","NVG"};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=5;
			initAngleY=0;
			initFov=0.95;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		extCameraPosition[]={0,2.1,-8};
		cargoCompartments[] = {"Compartment1"};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="hit_hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.5;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=0.8;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.5;
				radius=0.2;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.33000001;
				visual="wheel_1_1_hide";
				armorComponent="wheel_1_1_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.33000001;
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.33000001;
				visual="wheel_1_3_hide";
				armorComponent="wheel_1_3_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.33000001;
				visual="wheel_1_4_hide";
				armorComponent="wheel_1_4_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.33000001;
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.33000001;
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.33000001;
				visual="wheel_2_3_hide";
				armorComponent="wheel_2_3_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.33000001;
				visual="wheel_2_4_hide";
				armorComponent="wheel_2_4_hide";
				armor=0.2;
				minimalHit=0.05;
				explosionShielding=4;
				passThrough=0;
			};
		};
		class PlayerSteeringCoefficients // steering sensitivity configuration
		{
			turnIncreaseConst	= 0.2; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.2; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 5.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 0.3; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		wheelDamageThreshold=0.18000001;
		wheelDamageRadiusCoef=0.75;
		weapons[]=
		{
			"adfrc_boxerhorn"
		};
		magazines[]={};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=100;
		incomingMissileDetectionSystem = 16;
		countermeasureActivationRadius = 2500;
		weaponLockSystem = "2+4";
		lockDetectionSystem = "2+4";
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		laserScanner = 1;
		radarType = 0;
		radarTarget = 1;
		radarTargetSize = 1.2;
		irScanGround = 1;
		irTarget = 1;
		allowTabLock = 1;
		showAllTargets = 2;
		visualTarget = 1;
		visualTargetSize = 1.2;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee	= 31;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="commanderturret";
						gun="commandergun";
						animationSourceBody="commanderturret";
						animationSourceGun="commandergun";
						animationSourceHatch="hatchCommander";
						memoryPointGunnerOptics="commanderview";
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 0;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "Commander_APC_Wheeled_01_in";
						animationSourceStickX = "com_turret_control_x";
						animationSourceStickY = "com_turret_control_y";
						gunnerForceOptics = 1;
						usepip = 2;
						LODTurnedIn = 1000;
						LODOpticsIn = 0;
						turretFollowFreeLook = 2;
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						viewGunnerShadowAmb = 0.5;
						viewGunnerShadowDiff = 0.05;
						gunnerRightHandAnimName = "com_turret_control";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						canUseScanner = 1;
						class ViewGunner: ViewGunner
						{
							initAngleX = -6.5;
							initAngleY = 0;
							initFov = 0.9;
							minFov = 0.25;
							maxFov = 1.25;
							minAngleX = -65;
							maxAngleX = 85;
							minAngleY = -150;
							maxAngleY = 150;
							minMoveX = -0.075;
							maxMoveX = 0.075;
							minMoveY = -0.075;
							maxMoveY = 0.075;
							minMoveZ = -0.075;
							maxMoveZ = 0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Gunner_MBT_03
						{
							class UltraWide: Wide
							{
								initFov=1.1;
							};
							class Wide: Wide
							{
								initFov=0.50;
							};
							class Medium: Medium
							{
								initFov=0.25;
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_APC_Wheeled_03_gunner";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.5;
								material = -1;
								armorComponent = "hit_com_turret";
								name = "hit_com_turret_point";
								visual = "Commander_turret";
								passThrough = 0;
								minimalHit = 0.05;
								explosionShielding = 1;
								radius = 0.15;
								isTurret = 1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,3000,2000,1000};
										showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
							{
								defaultDisplay = "SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,3000,2000,1000};
										showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"LMG_RCWS"};
				magazines[] = {"2000Rnd_65x39_belt","2000Rnd_65x39_belt"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,30};
				commanding = 1;
				initElev = 0;
				minElev = -9;
				maxElev = 45;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerAction = "gunner_apcwheeled1_out";
				gunnerInAction = "Gunner_APC_Wheeled_01_in";
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerLeftHandAnimName = "turret_control";
				gunnerForceOptics = 1;
				usepip = 2;
				LODOpticsIn = 0;
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				showCrewAim = 2;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				startEngine = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "";
				memoryPointGun[] = {"usti hlavne3"};
				isPersonTurret = 0;
				personTurretAction = "vehicle_turnout_1";
				minOutElev = -30;
				maxOutElev = 60;
				initOutElev = 0;
				minOutTurn = -160;
				maxOutTurn = 160;
				initOutTurn = 0;
				canUseScanner = 1;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX = -7;
					initAngleY = 0;
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075;
					maxMoveX = 0.075;
					minMoveY = -0.075;
					maxMoveY = 0.075;
					minMoveZ = -0.075;
					maxMoveZ = 0.1;
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide
					{
						initFov=0.65;
					};
					class Medium: Medium
					{
						initFov=0.25;
					};
					class Narrow: Narrow
					{
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,3000,2000,1000};
								showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = "SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,3000,2000,1000};
								showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitEngine_src
			{
				source = "Hit";
				hitpoint = "HitEngine";
				raw = 1;
			};
			class HitFuel_src
			{
				source = "Hit";
				hitpoint = "HitFuel";
				raw = 1;
			};
			class HitHull_src
			{
				source = "Hit";
				hitpoint = "HitHull";
				raw = 1;
			};
			class HitMainGun_src
			{
				source = "Hit";
				hitpoint = "HitGun";
				raw = 1;
			};
			class HitTurret_src
			{
				source = "Hit";
				hitpoint = "HitTurret";
				raw = 1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
		};
		destrType = "DestructBuilding";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxerhull1.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull1_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull1_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxerhull2.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull2_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull2_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B2\boxerhull3.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull3_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerhull3_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\APC\boxerapc.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerapc_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerapc_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxersusp.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxersusp_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxersusp_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxerturret1.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerturret1_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerturret1_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxerturret2.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerturret2_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerturret2_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\Addons\boxerstorage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerstorage_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerstorage_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\Addons\boxerrack.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrack_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrack_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\Addons\boxermount.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxermount_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxermount_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B2\boxerrws.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrws_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrws_destruct.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\B1\boxerrims.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrims_damage.rvmat",
				"ADF_Wheeled\adfrc_boxer\data\textures\damage\boxerrims_destruct.rvmat"
			};
		};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				hitpoint = "Light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				hitpoint = "Light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Left3","Right","Right2","Right3"}};
		selectionFireAnim = "";
		class RenderTargets
		{
			class commander_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "commanderview";
					pointDirection = "commanderview_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
					turret[] = {0,0};
				};
			};
			class driver_display
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
					turret[] = {-1};
				};
				BBoxes[] = {"PIP_DRV_TL","PIP_DRV_TR","PIP_DRV_BL","PIP_DRV_BR"};
			};
			class mirror_l
			{
				renderTarget = "mirror_l";
				class Camera
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] = {"Mirror_L_TL","Mirror_L_TR","Mirror_L_BL","Mirror_L_BR"};
			};
			class mirror_r
			{
				renderTarget = "mirror_r";
				class Camera
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
				BBoxes[] = {"Mirror_R_TL","Mirror_R_TR","Mirror_R_BL","Mirror_R_BR"};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = {15,30,35};
					ambient[] = {5,0,0};
					intensity = 0.16;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15;
						hardLimitEnd = 1.15;
					};
					point = "light_interior1";
				};
				class Light2: Light1
				{
					point = "light_interior2";
					color[] = {18,30,30};
					ambient[] = {5,0,0};
					intensity = 0.45;
				};
				class Light3: Light1
				{
					point = "light_interior3";
					color[] = {10,20,20};
					ambient[] = {5,0,0};
					intensity = 0.25;
				};
				class Light4: Light1
				{
					point = "light_interior4";
					color[] = {16,20,20};
					ambient[] = {5,0,0};
					intensity = 2;
				};
				class Light5: Light1
				{
					point = "light_interior5";
					color[] = {16,20,20};
					ambient[] = {5,0,0};
					intensity = 2;
				};
				class Light6: Light1
				{
					point = "light_interior6";
					color[] = {15,20,20};
					ambient[] = {5,0,0};
					intensity = 0.3;
				};
				class Light7: Light1
				{
					point = "light_interior7";
					color[] = {15,20,20};
					ambient[] = {5,0,0};
					intensity = 1.5;
				};
			};
		};
		transportSoldier = 6;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
		class TextureSources
		{};
		class EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=0;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class IRSensorComponent : SensorTemplateIR 
					{
						class AirTarget
						{
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=0;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=1500;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
			{
				class Components: components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,3000,2000,1000};
						showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,3000,2000,1000};
						showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class UserActions
		{
			class lower_rearramp
			{
				userActionID=50;
				displayName="Lower Ramp";
				radius=10;
				showIn3D=17;
				priority=1;
				position="gunnerview";
				onlyForPlayer=0;
				condition="((this DoorPhase 'rearramp') == 0) AND Alive (this) and driver this == player";
				statement="this animateDoor ['rearramp', 1]; playSound3D [""adf_wheeled\adfrc_boxer\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""rearramp_axis"")), 5, 1, 25]; ";
			};
			class raise_rearramp: lower_rearramp
			{
				userActionID=51;
				displayName="Raise Ramp";
				condition="((this DoorPhase 'rearramp') > 0) AND Alive (this) and driver this == player";
				statement="this animateDoor [""rearramp"", 0]; playSound3D [""adf_wheeled\adfrc_boxer\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""rearramp_axis"")), 0, 0, 0]; ";
			};
		};
	};
	class adfrc_boxer_crv_early: adfrc_boxer_base
	{
		displayName="Boxer CRV Block I (Early)";
		author="ADFRC - Quiggs";
		model = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.p3d";
		editorPreview = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.jpg";
		picture="adf_wheeled\adfrc_boxer\data\ui\boxercrv.paa";
		icon="adf_wheeled\adfrc_boxer\data\ui\mapboxercrv.paa";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "ADF_Core\Vehicle\optics_driver.p3d";
		side = 1;
		scope=2;
		scopeCurator=2;
		faction="ADFRC_F_MD";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		transportSoldier=6;
		typicalCargo[] = {"B_soldier_F"};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=3000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class IRSensorComponent : SensorTemplateIR 
					{
						class AirTarget
						{
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=3000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							maxRange=1500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection = "mainTurret";
						typeRecognitionDistance=1500;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=0;
						maxTrackableSpeed=694.44397;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
			{
				class Components: components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,3000,2000,1000};
						showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,3000,2000,1000};
						showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"ADFRC_boxer_mk30",
					"ADFRC_boxer_coax"
				};
				magazines[] = 
				{
					"ADFRC_boxer_360RND_30mm_HE",
					"ADFRC_boxer_360RND_30mm_AP",
					"ADFRC_boxer_600Rnd_762x51_Tracer",
					"ADFRC_boxer_600Rnd_762x51_Tracer"
				};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
			};
		};
		class AnimationSources
		{
			class 30mm_recoil
			{
				source="reload";
				weapon="adfrc_boxer_Mk30";
			};
			class zasleh_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_Mk30";
			};
			class zasleh_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_Mk30";
			};
			class zasleh2_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_coax";
			};
			class zasleh2_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_coax";
			};
			class rearramp
			{
				source="door";
				initPhase=0;
				animPeriod=3;
			};
			class towshackles
			{
				DisplayName="Tow Shackles";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class towcable
			{
				DisplayName="Front Tow Cable";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class earlysensors
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
				author="ADFRC";
			};
			class latesensors
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
				author="ADFRC";
				forceAnimatePhase=0;
			};
			class latehullsensor
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
				author="ADFRC";
				forceAnimatePhase=0;
			};
			class duke
			{
				DisplayName="AN/VLQ-12 Duke";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class storagebins
			{
				DisplayName="Storage Bins";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class nethull
			{
				DisplayName="Hull Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class netrack
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class nethatch
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class netturret
			{
				DisplayName="Turret Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class netgun
			{
				DisplayName="Gun Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
		};
	};
	class adfrc_boxer_crv_late: adfrc_boxer_crv_early
	{
		displayName="Boxer CRV Block I (Late)";
		author="ADFRC - Quiggs";
		model = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.p3d";
		editorPreview = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.jpg";
		picture="adf_wheeled\adfrc_boxer\data\ui\boxercrv.paa";
		icon="adf_wheeled\adfrc_boxer\data\ui\mapboxercrv.paa";
		memoryPointDriverOptics="driverview_late";
		memoryPointDriverOutOptics="driverview_late";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "\adf_wheeled\adfrc_boxer\optics_boxer_driver.p3d";//\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d
		unitInfoType="RscOptics_AV_driver";
		side=1;
		scope=2;
		scopeCurator=2;
		faction="ADFRC_F_MD";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		class ViewOptics: ViewOptics
		{
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 1;
			minFov=0.95;
			maxFov=1.5;
			maxMoveX = 0.2;
			maxMoveY = 0;
			maxMoveZ = 0;
			minMoveX = 0.2;
			minMoveY = 0;
			minMoveZ = 0;
			thermalMode[] = {0,1};
			visionMode[] = {"Normal","NVG","TI"};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=5;
			initAngleY=0;
			initFov=0.95;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class AnimationSources: AnimationSources
		{
			class latesensors
			{
				source="user";
				initPhase=1;
				animPeriod=0;
				forceAnimatePhase=1;
				author="ADFRC";
			};
			class earlysensors
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
			class latehullsensor
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
				author="ADFRC";
				forceAnimatePhase=1;
			};
			class leftstorage
			{
				DisplayName="Left Storage Rack";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class rightstorage
			{
				DisplayName="Right Storage Rack";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tools
			{
				DisplayName="Tool Kit";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class towbar
			{
				DisplayName="Tow Bar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
		};	
	};	
	class adfrc_boxer_apc: adfrc_boxer_crv_late
	{
		displayName="Boxer APC";
		author="ADFRC - Quiggs";
		model = "adf_wheeled\adfrc_boxer\adfrc_boxer_apc.p3d";
		editorPreview = "adf_wheeled\adfrc_boxer\adfrc_boxer_apc.jpg";
		transportSoldier=8;
		class AnimationSources: AnimationSources
		{
			class rearramp
			{
				source="door";
				initPhase=0;
				animPeriod=3;
			};
			class towshackles
			{
				DisplayName="Tow Shackles";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class towcable
			{
				DisplayName="Front Tow Cable";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class towbar
			{
				DisplayName="Tow Bar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class storagebins
			{
				DisplayName="Storage Bins";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class muzzle_source_RWS
			{
				source="reload";
				weapon="ADFRC_boxer_M2HBQCB_RWS";
			};
			class muzzle_source_rot_RWS
			{
				source="ammorandom";
				weapon="ADFRC_boxer_M2HBQCB_RWS";
			};
			class ReloadAnim_RWS
			{
				source="reload";
				weapon="ADFRC_boxer_M2HBQCB_RWS";
			};
			class ReloadMagazine_RWS
			{
				source="reloadmagazine";
				weapon="ADFRC_boxer_M2HBQCB_RWS";
			};
			class Revolving_RWS
			{
				source="revolving";
				weapon="ADFRC_boxer_M2HBQCB_RWS";
			};
			class zasleh3_rot
			{
				source = "ammorandom";
				weapon = "ADFRC_boxer_M2HBQCB_RWS";
			};
			class zasleh3_hide
			{
				source = "reload";
				weapon = "ADFRC_boxer_M2HBQCB_RWS";
			};
			class netturret
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
			class netgun
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
		};
		class Turrets
		{
			class mainTurret: NewTurret
			{
				class Turrets
				{
				};
				body="mainturret";
				gun="maingun";
				gunBeg = "m2_muzzle";
				gunEnd = "m2_chamber";
				gunnerName="Commander";
				proxyType="CPGunner";
				proxyIndex=1;
				turretFollowFreeLook = 1;
				weapons[]=
				{
					"ADFRC_boxer_M2HBQCB_RWS",
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				commanding=1;
				startEngine=0;
				minElev=-20;
				initElev=0;
				maxElev=45;
				minOutElev=-20;
				maxOutElev=50;
				initOutElev=0;
				minOutTurn=-140;
				maxOutTurn=110;
				gunnerAction = "vehicle_turnout_1";
				lockWhenDriverOut = 0;
				isPersonTurret = 1;
				gunnerInAction = "Commander_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInMRAP_01Rfl";
				gunnerGetOutAction="GetOuthigh";
				castGunnerShadow=1;
				forceHideGunner=0;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=0;
				turretInfoType="RscOptics_crows";
				memoryPointGunnerOptics="gunnerviewout";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerCompartments="Compartment1";
				selectionFireAnim="zasleh3";
				stabilizedInAxes=3;
				primaryGunner=1;
				primaryObserver=0;
				usePip=1;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				LODOpticsIn = 1200;
				LODOpticsOut = 1;
				viewGunnerInExternal = 0;
				disableSoundAttenuation=0;
				soundElevation[] = {"",0.00316228,1};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.177828,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.177828,1,10};
				class ViewOptics: RCWSOptics 
				{	
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=1;
						minimalHit=0.2;
						explosionShielding=1;
						radius=0.20;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0.2;
						explosionShielding=1;
						radius=0.20;
					};
				};/*
				class CommanderOptics: CommanderOptics
				{
					memoryPointGunnerOutOptics="commanderview";
					memoryPointGunnerOptics="commanderview";
					body="commanderTurret";
					gun="commanderGun";
					gunnerName="TEST";
					proxyType="CPCommander";
					gunnerCompartments = "Compartment1";
					minElev=-25;
					maxElev=60;
					initElev=0;
					minTurn=-360;
					maxTurn=360;
					stabilizedInAxes=3;
					gunnerForceOptics=1;
					viewGunnerInExternal=0;
					minOutElev=-20;
					maxOutElev=50;
					initOutElev=0;
					minOutTurn=-110;
					maxOutTurn=110;
					LODTurnedIn = 1200;
					LODTurnedOut = 1200;
					LODOpticsIn = 1200;
					LODOpticsOut = 1200;
					weapons[]=
					{
						"SmokeLauncher",
						"Laserdesignator_mounted"
					};
					magazines[]=
					{
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"SmokeLauncherMag",
						"Laserbatteries"
					};
				};*/
			};
		};
	};
	class adfrc_boxer_crv_b2: adfrc_boxer_crv_late
	{
		displayName="Boxer CRV Block II";
		author="ADFRC - Quiggs";
		model = "ADF_Wheeled\adfrc_boxer\adfrc_boxer_crv_b2.p3d";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "\adf_wheeled\adfrc_boxer\optics_boxer_driver.p3d";//\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d
		unitInfoType="RscOptics_AV_driver";
		side=1;
		scope=2;
		scopeCurator=2;
		faction="ADFRC_F_MD";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg="m2_muzzle";
						gunEnd="m2_chamber";
						memoryPointGunnerOptics="commandergun";
						selectionFireAnim = "zasleh3";
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = 0;
						maxCamElev = 0;
						weapons[] = 
						{
							"ADFRC_boxer_M2HBQCB_RWS"
						};
						magazines[] = 
						{
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red"
						};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 0;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "Commander_APC_Wheeled_01_in";
						animationSourceStickX = "com_turret_control_x";
						animationSourceStickY = "com_turret_control_y";
						gunnerForceOptics = 1;
						usepip = 2;
						LODTurnedIn = 1000;
						LODOpticsIn = 0;
						turretFollowFreeLook = 2;
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						viewGunnerShadowAmb = 0.5;
						viewGunnerShadowDiff = 0.05;
						gunnerRightHandAnimName = "com_turret_control";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						canUseScanner = 1;
						class ViewGunner: ViewGunner
						{
							initAngleX = -6.5;
							initAngleY = 0;
							initFov = 0.9;
							minFov = 0.25;
							maxFov = 1.25;
							minAngleX = -65;
							maxAngleX = 85;
							minAngleY = -150;
							maxAngleY = 150;
							minMoveX = -0.075;
							maxMoveX = 0.075;
							minMoveY = -0.075;
							maxMoveY = 0.075;
							minMoveZ = -0.075;
							maxMoveZ = 0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Gunner_MBT_03
						{
							class UltraWide: Wide
							{
								initFov=1.1;
							};
							class Wide: Wide
							{
								initFov=0.50;
							};
							class Medium: Medium
							{
								initFov=0.25;
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_APC_Wheeled_03_gunner";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.5;
								material = -1;
								armorComponent = "hit_com_turret";
								name = "hit_com_turret_point";
								visual = "Commander_turret";
								passThrough = 0;
								minimalHit = 0.05;
								explosionShielding = 1;
								radius = 0.15;
								isTurret = 1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,3000,2000,1000};
										showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
							{
								defaultDisplay = "SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,3000,2000,1000};
										showTargetTypes = 1 + 2 + 4 + 8 + 16 + 64 + 128 + 256 + 1024;
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				weapons[] = 
				{
					"ADFRC_boxer_mk30",
					"ADFRC_spike_launcher",
					"ADFRC_boxer_coax"
				};
				magazines[] = 
				{
					"ADFRC_boxer_360RND_30mm_HE",
					"ADFRC_boxer_360RND_30mm_AP",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles",
					"ADFRC_boxer_600Rnd_762x51_Tracer",
					"ADFRC_boxer_600Rnd_762x51_Tracer"
				};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
			};
		};
		class AnimationSources: AnimationSources
		{
			class 30mm_recoil
			{
				source="reload";
				weapon="adfrc_boxer_Mk30";
			};
			class zasleh_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_Mk30";
			};
			class zasleh_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_Mk30";
			};
			class zasleh2_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_coax";
			};
			class zasleh2_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_coax";
			};
			class zasleh3_rot
			{
				source = "ammorandom";
				weapon = "ADFRC_boxer_M2HBQCB_RWS";
			};
			class zasleh3_hide
			{
				source = "reload";
				weapon = "ADFRC_boxer_M2HBQCB_RWS";
			};
			class commanderrws
			{
				type="rotationX";
				source="commanderrws";
				selection="commanderrws";
				axis="commanderrws_axis";//*probably*
//				sourceAddress = clamp;// (default)
				minValue = -6.2831855;//rad -360.0
				maxValue = 6.2831855;//rad 360.0
				angle0 = -6.2831855;//rad -360.0;
				angle1 = 6.2831855;//rad 360.0;
				animPeriod = 0.0;
				initPhase = 0.0;
//				memory = true;//(default assumed)
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "ADFRC_spike_launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source = "reloadMagazine";
			};
			class ReloadAnim_RWS
			{
				source="reload";
				weapon="adfrc_boxer_M2HBQCB_RWS";
			};
			class ReloadMagazine_RWS
			{
				source="reloadmagazine";
				weapon="adfrc_boxer_M2HBQCB_RWS";
			};
			class Revolving_RWS
			{
				source="revolving";
				weapon="adfrc_boxer_M2HBQCB_RWS";
			};
			class nethull
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
			class storagebins
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class leftstorage
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
			class rightstorage
			{
				source="user";
				initPhase=0;
				animPeriod=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
			class towbar
			{
				DisplayName="Tow Bar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tools
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				forceAnimatePhase=0;
				author="ADFRC";
			};
		};
		animationList[]=
		{
			"latesensors", 1,
			"duke", 0.2,
			"towcable", 0.6,
			"towshackles", 0.8,
		};
	};
};
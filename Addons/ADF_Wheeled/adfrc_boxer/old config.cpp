class CfgPatches
{
	class adfrc_boxer
	{
		addonRootClass="A3_Armor_F_Gamma";
		requiredAddons[]=
		{
			"A3_Armor_F_Gamma",
			"A3_Soft_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"adfrc_boxer",
			"adfrc_boxer_crv",
			"adfrc_boxer_apc"
		};
		weapons[]=
		{
			"adfrc_boxerhorn",
			"adfrc_boxer_coax",
			"adfrc_boxer_Mk30",
			"adfrc_boxer_M2HBQCB_RWS",
			"ADFRC_spike_launcher",
			"ADFRC_laser_gunner",
			"ADFRC_laser_commander"
		};
		magazines[]=
		{
			"adfrc_boxer_600Rnd_762x51_Tracer",
			"adfrc_boxer_200rnd_762x51_Tracer",
			"adfrc_boxer_360RND_30mm_HE",
			"adfrc_boxer_360RND_30mm_AP",
			"ADFRC_2RND_Spike"
		};
		ammo[]=
		{
			"adfrc_boxer_30mm_HE",
			"adfrc_boxer_30mm_AP"
		};
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
class Components;
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
	class APC_Wheeled_03_base_F;
	class adfrc_boxer_base: APC_Wheeled_03_base_F
	{
		class complexGearbox;
		class MFD;
		class ViewOptics;
		class ViewPilot;
		class Damage;
		class Exhausts;
		class NVGMarkers;
		class Reflectors;
		class Markerlights;
		class RenderTargets;
		class compartmentsLights;
		class VehicleTransport;
		class EventHandlers;
		class AnimationSources;
		class HitPoints;
		class HitHull;
		class HitEngine;
		class HitFuel;
		class HitLFWheel;
		class HitLF2Wheel;
		class HitLMWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRF2Wheel;
		class HitRMWheel;
		class HitRBWheel;
		class NewTurret;
		class CommanderOptics;
		class Turrets
		{	
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewOptics;
				class ViewGunner;
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				class HitPoints
				{
					class HitComTurret;
				};
			};
		};
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class L4;
			class R1;
			class R2;
			class R3;
			class R4;
		};
	};
	class adfrc_boxer: adfrc_boxer_base
	{
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
		memoryPointDriverOptics="driverview";
		memoryPointDriverOutOptics="driverview";
		gunnerCompartments = "Compartment1";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		viewDriverInExternal=0;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=1;
		LODDriverTurnedOut=1201;
		LODDriverTurnedin=1100;
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				body="commanderTurret";
				gun="commanderGun";
				gunnerCompartments = "Compartment1";
				minElev=-35;
				maxElev=60;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				stabilizedInAxes=3;
				weapons[]=
				{
					"SmokeLauncher",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"SmokeLauncherMag",
					"Laserbatteries"
				};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				forceHideGunner=0;
				gunnerAction="Commander_APC_Wheeled_03_cannon_F_out";
				gunnerInAction="Commander_APC_Wheeled_03_cannon_F_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerOpticsEffect[]={"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				gunnerForceOptics=1;
				usepip=0;
				LODTurnedIn=1200;
				LODTurnedOut=1;
				LODOpticsIn=1;
				turretFollowFreeLook=0;
				allowTabLock = 1;
				animationSourceHatch = "hatchCommander";
				animationSourceStickX="com_turret_control_x";
				animationSourceStickY="com_turret_control_y";
				gunnerRightHandAnimName="com_turret_control";
				minOutElev=-20;
				maxOutElev=50;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				maxHorizontalRotSpeed=1;
				maxVerticalRotSpeed=1;
				gunnerHasFlares=1;
				viewGunnerInExternal=0;
				extCameraPosition[]={0,3,-7.1999998};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initAngleY=0;
					initFov=0.89999998;
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
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
				};
				class OpticsIn: Optics_Commander_02
				{
					class UltraWide: Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-180;
						maxAngleY=180;
						initFov=0.31;
						minFov=0.034000002;
						maxFov=0.31;
					};
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_APC_Wheeled_03_commander";
				showCrewAim=1;
				startEngine=0;
				class HitPoints
				{
					class HitComTurret
					{
						armor=0.5;
						material=-1;
						armorComponent="hit_com_turret";
						name="hit_com_turret_point";
						visual="commander_turret";
						passThrough=0;
						minimalHit=0.050000001;
						explosionShielding=1;
						radius=0.15000001;
						isTurret=1;
					};
					class HitComGun
					{
						armor=0.1;
						material=-1;
						armorComponent="hit_com_gun";
						name="hit_com_gun_point";
						visual="commander_gun";
						passThrough=0;
						minimalHit=0.050000001;
						explosionShielding=1;
						radius=0.15000001;
						isGun=1;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		textureList[]={};
		class TextureSources{};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2"
			}
		};
		selectionFireAnim="";
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={21,20,13};
					ambient[]={5,0,0};
					intensity=0.13;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={18,20,13};
					ambient[]={5,0,0};
					intensity=0.80000001;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=0.40000001;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light7: Light1
				{
					point="light_interior7";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light8: Light1
				{
					point="light_interior8";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light9: Light1
				{
					point="light_interior9";
					color[]={18,20,18};
					ambient[]={5,0,0};
					intensity=2;
				};
				class Light10: Light1
				{
					point="light_interior10";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light11: Light1
				{
					point="light_interior11";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light12: Light1
				{
					point="light_interior12";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
				class Light13: Light1
				{
					point="light_interior13";
					color[]={22,22,22};
					ambient[]={5,0,0};
					intensity=0.69999999;
				};
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget="rendertarget5";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.60000002;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
			class mirror_l
			{
				renderTarget="mirror_l";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"Mirror_L_TL",
					"Mirror_L_TR",
					"Mirror_L_BL",
					"Mirror_L_BR"
				};
			};
			class mirror_r
			{
				renderTarget="mirror_r";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"Mirror_R_TL",
					"Mirror_R_TR",
					"Mirror_R_BL",
					"Mirror_R_BR"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class BreakWater
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Components : Components
		{
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft{};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight{};
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
	class adfrc_boxer_crv_early: adfrc_boxer
	{
		displayName="Boxer CRV Block I (Early)";
		author="ADFRC - Quiggs";
		model = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.p3d";
		editorPreview = "adf_wheeled\adfrc_boxer\adfrc_boxer_crv.jpg";
		picture="adf_wheeled\adfrc_boxer\data\ui\boxercrv.paa";
		icon="adf_wheeled\adfrc_boxer\data\ui\mapboxercrv.paa";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "ADF_Core\Vehicle\optics_driver.p3d";
		side=1;
		scope=2;
		scopeCurator=2;
		faction="ADFRC_F_MD";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		transportSoldier=6;
		accuracy = 0.3;
		incomingMissileDetectionSystem = 16;
		countermeasureActivationRadius = 2500;
		laserScanner = 1;
		radarType = 0;
		radarTarget = 1;
		radarTargetSize = 1.2;
		irScanGround = 1;
		irTarget = 1;
		allowTabLock = 1;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		showAllTargets = 2;
		visualTarget = 1;
		visualTargetSize = 1.2;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee	= 31;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
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
		animationList[]=
		{
			"earlysensors", 1,
			"towcable", 0.6,
			"towshackles", 0.8,
			"storagebins", 0
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
				weapons[] = {"ADFRC_boxer_mk30","ADFRC_boxer_coax","HE","AP","ADFRC_laser_gunner"};
				magazines[] = {"ADFRC_boxer_360RND_30MM_HE","ADFRC_boxer_360RND_30MM_AP","ADFRC_boxer_600Rnd_762x51_Tracer","ADFRC_boxer_600Rnd_762x51_Tracer","Laserbatteries"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
				discreteDistance[] = {0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex = 0;
				extCameraPosition[]={0,3,-7.1999998};
				body="mainturret";
				gun="maingun";
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				animationSourceHatch = "hatchGunner";
				gunnerCompartments = "Compartment1";
				gunnerHasFlares=1;
				lockWhenDriverOut = 0;
				minElev = -9;
				maxElev = 45;
				minOutElev=-20;
				maxOutElev=50;
				initOutElev=0;
				minOutTurn=-110;
				maxOutTurn=110;
				initOutTurn=0;
				airLock = 1;
				stabilizedInAxes=3;
				commanding=1;
				gunnerForceOptics=1;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				forceHideGunner=0;
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				startEngine=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				allowTabLock = 1;
				irScanGround = 1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				usepip=1;
				LODTurnedIn=1200;
				LODTurnedOut=1;
				LODOpticsIn=1;
				LODOpticsOut = 1;
				maxHorizontalRotSpeed=0.8;
				maxVerticalRotSpeed=0.5;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				showCrewAim=2;
				memoryPointGunnerOptics="gunnerview";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initAngleY=0;
					initFov=0.89999998;
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
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
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
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
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
				class HitPoints
				{
					class HitTurret
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="OtocVez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="OtocHlaven";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
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
						gunBeg="m2_muzzle";
						gunEnd="m2_chamber";
						particlesdir = "Konec hlavne2";
						particlespos = "Usti hlavne2";
						memoryPointGun="m2_muzzle";
						selectionFireAnim="zasleh2";
						turretInfoType="RscOptics_APC_Wheeled_03_gunner";
						extCameraPosition[]={0,3,-7.1999998};
						showCrewAim=1;
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=0.6;
						maxVerticalRotSpeed=0.5;
						viewGunnerInExternal=0;
						minElev=-35;
						maxElev=55;
						minOutElev=-20;
						maxOutElev=50;
						initOutElev=0;
						minOutTurn=-110;
						maxOutTurn=110;
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="Commander_MBT_03_cannon_F_out";
						gunnerInAction="Commander_MBT_03_cannon_F_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						personTurretAction="vehicle_turnout_1";
						discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						discreteDistanceInitIndex=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOutOpticsColor[]={1,0,0,1};
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						gunnerForceOptics=1;
						usePip=2;
						LODOpticsIn=0;
						isPersonTurret=1;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						turretFollowFreeLook=0;
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
						weapons[]=
						{
							"SmokeLauncher",
							"ADFRC_laser_commander"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
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
			};
		};
		class Attributes
		{
			class PlatoonMarkings
			{
				//--- Mandatory properties
				displayName = "Vehicle Callsigns";
				tooltip = "The vehicle callsign shown on the sides and back of the vehicle";
				property = "ADFRC_PlatoonMarkings"; //Unique config property name saved in SQM
				control = "Combo"; //UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes

				//Expression called when applying the attribute in Eden and at the scenario start
				//The expression is called twice - first for data validation, and second for actual saving
				//Entity is passed as _this, value is passed as _value
				//%s is replaced by attribute config name. It can be used only once in the expression
				//In MP scenario, the expression is called only on server.
				expression = "_this setVariable ['%s', _value, true]; if (_value isEqualTo 0) exitWith {Nil}; if (_value < 10) then {_this setobjecttextureGlobal [4, format ['\adf_wheeled\adfrc_boxer\data\labels\labels_0%1_co.paa', _value]]} else {_this setobjecttextureGlobal [4, format ['\adf_wheeled\adfrc_boxer\data\labels\labels_%1_co.paa', _value]]};";

				//Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
				//Entity (unit, group, marker, comment etc.) is passed as _this
				//Returned value is the default value
				//Used when no value is returned, or when it is of other type than NUMBER, STRING or ARRAY
				//Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
				defaultValue = 0;
				
				class Values 
				{
					class One {
						name = "Bullryder | 7B";
						tooltip = "Select this callsign";
						value = 1;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_01_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_01_co.paa";
					};
					class Two: One {
						name = "Cerebral | 3A";
						value = 2;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_02_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_02_co.paa";
					};
					class Three: One {
						name = "Circle Work | 5A";
						value = 3;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_03_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_03_co.paa";
					};
					class Four: One {
						name = "Bollocks | 11-A";
						value = 4;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_04_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_04_co.paa";
					};
					class Five: One {
						name = "Comalgo | 2C";
						value = 5;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_05_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_05_co.paa";
					};
					class Six: One {
						name = "Sandgroper | 15C";
						value = 6;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_06_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_06_co.paa";
					};
					class Seven: One {
						name = "Courage | 12C";
						value = 7;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_07_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_07_co.paa";
					};
					class Eight: One {
						name = "Atomic | 13A";
						value = 8;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_08_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_08_co.paa";
					};
					class Nine: One {
						name = "Cannibal | 33B";
						value = 9;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_09_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_09_co.paa";
					};
					class Ten: One {
						name = "Bourbon | 23B";
						value = 10;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_10_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_10_co.paa";
					};
					class Eleven: One {
						name = "Cant Help Ya | 21A";
						value = 11;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_11_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_11_co.paa";
					};
					class Twelve: One {
						name = "ANZAC | 11A";
						value = 12;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_12_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_12_co.paa";
					};
					class Thirteen: One {
						name = "Angry Bird | 9A";
						value = 13;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_13_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_13_co.paa";
					};
					class Fourteen: One {
						name = "Atlas | 13B";
						value = 14;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_14_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_14_co.paa";
					};
					class Fifteen: One {
						name = "Achilles | 22C";
						value = 15;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_15_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_15_co.paa";
					};
					class Sixteen: One {
						name = "Boomer | 31A";
						value = 16;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_16_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_16_co.paa";
					};
					/* Seventeen: One {
						name = "Cerebral | 1";
						value = 17;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_17.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_17.paa";
					};
					class Eighteen: One {
						name = "Circle Work | 8";
						value = 18;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_18.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_18.paa";
					};
					class Nineteen: One {
						name = "Bollocks | 5";
						value = 19;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_19.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_19.paa";
					};
					class Twenty: One {
						name = "Hammer time | 31";
						value = 20;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_20.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_20.paa";
					};*/
					class TwentyOne: One {
						name = "NONE";
						tooltip = "No callsign marking will be displayed.";
						value = 21;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_21_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_21_co.paa";
					};
					class Zero: One {
						name = "Random";
						tooltip = "Choose the markings randomly.";
						value = 0;
					};
				};

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "number"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "object"; // Condition for attribute to appear (see the table below)
				typeName = "NUMBER"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
		};
	};
	class adfrc_boxer_crv_late: adfrc_boxer_crv_early
	{
		ace_hunterkiller[] = {{{0}, 1}, {{0,0}, 3}};
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
		extCameraPosition[]={0,2.1,-8};
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
		};
		class AnimationSources
		{
			class 30mm_recoil
			{
				source="reload";
				weapon="adfrc_boxer_Mk30";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_Mk30";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_Mk30";
			};
			class muzzle2_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_coax";
			};
			class muzzle2_hide
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
			class duke
			{
				DisplayName="AN/VLQ-12 Duke";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class latesensors
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
				author="ADFRC";
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
			class nethull
			{
				DisplayName="Hull Camo Net";
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
		animationList[]=
		{
			"latesensors", 1,
			"towcable", 0.6,
			"towshackles", 0.8,
			"leftstorage", 0,
			"rightstorage", 0
		};	
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ADFRC_boxer_mk30","ADFRC_boxer_coax","HE","AP","ADFRC_laser_gunner"};
				magazines[] = {"ADFRC_boxer_360RND_30MM_HE","ADFRC_boxer_360RND_30MM_AP","ADFRC_boxer_600Rnd_762x51_Tracer","ADFRC_boxer_600Rnd_762x51_Tracer","Laserbatteries"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
				discreteDistance[] = {0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex = 0;
				extCameraPosition[]={0,3,-7.1999998};
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				animationSourceHatch = "hatchGunner";
				gunnerCompartments = "Compartment1";
				gunnerHasFlares=1;
				lockWhenDriverOut = 0;
				minElev = -9;
				maxElev = 45;
				minOutElev=-20;
				maxOutElev=50;
				initOutElev=0;
				minOutTurn=-110;
				maxOutTurn=110;
				initOutTurn=0;
				airLock = 1;
				stabilizedInAxes=3;
				commanding=1;
				gunnerForceOptics=1;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				forceHideGunner=0;
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				startEngine=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				allowTabLock = 1;
				irScanGround = 1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				usepip=1;
				LODTurnedIn=1200;
				LODTurnedOut=1;
				LODOpticsIn=1;
				LODOpticsOut = 1;
				maxHorizontalRotSpeed=0.8;
				maxVerticalRotSpeed=0.5;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initAngleY=0;
					initFov=0.89999998;
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
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
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
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				showCrewAim=2;
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
				class HitPoints
				{
					class HitTurret
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="OtocVez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="OtocHlaven";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType="RscOptics_APC_Wheeled_03_gunner";
						extCameraPosition[]={0,3,-7.1999998};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						stabilizedInAxes=3;
						gunnerForceOptics=1;
						startEngine=0;
						viewGunnerInExternal=0;
						minElev=-35;
						maxElev=55;
						minOutElev=-20;
						maxOutElev=50;
						initOutElev=0;
						minOutTurn=-110;
						maxOutTurn=110;
						weapons[]=
						{
							"SmokeLauncher",
							"ADFRC_laser_commander"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
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
			};
		};
		class Attributes
		{
			class PlatoonMarkings
			{
				//--- Mandatory properties
				displayName = "Vehicle Callsigns";
				tooltip = "The vehicle callsign shown on the sides and back of the vehicle";
				property = "ADFRC_PlatoonMarkings"; //Unique config property name saved in SQM
				control = "Combo"; //UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes

				//Expression called when applying the attribute in Eden and at the scenario start
				//The expression is called twice - first for data validation, and second for actual saving
				//Entity is passed as _this, value is passed as _value
				//%s is replaced by attribute config name. It can be used only once in the expression
				//In MP scenario, the expression is called only on server.
				expression = "_this setVariable ['%s', _value, true]; if (_value isEqualTo 0) exitWith {Nil}; if (_value < 10) then {_this setobjecttextureGlobal [4, format ['\adf_wheeled\adfrc_boxer\data\labels\labels_0%1_co.paa', _value]]} else {_this setobjecttextureGlobal [4, format ['\adf_wheeled\adfrc_boxer\data\labels\labels_%1_co.paa', _value]]};";

				//Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
				//Entity (unit, group, marker, comment etc.) is passed as _this
				//Returned value is the default value
				//Used when no value is returned, or when it is of other type than NUMBER, STRING or ARRAY
				//Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
				defaultValue = 0;
				
				class Values 
				{
					class One {
						name = "Bullryder | 7B";
						tooltip = "Select this callsign";
						value = 1;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_01_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_01_co.paa";
					};
					class Two: One {
						name = "Cerebral | 3A";
						value = 2;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_02_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_02_co.paa";
					};
					class Three: One {
						name = "Circle Work | 5A";
						value = 3;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_03_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_03_co.paa";
					};
					class Four: One {
						name = "Bollocks | 11-A";
						value = 4;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_04_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_04_co.paa";
					};
					class Five: One {
						name = "Comalgo | 2C";
						value = 5;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_05_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_05_co.paa";
					};
					class Six: One {
						name = "Sandgroper | 15C";
						value = 6;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_06_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_06_co.paa";
					};
					class Seven: One {
						name = "Courage | 12C";
						value = 7;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_07_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_07_co.paa";
					};
					class Eight: One {
						name = "Atomic | 13A";
						value = 8;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_08_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_08_co.paa";
					};
					class Nine: One {
						name = "Cannibal | 33B";
						value = 9;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_09_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_09_co.paa";
					};
					class Ten: One {
						name = "Bourbon | 23B";
						value = 10;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_10_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_10_co.paa";
					};
					class Eleven: One {
						name = "Cant Help Ya | 21A";
						value = 11;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_11_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_11_co.paa";
					};
					class Twelve: One {
						name = "ANZAC | 11A";
						value = 12;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_12_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_12_co.paa";
					};
					class Thirteen: One {
						name = "Angry Bird | 9A";
						value = 13;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_13_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_13_co.paa";
					};
					class Fourteen: One {
						name = "Atlas | 13B";
						value = 14;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_14_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_14_co.paa";
					};
					class Fifteen: One {
						name = "Achilles | 22C";
						value = 15;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_15_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_15_co.paa";
					};
					class Sixteen: One {
						name = "Boomer | 31A";
						value = 16;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_16_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_16_co.paa";
					};
					/* Seventeen: One {
						name = "Cerebral | 1";
						value = 17;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_17.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_17.paa";
					};
					class Eighteen: One {
						name = "Circle Work | 8";
						value = 18;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_18.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_18.paa";
					};
					class Nineteen: One {
						name = "Bollocks | 5";
						value = 19;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_19.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_19.paa";
					};
					class Twenty: One {
						name = "Hammer time | 31";
						value = 20;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_20.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_20.paa";
					};*/
					class TwentyOne: One {
						name = "NONE";
						tooltip = "No callsign marking will be displayed.";
						value = 21;
						picture = "\adf_wheeled\adfrc_boxer\data\labels\labels_21_co.paa";
						pictureRight = "\adf_wheeled\adfrc_boxer\data\labels\labels_21_co.paa";
					};
					class Zero: One {
						name = "Random";
						tooltip = "Choose the markings randomly.";
						value = 0;
					};
				};

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "number"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "object"; // Condition for attribute to appear (see the table below)
				typeName = "NUMBER"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
		};
	};	
	class adfrc_boxer_apc: adfrc_boxer_crv_late
	{
		displayName="Boxer APC";
		author="ADFRC - Quiggs";
		//model = "adf_wheeled\adfrc_boxer\adfrc_boxer_apc.p3d";
		editorPreview = "adf_wheeled\adfrc_boxer\adfrc_boxer_apc.jpg";
		picture="adf_wheeled\adfrc_boxer\data\ui\boxerapc.paa";
		icon="adf_wheeled\adfrc_boxer\data\ui\mapboxerapc.paa";
		unitInfoType="RscOptics_AV_driver";
		memoryPointDriverOptics="driverview_late";
		memoryPointDriverOutOptics="driverview_late";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		driverOpticsModel = "\adf_wheeled\adfrc_boxer\optics_boxer_driver.p3d";
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
		transportSoldier=8;
		accuracy = 0.3;
		irScanGround = 1;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee	= 31;
		allowTabLock = 1;
		weaponLockSystem = "2+4";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class Library
		{
			libTextDesc = "";
		};
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
			class storagebins
			{
				DisplayName="Storage Bins";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class muzzle_source
			{
				source="reload";
				weapon="ADFRC_boxer_M2HBQCB";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="ADFRC_boxer_M2HBQCB";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="ADFRC_boxer_M2HBQCB";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="ADFRC_boxer_M2HBQCB";
			};
			class Revolving
			{
				source="revolving";
				weapon="ADFRC_boxer_M2HBQCB";
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
			class duke
			{
				DisplayName="AN/VLQ-12 Duke";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
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
		};
		animationList[]=
		{
			"duke", 0.2,
			"tools", 0.4,
			"leftstorage", 0.5,
			"rightstorage", 0.5,
			"towcable", 0.8,
			"towshackles", 0.8,
			"towbar", 0.4,
			"storagebins", 0.5
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
					"ADFRC_boxer_M2HBQCB_RWS",\
				};
				magazines[]=
				{
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag"
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
				gunnerForceOptics=-0;
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
		author="ADFRC";
		//model = "ADF_Wheeled\adfrc_boxer\adfrc_boxer_crv_b2.p3d";
		picture="ADF_Wheeled\adfrc_boxer\data\ui\boxercrv.paa";
		icon="ADF_Wheeled\adfrc_boxer\data\ui\mapboxercrv.paa";
		faction="ADFRC_F_MD";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		transportSoldier=6;
		accuracy = 0.3;
		armor=425;
		incomingMissileDetectionSystem = 16;
		countermeasureActivationRadius = 2500;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee	= 31;
		weaponLockSystem = "2+4";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
		};
		class AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "ADFRC_spike_launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source = "reloadMagazine";
			};
			class 30mm_recoil
			{
				source="reload";
				weapon="adfrc_boxer_Mk30";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_Mk30";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_Mk30";
			};
			class muzzle2_rot
			{
				source = "ammorandom";
				weapon = "adfrc_boxer_coax";
			};
			class muzzle2_hide
			{
				source = "reload";
				weapon = "adfrc_boxer_coax";
			};
			class muzzle_source_RWS
			{
				source="reload";
				weapon="adfrc_boxer_M2HBQCB_RWS";
			};
			class muzzle_source_rot_RWS
			{
				source="ammorandom";
				weapon="adfrc_boxer_M2HBQCB_RWS";
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
				author="Quiggs";
			};
			class towcable
			{
				DisplayName="Front Tow Cable";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="Quiggs";
			};
			class latesensors
			{
				DisplayName="Late Turret Layout";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				author="ADFRC";
				forceAnimatePhase=1;
			};
			class duke
			{
				DisplayName="AN/VLQ-12 Duke";
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
			class netrack
			{
				DisplayName="Rack Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"adfrc_boxer_mk30","adfrc_boxer_coax","HE","AP","ADFRC_spike_launcher","ADFRC_laser_gunner"};
				magazines[] = {"adfrc_boxer_360RND_30MM_HE","adfrc_boxer_360RND_30MM_AP","adfrc_boxer_600Rnd_762x51_Tracer","adfrc_boxer_600Rnd_762x51_Tracer","ADFRC_2RND_Spike","ADFRC_2RND_Spike","ADFRC_2RND_Spike","Laserbatteries"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.39810717,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.39810717,1,30};
				discreteDistance[] = {0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,};
				discreteDistanceInitIndex = 0;
				extCameraPosition[]={0,3,-7.1999998};
				body="mainTurret";
				gun="mainGun";
				gunnerInAction="Commander_APC_tracked_01_crv_in";
				animationSourceHatch = "hatchGunner";
				gunnerCompartments = "Compartment1";
				gunnerHasFlares=1;
				lockWhenDriverOut = 0;
				minElev = -9;
				maxElev = 45;
				minOutElev=-20;
				maxOutElev=50;
				initOutElev=0;
				minOutTurn=-110;
				maxOutTurn=110;
				initOutTurn=0;
				airLock = 1;
				stabilizedInAxes=3;
				commanding=1;
				gunnerForceOptics=1;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				forceHideGunner=0;
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				startEngine=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				allowTabLock = 1;
				irScanGround = 1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				usepip=2;
				LODTurnedIn=1200;
				LODTurnedOut=1;
				LODOpticsIn=1;
				LODOpticsOut = 1;
				maxHorizontalRotSpeed=0.8;
				maxVerticalRotSpeed=0.5;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initAngleY=0;
					initFov=1.25;
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
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
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
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="OtocVez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=1.5;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="OtocHlaven";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="commanderturret";
						gun="commandergun";
						gunBeg = "m2_muzzle";
						gunEnd = "m2_chamber";
						gunnerName="Commander";
						proxyType="CPCommander";
						proxyIndex=1;
						turretFollowFreeLook = 1;
						weapons[]=
						{
							"adfrc_boxer_M2HBQCB_RWS",
							"Laserdesignator_mounted",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"100Rnd_127x99_mag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"SmokeLauncherMag",
							"Laserbatteries"
						};
						commanding=1;
						minElev=-20;
						initElev=0;
						maxElev=50;
						minOutElev=-20;
						maxOutElev=50;
						initOutElev=0;
						minOutTurn=-140;
						maxOutTurn=110;
						gunnerAction = "vehicle_turnout_1";
						lockWhenDriverOut = 0;
						isPersonTurret = 1;
						gunnerInAction = "Commander_APC_tracked_01_crv_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						castGunnerShadow=1;
						forceHideGunner=0;
						gunnerForceOptics=1;
						inGunnerMayFire=1;
						outGunnerMayFire=0;
						discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=0;
						turretInfoType="RscOptics_APC_Wheeled_03_Commander";
						memoryPointGunnerOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerCompartments="Compartment1";
						selectionFireAnim="zasleh3";
						stabilizedInAxes=3;
						primaryGunner=0;
						primaryObserver=1;
						usePip=0;
						LODTurnedIn = 1;
						LODTurnedOut = 1;
						LODOpticsIn = 1;
						LODOpticsOut = 1;
						startEngine=0;
						showCrewAim=1;
						viewGunnerInExternal = 0;
						disableSoundAttenuation=0;
						soundElevation = ["",0.00316228,1];
						soundServo = ["A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.177828,1,10];
						soundServoVertical = ["A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",0.177828,1,10];
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
						};
					};
				};
			};
		};
	};
};
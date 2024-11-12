class CfgPatches
{
	class adfrc_abrams
	{
		requiredAddons[]=
		{
			"A3_Data_F_AoW_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"ADF_Core",
			"ADF_Tracked",
			"ADF_Weapons",
			"A3_Armor_F_EPB",
		};
		requiredVersion=0.1;
		units[]=
		{
			"adfrc_abrams",
			"adfrc_m1a1aim"
		};
		weapons[]=
		{
			"ADFRC_abrams_M256",
			"ADFRC_abrams_coax",
			"ADFRC_abrams_mag58",
			"ADFRC_abrams_M2HBQCB",
			"ADFRC_abrams_M2HBQCB_RWS"
		};
		magazines[]=
		{
			"ADFRC_abrams_1000Rnd_762x51_Tracer",
			"ADFRC_abrams_200Rnd_762x51_Tracer",
			"ADFRC_abrams_100rnd_762x51_Tracer",
		};
	};
};
#include "c_ammo.hpp"
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CargoTurret;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
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
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class MBT_03_base_F: Tank_F {};
	class I_MBT_03_base_F: MBT_03_base_F {};
	class I_MBT_03_cannon_F: I_MBT_03_base_F {};
	class adfrc_abrams: I_MBT_03_cannon_F
	{
		author="ADFRC_Quiggs";
		mapSize=11.57;
		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.2;
		maxSpeed=75;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		waterResistanceCoef=0.25;
		enginePower=1600;
		maxOmega=345.57501;
		minOmega=146.608;
		redRpm=4000;
		idleRpm=700;
		peakTorque=5500;
		torqueCurve[]=
		{
			{0.42424199,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.99000001},
			{0.63636398,1},
			{0.66666698,0.98000002},
			{0.72727299,0.93000001},
			{0.87878799,0.75999999},
			{1,0.60000002}
		};
		thrustDelay=1;
		engineMOI=30;
		dampingRateFullThrottle=1;
		dampingRateZeroThrottleClutchEngaged=1;
		dampingRateZeroThrottleClutchDisengaged=1;
		clutchStrength=40;
		latency=1.0;
		switchTime=0.3;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.98484802,0.42424199,0.98484802,0.60606098,0.98484802,0.57575798,1,0.54545498};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				4.,
				"D2",
				3.2,
				"D3",
				2.2,
				"D4",
				1
			};
			transmissionRatios[]=
			{
				"High",
				13
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=750000;
		tankTurnForceAngMinSpd=1;
		tankTurnForceAngSpd=1;
		accelAidForceCoef=2;
		accelAidForceYOffset=-1;
		accelAidForceSpd=2;
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				width=0.5;
				mass=200;
				MOI=19;
				dampingRate=1000;
				dampingRateInAir=3000;
				dampingRateDestroyed=3000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
				sprungMass=6400;
				springStrength=300000;
				springDamperRate=28000;
				maxBrakeTorque=10000;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=12000;
				frictionVsSlipGraph[]=
				{
					{0,0.75},
					{0.050000001,1.5},
					{0.5,0.89999998}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L4
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L4
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName="wheel_podkolol7";
				center="wheel_1_8_axis";
				boundary="wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName="wheel_podkolop7";
				center="wheel_2_8_axis";
				boundary="wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
		};
		editorSubcategory="EdSubcat_Tanks";
		scope=0;
		maxFordingDepth=-1.5;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=2.8;
		predictTurnSimul=2.5999999;
		brakeDistance=20;
		precision=5;
		transportSoldier=0;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_flatground_leanleft",
			"passenger_flatground_generic01",
			"passenger_flatground_generic02",
			"passenger_flatground_generic03",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05"
		};
		waterResistance=3;
		waterDamageEngine=0.1;
		wheelCircumference=2.513;
		tracksSpeed=1;
		forceHideDriver=0;
		driverForceOptics=1;
		LODDriverOpticsIn=1202;
		driverOpticsModel="ADF_Tracked\adfrc_abrams\Optics_Driver";
		viewDriverInExternal=0;
		animationSourceHatch="hatchDriver";
		LODDriverTurnedOut=0;
		driverInfoPanelCameraPos="driverview_old";
		driverAction="Driver_MBT_04_in";
		driverInAction="Driver_MBT_04_in";
		extCameraPosition[]={0,2,-9};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=1.1;
			minFov=1.1;
			maxFov=1.1;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-3;
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
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		armor=600;
		armorLights=0.1;
		armorStructural=6;
		damageResistance=0.0054700002;
		cost=2500000;
		crewVulnerable=1;
		crewExplosionProtection=0.99989998;
		epeImpulseDamageCoef=18;
		picture="\ADF_Tracked\adfrc_abrams\Data\UI\M1_abrams_CA.paa";
		icon="\ADF_Tracked\adfrc_abrams\data\UI\icomap_m1a1_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.6;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
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
				radius=0.30000001;
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="pas_L";
				radius=0.2;
				armor=-150;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="hit_trackR";
				name="hit_trackR_point";
				visual="pas_P";
				radius=0.2;
				armor=-150;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="";
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust_dir2";
				effect="ExhaustEffectTankSide";
			};
		};
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
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
				"Right",
				"Left2",
				"Right2"
			}
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=1.5;
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
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=1;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=0.69999999;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={22,18,10};
					ambient[]={0,0,0};
					intensity=1.2;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={20,20,20};
					ambient[]={0,0,0};
					intensity=0.40000001;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=0.80000001;
				};
			};
		};
		smokeLauncherGrenadeCount=12;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
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
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commander_digital_view";
						gunBeg="m2_muzzle";
						gunEnd="m2_chamber";
						particlesdir = "Konec hlavne2";
						particlespos = "Usti hlavne2";
						memoryPointGun="m2_muzzle";
						selectionFireAnim="zasleh2";
						minElev=-9;
						maxElev=65;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"ADFRC_abrams_M2HBQCB",
							"SmokeLauncher"
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
							"100Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							0.8,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="Commander_MBT_03_cannon_F_out";
						gunnerInAction="Commander_MBT_03_cannon_F_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
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
						personTurretAction="vehicle_turnout_1";
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						class dynamicViewLimits
						{
							MainTurret[]={-135,75};
						};
						minOutElev=-10;
						maxOutElev=15;
						initOutElev=0;
						minOutTurn=-135;
						maxOutTurn=90;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
							initAngleX=-5;
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
							};
						};
						class OpticsIn: Optics_Gunner_MBT_03
						{
							/*class Comwidesight: wide
							{
								memoryPointCamera ="commander_wide_view";
								gunnerOpticsModel = "\ADF_Tracked\adfrc_abrams\comOptics_wide.p3d";
								gunnerOpticsEffect[] = {"OpticsBlur1","OpticsCHAbera1"};
								turretInfoType="RscOptics_APC_Wheeled_01_gunner";
								visionMode[] = {"Normal"};
								initFov = 0.8;
							};*/
							class Comdaysight: Medium
							{
								memoryPointCamera ="commander_analogue_view";
								gunnerOpticsModel = "\ADF_Tracked\adfrc_abrams\comOptics_m2qcb.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
								turretInfoType="RscOptics_APC_Wheeled_01_gunner";
								visionMode[] = {"Normal"};
								initFov = 0.20;
							};
							class Wide: Wide 
							{
								visionMode[] = {"TI"};
								thermalMode[] = {2,3};
							};
							class Medium: Medium 
							{
								visionMode[] = {"TI"};
								thermalMode[] = {2,3};
							};
							class Narrow: Narrow 
							{
								visionMode[] = {"TI"};
								thermalMode[] = {2,3};
							};
						};
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						turretInfoType="RscOptics_APC_Wheeled_03_commander";
						showCrewAim=1;
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=0;
						maxHorizontalRotSpeed=0.6;
						maxVerticalRotSpeed=0.5;
						viewGunnerInExternal=0;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.1;
								material=-1;
								armorComponent="commander_turret";
								name="hit_com_turret_point";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_commander_gun";
								name="hit_com_gun_point";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
					};
				};
				body="mainturret";
				gun="maingun";
				gunBeg="maingun_muzzle";
				gunEnd="maingun_chamber";
				selectionFireAnim="zasleh";
				gunnerInAction="Gunner_MBT_03_cannon_F_in";
				gunnerAction="Gunner_MBT_03_cannon_F_out";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				weapons[]=
				{
					"ADFRC_abrams_M256",
					"ADFRC_abrams_coax"
				};
				magazines[]=
				{
					"20Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer",
					"ADFRC_abrams_200Rnd_762x51_Tracer"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					1.5,
					75
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1.5,
					75
				};
				forceHideGunner=1;
				usePip=2;
				LODOpticsIn=0;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				memoryPointGun="coax";
				particlesdir = "konec hlavne";
				particlespos = "usti hlavne";
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				minElev=-10;
				maxElev=20;
				initElev=10;
				maxHorizontalRotSpeed=0.7;
				maxVerticalRotSpeed=0.4;
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				gunnerForceOptics=1;
				startEngine=1;
				inGunnerMayFire=1;
				viewGunnerInExternal=0;
				isPersonTurret=0;
				class dynamicViewLimits
				{
					CommanderOptics[]={-65,90};
				};
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-135;
				maxOutTurn=90;
				initOutTurn=0;
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={2,3};
					};
					class Medium: Medium
					{
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={2,3};
					};
					class Narrow: Narrow
					{
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={2,3};
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-13;
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
				showCrewAim=2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{20.1126,-107.5349},
						{19.8932,99.317703}
					};
					limitsArrayBottom[]=
					{
						{-9.1273003,-108.1836},
						{-7.1046,-44.255001},
						{-9.1674995,31.497801},
						{-9.0504999,102.8447}
					};
				};
				/*class TurnIn: TurnOut
				{
					limitsArrayTop[]=
					{
						{19.9995,-180},
						{19.998501,180}
					};
					limitsArrayBottom[]=
					{
						{-2,-180},
						{-1,-154.4525},
						{-5.8804998,-82.711601},
						{-8.9499998,20.756201},
						{-7.9499998,-20.756201},
						{-5.8804998,82.711601},
						{-1,153.1266},
						{-2,180}
					};
				};*/
				class HitPoints
				{
					class HitTurret
					{
						armor=5;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="mainTurret";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="maingun";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
			class LoaderTurret: NewTurret
			{
				class Turrets
				{
				};
				body="LoaderTurret";
				gun="LoaderGun";
				animationSourceBody = "LoaderTurret";
				animationSourceGun = "LoaderGun";
				animationSourceHatch="HatchLoader";
				gunBeg = "mag58_muzzle";
				gunEnd = "mag58_chamber";
				gunnerName="Loader";
				proxyType="CPGunner";
				particlesdir = "mag58_muzzle";
				particlespos = "mag58_chamber";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				maxVerticalRotSpeed = 0.8;
				maxHorizontalRotSpeed = 1;
				proxyIndex=2;
				turretFollowFreeLook = 1;
				weapons[]=
				{
					"ADFRC_abrams_mag58"
				};
				magazines[]=
				{
					
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer",
					"ADFRC_abrams_100rnd_762x51_Tracer"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				minElev=-18;
				initElev=0;
				maxElev=35;
				minTurn=-45;
				initTurn=0;
				maxTurn=160;
				gunnerRightHandAnimName="handle_l_2";
				gunnerLeftHandAnimName="handle_r_2";
				gunnerAction = "gunner_lsv_02";
				lockWhenDriverOut = 0;
				isPersonTurret = 0;
				gunnerInAction = "Commander_APC_tracked_01_crv_in";
				gunnerGetInAction="GetInhigh";
				gunnerGetOutAction="GetOuthigh";
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				forceHideGunner=0;
				gunnerForceOptics=1;
				inGunnerMayFire=0;
				outGunnerMayFire=1;
				playerPosition = 0;
				discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=0;
				turretInfoType="";
				memoryPointGunnerOptics="loaderviewport_view";
				gunnerOpticsModel="ADF_Tracked\adfrc_abrams\Optics_Driver";
				memoryPointGunnerOutOptics="loadereye";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerCompartments="Compartment1";
				selectionFireAnim="zasleh3";
				stabilizedInAxes=0;
				primaryGunner=0;
				primaryObserver=0;
				usePip=0;
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				LODOpticsIn = 1;
				LODOpticsOut = 1;
				startEngine=0;
				disableSoundAttenuation=0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.8;
					minFov = 0.8;
					maxFov = 0.8;
				};
				class TurnIn
                {
					/*limitsArrayTop[] = {{-0, 0}};
                    limitsArrayBottom[] = {{-0, 0}};*/
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track_destruct.rvmat"
			};
		};
		class AnimationSources
		{
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="ADFRC_abrams_M256";
			};
			class maingun_recoil
			{
				source="reload";
				weapon="ADFRC_abrams_M256";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="ADFRC_abrams_coax";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="ADFRC_abrams_coax";
			};
			class LockMuzzle
			{
				source="user";
				initPhase=0;
				animPeriod=0.30000001;
			};
			class Smoke_source
			{
				source="revolving";
				weapon="SmokeLauncher";
			};
			class muzzle2_hide
			{
				source="reload";
				weapon="ADFRC_abrams_M2HBQCB";
			};
			class muzzle2_rot
			{
				source="ammorandom";
				weapon="ADFRC_abrams_M2HBQCB";
			};
			class reloadanim_m2
			{
				source="reload";
				weapon="ADFRC_abrams_M2HBQCB";
			};
			class reloadmagazine_m2
			{
				source="reloadmagazine";
				weapon="ADFRC_abrams_M2HBQCB";
			};
			class Revolving_m2
			{
				source="revolving";
				weapon="ADFRC_abrams_M2HBQCB";
			};
			class muzzle3_hide
			{
				source="reload";
				weapon="ADFRC_abrams_MAG58";
			};
			class muzzle3_rot
			{
				source="ammorandom";
				weapon="ADFRC_abrams_MAG58";
			};
			class reloadanim_mag58
			{
				source="reload";
				weapon="ADFRC_abrams_MAG58";
			};
			class reloadmagazine_mag58
			{
				source="reloadmagazine";
				weapon="ADFRC_abrams_MAG58";
			};
			class revolving_mag58
			{
				source="revolving";
				weapon="ADFRC_abrams_MAG58";
			};
			class plow
			{
				source="door";
				initPhase=0;
				animPeriod=3;
			};
			/*class towcable
			{
				DisplayName="Rear Tow Cable";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};*/
			class sparewheelsturret
			{
				DisplayName="Basket Spare Wheels";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class sparewheelroof
			{
				DisplayName="Roof Spare Wheel";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class sparetracks
			{
				DisplayName="Spare Tracks";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class towshackles
			{
				DisplayName="Recovery Shackles";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class sprocketcovers
			{
				DisplayName="Sprocket Covers";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class abramstowbar
			{
				DisplayName="Front Tow Bar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class turretjerrys
			{
				DisplayName="Turret Jerry Cans";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class plowframe
			{
				DisplayName="Mine Plow";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
		};
		animationList[]=
		{
			"sprocketcovers",
			1,
		};
		class UserActions
        {
            class lower_plow
            {
                userActionID=50;
                displayName="Lower plow";
                radius=10;
                showIn3D=17;
                priority=1;
                position="gunnerview";
                onlyForPlayer=0;
                condition="((this DoorPhase 'plow') == 0) AND Alive (this) and driver this == player";
                statement="this animateDoor ['plow', 1]; playSound3D [""adf_wheeled\adfrc_boxer\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""plow_axis"")), 5, 1, 25]; ";
            };
            class raise_plow: lower_plow
            {
                userActionID=51;
                displayName="Raise plow";
                condition="((this DoorPhase 'plow') > 0) AND Alive (this) and driver this == player";
                statement="this animateDoor [""plow"", 0]; playSound3D [""adf_wheeled\adfrc_boxer\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""plow_axis"")), 0, 0, 0]; ";
            };
        };
		class TextureSources
		{
			class Standard
			{
				displayName="Standard";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
			class Fishscale
			{
				displayName="Fish Scale";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
			class Dots
			{
				displayName="Polka Dot";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
			class Lines
			{
				displayName="Tiger Stripe";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
			class Garudashield
			{
				displayName="Garuda Shield";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
			class Desert
			{
				displayName="Desert Tan";
				author="ADFRC_Quiggs";
				textures[]=
				{
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
					"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
				};
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1.1220185,
					1.2,
					320
				};
				frequency="0.8 + ((rpm/ 3000) factor[(950/ 3000),(1400/ 3000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(900/ 3000),(1050/ 3000)]) * ((rpm/ 3000) factor[(1400/ 3000),(1200/ 3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1.2589254,
					1.4,
					360
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1200/ 3000),(1700/ 3000)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(1170/ 3000),(1380/ 3000)]) * ((rpm/ 3000) factor[(1700/ 3000),(1500/ 3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1.4125376,
					1.8,
					400
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1500/ 3000),(2100/ 3000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(1500/ 3000),(1670/ 3000)]) * ((rpm/ 3000) factor[(2100/ 3000),(1800/ 3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1.5848932,
					2.2,
					440
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1800/ 3000),(2300/ 3000)])*0.1";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(1780/ 3000),(2060/ 3000)]) * ((rpm/ 3000) factor[(2450/ 3000),(2200/ 3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_ext",
					1.7782794,
					2.6,
					480
				};
				frequency="0.8 + ((rpm/ 3000) factor[(2100/ 3000),(3000/ 3000)])*0.1";
				volume="engineOn*camPos*((rpm/ 3000) factor[(2150/ 3000),(2500/ 3000)])";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",
					1.4125376,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 3000) factor[(700/ 3000),(1100/ 3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(705/ 3000),(850/ 3000)]) * ((rpm/ 3000) factor[(1100 / 3000),(950/ 3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"ADF_Tracked\adfrc_abrams\sounds\vehicles\tracked\M1A1\ext\ext-m1acceleration-01",
					1.7782794,
					1.1,
					230
				};
				frequency="0.8 + ((rpm/ 3000) factor[(950/ 3000),(1400/ 3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(900/ 3000),(1050/ 3000)]) * ((rpm/ 3000) factor[(1400/ 3000),(1200/ 3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",
					1.9952624,
					1.2,
					290
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1200/ 3000),(1700/ 3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1170/ 3000),(1380/ 3000)]) * ((rpm/ 3000) factor[(1700/ 3000),(1500/ 3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",
					1.7782794,
					1.3,
					350
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1500/ 3000),(2100/ 3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1500/ 3000),(1670/ 3000)]) * ((rpm/ 3000) factor[(2100/ 3000),(1800/ 3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",
					2.2387211,
					1.4,
					400
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1800/ 3000),(2300/ 3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1780/ 3000),(2060/ 3000)]) * ((rpm/ 3000) factor[(2450/ 3000),(2200/ 3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",
					2.5118864,
					1.5,
					450
				};
				frequency="0.8 + ((rpm/ 3000) factor[(2100/ 3000),(3000/ 3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3000) factor[(2150/ 3000),(2500/ 3000)])";
			};
			class IdleOut
			{
				sound[]=
				{
					"ADF_Tracked\adfrc_abrams\sounds\vehicles\tracked\M1A1\ext\ext-m1idle-02",
					0.63095737,
					1.1,
					500
				};
				frequency="0.95 + ((rpm/ 3000) factor[(400/ 3000),(900/ 3000)])*0.15";
				volume="engineOn*camPos*(((rpm/ 3000) factor[(100/ 3000),(200/ 3000)]) * ((rpm/ 3000) factor[(900/ 3000),(700/ 3000)]))";
			};
			class NoiseOut
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\noise2",
					1,
					1,
					400
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-01",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-02",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-03",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-04",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-hard-05",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-01",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-02",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-03",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-04",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\ext\ext-m1treads-soft-05",
					1.7782794,
					1,
					250
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class Movement
			{
				sound[]=
				{
					"",
					1,
					1
				};
				frequency="0";
				volume="0";
			};
			class Engine_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.35481337,
					2
				};
				frequency="0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class IdleIn
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_forsage_int",
					1,
					2
				};
				frequency="0.8 + ((rpm/ 3000) factor[(400/ 3000),(900/ 3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(100/ 3000),(200/ 3000)]) * ((rpm/ 3000) factor[(900/ 3000),(700/ 3000)]))";
			};
			class NoiseIn
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\noise2",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-01",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-02",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-03",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-04",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-hard-05",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-01",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-02",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-03",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-04",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"adf_tracked\adfrc_abrams\sounds\Vehicles\Tracked\M1A1\int\int-m1treads-soft-05",
					1,
					0.75
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.39810717,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(950/ 3000),(1400/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(900/ 3000),(1050/ 3000)]) * ((rpm/ 3000) factor[(1400/ 3000),(1200/ 3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.44668359,
					1.5
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1200/ 3000),(1700/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(1170/ 3000),(1380/ 3000)]) * ((rpm/ 3000) factor[(1700/ 3000),(1500/ 3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.50118721,
					1.6
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1500/ 3000),(2100/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(1500/ 3000),(1670/ 3000)]) * ((rpm/ 3000) factor[(2100/ 3000),(1800/ 3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.56234133,
					1.7
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1800/ 3000),(2300/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 3000) factor[(1780/ 3000),(2060/ 3000)]) * ((rpm/ 3000) factor[(2450/ 3000),(2200/ 3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_low_int",
					0.63095737,
					1.8
				};
				frequency="0.8 + ((rpm/ 3000) factor[(2100/ 3000),(3000/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 3000) factor[(2150/ 3000),(2500/ 3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",
					0.63095737,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(400/ 3000),(900/ 3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(100/ 3000),(200/ 3000)]) * ((rpm/ 3000) factor[(900/ 3000),(700/ 3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",
					0.39810717,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(700/ 3000),(1100/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(705/ 3000),(850/ 3000)]) * ((rpm/ 3000) factor[(1100 / 3000),(950/ 3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",
					0.44668359,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(950/ 3000),(1400/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(900/ 3000),(1050/ 3000)]) * ((rpm/ 3000) factor[(1400/ 3000),(1200/ 3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",
					0.44668359,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1200/ 3000),(1700/ 3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1170/ 3000),(1380/ 3000)]) * ((rpm/ 3000) factor[(1700/ 3000),(1500/ 3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",
					0.50118721,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1500/ 3000),(2100/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1500/ 3000),(1670/ 3000)]) * ((rpm/ 3000) factor[(2100/ 3000),(1800/ 3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",
					0.56234133,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(1800/ 3000),(2300/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3000) factor[(1780/ 3000),(2060/ 3000)]) * ((rpm/ 3000) factor[(2450/ 3000),(2200/ 3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",
					0.63095737,
					1.4
				};
				frequency="0.8 + ((rpm/ 3000) factor[(2100/ 3000),(3000/ 3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3000) factor[(2150/ 3000),(2500/ 3000)])";
			};
		};
		class Library
		{
			libTextDesc="M1A1AIM";
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Tracked\adfrc_abrams\Data\Standard\texturehull_co.paa",
			"ADF_Tracked\adfrc_abrams\Data\Standard\textureturret_co.paa",
			"ADF_Tracked\adfrc_abrams\Data\Standard\texturemisc_co.paa",
			"ADF_Tracked\adfrc_abrams\Data\Standard\texturewheels_co.paa"
		};
		soundEngineOnInt[]=
		{
			"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_start_int",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_start_ext",
			0.56234133,
			2,
			400
		};
		soundEngineOffInt[]=
		{
			"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_shut_int",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"a3\sounds_f_jets\vehicles\air\plane_fighter_02\o_plane_fighter_02_engine_shut_ext",
			0.56234133,
			2,
			600
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		numberPhysicalWheels=18;
		destrType="DestructWreck";
	};
	class adfrc_m1a1aim: adfrc_abrams
	{
		displayName="M1A1AIM";
		author="ADFRC - Quiggs";
		editorPreview = "\ADF_Tracked\adfrc_abrams\adfrc_m1a1aim.jpg";
		model="ADF_Tracked\adfrc_abrams\adfrc_m1a1aim.p3d";
		picture="ADF_Tracked\adfrc_abrams\adfrc_m1a1aim_icon";
		icon="\ADF_Tracked\adfrc_abrams\data\UI\icomap_m1a1_CA.paa";
		side=1;
		scope=2;
		faction="ADFRC_F_MD";
		vehicleClass="Armored";
		crew="adfrc_crewman_amcu";
		typicalCargo[]={};
	};
	class adfrc_m1a1aim_GWOT: adfrc_m1a1aim
	{
		faction = "ADFRC_F_GWOT";
	};
	class adfrc_m1a1aim_PCW: adfrc_m1a1aim
	{
		faction = "ADFRC_F_PCW";
	};
};

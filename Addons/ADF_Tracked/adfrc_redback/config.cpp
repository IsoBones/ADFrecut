class CfgPatches
{
	class adfrc_redback
	{
		addonRootClass="ADF_Tracked";
		requiredAddons[]=
		{
			"A3_Armor_F_EPB",
			"ADF_Core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"adfrc_redback_base",
			"adfrc_redback"
		};
		weapons[]=
		{
			"ADFRC_redback_Mk44",
			"ADFRC_redback_coax",
			"ADFRC_redback_mag58_rws",
			"ADFRC_spike_launcher"
		};
		magazines[]=
		{
			"ADFRC_redback_110RND_30mm_AP",
			"ADFRC_redback_110RND_30mm_MP",
			"ADFRC_110RND_30mm_AB",
			"ADFRC_redback_1000Rnd_762x51_Tracer",
			"ADFRC_redback_200Rnd_762x51_Tracer",
			"ADFRC_2RND_Spike"
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
class Optics_Gunner_APC_02: Optics_Armored
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
					class CommanderOptics;
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
	};
	class APC_Tracked_03_base_F: Tank_F{};
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F{};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F{};
	class adfrc_redback_base: I_APC_tracked_03_cannon_F
	{
		author="ADFRC - Quiggs";
		mapSize=8.9799995;
		_generalMacro="adfrc_redback_base";
		simulation="tankX";
		engineMOI=10;
		enginePower=650;
		peakTorque=3000;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		thrustDelay=0.25;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		fuelCapacity=24;
		brakeIdleSpeed=0.3;
		maxSpeed=70;
		slowSpeedForwardCoef=0.40000001;
		normalSpeedForwardCoef=0.70000002;
		minOmega=100;
		maxOmega=350;
		idleRpm=800;
		redRpm=4000;
		engineLosses=15;
		transmissionLosses=15;
		antiRollbarForceCoef=15;
		antiRollbarForceLimit=12;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=55;
		clutchStrength=40;
		latency=1.5;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.939394,0.42424199,0.909091,0.63636398,0.909091,0.66666698,1,0.66666698};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.45,
				"N",
				0,
				"D1",
				5.2,
				"D2",
				4.1,
				"D3",
				3.7,
				"D4",
				2.0,
				"D5",
				1.0
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		tankTurnForce=600000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.91000003;
		accelAidForceCoef=3;
		accelAidForceYOffset=-3.5;
		accelAidForceSpd=3;
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
				mass=150;
				MOI=10;
				dampingRate=2150;
				dampingRateInAir=2150;
				dampingdamaged=10;
				dampingRateDestroyed=3400;
				maxDroop=0.18;
				maxCompression=0.18;
				sprungMass=4000;
				springStrength=400000;
				springDamperRate=60000;
				maxBrakeTorque=10000;
				latStiffX=2;
				latStiffY=33;
				longitudinalStiffnessPerUnitGravity=10000;
				frictionVsSlipGraph[]=
				{
					{0,0.55000001},
					{0.30000001,1.28},
					{0.64999998,0.55000001}
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
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
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
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0;
				maxCompression=0;
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
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0;
				maxCompression=0;
			};
		};
		editorSubcategory="EdSubcat_APCs";
		scope=0;
		transportSoldier=8;
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
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		waterResistance=3;
		waterDamageEngine=0.1;
		maxFordingDepth=-1.25;
		wheelCircumference=1.95;
		tracksSpeed=-1.27;
		driverAction="Driver_APC_tracked_03_cannon_F_out";
		driverInAction="Driver_APC_tracked_03_cannon_F_in";
		viewDriverInExternal=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		LODDriverTurnedOut=1100;
		LODDriverTurnedIn=1201;
		LODDriverOpticsIn=1202;
		driverForceOptics=1;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		driverInfoPanelCameraPos="driverview_old";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.44999999;
			minFov=0.23;
			maxFov=0.44999999;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
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
		extCameraPosition[]={0,3,-10};
		forceHideDriver=0;
		armor=900;
		armorStructural=6;
		armorLights=0.075000003;
		crewExplosionProtection=0.99949998;
		damageResistance=0.0054700002;
		crewVulnerable=1;
		model="\ADF_Tracked\adfrc_redback\adfrc_redback.p3d";
		picture="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\APC_Tracked_03_Base_ca.paa";
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.30000001;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.34999999;
			};
			class HitEngine: HitEngine
			{
				armor=0.80000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.40000001;
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
				armor=-400;
				minimalHit=0.090000004;
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
				armor=-400;
				minimalHit=0.090000004;
				explosionShielding=0.80000001;
				passThrough=0;
			};
		};
		animationSourceHatch="";
		selectionFireAnim="";
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
		};
		insideSoundCoef=0.89999998;
		cost=1000000;
		threat[]={0.80000001,0.60000002,0.60000002};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={25,22,16};
					ambient[]={0,0,0};
					intensity=0.30000001;
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
					color[]={25,22,16};
					ambient[]={0,0,0};
					intensity=0.60000002;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={25,22,16};
					ambient[]={0,0,0};
					intensity=0.60000002;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={25,25,25};
					ambient[]={0,0,0};
					intensity=5;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={25,25,25};
					ambient[]={0,0,0};
					intensity=5;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={25,25,25};
					ambient[]={0,0,0};
					intensity=10;
				};
			};
		};
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
		class RenderTargets
		{
			class Mirror_L
			{
				renderTarget="rendertarget1";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class Mirror_R
			{
				renderTarget="rendertarget2";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class commander_display
			{
				renderTarget="rendertarget4";
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
					fov=0.80000001;
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
		};
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
		smokeLauncherAngle=140;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						body = "commanderturret";
						gun = "commandergun";
						animationSourceBody = "commanderturret";
						animationSourceGun = "commandergun";
						gunBeg="Usti hlavne4";
						gunEnd="Konec hlavne4";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher",
							"ADFRC_redback_mag58_rws",
							"Laserdesignator_mounted"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"ADFRC_redback_1000Rnd_762x51_Tracer",
							"ADFRC_redback_1000Rnd_762x51_Tracer",
							"Laserbatteries"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="Commander_APC_tracked_03_cannon_F_out";
						gunnerInAction="Commander_APC_tracked_03_cannon_F_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						minOutElev=-10;
						maxOutElev=15;
						initOutElev=0;
						minOutTurn=-45;
						maxOutTurn=90;
						initOutTurn=0;
						gunnerForceOptics=1;
						usePip=2;
						turretFollowFreeLook=2;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						LODTurnedIn=1000;
						LODOpticsIn=0;
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
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_02
						{
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
						gunnerHasFlares=1;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_turret";
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
								armorComponent="hit_com_gun";
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
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				gunnerAction="Gunner_APC_tracked_03_cannon_F_out";
				gunnerInAction="Gunner_APC_tracked_03_cannon_F_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				weapons[]=
				{
					"ADFRC_redback_Mk44",
					"ADFRC_spike_launcher",
					"ADFRC_redback_coax"
				};
				magazines[]=
				{
					"ADFRC_redback_110RND_30mm_AP",
					"ADFRC_redback_110RND_30mm_MP",
					"ADFRC_110RND_30mm_AB",
					"ADFRC_redback_1000Rnd_762x51_Tracer",
					"ADFRC_redback_1000Rnd_762x51_Tracer",
					"ADFRC_2RND_Spike",
					"ADFRC_2RND_Spike"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				forceHideGunner=0;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-10;
				maxElev=60;
				initElev=0;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				usePip=2;
				LODTurnedIn=1000;
				LODOpticsIn=0;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				startEngine=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				selectionFireAnim="zasleh2";
				commanding=1;
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
				class OpticsIn: Optics_Gunner_APC_02
				{
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
				turretInfoType="RscOptics_APC_Tracked_03_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.30000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext_damage.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext_destruct.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2_damage.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2_destruct.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int_damage.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int_damage.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2_damage.rvmat",
				"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Int2_damage.rvmat"
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
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class autocannon_30mm_revolving
			{
				source="revolving";
				weapon="autocannon_30mm";
			};
			class Smoke_source
			{
				source="revolving";
				weapon="SmokeLauncher";
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
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetTurret",
					0
				};
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags2
			{
				displayName="$STR_A3_animationsources_showcoverhull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				forceAnimatePhase=0;
				forceAnimate[]=
				{
					"showCamonetHull",
					0
				};
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags2",
					1
				};
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags",
					0
				};
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_A3_animationsources_showtoolshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showBags",
			0,
			"showBags2",
			0,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showTools",
			0
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		textureList[]=
		{
			"standard",
			1
		};
		class TextureSources
		{
			class standard
			{
				displayName="standard";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{};
				factions[]=
				{
					"ADF"
				};
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_APC_Tracked_03_base_F_Library0";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=24;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_0shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20_F
			{
				weapon="arifle_Mk20_F";
				count=2;
			};
			class _xx_LMG_Mk200_F
			{
				weapon="LMG_Mk200_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
	class adfrc_redback: adfrc_redback_base
	{
		displayName="AS21 Redback";
		author="ADFRC - Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_tracked_03_cannon_F.jpg";
		model="ADF_Tracked\adfrc_redback\adfrc_redback.p3d";
		picture="ADF_Tracked\adfrc_abrams\adfrc_m1a1aim_icon";
		icon="\ADF_Tracked\adfrc_abrams\data\UI\icomap_m1a1_CA.paa";
		side=1;
		scope=2;
		faction="ADFRC_F_MD";
		vehicleClass="Armored";
		crew="ADFRC_MD_AMCU_Soldier_Crewman";
		typicalCargo[]=
		{
			"ADFRC_rifleman_amcu"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class ProxyAPC_tracked_03_wreck_F: ProxyRetex
	{
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoNet",
			"CamoSlat"
		};
		model="a3\Armor_F_EPB\APC_Tracked_03\APC_tracked_03_wreck_F.p3d";
	};
};
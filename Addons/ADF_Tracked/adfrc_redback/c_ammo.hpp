class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class cfgCloudlets 
{
	class MachineGunEject;
	class MachineGunCartridge;
	class ADFRC_redback_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 4", "- directionY * 4", "- directionZ * 4" };
		moveVelocityVar[] = { "-directionX * 1", "- directionY * 1", "- directionZ * 1" };
		lifeTime = 20;
		size[] = {3.5};
		bounceOnSurface = 0.3;
	};
	class ADFRC_redback_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 4", "- directionY * 4", "- directionZ * 4" };
		moveVelocityVar[] = { "-directionX * 1", "- directionY * 1", "- directionZ * 1" };
		lifeTime=20;
		size[]={3.5};
		bounceOnSurface=0.25;
	};
	class ADFRC_redback_mag58_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 10;
		size[] = {1.5};
		bounceOnSurface = 0.3;
	};
	class ADFRC_redback_mag58_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={1.5};
		bounceOnSurface=0.25;
	};
};
class ADFRC_Mk44_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_redback_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_Mk44_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_redback_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_redback_mag58_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_redback_mag58_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_redback_mag58_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_redback_mag58_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class Components;
	class SensorTemplateIR;
	class B_30mm_MP_Tracer_Red;
	class ADFRC_redback_30mm_MP: B_30mm_MP_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 70;
		indirectHit = 8;
		indirectHitRange = 3;
		explosive = 0.5;
		caliber = 4;
		tracerScale = 2.25;
		airLock = 1;
		canLock = 2;
	};
	class B_30mm_APFSDS;
	class ADFRC_redback_30mm_AP: B_30mm_APFSDS
	{
		hit = 110;
		indirectHit = 1;
		indirectHitRange = 1;
		caliber = 4;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		airLock = 1;
		canLock = 2;
	};
	class B_12Gauge_Pellets_Submunition_Deploy;
	class ADFRC_30mm_airburst_Deploy: B_12Gauge_Pellets_Submunition_Deploy
	{
		airFriction=-0.0066999998;
		hit=25;
		typicalSpeed=360;
		deflecting=0;
	};
	class B_30mm_HE_Tracer_Red;
	class ADFRC_30mm_airburst: B_30mm_HE_Tracer_Red
	{
		cost=1;
		hit=25;
		simulationStep=9.9999997e-005;
		explosive = 0.1;
		triggerDistance=100;
		triggerTime=0.1;
		cartridge="";
		airLock = 1;
		canLock = 2;
		submunitionAmmo="ADFRC_30mm_airburst_Deploy";
		submunitionConeAngle=2;
		triggerSpeedCoef[]={0.85000002,1};
		submunitionConeType[]=
		{
			"poissondisc",
			40
		};
	};
	class B_762x54_Tracer_Green;
	class ADFRC_redback_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		airLock = 1;
		canLock = 2;
	};
	class M_Titan_AT_long;
	class ADFRC_Spike_LR2: M_Titan_AT_long
	{
		submunitionAmmo="ammo_Penetrator_Titan_AT_long";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		warheadName="TandemHEAT";
		autoSeekTarget = 1;
		cameraViewAvailable = 1;
		hit=150;
		indirectHit=40;
		indirectHitRange=4;
		timeToLive=35;
		initTime=0.15000001;
		thrustTime=8;
		thrust=35;
		maxSpeed=180;
		typicalSpeed=1660;
		missileManualControlCone = 45;
		missileLockCone=90;
		missileLockMaxDistance=5000;
		missileLockMinDistance=200;
		missileLockMaxSpeed=55;
		maxControlRange=5000;
		weaponLockSystem="4 + 8 + 16";
		airLock = 1;
		canLock = 2;
		irLock = 1;
		laserLock = 1;
		cmImmunity=0.5;
		flightProfiles[]=
		{
			"Direct",
			"TopDown",
			"LOALDistance",
			"Cruise",
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=200;
			descendDistance=240;
			minDistance=240;
			ascendAngle=30;
		};
		class LoalDistance : Direct
		{
			lockSeekDistanceFromParent = 300.0;
		};
		class Cruise : Direct
		{
			preferredFlightAltitude = 50.0;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=250;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=250;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						animDirection = "mainTurret";
						maxTrackableSpeed=35;
						angleRangeHorizontal=9.5;
						angleRangeVertical=6;
						maxTrackableATL=0;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=250;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=250;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						animDirection = "mainTurret";
						maxTrackableSpeed=35;
						angleRangeHorizontal=9.5;
						angleRangeVertical=6;
						maxTrackableATL=0;
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_redback_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_redback_762x51_Tracer";
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_redback_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_redback_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red;
	class ADFRC_redback_110RND_30mm_MP: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm HE";
		displaynameshort = "MK264 MPLD-T";
		ammo = "ADFRC_redback_30mm_MP";
		tracersEvery = 1;
		count = 110;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class ADFRC_redback_110RND_30mm_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm AP";
		displayNameShort = "MK258 APFSDS-T";
		ammo = "ADFRC_redback_30mm_AP";
		tracersEvery = 1;
		count = 110;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class ADFRC_110RND_30mm_AB: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm AB";
		displayNameShort = "MK310 PABM-T";
		ammo = "ADFRC_30mm_airburst";
		tracersEvery = 1;
		count = 110;
	};
	class 2Rnd_GAT_missiles;
	class ADFRC_2RND_Spike: 2Rnd_GAT_missiles
	{
		scope = 2;
		ammo="ADFRC_Spike_LR2";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		displayName = "SPIKE-LR";
		displayNameShort = "SPIKE-LR";
		initSpeed=100;
		count=2;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_coax_ext;
	class ADFRC_redback_coax: LMG_coax_ext 
	{
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 1;
		magazines[]=
		{
			"ADFRC_redback_1000Rnd_762x51_Tracer",
			"ADFRC_redback_200Rnd_762x51_Tracer"
		};
		class GunParticles {

			class effect1 {
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
		};
	};
	class ADFRC_redback_mag58_RWS: LMG_coax_ext 
	{
		displayName = "MG 7.62mm Mag 58 RWS";
		scope = 1;
		canlock = 2;
		FCSMaxLeadSpeed = 55.5556;
		ballisticsComputer = 1+2+16;
		weaponLockSystem = 4;
		weaponLockDelay = 2;
		magazines[]=
		{
			"ADFRC_redback_1000Rnd_762x51_Tracer",
			"ADFRC_redback_200Rnd_762x51_Tracer"
		};
		class GunParticles 
		{

			class effect1 
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne4";
				directionName = "Konec hlavne4";
			};
			class effect2 
			{
				effectName = "ADFRC_redback_mag58_casingeject";
				positionName = "case_eject_start";
				directionName = "case_eject_end";
			};
			class effect3 
			{
				effectName = "ADFRC_redback_mag58_linkeject";
				positionName = "link_eject_start";
				directionName = "link_eject_end";
			};
		};
	};
	class player;
	class autocannon_Base_F;
	class autocannon_30mm_CTWS;
	class ADFRC_redback_Mk44: autocannon_30mm_CTWS
	{
		muzzles[] = {"AP","HE","AB"};
		magazines[] = {"ADFRC_redback_110RND_30mm_MP","ADFRC_redback_110mm_AP","ADFRC_110RND_30mm_AB"};
		magazineReloadTime=1;
		aiDispersioncoefX = 4;
		aiDispersioncoefY = 6;
		airateoffire = 2;
		airateoffiredistance = 1000;
		airLock = 1;
		canLock = 2;
		ballisticsComputer = 1+2+16;
		FCSMaxLeadSpeed = 55.5556;
		weaponLockSystem = 4;
		weaponLockDelay = 2;
		class GunParticles
		{
			class Effect1
			{
				effectName = "AutoCannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Effect2 
			{
					effectName = "ADFRC_mk44_casingeject";
					positionName = "mk44_eject_start";
					directionName = "mk44_eject_end";
			};
			class Effect3
			{
					effectName = "ADFRC_mk44_linkeject";
					positionName = "mk44_eject_start";
					directionName = "mk44_eject_end";
			};
		};
		class HE: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II Chain Gun";
			showSwitchAction=1;
			airLock = 1;
			canLock = 2;
			ballisticsComputer = 1+2+16;
			FCSMaxLeadSpeed = 55.5556;
			weaponLockSystem = 4;
			weaponLockDelay = 2;
			magazines[]=
			{
				"ADFRC_redback_110RND_30mm_MP"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.0018;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II Chain Gun";
			showSwitchAction=1;
			airLock = 1;
			canLock = 2;
			ballisticsComputer = 1+2+16;
			FCSMaxLeadSpeed = 55.5556;
			weaponLockSystem = 4;
			weaponLockDelay = 2;
			magazines[]=
			{
				"ADFRC_redback_110RND_30mm_AP"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.00108;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AB: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II Chain Gun";
			showSwitchAction=1;
			airLock = 2;
			canLock = 2;
			ballisticsComputer = 1+2+16;
			FCSMaxLeadSpeed = 55.5556;
			weaponLockSystem = 4;
			weaponLockDelay = 2;
			magazines[]=
			{
				"ADFRC_110RND_30mm_AB"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.00108;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class SomeRadarSensorComponent
					{
						componentType = "ActiveRadarSensorComponent";
						class AirTarget		// ranges for targets with sky background
						{
							minRange	= 3000;	// minimum possible range in meters
							maxRange	= 3000;	// maximum possible range in meters
							objectDistanceLimitCoef	= -1; // range not limited by obj. view distance
							viewDistanceLimitCoef	= -1; // range not limited by view distance
						};
						class GroundTarget	// ranges for targets with ground background
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
				};
			};
		};
	};
	class HMG_M2_Mounted;
	class ADFRC_redback_M2HBQCB_RWS: HMG_M2_Mounted 
	{
		displayName="Kongsberg RWS - M2HB QCB";
		ballisticsComputer = "2 + 16";
		class GunParticles 
		{
			class effect1
			{
				positionName = "m2_muzzle_end";
				directionName = "m2_muzzle";
				effectName = "MachineGunCloud";
			};
			class effect2 
			{
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
				positionName = "nabojnicestart";
			};
			class effect3 
			{
				directionName = "case_eject_dir";
				effectName = "MachineGunCartridge2";
				positionName = "case_eject_pos";
			};
		};
	};
	class MissileLauncher;
	class missiles_titan;
	class ADFRC_spike_launcher: missiles_titan
	{
		displayName="Missile Launcher";
		showAimCursorInternal=0;
		magazineReloadTime=30;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"ADFRC_2RND_Spike"
		};
		ballisticsComputer = 1+2+16;
		FCSMaxLeadSpeed = 55.5556;
		weaponLockSystem = 12;
		weaponLockDelay = 5;
		cmImmunity=0.5;
		modes[]=
		{
			"Player",
			"TopDown"
		};
		class Player: MissileLauncher
		{
			textureType="semi";
			reloadTime=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
					1.4125376,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			minRange=100;
			minRangeProbab=0.5;
			midRange=600;
			midRangeProbab=0.85000002;
			maxRange=5000;
			maxRangeProbab=0.89999998;
		};
		class TopDown: Player
		{
			textureType="topDown";
			displayName="Top-down";
			minRange=200;
			minRangeProbab=0.40000001;
			midRange=1000;
			midRangeProbab=0.89999998;
			maxRange=5000;
			maxRangeProbab=0.94999999;
		};
	};
};
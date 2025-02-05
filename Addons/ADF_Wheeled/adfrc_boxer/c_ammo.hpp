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
	class MachineGunCartridge;
	class ADFRC_boxer_cartridge: MachineGunCartridge
	{
		moveVelocity[] = { "-directionX * 4", "- directionY * 4", "- directionZ * 4" };
		moveVelocityVar[] = { "-directionX * 1", "- directionY * 1", "- directionZ * 1" };
		lifeTime = 20;
		size[] = {4};
		bounceOnSurface = 0.3;
	};
	class MachineGunEject;
	class ADFRC_boxer_link: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 2", "- directionY * 2", "- directionZ * 2" };
		moveVelocityVar[] = { "-directionX * 1", "- directionY * 1", "- directionZ * 1" };
		lifeTime = 20;
		size[] = {5.5};
		bounceOnSurface = 0.3;
	};
};
class ADFRC_mk30_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_boxer_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_mk30_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_boxer_link";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class B_30mm_MP_Tracer_Red;
	class ADFRC_boxer_30mm_HE: B_30mm_MP_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 32;
		indirectHit = 13;
		indirectHitRange = 5;
		explosive = 0.8;
		caliber = 4;
		tracerScale = 2.25;
		airLock = 1;
		canLock = 2;
		class CamShakePlayerFire
		{
			power = 0.5;
			duration = 0.25;
			frequency = 20;
		};
	};
	class B_30mm_APFSDS;
	class ADFRC_boxer_30mm_AP: B_30mm_APFSDS
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
		class CamShakePlayerFire
		{
			power = 0.5;
			duration = 0.25;
			frequency = 20;
		};
	};
	class B_762x54_Tracer_Green;
	class ADFRC_boxer_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
		airLock = 1;
		canLock = 2;
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_boxer_600Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_boxer_762x51_Tracer";
		displayName = "600 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 600;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_boxer_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_boxer_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class ADFRC_boxer_360RND_30mm_HE: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm HE";
		displaynameshort = "MK266 HEI-T";
		ammo = "ADFRC_boxer_30mm_HE";
		tracersEvery = 1;
		count = 125;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class ADFRC_boxer_360RND_30mm_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm AP";
		displayNameShort = "PMC287 APFSDS";
		ammo = "ADFRC_boxer_30mm_AP";
		tracersEvery = 1;
		count = 125;
	};
	class 2Rnd_GAT_missiles;
	class ADFRC_2RND_Spike: 2Rnd_GAT_missiles
	{
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
	class Default;
	class Player;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class Laserdesignator_mounted;
	class ADFRC_laser_commander: Laserdesignator_mounted
	{
		muzzleEnd = "lasercom_dir";
		muzzlePos = "lasercom_pos";
		irLaserEnd = "lasercom_dir";
		irLaserPos = "lasercom_pos";

	};
	class ADFRC_laser_gunner: Laserdesignator_mounted
	{
		muzzleEnd = "lasergun_dir";
		muzzlePos = "lasergun_pos";
		irLaserEnd = "lasercom_dir";
		irLaserPos = "lasercom_pos";
	};
	class LMG_coax_ext;
	class ADFRC_boxer_coax: LMG_coax_ext
	{
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 1;
		canlock = 2;
		FCSMaxLeadSpeed = 70;
		ballisticsComputer = 1+2+16;
		weaponLockSystem = 2+4;
		weaponLockDelay = 2;
		magazines[]=
		{
			"ADFRC_boxer_600Rnd_762x51_Tracer",
			"ADFRC_boxer_600Rnd_762x51_Tracer"
		};
		class GunParticles {

			class effect1 {
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						componentType = "IRSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 3000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						LaserSensorComponent = "LaserSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						LaserSensorComponent = "PassiveRadarSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
				};
			};
		};
	};
	class autocannon_Base_F;
	class autocannon_40mm_CTWS;
	class ADFRC_boxer_mk30: autocannon_40mm_CTWS
	{
		displayName = "MK 30-2/ABM 30mm Autocannon";
		muzzles[] = {"AP","HE"};
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
				effectName = "ADFRC_mk30_casingeject";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
			class Effect3
			{
				effectName = "AutoCannonFired";
				positionName = "nabojniceend";
				directionName = "nabojnicestart";
			};
			class Effect4
			{
				effectName = "ADFRC_mk30_linkeject";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
			};
		};
		class HE: autocannon_Base_F
		{
			displayName = "MK 30-2/ABM 30mm Autocannon";
			magazines[] = {"ADFRC_boxer_360RND_30mm_HE"};
			class player: player
			{
				dispersion = 0.0015;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "MK 30-2/ABM 30mm Autocannon";
			magazines[] = {"ADFRC_boxer_360RND_30mm_AP"};
			class player: player
			{
				dispersion = 0.0009;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: player
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 3;
				burstRangeMax = 6;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 200;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 400;
				midRangeProbab = 0.7;
				maxRange = 800;
				maxRangeProbab = 0.8;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 5;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 600;
				minRange = 600;
				minRangeProbab = 0.75;
				midRange = 800;
				midRangeProbab = 0.8;
				maxRange = 1200;
				maxRangeProbab = 0.8;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 3;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 3;
				aiRateOfFireDistance = 1000;
				minRange = 1000;
				minRangeProbab = 0.8;
				midRange = 1500;
				midRangeProbab = 0.8;
				maxRange = 2000;
				maxRangeProbab = 0.7;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 1;
				burstRangeMax = 1;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 1800;
				minRange = 1800;
				minRangeProbab = 0.74;
				midRange = 2400;
				midRangeProbab = 0.65;
				maxRange = 3000;
				maxRangeProbab = 0.05;
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						componentType = "IRSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 3000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						LaserSensorComponent = "LaserSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						LaserSensorComponent = "PassiveRadarSensorComponent";
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
						animDirection = "mainturret";
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
				};
			};
		};
	};
	class HMG_M2_Mounted;
	class ADFRC_boxer_M2HBQCB_RWS: HMG_M2_Mounted
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
	class missiles_titan;
	class ADFRC_spike_launcher: missiles_titan
	{
		displayName="Missile Launcher";
		magazines[]=
		{
			"ADFRC_2RND_Spike",
			"2Rnd_GAT_missiles"
		};
		class GunParticles
		{
			class Effect1
			{
				effectName = "AutoCannonFired";
				positionName = "atgmeffect_f_dir";
				directionName = "atgmeffect_f_pos";
			};
			class Effect2
			{
				effectName = "AutoCannonFired";
				positionName = "atgmeffect_r_dir";
				directionName = "atgmeffect_r_pos";
			};
		};
	};
	class TruckHorn3;
	class adfrc_boxerhorn: TruckHorn3
	{
		drySound[]= {"adf_wheeled\adfrc_boxer\sound\boxer-horn.ogg",1,1,350};
		soundcontinuous = 1;
	};
};
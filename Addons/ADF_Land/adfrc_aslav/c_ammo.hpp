class cfgCloudlets {
	class MachineGunCartridge;
	class MachineGunEject;
	class ADFRC_aslav_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 20;
		size[] = {3};
		bounceOnSurface = 0.25;
	};
	class ADFRC_aslav_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={6};
		bounceOnSurface=0.25;
	};
	class ADFRC_aslav_mag58_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 10;
		size[] = {1.1};
		bounceOnSurface = 0.25;
	};
	class ADFRC_aslav_mag58_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={1.1};
		bounceOnSurface=0.25;
	};
};
class ADFRC_m242_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_aslav_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_m242_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_aslav_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_mag58_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_aslav_mag58_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_mag58_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_aslav_mag58_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class B_30mm_MP_Tracer_Red;
	class ADFRC_aslav_25mm_HE: B_30mm_MP_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 28;
		indirectHit = 11;
		indirectHitRange = 3;
		explosive = 0.6;
		caliber = 1.15;
		tracerScale = 2.25;
			class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 100;
		};	
	};
	class B_30mm_APFSDS;
	class ADFRC_aslav_25mm_AP: B_30mm_APFSDS
	{
		hit = 100;
		indirectHit = 1;
		indirectHitRange = 1;
		caliber = 5;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		class CamShakePlayerFire
		{
		power = 5;
		duration = 0.1;
		frequency = 100;
		};
	};
	class B_762x54_Tracer_Green;
	class ADFRC_ASLAV_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_aslav_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_ASLAV_762x51_Tracer";
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_aslav_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_ASLAV_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class ADFRC_aslav_360RND_25MM_HE: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope = 2;
		displayName = "25MM HE-T";
		displaynameshort = "25MM HE-T";
		ammo = "ADFRC_aslav_25mm_HE";
		tracersEvery = 1;
		count = 300;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class ADFRC_aslav_360RND_25MM_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		scope = 2;
		displayName = "25MM Armor Piercing";
		displayNameShort = "25MM APDS-T";
		ammo = "ADFRC_aslav_25mm_AP";
		tracersEvery = 1;
		count = 120;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_RCWS;
	class MGun;
	class HMG_M2_Mounted;
	class ADFRC_aslav_coax: LMG_RCWS {
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 1;
		magazines[]=
		{
			"ADFRC_aslav_1000Rnd_762x51_Tracer",
			"ADFRC_aslav_1000Rnd_762x51_Tracer"
		};
		class GunParticles {

			class effect1 {
				effectName = "MachineGunCloud";
				positionName = "Konec hlavne2";
				directionName = "Usti hlavne2";
			};
			class effect2 {
				effectName = "ADFRC_mag58_casingeject";
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
			};
			class effect3 {
				effectName = "ADFRC_mag58_linkeject";
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
			};
		};
		class manual: MGun {
			displayName = "7.62 mm";
			reloadTime = 0.0857;
			dispersion = 0.001010;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.15, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.15, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};

				begin1[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",
					1.3,
					1,
					1400
				};
				begin2[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_02",
					1.3,
					1,
					1400
				};
				begin3[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_03",
					1.3,
					1,
					1400
				};
				begin4[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",
					1.3,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				soundContinuous = 0;
				soundBurst = 0;
				minRange = 0;
				minRangeProbab = 0.010000;
				midRange = 1;
				midRangeProbab = 0.010000;
				maxRange = 2;
				maxRangeProbab = 0.010000;
			};	
		};
		class close: manual {
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.050000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.100000;
			showToPlayer = 0;
		};
		class short: close {
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000;
			midRange = 200;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.100000;
		};
		class medium: close {
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000;
			midRange = 500;
			midRangeProbab = 0.700000;
			maxRange = 600;
			maxRangeProbab = 0.100000;
		};
		class far: close {
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.050000;
			midRange = 850;
			midRangeProbab = 0.400000;
			maxRange = 1100;
			maxRangeProbab = 0.010000;
		};
	};
	class ADFRC_aslav_mag58: ADFRC_aslav_coax
	{
		displayName = "MG 7.62mm Mag 58 Flex";
		magazines[] = {"ADFRC_aslav_200Rnd_762x51_Tracer"};

		class GunParticles {
			class effect1
			{
				positionName = "gun_muzzle";
				directionName = "gun_chamber";
				effectName = "MachineGunCloud";
			};
		};
	};
	class autocannon_Base_F;
	class player;
	class ADFRC_aslav_M242: autocannon_Base_F
	{
		aiDispersioncoefX = 4;
		aiDispersioncoefY = 6;
		airateoffire = 2;
		airateoffiredistance = 1000;
		canlock = 0;

		FCSMaxLeadSpeed = 0;

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
				effectName = "ADFRC_m242_casingeject";
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
		};
		class Effect3
		{
				effectName = "ADFRC_m242_linkeject";
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
		};
	};

	displayName = "M242 25mm Bushmaster Chain Gun";
	muzzles[] = {"AP","HE"};
	class HE: autocannon_Base_F {
		displayName = "M242 25mm Bushmaster Chain Gun";
		magazines[] = {"ADFRC_aslav_360RND_25MM_HE","ADFRC_aslav_360RND_25MM_AP"};
		magazineWell[] = {};
		canlock = 0;
		magazineReloadTime = 0.3;
		sounds[] = {"StandardSound"};
		class StandardSound
        {
            begin1[]= {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_1p.ogg",1.3,1,1500};
			begin2[]= {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_close.ogg",1.3,1,1500};
            soundBegin[]= {"begin1",0.5,"begin2",0.5};
        };
		modes[] = {"single","100rpm","player","close","short","medium","far"};
		class player: player
		{
			reloadTime=__EVAL(60/200);
			textureType = "fullAuto";
		};
		class 100rpm: player
		{
			reloadTime=__EVAL(60/100);
			textureType = "burst";
		};
		class single: player
		{
			autofire=0;
			textureType = "semi";
		};
		FCSMaxLeadSpeed = 0;
		minZeroing = 0;
		class SoundTails
        {
			class TailTrees
                {
                    sound[] = {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_mid.ogg",1.0,1,1200};
                    frequency = 1;
                    volume = "(1-interior/1.4)*trees";
                };
            class TailForest
                {
                    sound[] = {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_mid.ogg",1.0,1,1200};
                    frequency = 1;
                    volume = "(1-interior/1.4)*forest";
                };
            class TailInterior
                {
                    sound[] = {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_mid.ogg",1.9952624,1,1200};
                    frequency = 1;
                    volume = "interior";
                };
            class TailMeadows
                {
                    sound[] = {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_mid.ogg",1.0,1,1200};
                    frequency = 1;
                    volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                };
            class TailHouses
                {
                    sound[] = {"ADF_Land\ADFRC_aslav\sound\M252\adfrc_m252_mid.ogg",1.0,1,1200};
                    frequency = 1;
                    volume = "(1-interior/1.4)*houses";
                };
        };
	};
	class AP: autocannon_Base_F {
		displayName = "25mm M242 - AP-T";
		magazines[] = {"ADFRC_aslav_360RND_25MM_AP"};
		magazineWell[] = {};
		canlock = 0;
		showToPlayer=0;
		class player: player
		{
			showToPlayer = 0;
			reloadTime=__EVAL(60/200);
		};
		class close: player
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/200);
			aiBurstTerminable=1;
			burst=8;
			burstRangeMax=6;
			aiRateOfFire = 0.35;
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
			showToPlayer = 0;
			reloadTime=__EVAL(60/200);
		};
		class medium: short
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/200);
		};
		class far: medium
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/100);
		};
		};
	};
	class ADFRC_aslav_M2HBQCB: HMG_M2_Mounted 
	{
		displayName="12.7mm M2HB QCB MG";
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
	class ADFRC_aslav_M2HBQCB_RWS: ADFRC_aslav_M2HBQCB 
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
};
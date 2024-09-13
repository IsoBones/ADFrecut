class cfgCloudlets {
	class MachineGunCartridge;
	class MachineGunEject;
	class ADFRC_abrams_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 20;
		size[] = {3};
		bounceOnSurface = 0.25;
	};
	class ADFRC_abrams_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={6};
		bounceOnSurface=0.25;
	};
	class ADFRC_abrams_mag58_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime = 10;
		size[] = {1.1};
		bounceOnSurface = 0.25;
	};
	class ADFRC_abrams_mag58_eject: MachineGunEject
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		lifeTime=20;
		size[]={1.1};
		bounceOnSurface=0.25;
	};
};
class ADFRC_mag58_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_abrams_mag58_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFRC_mag58_linkeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_abrams_mag58_eject";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class B_762x54_Tracer_Green;
	class ADFRC_abrams_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_abrams_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_abrams_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_abrams_100rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_abrams_762x51_Tracer";
		displayName = "100 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 100;
		type = "2*		256";
		tracersEvery = 4;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class MGun;
	class HMG_M2_Mounted;
	class LMG_coax_ext;
	class ADFRC_abrams_coax: LMG_coax_ext
	{
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 1;
		magazines[]=
		{
			"ADFRC_abrams_1000Rnd_762x51_Tracer",
			"ADFRC_abrams_200Rnd_762x51_Tracer"
		};
		class GunParticles 
		{

			class effect1 
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne3";
				directionName = "konec hlavne3";
			};
		};
	};	
	class ADFRC_abrams_mag58: ADFRC_abrams_coax
	{
		displayName = "MG 7.62mm Mag 58";
		magazines[]=
		{
			"ADFRC_abrams_1000Rnd_762x51_Tracer",
			"ADFRC_abrams_200Rnd_762x51_Tracer",
			"ADFRC_abrams_100Rnd_762x51_Tracer"
		};
		class GunParticles 
		{
			class effect1
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne4";
				directionName = "konec hlavne4";
			};
		};
		/*class manual: MGun {
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
		class close: manual 
		{
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
		class short: close 
		{
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
		class medium: close 
		{
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
		};*/
	};
	class player;
	class cannon_120mm_long;
	class ADFRC_abrams_M256: cannon_120mm_long
	{
		displayName = "M256 120mm Cannon";
		aiDispersioncoefX = 4;
		aiDispersioncoefY = 6;
		airateoffire = 2;
		airateoffiredistance = 1000;
		canlock = 1;
		reloadMagazineSound[]={"\ADF_Tracked\adfrc_abrams\sounds\weapons\shells\adfrc_abrams_reload",3.51189,1,1};
		magazineReloadTime = 6;
		reloadSound[]={"\ADF_Tracked\adfrc_abrams\sounds\weapons\shells\adfrc_abrams_reload",3.51189,1,1};
		reloadTime = 6;
	};
	class ADFRC_abrams_M2HBQCB: HMG_M2_Mounted 
	{
		displayName="12.7mm M2HB QCB MG";
		class GunParticles 
{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
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
	class ADFRC_abrams_M2HBQCB_RWS: ADFRC_abrams_M2HBQCB 
	{
		displayName="Kongsberg RWS - M2HB QCB";
		ballisticsComputer = "2 + 16";
		class GunParticles 
{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
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
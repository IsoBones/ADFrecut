class cfgCloudlets {
	class MachineGunCartridge;
	class ADFU_land_aslav_mag58_cartridge: MachineGunCartridge {
		lifeTime = 10;
		size[] = {0.85};
		bounceOnSurface = 0.25;
	};
};
class ADFU_m242_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFU_land_aslav_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class ADFU_land_aslav_mag58_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFU_land_aslav_mag58_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class cfgAmmo
{
	class B_127x99_Ball;
	class ADFU_land_127x99_Tracer: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		hit = 28;
		indirectHit = 11;
		indirectHitRange = 3;
		explosive = 0.6;
		caliber = 1.15;
		tracerScale = 2.25;
	};
};

class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFU_land_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box
	{
		scope = 1;
		displayName = "1000 Round .50 cal Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_RCWS;
	class MGun;
	class adfu_r400_rws: LMG_RCWS {
		displayName = "M2HB RWS";
		scope = 1;
		magazines[]=
		{
			"ADFU_land_1000rnd_127x99_Tracer"
		};
		ballisticsComputer = 2;

		class GunParticles {

			class effect1 {
				positionName = "machinegun_direction";
				directionName = "machinegun";
				effectName = "MachineGunCloud";
			};
		};

		class manual: MGun {
			displayName = ".50 cal";
			reloadTime = 0.100000;
			dispersion = 0.001010;
			sounds[] = {"StandardSound"};
			class StandardSound
 			{	
				begin1 = ["A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",1.58489,1,2100];
				begin2 = ["A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",1.58489,1,2100];
				begin3 = ["A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",1.58489,1,2100];
				soundBegin = ["begin1",0.33,"begin2",0.33,"begin3",0.34];
				soundsetshot = ["HMG050_Shot_SoundSet","HMG050_Tail_SoundSet"];
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
};
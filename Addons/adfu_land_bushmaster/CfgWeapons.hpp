class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class bma3_bushmaster_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 3;
	};
	class 100Rnd_127x99_mag_Tracer_Red;
	class bma3_bushmaster_1000rnd_127x99_Tracer : 100Rnd_127x99_mag_Tracer_Red{
		scope = 1;
		displayName = "1000 Round 12.7mm Tracer";
		displayNameShort = "Tracer";
		count = 1000;
		tracersEvery = 1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_RCWS;
	class HMG_127;
	class MGun;
	
	class bma3_r400_rws: HMG_127{
		displayName = "EOS R400s-Mk2 12.7mm";
		scope = 1;
		magazines[] = {"bma3_bushmaster_1000rnd_127x99_Tracer"};
		class GunParticles {
			class effect1 {
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
	};
	class bma3_bushmaster_mag58: LMG_RCWS {
		displayName = "7.62MM FN GP MAG-58";
		scope = 1;
		magazines[] = {"bma3_bushmaster_200rnd_762x51_Tracer"};
		ballisticsComputer = 0;
		
		class GunParticles {

			class effect1 {
				positionName = "machinegun_direction";
				directionName = "machinegun";
				effectName = "MachineGunCloud";
			};
		};

		class manual: MGun {
			displayName = "7.62 mm";
			reloadTime = 0.100000;
			dispersion = 0.001010;
			sounds[] = {"StandardSound"};
			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";
				
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.15, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.15, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
				
				begin1[] = {"\bma3_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin2[] = {"\bma3_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin3[] = {"\bma3_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin4[] = {"\bma3_mag58\sound\mag-58.ogg",1.3,1,1400};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
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
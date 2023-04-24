class cfgCloudlets {
	class MachineGunCartridge;
	class ADFU_land_aslav_cartridge: MachineGunCartridge {
		lifeTime = 10;
		size[] = {3.5};
		bounceOnSurface = 0.25;
	};
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
	class B_30mm_MP_Tracer_Red;
	class ADFU_land_aslav_25mm_HE: B_30mm_MP_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 28;
		indirectHit = 11;
		indirectHitRange = 3;
		explosive = 0.6;
		caliber = 1.15;
		tracerScale = 2.25;
	};

	class B_30mm_APFSDS;
	class ADFU_land_aslav_25mm_AP: B_30mm_APFSDS
	{
		hit = 75;
		indirectHit = 1;
		indirectHitRange = 1;
		caliber = 3.8;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};

class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFU_land_aslav_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 3;
	};
	class ADFU_land_aslav_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 3;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class ADFU_land_aslav_360RND_25MM_HE: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope = 2;
		displayName = "25MM HIGH EXPLOSIVE";
		displaynameshort = "25MM HE-MP";
		ammo = "ADFU_land_aslav_25mm_HE";
		tracersEvery = 1;
		count = 360;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class ADFU_land_aslav_360RND_25MM_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		scope = 2;
		displayName = "25MM Armor Piercing";
		displayNameShort = "25MM AP";
		ammo = "ADFU_land_aslav_25mm_AP";
		tracersEvery = 1;
		count = 360;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_RCWS;
	class MGun;
	class ADFU_land_aslav_coax: LMG_RCWS {
		displayName = "COAXIAL 7.62MM MAG-58";
		scope = 1;
		magazines[] = {"ADFU_land_aslav_1000Rnd_762x51_Tracer"};
		ballisticsComputer = 2;

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

				begin1[] = {"\ADFU_weapon_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin2[] = {"\ADFU_weapon_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin3[] = {"\ADFU_weapon_mag58\sound\mag-58.ogg",1.3,1,1400};
				begin4[] = {"\ADFU_weapon_mag58\sound\mag-58.ogg",1.3,1,1400};
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
	class ADFU_land_aslav_mag58: ADFU_land_aslav_coax
	{
		displayName = "7.62MM FN MAG-58";
		magazines[] = {"ADFU_land_aslav_200Rnd_762x51_Tracer"};
		ballisticsComputer = 0;

		class GunParticles {
			class effect1
			{
				positionName = "gun_muzzle";
				directionName = "gun_chamber";
				effectName = "MachineGunCloud";
			};
		};
	};


	class gatling_30mm;
	class ADFU_land_aslav_M242: gatling_30mm
	{
		scope = 2;
		displayName = "M242 25MM Bushmaster";
		magazines[] = {"ADFU_land_aslav_360RND_25MM_HE","ADFU_land_aslav_360RND_25MM_AP"};
		modes[] = {"Single", "LowROF", "HighROF"};
		nameSound = "cannon";
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.15, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.15, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};

				begin1[] = {"ADFU_land_aslav\sound\25mm_cannon",db15,1.0,1000};
				soundBegin[] = {"begin1",1};
 			};
			displayName = "Single";
			sound[] = {"ADFU_land_aslav\sound\25mm_cannon",db15,1.0,1000};
			weaponSoundEffect = "DefaultRifle";
			soundContinuous = 0;
			reloadTime = 0.5;
			flash = "gunfire";
			flashSize = 0.001;
			maxLeadSpeed = 600;
			autoFire = 0;
			aiDispersionCoefX = 2;
			ffMagnitude = 0.2;
			ffFrequency = 2;
			ffCount = 1;
			dispersion = 0.001;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 3000;
			maxRangeProbab = 0.04;
		};
		class LowROF: Mode_Burst
		{
			sounds[] = {StandardSound};
			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.15, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.15, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};

				begin1[] = {"ADFU_land_aslav\sound\25mm_cannon",db15,1.0,1000};
				soundBegin[] = {"begin1",1};
 			};
			displayName = "Low Speed";
			soundContinuous = 0;
			reloadTime = 0.6;
			flash = "gunfire";
			flashSize = 0.001;
			maxLeadSpeed = 600;
			autoFire = 1;
			burst = 1;
			aiDispersionCoefX = 2;
			ffMagnitude = 0.2;
			ffFrequency = 2;
			ffCount = 1;
			dispersion = 0.001;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 3000;
			maxRangeProbab = 0.04;
		};
		class HighROF: Mode_FullAuto
		{
			sounds[] = {StandardSound};
			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.15, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.15, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};

				begin1[] = {"ADFU_land_aslav\sound\25mm_cannon",db15,1.0,1000};
				soundBegin[] = {"begin1",1};
 			};
			displayName = "High Speed";
			soundContinuous = 1;
			reloadTime = 0.315;
			flash = "gunfire";
			flashSize = 0.001;
			maxLeadSpeed = 600;
			autoFire = 1;
			burst = 1;
			aiDispersionCoefX = 2;
			ffMagnitude = 0.2;
			ffFrequency = 2;
			ffCount = 1;
			dispersion = 0.001;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 1200;
			midRangeProbab = 0.7;
			maxRange = 3000;
			maxRangeProbab = 0.04;
		};

		class GunParticles
		{
			class effect_smoke
			{
				effectName = "AutoCannonFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
			// class effect_eject
			// {
				// effectName = "ADFU_m242_casingeject";
				// positionName = "cannon_eject_end";
				// directionName = "cannon_eject_begin";
			// };
		};
	};
};
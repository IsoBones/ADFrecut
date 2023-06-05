class CannonCore;
class Mode_FullAuto;
class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
class 1200Rnd_Gatling_30mm_Heli_Attack_03_F;
class Gatling_30mm_HE_Plane_CAS_01_Yellow_F;
class CfgWeapons
{
	class ADFU_Chaingun_30mm: CannonCore
	{
		scope = 2;
		displayName = "M230 Chaingun";
		magazines[] =
		{
			"ADFU_1200Rnd_Chaingun_30mm",
			"ADFU_1200Rnd_Chaingun_30mm_Yellow",
		};
		canLock = false;
		ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
		cursor = EmptyCursor;
		cursorAim = mg;
		showAimCursorInternal = false;
		modes[] =
		{
			LowROF,
			close,
			short,
			medium,
			far
		};
		nameSound = cannon;
		shotFromTurret = true;
		autoFire = false;
		burst = 5;
		reloadTime = 0.096;
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = MachineGun2;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Shell
			{
				positionName = shell_eject_pos;
				directionName = shell_eject_dir;
				effectName = HeavyGunCartridge1;
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "Low ROF";
			sounds[] = {StandardSound};
			class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
                };
            };
			soundContinuous = false;
			autoFire = true;
			flash = gunfire;
			flashSize = 0.1;
			recoil = Empty;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			burst = 5;
			showToPlayer = true;
			reloadTime = 0.096;
			dispersion = 0.0066;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: LowROF
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 16;
			burstRangeMax = 37;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.75;
		};
		class near: close{};
		class short: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 12;
			burstRangeMax = 32;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.65;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 1000;
			maxRangeProbab = 0.7;
		};
		class medium: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 12;
			burstRangeMax = 28;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.7;
			midRange = 1400;
			midRangeProbab = 0.4;
			maxRange = 1800;
			maxRangeProbab = 0.15;
		};
		class far: close
		{
			aiBurstTerminable = true;
			showToPlayer = false;
			burst = 9;
			burstRangeMax = 20;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1400;
			minRange = 1400;
			minRangeProbab = 0.5;
			midRange = 1800;
			midRangeProbab = 0.15;
			maxRange = 2500;
			maxRangeProbab = 0.05;
		};
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class ADFU_1200Rnd_Chaingun_30mm: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = "ADF Re-Cut";
		scope = 2;
		displayName = "30 mm HE Shells";
		count = 1200;
		muzzleImpulseFactor[] =
		{
			0.25,    // X
			0.25     // Y
		};
	};
	class ADFU_1200Rnd_Chaingun_30mm_Tracer: ADFU_1200Rnd_Chaingun_30mm
	{
		author = "ADF Re-Cut";
		scope = 2;
		displayName = "30 mm HE Tracer (Yellow) Shells";
		ammo = "Gatling_30mm_HE_Plane_CAS_01_Yellow_F";
	};
};
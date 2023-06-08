class gatling_30mm_base;
class Mode_FullAuto;
class close;
class short;
class medium;
class far;
class Gatling_30mm_HE_Plane_CAS_01_Yellow_F;
class CfgWeapons
{
	class ADFU_gatling_30mm_base: gatling_30mm_base
	{
		displayName = "Chain Gun M230 30mm";
		magazines[] =
		{
			"ADFU_1200Rnd_Chaingun_30mm"
		};
		modes[] = {"Burst10","Burst20","Burst50","close","short","medium","far"};
		cursorAim = "EmptyCursor";
		canLock = 2;
		ballisticsComputer = "16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		reloadMagazineSound[] = {"",1,1};
		class GunParticles
		{
			class EffectSmokeLeft
			{
				effectName = "MachineGun2";
				positionName = "usti hlavne";
				directionName = "gun_smoke_left";
			};
			class EffectSmokeRight
			{
				effectName = "MachineGun2";
				positionName = "usti hlavne";
				directionName = "gun_smoke_right";
			};
			class EffectCartridge
			{
				positionName = "gun_eject";
				directionName = "gun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
		class Burst10: Mode_FullAuto
		{
			displayName = "Burst 10";
			textureType = "semi";
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
				};
			};
			autoFire = 1;
			burst = 10;
			minRange = 1000;
			minRangeProbab = 0.03;
			midRange = 2000;
			midRangeProbab = 0.02;
			maxRange = 3000;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class Burst20: Burst10
		{
			displayName = "20 Burst";
			textureType = "burst";
			burst = 20;
		};
		class Burst50: Burst20
		{
			displayName = "Full";
			textureType = "fullAuto";
			burst = 1;
		};
		class close: close
		{
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
				};
			};
		};
		class short: short
		{
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
				};
			};
		};
		class medium: medium
		{
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
				};
			};
		};
		class far: far
		{
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					Autocannon30mmTurret_Shot_SoundSet,
                    Autocannon30mmTurret_Tail_SoundSet
				};
			};
		};
	};
	class ADFU_Chaingun_30mm: ADFU_gatling_30mm_base
	{
		author = "ADF Re-Cut";
		scope = 2;
		displayName = "Chain Gun M230 30mm";
		muzzles[] = {"HEDP"};
		class HEDP: ADFU_gatling_30mm_base
		{
			magazines[] = {"ADFU_1200Rnd_Chaingun_30mm"};
		};
	};
};
class B_30mm_HE_Tracer_Red;
class CfgAmmo
{
	class ADFU_30mm_HEDP_T: B_30mm_HE_Tracer_Red
	{
		hit = 105;
		indirectHit = 10;
		indirectHitRange = 2;
		explosive = 0.3;
		airFriction = -0.00078;
		tracerScale = 2;
		caliber = 4.2;
		tracerEndTime = 30;
		timeToLive = 30;
		typicalSpeed = 805;
		laserlock = 0;
		airlock = 0;
		irlock = 0;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(25*0.2)";
			duration = "((round (25^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 25^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 50;
			duration = "((round (50^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class ADFU_1200Rnd_Chaingun_30mm: VehicleMagazine
	{
		author = "ADF Re-Cut";
		scope = 2;
		displayName = "30mm 1200Rnd M789 HEDP-T";
		displayNameShort = "HEDP Tracer";
		ammo = "ADFU_30mm_HEDP_T";
		count = 1200;
		initSpeed = 805;
		maxLeadSpeed = 500;
		tracersEvery = 1;
		nameSound = "cannon";
	};
	class ADFU_1200Rnd_Chaingun_30mm_Tracer: ADFU_1200Rnd_Chaingun_30mm
	{
		author = "ADF Re-Cut";
		scope = 2;
		displayName = "DEPRECATED";
		ammo = "Gatling_30mm_HE_Plane_CAS_01_Yellow_F";
	};
};
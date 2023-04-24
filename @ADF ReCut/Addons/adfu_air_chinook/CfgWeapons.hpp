class CfgAmmo
{
	class BulletBase;
	class ADFU_air_chinook_762x51_Ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.0009324;
	};
	class ADFU_air_chinook_762x51_3RndBurst: ADFU_air_chinook_762x51_Ball
	{
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 22;
		visibleFireTime = 4;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class ADFU_air_chinook_4000Rnd_762x51: VehicleMagazine
	{
		scope = 2;
		ammo = "ADFU_air_chinook_762x51_3RndBurst";
		count = 4000;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		nameSound = "mgun";
	};
	class ADFU_air_chinook_2000Rnd_762x51: ADFU_air_chinook_4000Rnd_762x51
	{
		count = 2000;
	};

	class 300Rnd_CMFlare_Chaff_Magazine;
	class 320Rnd_CMFlare_Chaff_Magazine: 300Rnd_CMFlare_Chaff_Magazine
	{
		count = 320;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Burst;

class CfgWeapons
{
	class LMG_Minigun_Transport;
	class ADFU_air_chinook_M134: LMG_Minigun_Transport
	{
		author = "$STR_ADFU_AUTHOR";
		scope = 2;
		displayName = "M134 Minigun";
		magazines[] = {"ADFU_air_chinook_2000Rnd_762x51","ADFU_air_chinook_4000Rnd_762x51"};
	};
	class ADFU_air_chinook_M134_2: ADFU_air_chinook_M134{};

	class CMFlareLauncher;
	class ADFU_PHOENIX_CMFlareLauncher: CMFlareLauncher
	{
		displayName = "Countermeasures";
		magazines[] = {"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","320Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 10;
		modes[] = {"Single","Burst1","Burst2","Burst3","Burst4","Burst5","Burst6","AIBurst"};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.125;
			autoFire = "false";
			displayName = "A-4F/-";
			burst = 1;
			multiplier = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "B-40F/1.25S";
			burst = 10;
			multiplier = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "C-40F/2.5S";
			burst = 10;
			multiplier = 4;
		};
		class Burst3: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "D-40F/5S";
			burst = 10;
			multiplier = 4;
		};
		class Burst4: Burst1
		{
			reloadTime = 0.125;
			autoFire = "true";
			displayName = "E-80F/2.5S";
			burst = 20;
			multiplier = 4;
		};
		class Burst5: Burst1
		{
			reloadTime = 0.25;
			autoFire = "true";
			displayName = "F-80F/5S";
			burst = 20;
			multiplier = 4;
		};
		class Burst6: Burst1
		{
			reloadTime = 0.5;
			autoFire = "true";
			displayName = "G-80F/10S";
			burst = 20;
			multiplier = 4;
		};
	};
};
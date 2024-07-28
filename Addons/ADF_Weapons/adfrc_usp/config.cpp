class CfgPatches
{
	class ADFRC_usp
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_weapon_usp",
			"ADFRC_weapon_usp_silencer",
			"ADFRC_weapon_usp_snds"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADF_Core"
		};
		author[]=
		{
			"ADF Re-Cut | ADF: Uncut"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class muzzle_snds_L;
class ItemInfo;
class CfgWeapons
{
	class ADFRC_usp_silencer: muzzle_snds_L
	{
		scope=2;
		displayName="USP Silencer (Black)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_usp\ui\gear_ADFRC_usp_snd_ca.paa";
		model="\ADF_Weapons\adfrc_usp\ADFRC_USP_SILENCER";
		descriptionShort="H&K USP Tactical Silencer";

		class ItemInfo: ItemInfo
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.25;
				audibleFire=0.2;
				visibleFireTime=0.44999999;
				audibleFireTime=0.44999999;
				cost=1;
				typicalSpeed=0.89999998;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="zaslehDir";
				effectname="CaselessAmmoCloud";
				positionname="zaslehPoint";
			};
		};
	};
	class hgun_P07_F;
	class ADFRC_pistol_base: hgun_P07_F
	{
		class Single: Mode_SemiAuto
		{
			aiDispersionCoefX = 1.4;
			aiDispersionCoefY = 1.7;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			class BaseSoundModeType {};
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.0029;
			displayName = "$STR_DN_MODE_SEMIAUTO";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxRange = 50;
			maxRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.6;
			minRange = 5;
			minRangeProbab = 0.3;
			multiplier = 1;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			requiredOpticType = -1;
			showToPlayer = 1;
			class SilencedSound: BaseSoundModeType {};
			sound = ["",10,1];
			soundBegin = ["sound",1];
			soundBeginWater = ["sound",1];
			soundBurst = 0;
			soundClosure = ["sound",1];
			soundContinuous = 0;
			soundEnd = [];
			soundLoop = [];
			sounds = ["StandardSound","SilencedSound"];
			class StandardSound: BaseSoundModeType {};
			textureType = "semi";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
		};
	};
	class ADFRC_usp: ADFRC_pistol_base
	{
		scope=2;
		baseWeapon="ADFRC_USP";
		displayName="USP Tactical 9mm";
		author="$STR_ADF_AUTHOR";
		class Library
		{
			libTextDesc="9mm USP Tactical";
		};
		model="\ADF_Weapons\adfrc_usp\ADFRC_USP_TACTICAL.p3d";
		cursor="";
		magazines[]=
		{
			"16Rnd_9x21_Mag"
		};
		reloadAction="GestureReloadPistol";
		picture="\ADF_Weapons\adfrc_usp\UI\gear_ADFRC_usp_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo
		{
			mass=5;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"ADFRC_usp_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Single
		{
			displayName= "Semi-Auto";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"P07_Shot_SoundSet",
					"P07_Tail_SoundSet",
					"P07_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"P07_silencerShot_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=4.9999999e-005;
		};
	};
	class ADFRC_weapon_usp_snds: ADFRC_usp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFRC_usp_silencer";
			};
		};
	};
};
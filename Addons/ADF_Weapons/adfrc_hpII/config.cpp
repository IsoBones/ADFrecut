class CfgPatches
{
	class ADFRC_hpII
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_hpII"
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
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class ItemInfo;
class Single;
class CfgWeapons
{
	class Pistol_Base_F;
	class ADFRC_pistol_base: Pistol_Base_F
	{		
	};
	class ADFRC_hpII: ADFRC_pistol_base
	{
		scope=2;
		scopeArsenal = 2;
		BaseWeapon = "ADFRC_weapon_hpII";
		displayName="Browning High Power MkII";
		author="$STR_ADFRC_AUTHOR";
		model="\ADF_Weapons\adfrc_hpII\ADFRC_PISTOL_HPII.p3d";
		picture="\ADF_Weapons\adfrc_hpII\UI\gear_ADFRC_HPII_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		cursor = "hgun";
		cursoraim = "cursorAim";
		cursorAimOn = "";
		cursorSize = 1;
		magazines[]=
		{
			"ADFRC_10Rnd_9x19_Mag"
		};
		reloadAction="GestureReloadPistol";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1.0,1,10};
		class WeaponSlotsInfo
		{
			mass=5;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{};
			};
			class CowsSlot: CowsSlot
			{};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{};
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
			displayName= "Semi-Automatic";
			textureType= "semi";
			multiplier= "1";
			aiDispersionCoefX = "1.4";
			aiDispersionCoefY = "1.7";
			aiRateOfFire = "2";
			aiRateOfFireDispersion = "1";
			aiRateOfFireDistance = "25";
			artilleryCharge = "1";
			artilleryDispersion = "1";
			autoFire = "0";
			burst = "1";
			burstRangeMax = "-1";
			canShootInWater = "0";
			dispersion = "4.9999999e-005";
			ffCount = "1";
			ffFrequency = "11";
			ffMagnitude = "0.5";
			flash = "gunfire";
			flashSize = "0.1";
			maxRange = "50";
			maxRangeProbab = "0.1";
			midRange = "25";
			midRangeProbab = "0.6";
			minRange = "5";
			minRangeProbab = "0.3";
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			showToPlayer = "1";
			soundBurst = "0";
			soundContinuous = "0";
			useAction = "0";
			useActionTitle = "";
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
		};
	};
};
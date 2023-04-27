class CfgPatches
{
	class ADFU_weapon_usp
	{
		units[]={};
		weapons[]=
		{
			"ADFU_weapon_usp",
			"ADFU_weapon_usp_silencer",
			"ADFU_weapon_usp_snds"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc"
		};
		author[]=
		{
			"ADF: UNCUT"
		};
	};
};
class Mode_SemiAuto;
class WeaponSlotsInfo;
class muzzle_snds_L;
class MuzzleSlot;
class ItemInfo;
class SlotInfo;
class CfgWeapons
{
	class Pistol_Base_F;
	class ADFU_weapon_usp_silencer: muzzle_snds_L
	{
		scope=2;
		displayName="USP Silencer (Black)";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_usp\ui\gear_ADFU_usp_snd_ca.paa";
		model="\ADFU_weapon_usp\ADFU_USP_SILENCER";
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
	class ADFU_weapon_usp: Pistol_Base_F
	{
		scope=2;
		displayname="USP Tactical 9mm (Black)";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_usp\ADFU_USP_TACTICAL.p3d";
		picture="\ADFU_weapon_usp\UI\gear_ADFU_usp_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"16Rnd_9x21_Mag"
		};
		reloadAction="GestureReloadPistol";
		dexterity=2;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
			0.50118703,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
			0.50118703,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
			0.50118703,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
			0.50118703,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
			0.39810699,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
			0.39810699,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
			0.39810699,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
			0.39810699,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
			0.22387201,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
			0.22387201,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
			0.22387201,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
			0.22387201,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
			closure1[]=
			{
				"A3\Sounds_F\weapons\closure\closure_handgun_3",
				1.0351422,
				1,
				30
			};
			closure2[]=
			{
				"A3\Sounds_F\weapons\closure\closure_handgun_3",
				1.0351422,
				1.1,
				30
			};
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
			begin1[]=
			{
				"ADFU_weapon_usp\sound\ADFU_usp_1",
				1,
				1,
				700
			};
			begin2[]=
			{
				"ADFU_weapon_usp\sound\ADFU_usp_2",
				1,
				1,
				700
			};
			begin3[]=
			{
				"ADFU_weapon_usp\sound\ADFU_usp_1",
				1,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				0.33000001,
				"begin2",
				0.33000001,
				"begin3",
				0.34
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[]=
			{
				"A3\sounds_f\weapons\silenced\silent-23",
				0.56234133,
				1,
				600
			};
			begin2[]=
			{
				"A3\sounds_f\weapons\silenced\silent-24",
				0.56234133,
				1,
				600
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
		};
		reloadtime=0.13;
		dispersion=0.003;
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry1",
			0.39810699,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\pistols\p07_reload",
			0.56234097,
			1,
			30
		};
		recoil="recoil_pistol_light";
		recoilProne="recoil_prone_pistol_light";
		class Library
		{
			libTextDesc="9mm USP Tactical";
		};
		descriptionShort="9mm USP Tactical";
		class WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"ADFU_weapon_usp_silencer"
				};
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class ADFU_weapon_usp_snds: ADFU_weapon_usp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_weapon_usp_silencer";
			};
		};
	};
};

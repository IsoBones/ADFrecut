class CfgPatches
{
	class ADFRC_f88sa2
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_f88sa2_base",
			"ADFRC_f88sa2",
			"ADFRC_f88sa2_fg",
			"ADFRC_f88sa2_camo",
			"ADFRC_f88sa2_camo_fg",
			"ADFRC_f88sa2_gl",
			"ADFRC_f88sa2_gl_camo",
			"ADFRC_f88sa2_elcan",
			"ADFRC_f88sa2_gl_elcan",
			"ADFRC_f88sa2_camo_elcan",
			"ADFRC_f88sa2_gl_camo_elcan",
			"ADFRC_f88sa2_ta648",
			"ADFRC_f88sa2_gl_ta648",
			"ADFRC_f88sa2_camo_ta648",
			"ADFRC_f88sa2_gl_camo_ta648",
			"ADFRC_f88sa2_mrco",
			"ADFRC_f88sa2_gl_mrco",
			"ADFRC_f88sa2_camo_mrco",
			"ADFRC_f88sa2_gl_camo_mrco",
			"ADFRC_f88sa2_hamr",
			"ADFRC_f88sa2_gl_hamr",
			"ADFRC_f88sa2_camo_hamr",
			"ADFRC_f88sa2_gl_camo_hamr"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADF_Core"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_ADFRC_Styer;
//////////////////////////////////class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {};
class asdg_UnderSlot;
class CfgWeapons
{
	class UGL_F;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class ADFRC_F88SA1_base;
	class ADFRC_f88sa2_base: ADFRC_F88SA1_base
	{
		scope=1;
		model="ADF_Weapons\adfrc_f88sa2\ADFRC_F88SA2.p3d";
		dexterity=1.6799999;
		picture="\ADF_Weapons\adfrc_f88sa2\UI\gear_ADFRC_f88sa2_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADF_Weapons\ADFRC_f88sa2\anim\f88sa2_steyr_handanim.rtm"
		};
		class Library
		{
			libTextDesc="5.56mm Bull-pup Assault Rifle";
		};
		descriptionShort="5.56mm Bull-pup Assault Rifle";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"ADFRC_f88_muzzle_snds",
					"ADFRC_f88_muzzle_snds_tan"
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				scope=2;
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"ADFRC_f88sa2_light",
					"ADFRC_f88sa2_light_tan",
					"ADFRC_f88sa2_laser",
					"ADFRC_f88sa2_laser_tan"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				effectname="RifleAssaultCloud";
				positionname="Usti hlavne";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class ADFRC_f88sa2: ADFRC_f88sa2_base
	{
		baseWeapon= "F88SA2 Austeyr";
		scope=2;
		displayName="F88S-A2 Austeyr";
		author="$STR_ADF_AUTHOR";
		ADFRC_weapon_switch=0;
		ADFRC_weapon_alternate="ADFRC_f88sa2_fg";
		ADFRC_weapon_magazine="";
	};
	class ADFRC_f88sa2_camo: ADFRC_f88sa2
	{
		baseWeapon= "F88SA2 Austeyr (Camo)";
		scope=2;
		displayName="F88S-A2 Austeyr (Camo)";
		author="$STR_ADF_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88sa2_1_amp_co.paa",
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88sa2_2_amp_co.paa",
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88_m203_amp_co.paa"
		};
		ADFRC_weapon_switch=0;
		ADFRC_weapon_alternate="ADFRC_f88sa2_camo_fg";
		ADFRC_weapon_magazine="";
	};
	class ADFRC_f88sa2_gl: ADFRC_f88sa2
	{
		scope=2;
		model="ADF_Weapons\adfrc_f88sa2\ADFRC_F88SA2_M203.p3d";
		dexterity=1.6799999;
		displayName="F88S-A2 Austeyr M203";
		author="$STR_ADF_AUTHOR";
		muzzles[]=
		{
			"this",
			"M203"
		};
		ADFRC_weapon_switch=0;
		ADFRC_weapon_alternate="";
		ADFRC_weapon_magazine="";
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADF_Weapons\adfrc_f88sa1\anim\f88sa1_steyr_m203_handanim.rtm"
		};
		class M203: UGL_F
		{
			displayName="M203";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell"
			};
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"ADF_Weapons\adfrc_f88sa1\sound\f88_m203",
					4,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
	};
	class ADFRC_f88sa2_gl_camo: ADFRC_f88sa2_gl
	{
		scope=2;
		displayName="F88S-A2 Austeyr M203 (Camo)";
		author="$STR_ADF_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88sa2_1_amp_co.paa",
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88sa2_2_amp_co.paa",
			"ADF_Weapons\adfrc_f88sa2\data\ADFRC_f88_m203_amp_co.paa"
		};
	};
	class ADFRC_f88sa2_elcan: ADFRC_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_f88sa2_gl_elcan: ADFRC_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_f88sa2_camo_elcan: ADFRC_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_f88sa2_gl_camo_elcan: ADFRC_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_f88sa2_ta648: ADFRC_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648_t";
			};
		};
	};
	class ADFRC_f88sa2_gl_ta648: ADFRC_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648_t";
			};
		};
	};
	class ADFRC_f88sa2_camo_ta648: ADFRC_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648_t";
			};
		};
	};
	class ADFRC_f88sa2_gl_camo_ta648: ADFRC_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648_t";
			};
		};
	};
	class ADFRC_f88sa2_mrco: ADFRC_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mrco";
			};
		};
	};
	class ADFRC_f88sa2_gl_mrco: ADFRC_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mrco";
			};
		};
	};
	class ADFRC_f88sa2_camo_mrco: ADFRC_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mrco";
			};
		};
	};
	class ADFRC_f88sa2_gl_camo_mrco: ADFRC_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mrco";
			};
		};
	};
	class ADFRC_f88sa2_hamr: ADFRC_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
		};
	};
	class ADFRC_f88sa2_gl_hamr: ADFRC_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
		};
	};
	class ADFRC_f88sa2_camo_hamr: ADFRC_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
		};
	};
	class ADFRC_f88sa2_gl_camo_hamr: ADFRC_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
		};
	};
};

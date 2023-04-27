class CfgPatches
{
	class ADFU_weapon_f88sa2
	{
		units[]={};
		weapons[]=
		{
			"ADFU_f88sa2_base",
			"ADFU_f88sa2",
			"ADFU_f88sa2_fg",
			"ADFU_f88sa2_camo",
			"ADFU_f88sa2_camo_fg",
			"ADFU_f88sa2_gl",
			"ADFU_f88sa2_gl_camo",
			"ADFU_f88sa2_elcan",
			"ADFU_f88sa2_gl_elcan",
			"ADFU_f88sa2_camo_elcan",
			"ADFU_f88sa2_gl_camo_elcan",
			"ADFU_f88sa2_ta648",
			"ADFU_f88sa2_gl_ta648",
			"ADFU_f88sa2_camo_ta648",
			"ADFU_f88sa2_gl_camo_ta648",
			"ADFU_f88sa2_mrco",
			"ADFU_f88sa2_gl_mrco",
			"ADFU_f88sa2_camo_mrco",
			"ADFU_f88sa2_gl_camo_mrco",
			"ADFU_f88sa2_hamr",
			"ADFU_f88sa2_gl_hamr",
			"ADFU_f88sa2_camo_hamr",
			"ADFU_f88sa2_gl_camo_hamr"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_magazines",
			"ADFU_weapon_accessories",
			"ADFU_weapon_f88sa1",
			"ADFU_weapon_optics"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_ADFU_Styer;
class CfgWeapons
{
	class UGL_F;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class ADFU_F88SA1_base;
	class ADFU_f88sa2_base: ADFU_F88SA1_base
	{
		scope=1;
		model="\ADFU_weapon_f88sa2\ADFU_F88SA2.p3d";
		dexterity=1.6799999;
		picture="\ADFU_weapon_f88sa2\UI\gear_ADFU_f88sa2_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_f88sa2\anim\f88sa2_steyr_handanim.rtm"
		};
		class Library
		{
			libTextDesc="5.56mm Bull-pup Assault Rifle";
		};
		descriptionShort="5.56mm Bull-pup Assault Rifle";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"ADFU_f88_muzzle_snds",
					"ADFU_f88_muzzle_snds_tan"
				};
			};
			class PointerSlot: PointerSlot
			{
				scope=2;
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"ADFU_f88sa2_light",
					"ADFU_f88sa2_light_tan",
					"ADFU_f88sa2_laser",
					"ADFU_f88sa2_laser_tan"
				};
			};
			class CowsSlot: CowsSlot_ADFU_Styer
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
	class ADFU_f88sa2: ADFU_f88sa2_base
	{
		scope=2;
		displayName="F88S-A2 Austeyr";
		author="$STR_ADFU_AUTHOR";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_f88sa2_fg";
		ADFU_weapon_magazine="";
	};
	class ADFU_f88sa2_fg: ADFU_f88sa2
	{
		scope=1;
		model="\ADFU_weapon_f88sa1\ADFU_F88SA1_FG.p3d";
		author="$STR_ADFU_AUTHOR";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_f88sa2";
		ADFU_weapon_magazine="";
	};
	class ADFU_f88sa2_camo: ADFU_f88sa2
	{
		scope=2;
		displayName="F88S-A2 Austeyr (Camo)";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_f88sa2\data\ADFU_f88sa2_1_amp_co.paa",
			"ADFU_weapon_f88sa2\data\ADFU_f88sa2_2_amp_co.paa",
			"ADFU_weapon_f88sa2\data\ADFU_f88_m203_amp_co.paa"
		};
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_f88sa2_camo_fg";
		ADFU_weapon_magazine="";
	};
	class ADFU_f88sa2_camo_fg: ADFU_f88sa2_camo
	{
		scope=1;
		model="\ADFU_weapon_f88sa1\ADFU_F88SA1_FG.p3d";
		author="$STR_ADFU_AUTHOR";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_f88sa2_camo";
		ADFU_weapon_magazine="";
	};
	class ADFU_f88sa2_gl: ADFU_f88sa2
	{
		scope=2;
		model="\ADFU_weapon_f88sa2\ADFU_F88SA2_M203.p3d";
		dexterity=1.6799999;
		displayName="F88S-A2 Austeyr M203";
		author="$STR_ADFU_AUTHOR";
		muzzles[]=
		{
			"this",
			"M203"
		};
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="";
		ADFU_weapon_magazine="";
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_f88sa1\anim\f88sa1_steyr_m203_handanim.rtm"
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
					"ADFU_weapon_f88sa1\sound\f88_m203",
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
	class ADFU_f88sa2_gl_camo: ADFU_f88sa2_gl
	{
		scope=2;
		displayName="F88S-A2 Austeyr M203 (Camo)";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_f88sa2\data\ADFU_f88sa2_1_amp_co.paa",
			"ADFU_weapon_f88sa2\data\ADFU_f88sa2_2_amp_co.paa",
			"ADFU_weapon_f88sa2\data\ADFU_f88_m203_amp_co.paa"
		};
	};
	class ADFU_f88sa2_elcan: ADFU_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_f88sa2_gl_elcan: ADFU_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_f88sa2_camo_elcan: ADFU_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_f88sa2_gl_camo_elcan: ADFU_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_f88sa2_ta648: ADFU_f88sa2
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648_t";
			};
		};
	};
	class ADFU_f88sa2_gl_ta648: ADFU_f88sa2_gl
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648_t";
			};
		};
	};
	class ADFU_f88sa2_camo_ta648: ADFU_f88sa2_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648_t";
			};
		};
	};
	class ADFU_f88sa2_gl_camo_ta648: ADFU_f88sa2_gl_camo
	{
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648_t";
			};
		};
	};
	class ADFU_f88sa2_mrco: ADFU_f88sa2
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
	class ADFU_f88sa2_gl_mrco: ADFU_f88sa2_gl
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
	class ADFU_f88sa2_camo_mrco: ADFU_f88sa2_camo
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
	class ADFU_f88sa2_gl_camo_mrco: ADFU_f88sa2_gl_camo
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
	class ADFU_f88sa2_hamr: ADFU_f88sa2
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
	class ADFU_f88sa2_gl_hamr: ADFU_f88sa2_gl
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
	class ADFU_f88sa2_camo_hamr: ADFU_f88sa2_camo
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
	class ADFU_f88sa2_gl_camo_hamr: ADFU_f88sa2_gl_camo
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

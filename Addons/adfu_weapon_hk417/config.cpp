class CfgPatches
{
	class ADFU_weapon_hk417_sand
	{
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = 
		{
			"arifle_SPAR_03_snd_F",
			"ADFU_weapon_hk417_base",
			"ADFU_weapon_hk417_sand",
			"ADFU_hk417_sand_army"
		};
	};
};




class asdg_OpticRail1913_long;
class asdg_MuzzleSlot_762;
class compatibleItems;
class arifle_SPAR_03_snd_F;
class CfgWeapons
{
	class ADFU_weapon_hk417_base: arifle_SPAR_03_snd_F
	{
		scope=1;
		class WeaponSlotsInfo;
	};
	class ADFU_weapon_hk417_sand: ADFU_weapon_hk417_base
	{
		scope = 2;
		baseWeapon= "HK417 (Sand)";
		displayName = "HK417 (Sand)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots = [901];
			class CowsSlot: asdg_OpticRail1913_long 
			{
				class compatibleItems: compatibleItems 
				{
					ADFU_acog_ta648_rds_t = 1;
				};
				displayName = "$STR_A3_CowsSlot0";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition = [0.45,0.28];
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				class compatibleItems
				{
					adfu_m4a5_muzzle_snds_wdl = 1;
				};
				
			};
		};
	};
	class ADFU_hk417_sand_army: ADFU_weapon_hk417_sand
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648_rds_t";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_snd";
			};
		};
	};
};
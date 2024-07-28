class CfgPatches
{
	class ADFRC_hk416_sand
	{
		requiredAddons[] = {"A3_Weapons_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = 
		{
			"arifle_SPAR_03_snd_F",
			"ADFRC_hk416_base",
			"ADFRC_hk416_sand"
		};
	};
};


class arifle_SPAR_01_snd_F;
class arifle_SPAR_01_gl_snd_F;
class CfgWeapons
{
	class ADFRC_hk416_base: arifle_SPAR_01_snd_F
	{
		scope=1;
		class WeaponSlotsInfo;
	};

	class ADFRC_hk416_sand: ADFRC_hk416_base
	{
		scope=1;
		author="$STR_ADF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFRC_hk416_gl_base: arifle_SPAR_01_gl_snd_F
	{
		scope=1;
		class WeaponSlotsInfo;
	};

	class ADFRC_hk416_GL_sand: ADFRC_hk416_gl_base
	{
		scope=1;
		author="$STR_ADF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};
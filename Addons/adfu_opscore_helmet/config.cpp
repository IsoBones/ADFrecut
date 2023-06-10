class CfgPatches
{
	class adfu_opscore_helmets
	{
		name="ADF Re-Cut Headgear | Exer";
		author="Exer | ADF Re-Cut";
		requiredAddons[]=
        	{
			"A3_Characters_F_BLUFOR",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class NVGoggles;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class adfu_opscore_marine_Snakeskin_Tan_Ct_1_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 1 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","battery2","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","battery2","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_Ct_1_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 1 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_amp_1_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 1 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","battery2","comtac","light","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","battery2","comtac","light","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_amp_1_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 1 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_ct_2_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 2 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","amp","light"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","amp","light"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_ct_2_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 2 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp","light"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp","light"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_Amp_2_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 2 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","comtac","light"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","comtac","light"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_amp_2_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 2 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_ct_3_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 3 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","amp","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","amp","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_ct_3_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 3 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_Amp_3_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 3 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","comtac","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","comtac","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_amp_3_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 3 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_ct_4_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 4 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","amp"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","amp"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_ct_4_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 4 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_Amp_4_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 4 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","comtac"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","comtac"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_amp_4_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 4 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_ct_5_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 5 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","amp"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","amp"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_ct_5_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 5 (Comtac III)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_ct.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_Tan_Amp_5_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 5 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_tan_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","comtac"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","comtac"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
	class adfu_opscore_marine_Snakeskin_blk_amp_5_Aus: ItemCore
	{
		author = "Exer | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Black 5 (Amp)";
		picture = "adfu_opscore_helmet\icons\opscore_img_blk_amp.paa";
		model = "adfu_opscore_helmet\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "adfu_opscore_helmet\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac"};
			hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\helmetpatch_aus_co.paa","adfu_opscore_helmet\data\helmet_blk_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
					passThrough = 0.75;
				};
			};
		};
	};
};
class CfgGlasses
{
	class None;
	class ADFU_Headgear_Face_Shemagh_rgr_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Ranger Green)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class ADFU_Headgear_Face_Shemagh_BLK_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Black)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_blk_co.paa",""};
	};
	class ADFU_Headgear_Face_Shemagh_cbr_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Coyote Brown)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_cbr_co.paa",""};
	};
	class ADFU_Headgear_Face_ESS_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS Crossbow";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class ADFU_Headgear_Face_Shemagh_rgr_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Ranger Green)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class ADFU_Headgear_Face_Shemagh_BLK_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Black)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_blk_co.paa",""};
	};
	class ADFU_Headgear_Face_Shemagh_cbr_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Coyote Brown)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_cbr_co.paa",""};
	};
	class ADFU_Headgear_Face_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class ADFU_Headgear_Face_Shemagh_rgr_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Ranger Green)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo2","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class ADFU_Headgear_Face_Shemagh_BLK_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Black)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_blk_co.paa",""};
	};
	class ADFU_Headgear_Face_Shemagh_cbr_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Coyote Brown)";
		model = "adfu_opscore_helmet\facewear.p3d";
		picture = "adfu_opscore_helmet\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"adfu_opscore_helmet\data\shemagh_cbr_co.paa",""};
	};
};
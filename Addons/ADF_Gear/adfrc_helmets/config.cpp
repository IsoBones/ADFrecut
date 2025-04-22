class CfgPatches
{
	class adfrc_helmets
	{
		name="ADF Re-Cut Headgear";
		author=$STR_ADF_AUTHOR;
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
	class ItemInfo;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class NVGoggles;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_Booniehat_tan;
	class H_Cap_red;
	class H_HelmetB_light;
	class H_HelmetB;
	class H_HelmetIA;
	class H_Cap_headphones;

	// OPSCORE MARITIME
	class adfrc_opscore_marine_Snakeskin_Tan_Ct_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 1 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","battery2","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","battery2","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_Ct_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 1 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_amp_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 1 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","battery2","comtac","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","battery2","comtac","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_amp_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 1 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_ct_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 2 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","amp","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","amp","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_ct_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 2 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_Amp_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 2 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","comtac","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","comtac","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_amp_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 2 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_ct_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 3 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","amp","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","amp","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_ct_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 3 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_Amp_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 3 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","comtac","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","comtac","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_amp_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 3 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_ct_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 4 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_ct_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 4 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_Amp_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 4 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery2","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery2","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_amp_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 4 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_ct_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 5 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_ct_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 5 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_Tan_Amp_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Tan 5 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","battery1","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","battery1","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa",};
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
	class adfrc_opscore_marine_Snakeskin_blk_amp_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime Black 5 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_blk_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 1 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_amp_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 1 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_ct_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 2 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_amp_2_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 2 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac","light"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_ct_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 3 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_amp_3_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 3 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_ct_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 4 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_amp_4_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 4 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery2","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery2","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_ct_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 5 (Comtac III)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","amp"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","amp"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_Snakeskin_amcu_amp_5_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU 5 (Amp)";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","comtac"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","comtac"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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
	class adfrc_opscore_marine_amcu_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Maritime AMCU";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
		model = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
		hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","amp","light","strobe"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\opscore_mt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"patch","camo","battery1","battery2","comtac","amp","light","strobe"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\helmetpatch_aus_co.paa","ADF_Gear\adfrc_helmets\data\helmet_amcu_co.paa",""};
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

	// TEAM WENDY EXFIL

	class adfrc_teamwendy_exfil_g2_cover: ItemCore
	{
		author = "Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Team Wendy Exfil (Gen 2) [AMC]";
		picture = "\ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\textures\cover_amcu_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\textures\cover_amcu_co.paa"};
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
	class adfrc_teamwendy_exfil_cover: adfrc_teamwendy_exfil_g2_cover
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class adfrc_teamwendy_exfil_g3_cover_AMCU: ItemCore
	{
		author = "Growlor/Brucey";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Team Wendy Exfil (Gen 3) [AMCU]";
		picture = "\ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_AMCU_CA.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_AMCU_CA.paa"};
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
	class adfrc_teamwendy_exfil_g3_cover_MC: ItemCore
	{
		author = "Growlor/Brucey";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Team Wendy Exfil (Gen 3) [MC]";
		picture = "\ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_MC_CA.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_MC_CA.paa"};
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
	class adfrc_teamwendy_exfil_g3_cover_OD: ItemCore
	{
		author = "Growlor/Brucey";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Team Wendy Exfil (Gen 3) [OD]";
		picture = "\ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_OD_CA.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_OD_CA.paa"};
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
	class adfrc_teamwendy_exfil_g3_NoCover: ItemCore
	{
		author = "Growlor/Brucey";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Team Wendy Exfil (Gen 3) No Cover [OD]";
		picture = "\ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_NO_CA.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\Brucey_exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\TW_Platatac_Cover_NO_CA.paa"};
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




	// BOONIE HATS AND CAPS
	class adfrc_boonie: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.4;
		displayName = "Boonie & Peltors [AMCU]";
		picture = "\ADF_Gear\adfrc_helmets\icons\boonie.paa";
		model = "ADF_Gear\adfrc_helmets\boonie.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		author = "Louetta";
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "ADF_Gear\adfrc_helmets\boonie.p3d";
			modelSides[] = {3,1};
			armor = "3000";
			passThrough = 0.01;
			hiddenSelections[] = {};
		};
	};
	class adfrc_booniehat_amc: H_Booniehat_tan
	{
		scope = 1;
		author=$STR_ADF_AUTHOR;
		displayName = "Boonie [AMC] DEPRECATED";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_Cam_co.paa"};
	};
	class adfrc_booniehat_dpcu: H_Booniehat_tan
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="Boonie [DPCU]";
		model="\A3\Characters_F\common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_DPCU_co.paa"};
	};
	class adfrc_booniehat_dpdu: H_Booniehat_tan
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="Boonie [DPDU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_DPDU_co.paa"};
	};
	class adfrc_cap_tan: H_Cap_red
	{
		displayName = "Cap [Sand]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Tan_co.paa"};
	};
	class adfrc_cap_green: H_Cap_red
	{
		displayName = "Cap [Green]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Green_co.paa"};
	};
	class adfrc_cap_black: H_Cap_red
	{
		displayName = "Cap [Black]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Black_co.paa"};
	};
	class adfrc_cap_amc: H_Cap_red
	{
		displayName = "Cap [AMC]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Cam_co.paa"};
	};


	// ADVANCED COMBAT HELMETS -- DEPRECATED
	class adfrc_Helmet_Black: H_HelmetB_light
	{
		scope = 1;
		displayName = "ACH [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Black_co.paa"};
	};
	class adfrc_Helmet_Desert: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_co.paa"};
	};
	class adfrc_Helmet_Grass: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_co.paa"};
	};
	class adfrc_Helmet_Sand: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_co.paa"};
	};
	class adfrc_Helmet_Snake: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_co.paa"};
	};
	class adfrc_Helmet_CamInk: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_co.paa"};
	};
	class adfrc_Helmet_Cam: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH [Camo]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_co.paa"};
	};

	// ADVANCED COMBAT HELMET MEDIC -- DEPRECATED
	class adfrc_Helmet_Medic_Black: adfrc_Helmet_Black
	{
		scope = 1;
		displayName = "ACH Medic [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Black_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Desert: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Grass: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Sand: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Snake: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_M_co.paa"};
	};
	class adfrc_Helmet_Medic_CamInk: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Cam: adfrc_Helmet_Medic_Black
	{
		scope = 1;
		displayName = "ACH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_M_co.paa"};
	};


	// ENHANCED COMBAT HELMETS
	class adfrc_ECH_Desert: H_HelmetB
	{
		scope = 2;
		displayName = "ECH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_co.paa"};
	};
	class adfrc_ECH_Grass: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_co.paa"};
	};
	class adfrc_ECH_Sand: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_co.paa"};
	};
	class adfrc_ECH_Snake: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_co.paa"};
	};
	class adfrc_ECH_CamInk: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_co.paa"};
	};
	class adfrc_ECH_Cam: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_co.paa"};
	};
	class adfrc_ECH_DPCU: adfrc_ECH_Desert
	{
		scope = 2;
		author="$STR_ADF_AUTHOR";
		displayName="ECH [DPCU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpcu_co.paa"};
	};
	class adfrc_ECH_AMCU: adfrc_ECH_Desert // SCOPE=1, DELETE EVENTUALLY
	{
		scope = 1;
		author="$STR_ADF_AUTHOR";
		displayName="ADF ECH [AMCU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_amcu_ech_co.paa"};
	};
	class adfrc_ECH_DPDU: adfrc_ECH_Desert
	{
		scope = 2;
		author="$STR_ADF_AUTHOR";
		displayName="ECH [DPDU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpdu_co.paa"};
	};

	// ENHANCED COMBAT HELMETS MEDIC
	class adfrc_ECH_MEDIC_Desert: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_M_co.paa"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 3;
			passThrough = 0.5;
		};
	};
	class adfrc_ECH_MEDIC_Grass: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Sand: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Snake: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_CamInk: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Cam: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_dpcu: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ECH Medic [DPCU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpcu_M_co.paa"};
	};

	// CANVAS HELMETS
	class adfrc_Helmet_dpcu_canv: H_HelmetIA
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="Canvas Helmet (DPCU)";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\helmet_dpcu_canv_co.paa"};
	};
	class adfrc_Helmet_dpdu_canv: H_HelmetIA
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="Canvas Helmet (DPDU)";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\helmet_dpdu_canv_co.paa"};
	};

	// OPSCORE AIRFRAME
	class adfrc_opscore_airframe_1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.4;
		displayName = "Opscore AirFrame [OD]";
		picture = "\ADF_Gear\adfrc_helmets\icons\icon_airframe.paa";
		model = "ADF_Gear\adfrc_helmets\Opscore_af.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "ADF_Gear\adfrc_helmets\Opscore_af.p3d";
			modelSides[] = {3,1};
			armor = "3000";
			passThrough = 0.01;
			hiddenSelections[] = {};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};
	class adfrc_opscore_airframe_2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.4;
		displayName = "Opscore AirFrame (Cover) [MCAM]";
		picture = "\ADF_Gear\adfrc_helmets\icons\icon_airframe.paa";
		model = "ADF_Gear\adfrc_helmets\Opscore_af_cover.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "ADF_Gear\adfrc_helmets\Opscore_af_cover.p3d";
			modelSides[] = {3,1};
			armor = "3000";
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};
	class adfrc_opscore_airframe_3: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.4;
		displayName = "Opscore AirFrame (Cover) [AMC]";
		picture = "\ADF_Gear\adfrc_helmets\icons\icon_airframe.paa";
		model = "ADF_Gear\adfrc_helmets\Opscore_af_cover.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\airframe\pd_af_cover_amcu_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformModel = "ADF_Gear\adfrc_helmets\Opscore_af_cover.p3d";
			modelSides[] = {3,1};
			armor = "3000";
			passThrough = 0.01;
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\airframe\pd_af_cover_amcu_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};

	// OPSCORE FAST XP
	class adfrc_opscore_fast_xp: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Opscore Fast XP (Cover) [AMC]";
		picture = "\ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
		model = "ADF_Gear\adfrc_helmets\opscore.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
			class ItemInfo: HeadgearItem
			{
				mass = 10;
				uniformModel = "ADF_Gear\adfrc_helmets\opscore.p3d";
				modelSides[] = {"TCivilian","TWest"};
				hiddenSelections[] = {};
				hiddenSelectionsTextures[] = {};
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

	//?
	//? PASGT
	//?

	class ADFRC_PASGT_Tan_No_Cover : ItemCore {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Tan, No Cover)";
		model                      = "\ADF_Gear\adfrc_helmets\adfrc_pasgt.p3d";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Tan_No_Cover.paa";

		scope                      = 2;

		hiddenSelections[]         = { "camo", "camo1", "camo2", "camo3" };

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"",
			"",
			""
		};

		class ItemInfo : HeadgearItem {
			uniformModel               = "\ADF_Gear\adfrc_helmets\adfrc_pasgt.p3d";

			mass                       = 40;

			hiddenSelections[]         = { "camo", "camo1", "camo2", "camo3" };
			modelSides[]               = { 1, 3 };

			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"",
				"",
				""
			};

			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";

					armor        = 1.666 * 4; //? Level IIIA
					passThrough  = 0.5;
				};
			};
		};
	};

	class ADFRC_PASGT_Olive_No_Cover : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Olive, No Cover)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Olive_No_Cover.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPC : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPC)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPC.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPC_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPC, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPC_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPC_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_DPD : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPD_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_DPD_Middle_East : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Middle East)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Middle_East.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPD_Middle_East_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Middle East, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Middle_East_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Middle_East_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_DPD_Midpoint : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Midpoint)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Midpoint.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPD_Midpoint_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Midpoint, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Midpoint_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Midpoint_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_DPD_Early : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Early)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Early.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_DPD_Early_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (DPD Early, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_DPD_Early_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_DPD_Early_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_Multicam : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Multicam)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Multicam.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_Multicam_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Multicam, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Multicam_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Multicam_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_Tan : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Tan)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Tan.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_Tan_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Tan, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Tan_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Tan_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};

	class ADFRC_PASGT_Olive : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Olive)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Olive.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"",
			""
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"",
				""
			};
		};
	};

	class ADFRC_PASGT_Olive_Goggles : ADFRC_PASGT_Tan_No_Cover {
		author                     = "$STR_ADF_AUTHOR";
		displayName                = "PASGT (Olive, Goggles)";
		picture                    = "\ADF_Gear\adfrc_helmets\icons\PASGT_Olive_Goggles.paa";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
			"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
		};

		class ItemInfo : ItemInfo {
			hiddenSelectionsTextures[] = {
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_Olive_co.paa",
				"\ADF_Gear\adfrc_helmets\data\pasgt_glass_co.paa"
			};
		};
	};
};
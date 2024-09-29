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
	
	class adfrc_opscore_marine_Snakeskin_Tan_Ct_1_Aus: ItemCore
	{
		author="Exer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Opscore Maritime Tan 1 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime Black 1 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
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
		displayName = "ADF Opscore Maritime Tan 1 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime Black 1 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
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
		displayName = "ADF Opscore Maritime Tan 2 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime Black 2 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
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
		displayName = "ADF Opscore Maritime Tan 2 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime Black 2 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
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
		displayName = "ADF Opscore Maritime Tan 3 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime Black 3 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
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
		displayName = "ADF Opscore Maritime Tan 3 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime Black 3 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
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
		displayName = "ADF Opscore Maritime Tan 4 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime Black 4 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
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
		displayName = "ADF Opscore Maritime Tan 4 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime Black 4 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
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
		displayName = "ADF Opscore Maritime Tan 5 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime Black 5 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_ct.paa";
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
		displayName = "ADF Opscore Maritime Tan 5 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime Black 5 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_blk_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU 1 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime AMCU 1 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU 2 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime AMCU 2 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU 3 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime AMCU 3 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU 4 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime AMCU 4 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU 5 (Comtac III)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_ct.paa";
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
		displayName = "ADF Opscore Maritime AMCU 5 (Amp)";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
		displayName = "ADF Opscore Maritime AMCU";
		picture = "ADF_Gear\adfrc_helmets\icons\opscore_img_tan_amp.paa";
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
	class adfrc_teamwendy_exfil_grn_mcw_Aus: ItemCore
	{
		author = "Bones | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Team Wendy Exfil (Cover) [MCW]";
		picture = "ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_mcw_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_mcw_co.paa"};
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
	class adfrc_teamwendy_exfil_grn_amcu_Aus: ItemCore
	{
		author = "Bones | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Team Wendy Exfil (Cover) [AMCU]";
		picture = "ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\exfil.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_amcu_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_amcu_co.paa"};
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
	class adfrc_teamwendy_exfil_amcu_Aus: ItemCore
	{
		author = "Bones | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Team Wendy Exfil [AMCU]";
		picture = "ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_1.paa";
		model = "ADF_Gear\adfrc_helmets\exfil_amcu.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil_amcu.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};
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
	class adfrc_teamwendy_exfil_amcu_ct_Aus: ItemCore
	{
		author = "Bones | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Team Wendy Exfil II (Cover) [AMCU]";
		picture = "ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_2.paa";
		model = "ADF_Gear\adfrc_helmets\exfil_comtac.p3d";
		hiddenSelections[] = {"cover"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_amcu_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil_comtac.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"cover"};
			hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_amcu_co.paa"};
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
	class adfrc_teamwendy_exfil_amcu_ct_2_Aus: ItemCore
	{
		author = "Bones | ADF Re-Cut";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF Team Wendy Exfil II [AMCU]";
		picture = "ADF_Gear\adfrc_helmets\icons\tw_exfil_amcu_2.paa";
		model = "ADF_Gear\adfrc_helmets\exfil_comtac_2.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_helmets\data\exfil_cover_amcu_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ADF_Gear\adfrc_helmets\exfil_comtac_2.p3d";
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
	// BASEGAME RESKINS //

	// BOONIE HATS AND CAPS
	class adfrc_boonie: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.4;
		displayName = "Boonie & Peltors [AMCU]";
		picture = "ADF_Gear\adfrc_helmets\icons\boonie.paa";
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
		scope = 2;
		author=$STR_ADF_AUTHOR;
		displayName = "ADF Boonie [AMC](OLD)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_Cam_co.paa"};
	};
	class adfrc_booniehat_dpcu: H_Booniehat_tan
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Boonie [DPCU]";
		model="\A3\Characters_F\common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_DPCU_co.paa"};
	};
	class adfrc_booniehat_dpdu: H_Booniehat_tan
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="ADF Boonie [DPDU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Boonie_DPDU_co.paa"};
	};
	class adfrc_cap_tan: H_Cap_red
	{
		displayName = "ADF Cap [Sand]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Tan_co.paa"};
	};
	class adfrc_cap_green: H_Cap_red
	{
		displayName = "ADF Cap [Green]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Green_co.paa"};
	};
	class adfrc_cap_black: H_Cap_red
	{
		displayName = "ADF Cap [Black]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Black_co.paa"};
	};
	class adfrc_cap_amc: H_Cap_red
	{
		displayName = "ADF Cap [AMC]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Cap_Cam_co.paa"};
	};


	// ADVANCED COMBAT HELMETS
	class adfrc_Helmet_Black: H_HelmetB_light
	{
		scope = 2;
		displayName = "ADF ACH [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Black_co.paa"};
	};
	class adfrc_Helmet_Desert: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_co.paa"};
	};
	class adfrc_Helmet_Grass: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_co.paa"};
	};
	class adfrc_Helmet_Sand: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_co.paa"};
	};
	class adfrc_Helmet_Snake: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_co.paa"};
	};
	class adfrc_Helmet_CamInk: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_co.paa"};
	};
	class adfrc_Helmet_Cam: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH [Camo]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_co.paa"};
	};

	// ADVANCED COMBAT HELMET MEDIC
	class adfrc_Helmet_Medic_Black: adfrc_Helmet_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Black_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Desert: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Grass: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Sand: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Snake: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_M_co.paa"};
	};
	class adfrc_Helmet_Medic_CamInk: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_M_co.paa"};
	};
	class adfrc_Helmet_Medic_Cam: adfrc_Helmet_Medic_Black
	{
		scope = 2;
		displayName = "ADF ACH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_M_co.paa"};
	};


	// ENHANCED COMBAT HELMETS
	class adfrc_ECH_Desert: H_HelmetB
	{
		scope = 2;
		displayName = "ADF ECH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Desert_co.paa"};
	};
	class adfrc_ECH_Grass: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_co.paa"};
	};
	class adfrc_ECH_Sand: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_co.paa"};
	};
	class adfrc_ECH_Snake: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_co.paa"};
	};
	class adfrc_ECH_CamInk: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_co.paa"};
	};
	class adfrc_ECH_Cam: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_co.paa"};
	};
	class adfrc_ECH_DPCU: adfrc_ECH_Desert
	{
		scope = 2;
		author="$STR_ADF_AUTHOR";
		displayName="ADF ECH [DPCU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpcu_co.paa"};
	};
	class adfrc_ECH_AMCU: adfrc_ECH_Desert
	{
		scope = 2;
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
		displayName="ADF ECH [DPDU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpdu_co.paa"};
	};

	// ENHANCED COMBAT HELMETS MEDIC
	class adfrc_ECH_MEDIC_Desert: adfrc_ECH_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [Desert]";
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
		displayName = "ADF ECH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Grass_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Sand: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Sand_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Snake: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Snake_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_CamInk: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_CamInk_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_Cam: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_Cam_M_co.paa"};
	};
	class adfrc_ECH_MEDIC_dpcu: adfrc_ECH_MEDIC_Desert
	{
		scope = 2;
		displayName = "ADF ECH Medic [DPCU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\Helmet_dpcu_M_co.paa"};
	};
	// CANVAS HELMETS
	class adfrc_Helmet_dpcu_canv: H_HelmetIA
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="ADF Helmet Canvas (DPCU)";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\helmet_dpcu_canv_co.paa"};
	};
	class adfrc_Helmet_dpdu_canv: H_HelmetIA
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="ADF Helmet Canvas (DPDU)";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_helmets\data\helmet_dpdu_canv_co.paa"};
	};
};
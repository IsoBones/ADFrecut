class CfgPatches
{
	class ADF_NVGs
	{
		name="ADF_NVGs";
		author=$STR_ADF_AUTHOR;
		requiredAddons[]=
        	{
			"A3_Data_F",
			"ADF_Core"
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
	class HeadgearItem: InventoryItem_Base_F
	{
		class ItemInfo;
		class HeadgearItem;
	};
class adfrc_l3h_psq36: NVGoggles
	{
		author = "yamum";
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "L3Harris PSQ36";
		model = "ADF_Gear\adfrc_nvgs\psq36_up.p3d";
		picture = "ADF_Gear\adfrc_nvgs\nodprev.paa";
		ace_nightvision_generation = 4;
		ace_nightvision_bluRadius = 0.35000002;
		modelOptics = "ADF_Gear\adfrc_nvgs\optic\pvs_optic.p3d";
		nameSound = "nvgoggles";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "ADF_Gear\adfrc_nvgs\psq36_down.p3d";
			modelOff = "ADF_Gear\adfrc_nvgs\psq36_up.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};
			mass = 1;
		};
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		visionMode[] = {"Normal","NVG","TI"};
	};
};
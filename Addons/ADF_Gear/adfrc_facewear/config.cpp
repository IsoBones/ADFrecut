////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Sat May 20 15:53:13 2023 : 'file' last modified on Sat May 20 15:53:13 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class adfrc_facewear
	{
		requiredAddons[] =
		{
			"A3_Characters_F",
			"ADF_Core"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgGlasses
{
	//Kondor Ballistic Glasses
	class None;
	class adfrc_facewear_kondor_blk_clr: None
	{
		scope = 2;
		displayName = "Ballistic Glasses (Clear)";
		model = "\ADF_Gear\adfrc_facewear\npp_kondor.p3d";
		picture = "\ADF_Gear\adfrc_facewear\logo_small_co.paa";
		hiddenSelections[] = {"kondor"};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_blk_clr_CA.paa"};
		author = "ADF Re-Cut";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		scopeCurator = 2;
		mass = 1;
	};
	class adfrc_facewear_kondor_blk_blk: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Black)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_blk_blk_CA.paa"};
	};
	class adfrc_facewear_kondor_blk_ylw: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Yellow)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_blk_ylw_CA.paa"};
	};
	class adfrc_facewear_kondor_blk_blu: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Blue)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_blk_blu_CA.paa"};
	};
	class adfrc_facewear_kondor_grn_blk: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Black, Green Frame)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_grn_blk_CA.paa"};
	};
	class adfrc_facewear_kondor_grn_clr: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Clear, Green Frame)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_grn_clr_CA.paa"};
	};
	class adfrc_facewear_kondor_tan_blk: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Black, Tan Frame)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_tan_blk_CA.paa"};
	};
	class adfrc_facewear_kondor_tan_clr: adfrc_facewear_kondor_blk_clr
	{
		displayName = "Ballistic Glasses (Clear, Tan Frame)";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_facewear\data\kondor_tan_clr_CA.paa"};
	};
	
	//Balaclava
	class adfrc_facewear_Balaclava_blk_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Balaclava (Black)";
		model = "ADF_Gear\adfrc_facewear\balaclava_1.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};
	
	//Shemaghs
	class adfrc_facewear_Shemagh_rgr_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Ranger Green)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class adfrc_facewear_Shemagh_BLK_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Black)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_blk_co.paa",""};
	};
	class adfrc_facewear_Shemagh_cbr_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Shemagh (Coyote Brown)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_cbr_co.paa",""};
	};
	
	//ESS Crossbow
	class adfrc_facewear_ESS_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS Crossbow";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	
	//ESS and Shemaghs
	class adfrc_facewear_Shemagh_rgr_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Ranger Green)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo3","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class adfrc_facewear_Shemagh_BLK_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Black)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_blk_co.paa",""};
	};
	class adfrc_facewear_Shemagh_cbr_ess_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "ESS/Shemagh (Coyote Brown)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\ess_crossbow_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo3","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_cbr_co.paa",""};
	};
	
	//Gatorz Magnum
	class adfrc_facewear_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	
	//Gatorz and Shemaghs
	class adfrc_facewear_Shemagh_rgr_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Ranger Green)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo2","camo4"};
		hiddenSelectionsTextures[] = {""};
	};
	class adfrc_facewear_Shemagh_BLK_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Black)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_blk_co.paa",""};
	};
	class adfrc_facewear_Shemagh_cbr_gatorz_1: None
	{
		scope = 2;
		author = "Exer | ADF Re-Cut";
		displayname = "Gatorz Magnum/Shemagh (Coyote Brown)";
		model = "ADF_Gear\adfrc_facewear\facewear.p3d";
		picture = "ADF_Gear\adfrc_facewear\icons\gatorz_magnum_co.paa";
		identityTypes[] = {};
		mass = 1;
		hiddenSelections[] = {"camo1","camo2","camo4"};
		hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_facewear\data\shemagh_cbr_co.paa",""};
	};
};//cfgGlasses

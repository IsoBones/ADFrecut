////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Sat May 20 15:53:13 2023 : 'file' last modified on Sat May 20 15:53:13 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ADFU_accessories
	{
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 2.0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgGlasses
{
	class None;
	class kot_kondor_blk_clr: None
	{
		scope = 1;
		displayName = "_";
		model = "\kot_kondor\npp_kondor";
		picture = "\kot_kondor\logo_small_co.paa";
		hiddenSelections[] = {"kondor"};
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_clr_CA.paa"};
		author = "IT_Kotyara & Numbers Of Tarkov";
		identityTypes[] =
		{
			"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
			"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
		};
		scopeCurator = 2;
		mass = 1;
	};
	class kot_kondor_blk_blk: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blk_CA.paa"};
	};
	class kot_kondor_blk_ylw: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_ylw_CA.paa"};
	};
	class kot_kondor_blk_blu: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blu_CA.paa"};
	};
	class kot_kondor_grn_blk: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_blk_CA.paa"};
	};
	class kot_kondor_grn_clr: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_clr_CA.paa"};
	};
	class kot_kondor_tan_blk: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_blk_CA.paa"};
	};
	class kot_kondor_tan_clr: kot_kondor_blk_clr
	{
		displayName = "_";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_clr_CA.paa"};
	};
	////////////////////////////
	//////ADF VERSIONS/////////
	///////////////////////////
	class adfu_condor_blk_clear: kot_kondor_blk_clr
	{
		scope = 2;
		displayName = "Ballistic Glasses (Clear)";
		author = "ADF Re-Cut";
	};
	class adfu_condor_blk_blk: kot_kondor_blk_blk
	{
		scope=2;
		displayName = "Ballistic Glasses (Black)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blk_CA.paa"};
	};
	class adfu_condor_blk_ylw: kot_kondor_blk_ylw
	{
		scope=2;
		displayName = "Ballistic Glasses (Yellow)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_ylw_CA.paa"};
	};
	class adfu_condor_blk_blu: kot_kondor_blk_blu
	{
		scope=2;
		displayName = "Ballistic Glasses (Blue)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blu_CA.paa"};
	};
	class adfu_condor_grn_blk: kot_kondor_grn_blk
	{
		scope=2;
		displayName = "Ballistic Glasses (Black, Green Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_blk_CA.paa"};
	};
	class adfu_condor_grn_clr: kot_kondor_grn_clr
	{
		scope=2;
		displayName = "Ballistic Glasses (Clear, Green Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_clr_CA.paa"};
	};
	class adfu_condor_tan_blk: kot_kondor_tan_blk
	{
		scope=2;
		displayName = "Ballistic Glasses (Black, Tan Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_blk_CA.paa"};
	};
	class adfu_condor_tan_clr: kot_kondor_tan_clr
	{
		scope=2;
		displayName = "Ballistic Glasses (Clear, Tan Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_clr_CA.paa"};
	};
};

class CfgPatches
{
	class adfrc_m252
	{
		addonRootClass = "ADF_Static";
		units[]=
		{
			"ADFRC_m252"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Static_f",
			"ADF_Units",
			"ADF_Core"
			
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_Mortar_01_F;
	class ADFRC_m252: B_Mortar_01_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "MK6 Mortar";
		crew = "ADFRC_MD_AMCU_Soldier_Light";
		typicalCargo[] = {"ADFRC_MD_AMCU_Soldier_Light"};
		side = 1;
		faction = "ADFRC_F_MD";
	};
};
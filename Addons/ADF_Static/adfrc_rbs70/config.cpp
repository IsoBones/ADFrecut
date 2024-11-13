class CfgPatches
{
	class adfrc_rbs70
	{
		addonRootClass = "ADF_Static";
		units[]=
		{
			"ADFRC_rbs70"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Static_F",
			"ADF_Units",
			"ADF_Core"
			
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_T_Static_AA_F;
	class ADFRC_rbs70: B_T_Static_AA_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Static_AA_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spike Launcher AA";
		crew = "ADFRC_MD_AMCU_Soldier_Light";
		typicalCargo[] = {"ADFRC_MD_AMCU_Soldier_Light"};
		side = 1;
		faction = "ADFRC_F_MD";
	};
};
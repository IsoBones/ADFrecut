class CfgPatches
{
	addonRootClass = "ADF_Static";
	class adfrc_rbs70
	{
		units[]=
		{
			"ADFRC_rbs70"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Static_F",
			"ADFRC_uniform_dpcu",
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
		crew = "ADFRC_rifleman_dpcu";
		typicalCargo[] = {"ADFRC_rifleman_dpcu"};
		side = 1;
		faction = "ADF";
	};
};
class CfgPatches
{
	addonRootClass = "ADF_Static";
	class adfrc_m2
	{
		units[]=
		{
			"ADFRC_mml",
			"ADFRC_fdc"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Static_F",
			"ADF_Core"
			
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_SAM_System_03_F;
	class ADFRC_mml: B_SAM_System_03_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F_Sams\Data\Cfgvehicles\B_SAM_system_03_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "MIM-145 Defender";
		side = 1;
		faction = "ADF";
	};
	class B_Radar_System_01_F;
	class ADFRC_fdc: B_Radar_System_01_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F_Sams\Data\Cfgvehicles\B_Radar_System_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "AN/MPQ-105 Radar";
		side = 1;
		faction = "ADF";
	};
};
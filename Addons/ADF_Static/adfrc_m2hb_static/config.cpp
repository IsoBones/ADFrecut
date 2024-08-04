class CfgPatches
{
	addonRootClass = "ADF_Static";
	class adfrc_m2
	{
		units[]=
		{
			"ADFRC_m2qcb"
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
	class B_G_HMG_02_F;
	class ADFRC_m2qcb: B_G_HMG_02_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "M2HB-QCB";
		crew = "ADFRC_rifleman_dpcu";
		typicalCargo[] = {"ADFRC_rifleman_dpcu"};
		side = 1;
		faction = "ADF";
	};
	class B_G_HMG_02_high_F;
	class ADFRC_m2qcb_high: B_G_HMG_02_high_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_HMG_02_high_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "M2HB-QCB High";
		crew = "ADFRC_rifleman_dpcu";
		typicalCargo[] = {"ADFRC_rifleman_dpcu"};
		side = 1;
		faction = "ADF";
	};
};
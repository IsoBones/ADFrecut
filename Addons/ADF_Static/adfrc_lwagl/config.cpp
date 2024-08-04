class CfgPatches
{
	addonRootClass = "ADF_Static";
	class adfrc_lwagl
	{
		units[]=
		{
			"ADFRC_lwagl"
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
	class B_GMG_01_F;
	class ADFRC_lwagl: B_GMG_01_F
	{
		author="ADFRC Quiggs";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Mk47";
		crew="ADFRC_rifleman_dpcu";
		typicalCargo[]=
		{
			"ADFRC_rifleman_dpcu"
		};
		side=1;
		faction="ADF";
	};
};

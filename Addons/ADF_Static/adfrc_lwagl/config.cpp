class CfgPatches
{
	class adfrc_lwagl
	{
		addonRootClass = "ADF_Static";
		units[]=
		{
			"ADFRC_lwagl"
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
	class B_GMG_01_F;
	class ADFRC_lwagl: B_GMG_01_F
	{
		author="ADFRC Quiggs";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Mk47";
		crew="ADFRC_MD_AMCU_Soldier_Light";
		typicalCargo[]=
		{
			"ADFRC_MD_AMCU_Soldier_Light"
		};
		side=1;
		faction="ADFRC_F_MD";
	};
};

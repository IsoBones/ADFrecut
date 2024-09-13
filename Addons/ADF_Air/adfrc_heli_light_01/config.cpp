class CfgPatches{
	class ADFRC_Air_Heli_Light_01{
		units[]={
			"ADFRC_Heli_AH9_Base",
			"ADFRC_Heli_MH9_Base"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"ADF_Core",
			"ADF_Units"
		};
	};
};
class CfgVehicles{
	class B_Heli_Light_01_armed_F;
	class B_Heli_Light_01_F;
	class ADFRC_Heli_AH9_Base: B_Heli_Light_01_armed_F{
		displayName="AH-9 Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_ah9_dpcu.jpg";
		faction="ADF";
		editorSubcategory="EdSubcat_Helicopters";
		crew="B_HeliPilot_F";
		typicalCargo[]={
			"B_HeliPilot_F"
		};
		//attendant=1; https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#attendant
		hiddenSelections[]={
			"camo1",
			"aiming_dot"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\ah9_co.paa",
			"a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
		};
	};
	class ADFRC_Heli_MH9_Base: B_Heli_Light_01_F{
		displayName="MH-9 Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_mh9_dpcu.jpg";
		faction="ADF";
		editorSubcategory="EdSubcat_Helicopters";
		crew="B_HeliPilot_F";
		typicalCargo[]={
			"B_HeliPilot_F"
		};
		//attendant=1; https://community.bistudio.com/wiki/CfgVehicles_Config_Reference#attendant
		hiddenSelections[]={
			"camo1"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\ah9_co.paa"
		};
	};
};

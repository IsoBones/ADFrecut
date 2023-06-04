class CfgPatches
{
	class ADFU_uniform_dpdu
	{
		units[]=
		{
			"ADFU_soldier_base_dpdu",
			"ADFU_rifleman_dpdu",
			"ADFU_grenadier_dpdu",
			"ADFU_marksman_dpdu",
			"ADFU_medic_dpdu",
			"ADFU_riflemanAT_dpdu",
			"ADFU_engineer_dpdu",
			"ADFU_explosive_dpdu",
			"ADFU_helicopterPilot_dpdu",
			"ADFU_teamleader_dpdu",
			"ADFU_squadleader_dpdu",
			"ADFU_lightGunner_dpdu",
			"ADFU_heavyGunner_dpdu",
			"ADFU_carryall_dpdu",
			"ADFU_carryall_dpdu_medic",
			"ADFU_carryall_dpdu_engineer",
			"ADFU_carryall_dpdu_at"
		};
		weapons[]=
		{
			"ADFU_booniehat_dpdu",
			"ADFU_helmetB_dpdu",
			"ADFU_uniform_dpdu",
			"ADFU_uniform_dpdu_medic",
			"ADFU_uniform_dpdu_recon",
			"ADFU_uniform_dpdu_pilot",
			"ADFU_carrierlite_Sand",
			"ADFU_tacticalvest_dpdu"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADFU_faction"
		};
	};
};
class CfgEditorSubcategories
{
	class ADFU_MEN_DPDU // Category class, you point to it in editorSubcategory property
	{
		displayName = "$STR_ADFU_MEN_DPDU"; // Name visible in the list
	};
};
class cfgVehicles
{
	class ADFU_Soldier_base_F;
	class ADFU_soldier_base_dpdu: ADFU_Soldier_base_F
	{
		scope=1;
		_generalMacro="ADFU_uniform_dpdu_Base";
		faction="ADFU";
		editorSubcategory= "$STR_ADFU_MEN_DPDU";
		vehicleClass="$STR_ADFU_MEN_DPDU";
		author="$STR_ADFU_AUTHOR";
		genericNames="NATOMen";
		nakedUniform="U_BasicBody";
		uniformClass="U_B_CombatUniform_mcam_vest";
		weapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class ADFU_rifleman_dpdu: ADFU_soldier_base_dpdu
	{
		scope=2;
		scopeCurator=2;
		editorSubcategory="ADFU_MEN_DPDU";
		_generalMacro="B_Soldier_F";
		displayName="Commando";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_rifleman_dpdu.jpg";
		author="$STR_ADFU_AUTHOR";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="ADFU_uniform_dpdu";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		backpack="ADFU_kitbag_2cdo";
	};
	class ADFU_grenadier_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Grenadier";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_grenadier_dpdu.jpg";
		icon="iconManExplosive";
		weapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		backpack="ADFU_kitbag_tan_GL";
	};
	class ADFU_marksman_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Designated Marksman";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_marksman_dpdu.jpg";
		weapons[]=
		{
			"ADFU_sr25_KHS",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_sr25_KHS",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class ADFU_medic_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		scope=2;
		displayName="Commando Medic";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_medic_dpdu.jpg";
		attendant=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformAccessories[]={};
		uniformClass="ADFU_uniform_dpdu_medic";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-medic.paa"
		};
		linkedItems[]=
		{
			"ADFU_helmetB_dpdu",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_helmetB_dpdu",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManMedic";
		backpack="ADFU_kitbag_tan_medic";
		picture="pictureHeal";
	};
	class ADFU_riflemanAT_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="AT Gunner";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_riflemanAT_dpdu.jpg";
		weapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_carlgustav_m3",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_hk416_sand",
			"ADFU_carlgustav_m3",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManAT";
		backpack="ADFU_kitbag_tan_at";
	};
	class ADFU_engineer_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		displayName="Commando Engineer";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_engineer_dpdu.jpg";
		engineer=1;
		saboteur=1;
		canDeactivateMines=1;
		detectSkill=80;
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_platecarrier_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		backpack="ADFU_kitbag_tan_eng";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class ADFU_explosive_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		displayName="Breacher";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_explosive_dpdu.jpg";
		saboteur=1;
		canDeactivateMines=1;
		detectSkill=80;
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		backpack="ADFU_kitbag_tan_exp";
		icon="iconManExplosive";
	};
	class ADFU_helicopterPilot_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		scope=2;
		displayName="Helicopter Pilot";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_helicopterPilot_dpdu.jpg";
		model="\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[]={};
		uniformClass="ADFU_uniform_dpdu_pilot";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-pilot.paa"
		};
		weapons[]=
		{
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class ADFU_teamleader_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Brick Leader";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_teamleader_dpdu.jpg";
		weapons[]=
		{
			"ADFU_hk416_GL_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_hk416_GL_sand",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Snake",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Snake",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManLeader";
		backpack="ADFU_kitbag_tan_GL"
	};
	class ADFU_squadleader_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Section Leader";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_squadleader_dpdu.jpg";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_red",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
		linkedItems[]=
		{
			"ADFU_helmet_Snake",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_helmet_Snake",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class ADFU_lightGunner_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Section Gunner";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_lightGunner_dpdu.jpg";
		weapons[]=
		{
			"ADFU_minimi_para_elcan",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_minimi_para_elcan",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_100Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManLeader";
		backpack="ADFU_kitbag_tan_MG";
	};
	class ADFU_heavyGunner_dpdu: ADFU_rifleman_dpdu
	{
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_dpdu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		displayName="Section Gunner (Heavy)";
		editorPreview = "adfu_uniform_dpdu\preview\ADFU_heavyGunner_dpdu.jpg";
		weapons[]=
		{
			"ADFU_maximi_eotech",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_maximi_eotech",
			"ADFU_weapon_usp",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_100_Rnd_762_Belt_TR5",
			"ADFU_100_Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"ADFU_100_Rnd_762_Belt_TR5",
			"ADFU_100_Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_carrierlite_Sand",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		icon="iconManLeader";
		backpack="ADFU_kitbag_tan_hmg";
	};
	class ADFU_kitbag_tan;
	class ADFU_kitbag_2cdo: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
	};
	class ADFU_kitbag_tan_GL: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag GL (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=15;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFU_kitbag_tan_MG: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag MG (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_100Rnd_556_Belt_TR5
			{
				magazine="ADFU_100Rnd_556_Belt_TR5";
				count=4;
			};
		};
	};
	class ADFU_kitbag_tan_HMG: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag HMG (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_100Rnd_556_Belt_TR5
			{
				magazine="ADFU_100_Rnd_762_Belt_TR5";
				count=3;
			};
		};
	};
	class ADFU_kitbag_tan_at: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag AT (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_magazine_84mm_heat_751
			{
				magazine="ADFU_magazine_84mm_heat_751";
				count=1;
			};
			class _xx_ADFU_magazine_84mm_hedp_502
			{
				magazine="ADFU_magazine_84mm_hedp_502";
				count=1;
			};
		};
	};
	class ADFU_kitbag_tan_exp: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag Breacher (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
	};
	class ADFU_kitbag_tan_eng: ADFU_kitbag_tan
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="ADF Kitbag Engineer (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
		};
	};
	class B_Carryall_Base;
	class B_AssaultPack_rgr_Medic;
	class ADFU_carryall_dpdu: B_Carryall_Base
	{
		author="$STR_ADFU_AUTHOR";
		scope=2;
		displayName="ADF Carryall [DPDU]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-carryall.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_f1_grenade
			{
				magazine="ADFU_f1_grenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellRed";
				count=1;
			};
		};
	};
	class ADFU_carryall_dpdu_medic: B_Carryall_Base
	{
		author="$STR_ADFU_AUTHOR";
		scope=2;
		displayName="ADF Carryall Medic [DPDU]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-carrymedic.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFU_carryall_dpdu_engineer: B_Carryall_Base
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="Engineer Ruck (DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-carryall.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				name="ClaymoreDirectionalMine_Remote_Mag";
				count=5;
			};
		};
	};
	class ADFU_carryall_dpdu_at: B_Carryall_Base
	{
		author="$STR_ADFU_AUTHOR";
		scope=1;
		displayName="Anti-Tank Rucksack (DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-carryall.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_f1_grenade
			{
				magazine="ADFU_f1_grenade";
				count=2;
			};
			class _xx_ADFU_magazine_84mm_heat_551c
			{
				magazine="ADFU_magazine_84mm_heat_551c";
				count=3;
			};
			class _xx_ADFU_magazine_84mm_heat_751
			{
				magazine="ADFU_magazine_84mm_heat_751";
				count=2;
			};
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadGearItem;
	class H_HelmetB;
	class UniformItem;
	class ItemInfo;
	class Uniform_Base;
	class Vest_Camo_Base;
	class VestItem;
	class H_Booniehat_tan;
	class ADFU_booniehat_dpdu: H_Booniehat_tan
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Boonie [DPDU]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-boonie.paa"
		};
	};
	class H_HelmetB_desert;
	class ADFU_helmetB_dpdu: H_HelmetB_desert
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF ECH [DPDU]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-helmet.paa"
		};
	};
	class U_B_CombatUniform_mcam;
	class ADFU_uniform_dpdu: U_B_CombatUniform_mcam
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Desert Uniform (Long Sleeve)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_rifleman_dpdu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_dpdu_medic: ADFU_uniform_dpdu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Desert Uniform (Medic)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-medic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_medic_dpdu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_dpdu_recon: ADFU_uniform_dpdu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Desert Uniform (Short Sleeve)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-uniform.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_teamLeader_dpdu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class U_B_PilotCoveralls;
	class ADFU_uniform_dpdu_pilot: U_B_PilotCoveralls
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Army Aviation Coveralls (DPDU)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_helicopterPilot_dpdu";
			containerClass="Supply20";
			mass=20;
		};
	};
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrier1_blk;
	class ADFU_carrierlite_dpdu: V_PlateCarrier1_blk
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carrier-Lite [DPDU]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-vest.paa"
		};
	};
	class V_TacVest_blk;
	class ADFU_tacticalvest_dpdu: V_TacVest_blk
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Tactical Vest (DPDU)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpdu\data\dpdu-pilotvest.paa"
		};
	};
};
class CfgGroups
{
	class West
	{
		name="BLUFOR";
		side=1;
		class ADF
		{
			name="ADF Commandos";
			class Infantry
			{
				name="Infantry";
				class ADFU_InfSquad_DPDU
				{
					faction="ADFU";
					name="Rifle Squad (DPDU)";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_squadleader_dpdu";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_dpdu";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_grenadier_dpdu";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_rifleman_dpdu";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_riflemanAT_dpdu";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_marksman_dpdu";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_explosive_dpdu";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_medic_dpdu";
					};
				};
				class ADFU_InfTeam_DPDU
				{
					faction="ADFU";
					side=1;
					name="Fire Team (DPDU)";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_dpdu";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_rifleman_dpdu";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_grenadier_dpdu";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_rifleman_dpdu";
					};
				};
				class ADFU_SentTeam_DPDU
				{
					faction="ADFU";
					side=1;
					name="Sentry Team (DPDU)";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_dpdu";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_rifleman_dpdu";
					};
				};
			};
		};
	};
};

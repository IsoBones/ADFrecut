class CfgPatches
{
	class ADFU_uniform_dpcu
	{
		units[]=
		{
			"ADFU_DPCU_Soldier_Base",
			"ADFU_rifleman_dpcu",
			"ADFU_engineer_dpcu",
			"ADFU_grenadier_dpcu",
			"ADFU_marksman_dpcu",
			"ADFU_medic_dpcu",
			"ADFU_riflemanAT_dpcu",
			"ADFU_crewman_dpcu",
			"ADFU_teamleader_dpcu",
			"ADFU_squadleader_dpcu",
			"ADFU_pilot_dpcu",
			"ADFU_lightGunner_dpcu",
			"ADFU_heavyGunner_dpcu",
			"ADFU_heavyGunner_ass_dpcu",
			"ADFU_ammobearer_dpcu",
			"ADFU_ah9_dpcu",
			"ADFU_mh9_dpcu",
			"ADFU_hunter_dpcu",
			"ADFU_hunterHMG_dpcu",
			"ADFU_hunterGMG_dpcu",
			"ADFU_AssaultPack_dpcu",
			"ADFU_Carryall_dpcu",
			"ADFU_Carryall_LSW_dpcu",
			"ADFU_Carryall_MG_dpcu",
			"ADFU_Carryall_dpcu_diver",
			"ADFU_Carryall_dpcu_medic",
			"ADFU_Carryall_dpcu_engineer",
			"ADFU_Carryall_dpcu_at",
			"ADFU_Carryall_gl_dpcu"
		};
		weapons[]=
		{
			"ADFU_HelmetC_dpcu",
			"ADFU_helmetB_dpcu",
			"ADFU_booniehat_dpcu",
			"ADFU_carrierLite_dpcu",
			"ADFU_plateCarrier_dpcu",
			"ADFU_tacticalVest_dpcu",
			"ADFU_uniform_dpcu",
			"ADFU_uniform_dpcu_recon",
			"ADFU_uniform_dpcu_medic",
			"ADFU_uniform_dpcu_tee",
			"ADFU_coveralls_dpcu"
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
	class ADFU_MEN_DPCU // Category class, you point to it in editorSubcategory property
	{
		displayName = "$STR_ADFU_MEN_DPCU"; // Name visible in the list
	};
};
class cfgVehicles
{
	class ADFU_Soldier_base_F;
	class ADFU_DPCU_Soldier_Base: ADFU_Soldier_base_F
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		editorSubcategory= "$STR_ADFU_MEN_DPCU";
		genericNames="NATOMen";
		nakedUniform="U_BasicBody";
		uniformClass="ADFU_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		weapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
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
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFU_rifleman_dpcu: ADFU_DPCU_Soldier_Base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_rifleman_dpcu";
		displayName="Rifleman";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_rifleman_dpcu.jpg";
		editorSubcategory= "ADFU_MEN_DPCU";
		vehicleClass="$STR_ADFU_MEN_DPCU";
		uniformAccessories[]={};
		uniformClass="ADFU_uniform_dpcu";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_dpcu\data\uniform_DPCU_co.paa"
		};
		backpack="ADFU_Carryall_dpcu";
	};
	class ADFU_engineer_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_engineer_dpcu";
		displayName="Combat Engineer";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_engineer_dpcu.jpg";
		engineer=1;
		saboteur=1;
		canDeactivateMines=1;
		detectSkill=80;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_Carryall_dpcu_engineer";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class ADFU_grenadier_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_grenadier_dpcu";
		displayName="Grenadier";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_grenadier_dpcu.jpg";
		weapons[]=
		{
			"ADFU_F88SA1_gl_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_gl_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		backpack="ADFU_Carryall_gl_dpcu";
	};
	class ADFU_marksman_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_marksman_dpcu";
		displayName="Designated Marksman";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_marksman_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu_tee";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_dpcu\data\uniform_DPCU_co.paa",
			"ADFU_uniform_dpcu\data\basicbody_army_co.paa"
		};
		weapons[]=
		{
			"ADFU_hk417_sand_army",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_hk417_sand_army",
			"ADFU_weapon_hpII",
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
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
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
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		backpack="";
	};
	class ADFU_medic_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_DPCU_Medic";
		displayName="Medical Technician";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_medic_dpcu.jpg";
		attendant=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="ADFU_uniform_dpcu_medic";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\uniform_DPCU_MEDIC_co.paa"
		};
		weapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetC_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManMedic";
		backpack="ADFU_Carryall_dpcu_Medic";
	};
	class ADFU_riflemanAT_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_DPCU_RiflemanAT";
		displayName="AT Gunner";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_riflemanAT_dpcu.jpg";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\uniform_DPCU_co.paa"
		};
		weapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_carlgustav_m3",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_carlgustav_m3",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManAT";
		backpack="ADFU_Carryall_dpcu_at";
	};
	class ADFU_crewman_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_DPCU_Crewman";
		displayName="Crewman";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_crewman_dpcu.jpg";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_dpcu\data\uniform_DPCU_co.paa"
		};
		weapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"H_HelmetCrew_I",
			"ADFU_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_HelmetCrew_I",
			"ADFU_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="";
	};
	class ADFU_cavalryman_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_DPCU_Crewman";
		displayName="Cavalryman";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_cavalryman_dpcu.jpg";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_dpcu\data\uniform_DPCU_co.paa"
		};
		weapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"H_Cap_headphones",
			"ADFU_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_headphones",
			"ADFU_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="";
	};
	class ADFU_teamleader_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="Brick Leader";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_teamleader_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		weapons[]=
		{
			"ADFU_F88SA1_gl_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_gl_eotech_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_AssaultPack_TL_dpcu";
		icon="iconManLeader";
	};
	class ADFU_squadleader_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="Section Leader";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_squadleader_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		weapons[]=
		{
			"ADFU_F88SA1_ta648_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_ta648_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellOrange"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellOrange"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManOfficer";
		backpack="";
	};
	class ADFU_pilot_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_DPCU_Pilot";
		displayName="Helicopter Pilot";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_pilot_dpcu.jpg";
		model="\A3\Characters_F\Common\coveralls.p3d";
		uniformClass="ADFU_coveralls_dpcu";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\pilotoveralls_DPCU_co.paa"
		};
		weapons[]=
		{
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		respawnMagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"ADFU_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"ADFU_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="";
	};
	class ADFU_lightGunner_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="LSW Gunner";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_lightGunner_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		weapons[]=
		{
			"ADFU_minimi_eotech",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_minimi_eotech",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_200Rnd_556_Belt_TR5",
			"ADFU_200Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		respawnMagazines[]=
		{
			"ADFU_200Rnd_556_Belt_TR5",
			"ADFU_200Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetC_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_Carryall_LSW_dpcu";
		icon="iconManMG";
	};
	class ADFU_heavyGunner_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="General Support Machine Gunner";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_heavyGunner_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		weapons[]=
		{
			"ADFU_mag58_elcan",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_mag58_elcan",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_150Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		respawnMagazines[]=
		{
			"ADFU_150Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_Carryall_MG_dpcu";
		icon="iconManMG";
	};
	class ADFU_heavyGunner_ass_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="General Support Gunner Ass.";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_heavyGunner_ass_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_Carryall_MG_dpcu";
		icon="iconMan";
	};
	class ADFU_ammobearer_dpcu: ADFU_rifleman_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		_generalMacro="B_Soldier_F";
		displayName="Ammobearer";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_ammobearer_dpcu.jpg";
		uniformClass="ADFU_uniform_dpcu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		weapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetB_dpcu",
			"ADFU_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_Carryall_LSW_dpcu";
		icon="iconManLeader";
	};
	class B_Heli_Light_01_armed_F;
	class B_Heli_Light_01_F;
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class ADFU_ah9_dpcu: B_Heli_Light_01_armed_F
	{
		scope=2;
		side=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		vehicleClass="AIR";
		displayName="AH-9 (DPCU)";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_ah9_dpcu.jpg";
		crew="ADFU_pilot_dpcu";
		typicalCargo[]=
		{
			"ADFU_pilot_dpcu"
		};
		attendant=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\ah9_co.paa"
		};
	};
	class ADFU_mh9_dpcu: B_Heli_Light_01_F
	{
		scope=2;
		side=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		vehicleClass="AIR";
		displayName="MH-9 (DPCU)";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_mh9_dpcu.jpg";
		crew="ADFU_pilot_dpcu";
		typicalCargo[]=
		{
			"ADFU_teamLeader_dpcu",
			"ADFU_rifleman_dpcu",
			"ADFU_engineer_dpcu",
			"ADFU_medic_dpcu",
			"ADFU_rifleman_dpcu"
		};
		attendant=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\ah9_co.paa"
		};
	};
	class ADFU_hunter_dpcu: B_MRAP_01_F
	{
		scope=2;
		side=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		vehicleClass="CAR";
		displayName="M-ATV (DPCU)";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_hunter_dpcu.jpg";
		crew="ADFU_rifleman_dpcu";
		typicalCargo[]=
		{
			"ADFU_teamLeader_dpcu",
			"ADFU_engineer_dpcu",
			"ADFU_medic_dpcu"
		};
		attendant=1;
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\hunter_co.paa",
			"\ADFU_uniform_dpcu\data\hunter_back_co.paa",
			""
		};
	};
	class ADFU_hunterHMG_dpcu: B_MRAP_01_hmg_F
	{
		scope=2;
		side=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		vehicleClass="CAR";
		displayName="M-ATV HMG (DPCU)";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_hunterHMG_dpcu.jpg";
		crew="ADFU_rifleman_dpcu";
		typicalCargo[]=
		{
			"ADFU_teamLeader_dpcu",
			"ADFU_engineer_dpcu",
			"ADFU_medic_dpcu"
		};
		attendant=1;
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\hunter_co.paa",
			"\ADFU_uniform_dpcu\data\hunter_back_co.paa",
			"\ADFU_uniform_dpcu\data\crows_co.paa",
			""
		};
	};
	class ADFU_hunterGMG_dpcu: B_MRAP_01_gmg_F
	{
		scope=2;
		side=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		vehicleClass="CAR";
		displayName="M-ATV GMG (DPCU)";
		editorPreview = "adfu_uniform_dpcu\preview\ADFU_hunterGMG_dpcu.jpg";
		crew="ADFU_rifleman_dpcu";
		typicalCargo[]=
		{
			"ADFU_teamLeader_dpcu",
			"ADFU_engineer_dpcu",
			"ADFU_medic_dpcu"
		};
		attendant=1;
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\hunter_co.paa",
			"\ADFU_uniform_dpcu\data\hunter_back_co.paa",
			"\ADFU_uniform_dpcu\data\crows_co.paa",
			""
		};
	};
	class B_Carryall_Base;
	class B_AssaultPack_blk;
	class ADFU_AssaultPack_dpcu: B_AssaultPack_blk
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Assault Pack (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\assaultpack_DPCU_co.paa"
		};
	};
	class ADFU_AssaultPack_TL_dpcu: B_AssaultPack_blk
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Assault Pack [DPCU]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\assaultpack_DPCU_co.paa"
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFU_Carryall_dpcu: B_Carryall_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall [DPCU]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_30Rnd_aug
			{
				magazine="ADFU_30Rnd_aug";
				count=5;
			};
			class _xx_ADFU_F1_GRENADE
			{
				magazine="ADFU_F1_GRENADE";
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
	class ADFU_Carryall_LSW_dpcu: B_Carryall_Base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall LSW (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_200Rnd_556_Belt_TR5
			{
				magazine="ADFU_200Rnd_556_Belt_TR5";
				count=2;
			};
		};
	};
	class ADFU_Carryall_MG_dpcu: B_Carryall_Base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall MG (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_150Rnd_762_Belt_TR5
			{
				magazine="ADFU_150Rnd_762_Belt_TR5";
				count=4;
			};
		};
	};
	class ADFU_Carryall_dpcu_diver: ADFU_Carryall_dpcu
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Diver Carryall (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_helmetB_dpcu
			{
				name="ADFU_helmetB_dpcu";
				count=1;
			};
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
			class _xx_ADFU_carrierLite_dpcu
			{
				name="ADFU_carrierLite_dpcu";
				count=1;
			};
			class _xx_ADFU_uniform_dpcu
			{
				name="ADFU_uniform_dpcu";
				count=1;
			};
		};
	};
	class ADFU_Carryall_dpcu_medic: ADFU_Carryall_dpcu
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall Medic (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_medic_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
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
	class ADFU_Carryall_dpcu_engineer: B_Carryall_Base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall Engineer (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
	};
	class ADFU_Carryall_dpcu_at: B_Carryall_Base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall AT (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_magazine_84mm_hedp_502
			{
				magazine="ADFU_magazine_84mm_hedp_502";
				count=1;
			};
			class _xx_ADFU_magazine_84mm_heat_751
			{
				magazine="ADFU_magazine_84mm_heat_551c";
				count=1;
			};
		};
	};
	class ADFU_Carryall_gl_dpcu: B_Carryall_Base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall GL (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=15;
			};
			class _xx_ADFU_F1_GRENADE
			{
				magazine="ADFU_F1_GRENADE";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class HeadGearItem;
	class UniformItem;
	class ItemInfo;
	class VestItem;
	class H_HelmetIA;
	class H_HelmetB;
	class H_HelmetCrew_I;
	class H_Booniehat_tan;
	class ADFU_HelmetC_dpcu: H_HelmetIA
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Helmet Canvas (DPCU)";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\DPCU_helmet_co.paa"
		};
	};
	class ADFU_helmetB_dpcu: H_HelmetB
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF ECH [DPCU]";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\DPCU_helmet_us_co.paa"
		};
	};
	class ADFU_booniehat_dpcu: H_Booniehat_tan
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Boonie [DPCU]";
		model="\A3\Characters_F\common\booniehat";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\booniehat_DPCU_co.paa"
		};
	};
	class V_PlateCarrier1_blk;
	class V_PlateCarrierH_CTRG;
	class V_TacVest_blk;
	class ADFU_carrierLite_dpcu: V_PlateCarrier1_blk
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carrier-Lite [DPCU]";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		picture="\ADFU_uniform_dpcu\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\vests_rgr_DPCU_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass="Supply140";
			mass=60;
			armor="5*0.8";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class ADFU_plateCarrier_dpcu: V_PlateCarrierH_CTRG
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carrier Rig [DPCU]";
		picture="\ADFU_uniform_dpcu\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\vests_rgr_DPCU_co.paa"
		};
	};
	class ADFU_tacticalVest_dpcu: V_TacVest_blk
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Tactical Vest [DPCU]";
		picture="\ADFU_uniform_dpcu\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_dpcu\data\pilotvest_DPCU_co.paa"
		};
	};
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_vest;
	class U_B_CombatUniform_mcam_tee;
	class U_B_CombatUniform_mcam_worn;
	class V_RebreatherB;
	class ADFU_uniform_dpcu: U_B_CombatUniform_mcam
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Combat Uniform (Long Sleeve)";
		picture="\ADFU_uniform_dpcu\data\icon_u_b_combatuniform_DPCU_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_rifleman_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_dpcu_recon: U_B_CombatUniform_mcam_vest
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Combat Uniform (Short Sleeve)";
		picture="\ADFU_uniform_dpcu\data\icon_u_b_combatuniform_DPCU_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_squadleader_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_dpcu_medic: ADFU_uniform_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Combat Uniform (Medic)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_medic_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_dpcu_tee: ADFU_uniform_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Disruptive Pattern Combat Uniform (Tee)";
		picture="\ADFU_uniform_dpcu\data\icon_u_b_combatuniform_DPCU_ca.paa";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_marksman_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_coveralls_dpcu: ADFU_uniform_dpcu
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Army Aviation Coveralls (DPCU)";
		model="\A3\Characters_F\Common\coveralls.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="\A3\Characters_F\Common\coveralls";
			uniformClass="ADFU_pilot_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
};
class CfgGroups
{
	class WEST
	{
		class ADFU
		{
			name="ADF";
			class Infantry
			{
				name="Infantry";
				class ADFU_InfSquad_DPCU
				{
					faction="ADFU";
					author="$STR_ADFU_AUTHOR";
					name="Rifle Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="ADFU_squadleader_dpcu";
						rank="LIEUTENANT";
						position[]={0,-7.5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ADFU_teamleader_dpcu";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ADFU_lightgunner_dpcu";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ADFU_riflemanAT_dpcu";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ADFU_medic_dpcu";
						rank="CORPORAL";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ADFU_ammobearer_dpcu";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ADFU_grenadier_dpcu";
						rank="PRIVATE";
						position[]={-15,-10,0};
					};
					class Unit7
					{
						side=1;
						vehicle="ADFU_rifleman_dpcu";
						rank="PRIVATE";
						position[]={0,5,0};
					};
				};
				class ADFU_InfTeam_DPCU
				{
					faction="ADFU";
					author="$STR_ADFU_AUTHOR";
					name="Fire Team";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="ADFU_teamleader_dpcu";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ADFU_lightGunner_dpcu";
						rank="CORPORAL";
						position[]={0,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ADFU_grenadier_dpcu";
						rank="PRIVATE";
						position[]={0,-10,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ADFU_ammobearer_dpcu";
						rank="PRIVATE";
						position[]={0,-15,0};
					};
				};
				class ADFU_ReconSquad_DPCU
				{
					faction="ADF";
					side=1;
					author="$STR_ADFU_AUTHOR";
					name="Cavalry Foot Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_dpcu";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_cavalryman_dpcu";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_cavalryman_dpcu";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_marksman_dpcu";
					};
				};
				class ADFU_InfAssault_DPCU
				{
					faction="ADF";
					side=1;
					author="$STR_ADFU_AUTHOR";
					name="Manoeuvre Support Section";
					icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
					class Unit0
					{
						side=1;
						vehicle="ADFU_squadleader_dpcu";
						rank="LIEUTENANT";
						position[]={0,-7.5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ADFU_heavyGunner_dpcu";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ADFU_heavyGunner_ass_dpcu";
						rank="PRIVATE";
						position[]={10,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ADFU_medic_dpcu";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ADFU_teamleader_dpcu";
						rank="SERGEANT";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ADFU_heavyGunner_dpcu";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ADFU_heavyGunner_ass_dpcu";
						rank="PRIVATE";
						position[]={20,-10,0};
					};
					class Unit7
					{
						side=1;
						vehicle="ADFU_riflemanAT_dpcu";
						rank="PRIVATE";
						position[]={0,5,0};
					};
					class Unit8
					{
						side=1;
						vehicle="ADFU_teamleader_dpcu";
						rank="SERGEANT";
						position[]={-20,-10,0};
					};
					class Unit9
					{
						side=1;
						vehicle="ADFU_heavyGunner_dpcu";
						rank="PRIVATE";
						position[]={20,-15,0};
					};
					class Unit10
					{
						side=1;
						vehicle="ADFU_heavyGunner_ass_dpcu";
						rank="PRIVATE";
						position[]={25,-15,0};
					};
					class Unit11
					{
						side=1;
						vehicle="ADFU_riflemanAT_dpcu";
						rank="PRIVATE";
						position[]={-5,15,0};
					};
				};
			};
			class Motorized
			{
				name="Motorized";
				class ADFU_MotInf_Team_DPCU_Bush
				{
					faction="ADFU";
					author="$STR_ADFU_AUTHOR";
					name="Bushmaster Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=1;
						Vehicle="ADFU_squadleader_dpcu";
					};
					class Unit1
					{
						position[]={0,-5,0};
						rank="SERGEANT";
						side=1;
						Vehicle="ADFU_teamleader_dpcu";
					};
					class Unit2
					{
						position[]={0,-10,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFU_medic_dpcu";
					};
					class Unit3
					{
						position[]={0,-15,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_grenadier_dpcu";
					};
					class Unit4
					{
						position[]={5,-20,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_lightGunner_dpcu";
					};
					class Unit5
					{
						position[]={-5,-20,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_riflemanAT_dpcu";
					};
					class Unit6
					{
						position[]={0,100,0};
						rank="PRIVATE";
						side=1;
						Vehicle="adfu_bushmaster_pws127mm_F";
					};
				};
				class ADFU_MotInf_Team_DPCU_MATV
				{
					faction="ADFU";
					author="$STR_ADFU_AUTHOR";
					name="M-ATV Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={5,0,0};
						rank="LIEUTENANT";
						side=1;
						Vehicle="ADFU_squadleader_dpcu";
					};
					class Unit1
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=1;
						Vehicle="ADFU_teamleader_dpcu";
					};
					class Unit2
					{
						position[]={10,-5,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFU_medic_dpcu";
					};
					class Unit3
					{
						position[]={-10,-5,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_grenadier_dpcu";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_riflemanAT_dpcu";
					};
					class Unit5
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_hunter_dpcu";
					};
					class Unit6
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_hunterHMG_dpcu";
					};
				};
			};
			class Mechanized
			{
				name="Mechanized (ASLAV)";
				class ADFU_MechInfSquad_DPCU_ASLAV
				{
					faction="ADFU";
					author="$STR_ADFU_AUTHOR";
					name="ASLAV Cavalry Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						position[]={5,0,0};
						rank="SERGEANT";
						side=1;
						Vehicle="ADFU_teamleader_dpcu";
					};
					class Unit1
					{
						position[]={-5,0,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFU_cavalryman_dpcu";
					};
					class Unit2
					{
						position[]={10,-5,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFU_cavalryman_dpcu";
					};
					class Unit3
					{
						position[]={-10,-5,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFU_marksman_dpcu";
					};
					class Unit4
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFU_land_aslav_mag58";
					};
				};
			};
		};
	};
};
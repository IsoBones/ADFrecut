// AMP COVERALLS
	class ADFU_coveralls_black_base: ADFU_soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		scope = 1;
		faction = "ADFU";
		author = "$STR_ADFU_AUTHOR";
		vehicleClass = "ADFU_MEN_AMP";
		displayName = "ADF AMP Base Unit";
		nakedUniform = "U_BasicBody";
		genericNames = "NATOMen";

		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass = "ADFU_coveralls_black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_BLACK_co.paa"};
	};
	class ADFU_coveralls_green_base: ADFU_coveralls_black_base {
		scope = 1;
		uniformClass = "ADFU_coveralls_green";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_GREEN_co.paa"};
		author = "$STR_ADFU_AUTHOR";
	};
	class ADFU_coveralls_tan_base: ADFU_coveralls_black_base {
		scope = 1;
		uniformClass = "ADFU_coveralls_tan";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_SAND_co.paa"};
		author = "$STR_ADFU_AUTHOR";
	};

// 2CDO AMP Unifroms
	class ADFU_uniform_amp_cam_base: ADFU_Soldier_base_F
	{
		scope = 1;
		faction = "ADFU";
		author = "$STR_ADFU_AUTHOR";
		genericNames = "NATOMen";
		vehicleClass = "ADFU_MEN_AMP";
		nakedUniform = "U_BasicBody";
		displayName = "ADF AMP Base Unit";
		_generalMacro = "B_Soldier_base_F";

		uniformClass = "ADFU_uniform_amp_cam";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
    	hiddenSelections[] = {"Camo","Insignia"};
	};
	class ADFU_uniform_amp_grn_base: ADFU_uniform_amp_cam_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		uniformClass = "ADFU_uniform_amp_grn";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Green.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
	};
	class ADFU_uniform_amp_tan_base: ADFU_uniform_amp_cam_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		uniformClass = "ADFU_uniform_amp_tan";
		hiddenSelections[] = {"Camo","Insignia"};
        hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Tan.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
	};
	// Short Sleeve Uniforms
	class ADFU_uniform_amp_cam_ss_base: ADFU_uniform_amp_cam_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		uniformClass = "ADFU_uniform_amp_cam_ss";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_uniform_amp_grn_ss_base: ADFU_uniform_amp_grn_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		uniformClass = "ADFU_uniform_amp_grn_ss";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_uniform_amp_tan_ss_base: ADFU_uniform_amp_tan_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		uniformClass = "ADFU_uniform_amp_tan_ss";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};

// on-Base Uniforms
	class ADFU_uniform_amp_tee_grn_base: ADFU_soldier_base_F
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "ADFU_uniform_amp_tee_grn";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa","ADFU_uniform_amp\Uniform\CDO\basicbody_1st_commando_co.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
	};
	class ADFU_uniform_amp_tee_tan_base: ADFU_uniform_amp_tee_grn_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "ADFU_uniform_amp_tee_tan";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa","ADFU_uniform_amp\Uniform\CDO\basicbody_2nd_commando_co.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
	};
	class ADFU_uniform_amp_tee_khk_base: ADFU_uniform_amp_tee_grn_base
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "ADFU_uniform_amp_tee_khk";
		hiddenSelections[] = {"Camo","Camo2","Insignia"};
        hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa","ADFU_uniform_amp\Uniform\CDO\basicbody_army_co.paa","ADFU_uniform_amp\Uniform\team_ca.paa"};
	};

///////////////////////////
// Editor Placable Units //
	class ADFU_rifleman_amp: ADFU_uniform_amp_tan_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		faction = "ADFU";
		icon = "iconMan";
		vehicleClass = "ADFU_MEN_AMP";
		displayName = "Rifleman";
		weapons[] = {"ADFU_m4a5_afg_wdl_eotech","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_afg_wdl_eotech","ADFU_weapon_usp_snds","Throw","Put"};
		Items[] = {"FirstAidKit","NVGoggles_OPFOR"};
		RespawnItems[] = {"FirstAidKit","NVGoggles_OPFOR"};
		magazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Snake","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Snake","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_assaultpack_black";
	};
	class ADFU_squadleader_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Squad Leader";
		weapons[] = {"ADFU_m4a5_m203fg_des_eotechX3_sd","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_m203fg_des_eotechX3_sd","ADFU_weapon_usp_snds","Throw","Put"};
		Items[] = {"FirstAidKit","NVGoggles_OPFOR"};
		RespawnItems[] = {"FirstAidKit","NVGoggles_OPFOR"};
		magazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Grass","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Grass","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
		backpack = "";
	};
	class ADFU_teamleader_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Team Leader";
		weapons[] = {"ADFU_m4a5_vfg_elcan","ADFU_weapon_usp_snds","ADFU_weapon_m72a6", "Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_vfg_elcan","ADFU_weapon_usp_snds","ADFU_weapon_m72a6","Throw","Put"};
		linkedItems[] = {"ADFU_Helmet_Desert","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Desert","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
		backpack = "ADFU_kitbag_amp";
	};
	class ADFU_grenadier_amp: ADFU_uniform_amp_grn_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Grenadier";
		icon = "iconManExplosive";
		weapons[] = {"ADFU_m4a5_m203_wdl_ta31","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_m203_wdl_ta31","ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Snake","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Snake","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_carryall_tan";
	};
	class ADFU_engineer_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Engineer Specialist";
		engineer = 1;
		detectSkill = 80;
		weapons[] = {"ADFU_m4a5_afg_ta31","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_afg_ta31","ADFU_weapon_usp_snds","Throw","Put"};
		linkedItems[] = {"ADFU_Helmet_Sand","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Sand","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_kitbag_green";
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class ADFU_explosive_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Explosive Specialist";
		saboteur = 1;
		canDeactivateMines = 1;
		detectSkill = 80;
		weapons[] = {"ADFU_m4a5_vfg_des_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_vfg_des_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		linkedItems[] = {"ADFU_Helmet_Black","ADFU_CarrierLite_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Black","ADFU_CarrierLite_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_kitbag_green";
		icon = "iconManExplosive";
	};
	class ADFU_marksman_amp: ADFU_uniform_amp_grn_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Marksman";
		weapons[] = {"ADFU_sr25_ta648","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_sr25_ta648","ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_CamInk","ADFU_CarrierLite_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_CamInk","ADFU_CarrierLite_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ADFU_lightGunner_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Light Machine Gunner";
		weapons[] = {"ADFU_minimi_para_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_minimi_para_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","ADFU_200Rnd_556_Belt_TR5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Cam","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Cam","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};
	class ADFU_heavyGunner_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Heavy Machine Gunner";
		weapons[] = {"ADFU_maximi_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_maximi_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","ADFU_150Rnd_762_Belt_TR5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Grass","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Grass","ADFU_PlateCarrier_Green_Digi","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};
	class ADFU_riflemanAT_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Rifleman AT";
		weapons[] = {"ADFU_m4a5_afg_eotech_sd","ADFU_carlgustav_m3","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_afg_eotech_sd","ADFU_carlgustav_m3","Throw","Put"};
		magazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_magazine_84mm_heat_551c","ADFU_magazine_84mm_heat_551c","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		respawnMagazines[] = {"ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_30Rnd_STANAG","ADFU_magazine_84mm_heat_551c","ADFU_magazine_84mm_heat_551c","SmokeShell","SmokeShell","ADFU_f1_grenade","ADFU_f1_grenade"};
		linkedItems[] = {"ADFU_Helmet_Black","ADFU_PlateCarrier_AMP","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Black","ADFU_PlateCarrier_AMP","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_kitbag_amp";
		icon = "iconManAT";
	};
	class ADFU_medic_amp: ADFU_uniform_amp_grn_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Combat Medic";
		attendant = 1;
		weapons[] = {"ADFU_m4a5_afg_wdl_eotech","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_afg_wdl_eotech","ADFU_weapon_usp_snds","Throw","Put"};
		linkedItems[] = {"ADFU_Helmet_Medic_Grass","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_Medic_Grass","ADFU_PlateCarrier_Green_Snake","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMedic";
		picture = "pictureHeal";
		backpack = "ADFU_carryall_amp";
	};
	class ADFU_ammobearer_amp: ADFU_rifleman_amp
	{
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Ammo-Bearer";
		attendant = 1;
		weapons[] = {"ADFU_m4a5_vfg_des_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_m4a5_vfg_des_elcan","ADFU_weapon_usp_snds","Throw","Put"};
		linkedItems[] = {"ADFU_Helmet_CamInk","ADFU_CarrierHeavy_Green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ADFU_Helmet_CamInk","ADFU_CarrierHeavy_Green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "ADFU_kitbag_tan";
	};
	class ADFU_helicopterPilot_amp: ADFU_coveralls_green_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Helicopter Pilot";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class ADFU_jetPilot_amp: ADFU_coveralls_tan_base
	{
		scope = 2;
		scopeCurator=2;
		author = "$STR_ADFU_AUTHOR";
		displayName = "Pilot";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"ADFU_weapon_usp_snds","Throw","Put"};
		respawnWeapons[] = {"ADFU_weapon_usp_snds","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
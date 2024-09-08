class CfgPatches{
	class ADFRC_uniform_amcu{
		units[]={
			"ADFRC_AMCU_Soldier_Base",
			"ADFRC_rifleman_amcu",
			"ADFRC_rifleman_amcu_recon"
		};
		weapons[]={
			"ADFRC_helmetC_amcu",
			"ADFRC_uniform_amcu",
			"ADFRC_uniform_amcu_recon"
		};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADF_Core"
		};
	};
};
class CfgEditorSubcategories{
	class ADFRC_MEN_AMCU{ // Category class, you point to it in editorSubcategory property
		displayName = "Men (Army AMCU)"; // Name visible in the list
	};
};
class CfgGroups{
	class West{
		name = "$STR_A3_CfgGroups_West0";
		//side=1;
		class ADF_Present{
			name="Australian Army (Present)";
			class Infantry{
				name="Infantry";
				class ADFRC_InfSquad_AMCU{
					name="Infantry Section";
					side=1;
					faction="ADF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_SectionLeader";
						rank="SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_LSW";
						rank="PRIVATE";
						position[] = {3,-3,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[] = {6,-6,0};
					};
					class Unit4{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[] = {-6,-6,0};
					};
					class Unit5{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_LSW";
						rank="PRIVATE";
						position[] = {9,-9,0};
					};
					class Unit6{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[] = {-9,-9,0};
					};
					class Unit7{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[] = {12,-12,0};
					};
				};
				class ADFRC_InfTeam_AMCU{
					name="Infantry Brick";
					side=1;
					faction="ADF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={-3,-3,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Marksman";
						rank="PRIVATE";
						position[]={6,-6,0};
					};
				};
				class ADFRC_InfSentry_AMCU{
					name="Sentry";
					side=1;
					faction="ADF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Marksman";
						rank="PRIVATE";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
				};	
				class ADFRC_CavDismounts_AMCU{
					name="Cavalry Dismounts";
					side=1;
					faction="ADF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={-3,-3,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_Marksman";
						rank="PRIVATE";
						position[]={6,-6,0};
					};
				};
				class ADFRC_ManSupport_AMCU{
					name="Manoeuvre Support Section";
					side=1;
					faction="ADF";
					icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_SectionLeader";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[] = {-3,-3,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_CFA";
						rank="PRIVATE";
						position[]={6,-6,0};
					};
					class Unit4{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_BrickLeader";
						rank="SERGEANT";
						position[]={-6,-6,0};
					};
					class Unit5{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={9,-9,0};
					};
					class Unit6{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[]={-9,-9,0};
					};
					class Unit7{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={12,-12,0};
					};
					class Unit8{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={12,-12,0};
					};
					class Unit9{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit10{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit11{
						side=1;
						vehicle="ADFRC_AMCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={18,-18,0};
					};
				};				
			};
			class Motorized{
				name="Motorized";
				class ADFRC_MotInf_Team_AMCU_Bush
				{
					faction="ADF";
					author="$STR_ADF_AUTHOR";
					name="Bushmaster Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={0,-5,0};
						rank="LIEUTENANT";
						side=1;
						Vehicle="ADFRC_squadleader_amcu";
					};
					class Unit1
					{
						position[]={5,-10,0};
						rank="SERGEANT";
						side=1;
						Vehicle="ADFRC_teamleader_amcu";
					};
					class Unit2
					{
						position[]={-5,-10,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFRC_medic_amcu";
					};
					class Unit3
					{
						position[]={10,-15,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_grenadier_amcu";
					};
					class Unit4
					{
						position[]={-10,-15,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_lightGunner_amcu";
					};
					class Unit5
					{
						position[]={15,-20,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_riflemanAT_amcu";
					};
					class Unit6
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_bushmaster_pws127mm_F";
					};
				};
				/*class ADFRC_MotInf_Team_AMCU_MATV
				{
					faction="ADFU";
					author="$STR_ADF_AUTHOR";
					name="M-ATV Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={5,0,0};
						rank="LIEUTENANT";
						side=1;
						Vehicle="ADFRC_squadleader_amcu";
					};
					class Unit1
					{
						position[]={-5,0,0};
						rank="SERGEANT";
						side=1;
						Vehicle="ADFRC_teamleader_amcu";
					};
					class Unit2
					{
						position[]={10,-5,0};
						rank="CORPORAL";
						side=1;
						Vehicle="ADFRC_medic_amcu";
					};
					class Unit3
					{
						position[]={-10,-5,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_grenadier_amcu";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_riflemanAT_amcu";
					};
					class Unit5
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_hunter_amcu";
					};
					class Unit6
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_hunterHMG_amcu";
					};
				};*/
			};
			class Mechanized{
				name="Mechanized (ASLAV)";
				class ADFRC_MechInfSquad_AMCU_ASLAV
				{
					faction="ADF";
					author="$STR_ADF_AUTHOR";
					name="ASLAV Infantry Section";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						position[]={0,10,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_aslav";
					};
					class Unit1
					{
						side=1;
						vehicle="ADFRC_squadleader_amcu";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ADFRC_lightGunner_amcu";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ADFRC_grenadier_amcu";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ADFRC_riflemanAT_amcu";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ADFRC_teamleader_amcu";
						rank="CORPORAL";
						position[]={0,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ADFRC_lightGunner_amcu";
						rank="PRIVATE";
						position[]={5,-10,0};
					};
					class Unit7
					{
						side=1;
						vehicle="ADFRC_grenadier_amcu";
						rank="PRIVATE";
						position[]={-5,-10,0};
					};
					class Unit8
					{
						side=1;
						vehicle="ADFRC_riflemanAT_amcu";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit9
					{
						position[]={0,-15,0};
						rank="PRIVATE";
						side=1;
						Vehicle="ADFRC_aslav";
					};
					
				};
			};
		};
	};
};
class CfgVehicles{
	class ADFRC_Soldier_base_F;
	class ADFRC_AMCU_Soldier_Base: ADFRC_Soldier_base_F{
		displayName="AMCU Soldier Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorSubcategory= "ADFRC_MEN_AMCU";
		modelSides[] = {3,2,1,0};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="ADFRC_Uniform_AMCU";
		//backpack="ADFRC_AssaultPack_AMC_1_Backpanel";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Units\adfrc_men_amcu\data\clothing_recut_amc_u_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"\ADF_Units\adfrc_men_amcu\data\clothing1.rvmat"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	class ADFRC_AMCU_Soldier_Rolled_Base: ADFRC_AMCU_Soldier_Base{
		displayName="AMCU Soldier Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_rifleman_amcu_ss.jpg";
		uniformClass="ADFRC_Uniform_AMCU_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Units\adfrc_men_amcu\data\clothing_recut_amc_u_co.paa"
		};
		hiddenSelectionsMaterials[]={
			"\ADF_Units\adfrc_men_amcu\data\clothing1.rvmat"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	///////////////////////////////////////////////////////////////////////////////////
	class ADFRC_AMCU_Soldier_F: ADFRC_AMCU_Soldier_Base{
		displayName="Rifleman";
		//_generalMacro="ADFRC_AMCU_Soldier_F";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_rifleman_amcu.jpg";
		threat[]={0.80000001,0.1,0.1};
		backpack="adfrc_CarryAll_amc";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_Grenadier: ADFRC_AMCU_Soldier_F{
		displayName="Grenadier";
		//_generalMacro="ADFRC_AMCU_Soldier_Grenadier";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_grenadier_amcu.jpg";
		cost=200000;
		threat[]={0.90000001,0.1,0.1};
		backpack="ADFRC_Carryall_gl_amcu";
		weapons[]={
			"arifle_AUG_GL_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_GL_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
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
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
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
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_LSW: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="LSW Gunner";
		//_generalMacro="ADFRC_AMCU_Soldier_LSW";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_lightGunner_amcu.jpg";
		icon="iconManMG";
		cost=220000;
		threat[]={0.90000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_MG_s"
				};
				speechPlural[]={
					"veh_infantry_MG_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural="$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound="veh_infantry_MG_s";
		backpack="ADFRC_Carryall_LSW_amcu";
		weapons[]={
			"ADFRC_minimi_eotech",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_minimi_eotech",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_200Rnd_556_Belt_TR5",
			"ADFRC_200Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"ADFRC_200Rnd_556_Belt_TR5",
			"ADFRC_200Rnd_556_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_SectionLeader: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Section Leader";
		//_generalMacro="ADFRC_AMCU_Soldier_SectionLeader";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;	
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_squadleader_amcu.jpg";
		icon="iconManLeader";
		camouflage=1.4;
		cost=250000;
		threat[]={0.85000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellOrange"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellOrange"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_BrickLeader: ADFRC_AMCU_Soldier_F{
		displayName="Brick Leader";
		//_generalMacro="ADFRC_AMCU_Soldier_BrickLeader";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_teamleader_amcu.jpg";
		camouflage=1.4;
		cost=250000;
		threat[]={0.83000001,0.1,0.1};
		backpack="ADFRC_AssaultPack_amc";
		weapons[]=
		{
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};	
	};
	class ADFRC_AMCU_Soldier_Marksman: ADFRC_AMCU_Soldier_F{
		displayName="Marksman";
		//_generalMacro="ADFRC_AMCU_Soldier_Marksman";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_marksman_amcu.jpg";
		cost=250000;
		threat[]={0.95000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_sniper_s"
				};
				speechPlural[]={
					"veh_infantry_sniper_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural="$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound="veh_infantry_sniper_s";
		//backpack="";
		weapons[]={ // ADFRC_hk417_sand, ADFRC_acog_ta648_rds_t, acc_pointer_IR, 20Rnd_762x51_Mag
			"arifle_AUG_Elcan_Pointer_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"arifle_AUG_Elcan_Pointer_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_MATGunner: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="MAT Gunner";
		//_generalMacro="ADFRC_AMCU_Soldier_MATGunner";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_riflemanAT_amcu.jpg";
		icon="iconManAT";
		cost=130000;
		threat[]={0.80000001,0.80000001,0.30000001};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_AT_s"
				};
				speechPlural[]={
					"veh_infantry_AT_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound="veh_infantry_AT_s";
		backpack="adfrc_CarryAll_amcu_at";
		weapons[]=
		{
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_carlgustav_m3",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_carlgustav_m3",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_CFA: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Combat First Aider";
		//_generalMacro="ADFRC_AMCU_Soldier_CFA";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_medic_amcu.jpg";
		icon="iconManMedic";
		attendant=1;
		camouflage=1.6;
		picture="pictureHeal";
		threat[]={0.70000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_medic_s"
				};
				speechPlural[]={
					"veh_infantry_medic_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural="$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound="veh_infantry_medic_s";
		backpack="adfrc_CarryAll_amcu_Medic";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};	
	};
	class ADFRC_AMCU_Soldier_Engineer: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Combat Engineer";
		//_generalMacro="ADFRC_AMCU_Soldier_Engineer";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_engineer_amcu.jpg";
		icon="iconManEngineer";
		picture="pictureRepair";
		engineer=1;
		camouflage=1.6;
		//saboteur=1;
		canDeactivateMines=1;
		detectSkill=31;
		backpack="adfrc_CarryAll_amcu_engineer";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_HeliPilot: ADFRC_AMCU_Soldier_F{
		displayName="Helicopter Pilot";
		//_generalMacro="ADFRC_AMCU_Soldier_HeliPilot";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_pilot_amcu.jpg";
		camouflage=2;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_pilot_s"
				};
				speechPlural[]={
					"veh_infantry_pilot_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		//backpack="";
		weapons[]={
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		respawnMagazines[]={
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		linkedItems[]={
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_PilotHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_HeliCrew: ADFRC_AMCU_Soldier_F{
		displayName="Helicopter Crew";
		//_generalMacro="ADFRC_AMCU_Soldier_HeliCrew";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_pilot_amcu.jpg";
		camouflage=2;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_pilot_s"
				};
				speechPlural[]={
					"veh_infantry_pilot_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural="$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound="veh_infantry_pilot_s";
		//backpack="";
		weapons[]={
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		respawnMagazines[]={
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellPurple"
		};
		linkedItems[]={
			"H_CrewHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_CrewHelmetHeli_O",
			"V_TacVest_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_Crewman: ADFRC_AMCU_Soldier_F{
		displayName="Crewman";
		//_generalMacro="ADFRC_AMCU_Soldier_Crewman";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_crewman_amcu.jpg";
		camouflage=1.6;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"arifle_AUG_C_black_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"arifle_AUG_C_black_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"H_HelmetCrew_I",
			"ADFRC_LPC_Tan_1",
			"adfrc_facewear_Shemagh_cbr_gatorz_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_HelmetCrew_I",
			"ADFRC_LPC_Tan_1",
			"adfrc_facewear_Shemagh_cbr_gatorz_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_CavalryMan: ADFRC_AMCU_Soldier_F{
		displayName="Cavalryman";
		//_generalMacro="ADFRC_AMCU_Soldier_CavalryMan";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_amcu\preview\ADFRC_cavalryman_amcu.jpg";
		camouflage=1.6;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"arifle_AUG_C_black_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"arifle_AUG_C_black_F",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"H_Cap_headphones",
			"ADFRC_LPC_Tan_2",
			"adfrc_facewear_kondor_blk_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_Cap_headphones",
			"ADFRC_LPC_Tan_2",
			"adfrc_facewear_kondor_blk_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_GSMG: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="General Support Machine Gunner";
		//_generalMacro="ADFRC_AMCU_Soldier_GSMG";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "ADF_Units\ADFRC_men_amcu\preview\ADFRC_heavyGunner_amcu.jpg";
		icon="iconManMG";
		cost=230000;
		threat[]={0.90000001,0.1,0.1};
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_MG_s"
				};
				speechPlural[]={
					"veh_infantry_MG_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural="$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound="veh_infantry_MG_s";
		backpack="ADFRC_Carryall_MG_amcu";
		weapons[]={
			"ADFRC_mag58_elcan",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_mag58_elcan",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_150Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"ADFRC_150Rnd_762_Belt_TR5",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_GSMGAsst: ADFRC_AMCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="General Support Gunner Assistant";
		//_generalMacro="ADFRC_AMCU_Soldier_GSMGAsst";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "ADF_Units\ADFRC_men_amcu\preview\ADFRC_heavyGunner_ass_amcu.jpg";
		camouflage=1.5;
		threat[]={0.80000001,0.1,0.1};
		backpack="ADFRC_Carryall_MG_amcu";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_opscore_marine_Snakeskin_amcu_Ct_1_Aus",
			"ADFRC_PC_Tan_1",
			"adfrc_facewear_ESS_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_AMCU_Soldier_AmmoBearer: ADFRC_AMCU_Soldier_Rolled_Base{
		displayName="Ammobearer";
		//_generalMacro="ADFRC_AMCU_Soldier_AmmoBearer";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		//editorPreview = "ADF_Units\ADFRC_men_amcu\preview\ADFRC_ammobearer_amcu.jpg";
		camouflage=1.5;
		threat[]={0.80000001,0.1,0.1};
		//backpack="ADFRC_Carryall_LSW_amcu";
		weapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"arifle_AUG_black_arco_flash_F",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"30Rnd_556x45_AUG_Mag_F",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_ECH_amcu",
			"ADFRC_carrierLite_amcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_ECH_amcu",
			"ADFRC_carrierLite_amcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class CfgWeapons{
	class Uniform_Base;
	class UniformItem;
	class ADFRC_Uniform_AMCU: Uniform_Base{
		displayName="AMCU Combat Dress (Long Sleeve)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Units\adfrc_men_amcu\data\icon_u_b_combatuniform_AMCU_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_AMCU_Soldier_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Rolled: Uniform_Base{
		displayName="AMCU Combat Dress (Rolled Sleeve)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Units\adfrc_men_amcu\data\icon_u_b_combatuniform_AMCU_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_AMCU_Soldier_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
};
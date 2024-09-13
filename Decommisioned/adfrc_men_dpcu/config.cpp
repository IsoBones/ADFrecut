class CfgPatches{
	class ADFRC_Units_DPCU{
		units[]={
			"ADFRC_DPCU_Soldier_F",
			"ADFRC_DPCU_Soldier_Grenadier",
			"ADFRC_DPCU_Soldier_LSW",
			"ADFRC_DPCU_Soldier_SectionLeader",
			"ADFRC_DPCU_Soldier_BrickLeader",
			"ADFRC_DPCU_Soldier_Marksman",
			"ADFRC_DPCU_Soldier_MATGunner",
			"ADFRC_DPCU_Soldier_CFA",
			"ADFRC_DPCU_Soldier_Engineer",
			"ADFRC_DPCU_Soldier_HeliPilot",
			"ADFRC_DPCU_Soldier_HeliCrew",
			"ADFRC_DPCU_Soldier_Crewman",
			"ADFRC_DPCU_Soldier_CavalryMan",
			"ADFRC_DPCU_Soldier_GSMG",
			"ADFRC_DPCU_Soldier_GSMGAsst",
			"ADFRC_DPCU_Soldier_AmmoBearer"
		};
		weapons[]={
			"ADFRC_Uniform_DPCU",
			"ADFRC_Uniform_DPCU_Rolled",
			"ADFRC_Uniform_DPCU_Tee",
			"ADFRC_Coveralls_DPCU"
		};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADF_Core",
			"ADF_Weapons",
			"ADF_Gear"
		};
	};
};
class CfgEditorSubcategories{
	class ADFRC_MEN_DPCU{
		displayName = "$STR_ADF_MEN_DPCU";
	};
};
class CfgGroups{ // data_f for Groups
	class West{
		name = "$STR_A3_CfgGroups_West0";
		side=1;
		class ADF{
			name="Australian Army (2000-2008)";
			class Infantry{
				name="Infantry";
				class ADFRC_InfSquad_DPCU{
					name="Infantry Section";
					side=1;
					faction="ADF";
					rarityGroup = 0.5; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_SectionLeader";
						rank="SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit7{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class ADFRC_InfTeam_DPCU{
					name="Infantry Brick";
					side=1;
					faction="ADF";
					rarityGroup = 0.3; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Marksman";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class ADFRC_InfSentry_DPCU{
					name="Sentry";
					side=1;
					faction="ADF";
					rarityGroup = 0.5; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Marksman";
						rank="PRIVATE";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class ADFRC_CavDismounts_DPCU{
					name="Cavalry Dismounts";
					side=1;
					faction="ADF";
					rarityGroup = 0.2; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class ADFRC_ManSupport_DPCU{
					name="Manoeuvre Support Section";
					side=1;
					faction="ADF";
					rarityGroup = 0.5; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_SectionLeader";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_CFA";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
					class Unit8{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit9{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMG";
						rank="PRIVATE";
						position[]={25,-25,0};
					};
					class Unit10{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_GSMGAsst";
						rank="PRIVATE";
						position[]={-25,-25,0};
					};
					class Unit11{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={30,-30,0};
					};
				};
			};
			class Motorized{
				name="Motorized";
				class ADFRC_MotInf_Team_DPCU_Bush{
					name="Bushmaster Section";
					side=1;
					faction="ADF";
					rarityGroup = 0.3; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_bushmaster_pws127mm_F";
						rank="SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_SectionLeader";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_CFA";
						rank="PRIVATE";
						position[]={5,-2,0};
					};
					class Unit3{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={5,-4,0};
					};
					class Unit4{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit5{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit6{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={-5,-4,0};
					};
				};
				class ADFRC_MotInf_Reinforcements_DPCU{
					name="Motorised Reinforcements";
					side=1;
					faction="ADF";
					rarityGroup = 0.5; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0{
						side=1;
						vehicle="ADFRC_hemtt_transport";
						rank="SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_SectionLeader";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={5,-2,0};
					};
					class Unit3{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={5,-4,0};
					};
					class Unit4{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={5,-6,0};
					};
					class Unit5{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={5,-8,0};
					};
					class Unit6{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={5,-10,0};
					};
					class Unit7{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={5,-12,0};
					};
					class Unit8{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={5,-14,0};
					};
					class Unit9{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_SectionLeader";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit10{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit11{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={-5,-4,0};
					};
					class Unit12{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={-5,-6,0};
					};
					class Unit13{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={-5,-8,0};
					};
					class Unit14{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_LSW";
						rank="PRIVATE";
						position[]={-5,-10,0};
					};
					class Unit15{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_Grenadier";
						rank="PRIVATE";
						position[]={-5,-12,0};
					};
					class Unit16{
						side=1;
						vehicle="ADFRC_DPCU_Soldier_MATGunner";
						rank="PRIVATE";
						position[]={-5,-14,0};
					};
				};
			};
			class Mechanized{
				name="Mechanized (ASLAV)";
				class ADFRC_MechInfTeam_DPCU_ASLAV{
					name="ASLAV Cavalry Team";
					side=1;
					faction="ADF";
					rarityGroup = 0.6; //<--- Is used for ALiVE and assuming other mods too
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0{
						side=1;
						Vehicle="ADFRC_aslav";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_BrickLeader";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={-5,-5,0};		
					};
					class Unit3{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4{
						side=1;
						Vehicle="ADFRC_DPCU_Soldier_CavalryMan";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};
class CfgVehicles{
	class ADFRC_Soldier_base_F;
	class ADFRC_DPCU_Soldier_Base: ADFRC_Soldier_Base_F{
		displayName="DPCU Soldier Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorSubcategory= "ADFRC_MEN_DPCU";
		modelSides[] = {3,2,1,0};
		vehicleClass=$STR_ADF_MEN_DPCU;
		uniformClass="ADFRC_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\uniform_DPCU_co.paa"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	class ADFRC_DPCU_Soldier_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="DPCU Soldier Rolled Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorSubcategory= "ADFRC_MEN_DPCU";
		modelSides[] = {3,2,1,0};
		vehicleClass=$STR_ADF_MEN_DPCU;
		uniformClass="ADFRC_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\uniform_DPCU_co.paa"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	class ADFRC_DPCU_Soldier_Tee_Base: ADFRC_Soldier_Base_F{
		displayName="DPCU Soldier Tee Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorSubcategory= "ADFRC_MEN_DPCU";
		modelSides[] = {3,2,1,0};
		vehicleClass=$STR_ADF_MEN_DPCU;
		uniformClass="ADFRC_uniform_dpcu";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]={
			"Camo"
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\uniform_DPCU_co.paa"
			"ADF_Units\ADFRC_men_dpcu\data\basicbody_army_co.paa"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	class ADFRC_DPCU_Soldier_Coveralls_Base: ADFRC_Soldier_Base_F{
		displayName="DPCU Soldier Coveralls Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		editorSubcategory= "ADFRC_MEN_DPCU";
		modelSides[] = {3,2,1,0};
		vehicleClass=$STR_ADF_MEN_DPCU;
		uniformClass="ADFRC_coveralls_dpcu";
		model="\A3\Characters_F\Common\coveralls.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"ADF_Units\ADFRC_men_dpcu\data\pilotoveralls_DPCU_co.paa"
		};
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
	};
	///////////////////////////////////////////////////////////////////////////////////	
	class ADFRC_DPCU_Soldier_F: ADFRC_DPCU_Soldier_Base{
		displayName="Rifleman";
		//_generalMacro="ADFRC_DPCU_Soldier_F";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_rifleman_dpcu.jpg";
		threat[]={0.80000001,0.1,0.1};
		backpack="adfrc_CarryAll_dpcu";
		weapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_Grenadier: ADFRC_DPCU_Soldier_Base{
		displayName="Grenadier";
		//_generalMacro="ADFRC_DPCU_Soldier_Grenadier";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_grenadier_dpcu.jpg";
		cost=200000;
		threat[]={0.90000001,0.1,0.1};
		backpack="ADFRC_Carryall_gl_dpcu";
		weapons[]={
			"ADFRC_F88SA1_gl_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_gl_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
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
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
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
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_LSW: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="LSW Gunner";
		_generalMacro="B_Soldier_F";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_lightGunner_dpcu.jpg";
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
		backpack="ADFRC_Carryall_LSW_dpcu";
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
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"ADFRC_HelmetC_dpcu",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_SectionLeader: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Section Leader";
		//_generalMacro="ADFRC_DPCU_Soldier_SectionLeader";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_squadleader_dpcu.jpg";
		icon="iconManLeader";
		camouflage=1.4;
		cost=250000;
		threat[]={0.85000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"ADFRC_F88SA1_ta648_laser",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_ta648_laser",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
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
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
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
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_BrickLeader: ADFRC_DPCU_Soldier_Base{
		displayName="Brick Leader";
		//_generalMacro="ADFRC_DPCU_Soldier_BrickLeader";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_teamleader_dpcu.jpg";
		icon="iconManLeader";
		camouflage=1.4;
		cost=250000;
		threat[]={0.83000001,0.1,0.1};
		backpack="ADFRC_AssaultPack_TL_dpcu";
		weapons[]={
			"ADFRC_F88SA1_gl_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_gl_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_plateCarrier_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_Marksman: ADFRC_DPCU_Soldier_Tee_Base{ // Tee
		displayName="Designated Marksman";
		//_generalMacro="ADFRC_DPCU_Soldier_Marksman";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_marksman_dpcu.jpg";
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
		weapons[]={
			"ADFRC_hk417_sand_army",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[]={
			"ADFRC_hk417_sand_army",
			"ADFRC_hpII",
			"Throw",
			"Put",
			"Rangefinder"
		};
		magazines[]={
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_MATGunner: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="MAT Gunner";
		//_generalMacro="ADFRC_DPCU_Soldier_MATGunner";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;	
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_riflemanAT_dpcu.jpg";
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
		backpack="adfrc_CarryAll_dpcu_at";
		weapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_carlgustav_m3",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_carlgustav_m3",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_CFA: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Combat First Aider";
		//_generalMacro="ADFRC_DPCU_Soldier_CFA";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_medic_dpcu.jpg";
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
		backpack="adfrc_CarryAll_dpcu_Medic";
		weapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_Engineer: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Combat Engineer";
		//_generalMacro="ADFRC_DPCU_Soldier_Engineer";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_engineer_dpcu.jpg";
		icon="iconManEngineer";
		picture="pictureRepair";
		engineer=1;
		camouflage=1.6;
		//saboteur=1;
		canDeactivateMines=1;
		detectSkill=31;
		backpack="adfrc_CarryAll_dpcu_engineer";
		weapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_HeliPilot: ADFRC_DPCU_Soldier_Coveralls_Base{ // Coveralls
		displayName="Helicopter Pilot";
		//_generalMacro="ADFRC_DPCU_Soldier_HeliPilot";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_pilot_dpcu.jpg";
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
			"H_PilotHelmetHeli_B",
			"ADFRC_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_PilotHelmetHeli_B",
			"ADFRC_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_HeliCrew: ADFRC_DPCU_Soldier_Coveralls_Base{ // Coveralls
		displayName="Helicopter Crew";
		//_generalMacro="ADFRC_DPCU_Soldier_HeliCrew";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_pilot_dpcu.jpg";
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
			"H_PilotHelmetHeli_B",
			"ADFRC_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_PilotHelmetHeli_B",
			"ADFRC_tacticalVest_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_Crewman: ADFRC_DPCU_Soldier_Base{
		displayName="Crewman";
		//_generalMacro="ADFRC_DPCU_Soldier_Crewman";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_crewman_dpcu.jpg";
		camouflage=1.6;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"H_HelmetCrew_I",
			"ADFRC_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_HelmetCrew_I",
			"ADFRC_carrierLite_dpcu",
			"g_combat",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_CavalryMan: ADFRC_DPCU_Soldier_Base{
		displayName="Cavalryman";
		//_generalMacro="ADFRC_DPCU_Soldier_CavalryMan";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_cavalryman_dpcu.jpg";
		camouflage=1.6;
		cost=93000;
		threat[]={0.70000001,0.1,0.1};
		//backpack="";
		weapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_eotech_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"H_Cap_headphones",
			"ADFRC_carrierLite_dpcu",
			"adfrc_facewear_kondor_blk_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"H_Cap_headphones",
			"ADFRC_carrierLite_dpcu",
			"adfrc_facewear_kondor_blk_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_GSMG: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="General Support Machine Gunner";
		//_generalMacro="ADFRC_DPCU_Soldier_GSMG";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_heavyGunner_dpcu.jpg";
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
		backpack="ADFRC_Carryall_MG_dpcu";
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
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_GSMGAsst: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="General Support Gunner Assistant";
		//_generalMacro="ADFRC_DPCU_Soldier_GSMGAsst";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_heavyGunner_ass_dpcu.jpg";
		camouflage=1.5;
		threat[]={0.80000001,0.1,0.1};
		backpack="ADFRC_Carryall_MG_dpcu";
		weapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFRC_DPCU_Soldier_AmmoBearer: ADFRC_DPCU_Soldier_Rolled_Base{ // Rolled Sleeves
		displayName="Ammobearer";
		//_generalMacro="ADFRC_DPCU_Soldier_AmmoBearer";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "ADF_Units\ADFRC_men_dpcu\preview\ADFRC_ammobearer_dpcu.jpg";
		camouflage=1.5;
		threat[]={0.80000001,0.1,0.1};
		backpack="ADFRC_Carryall_LSW_dpcu";
		weapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		respawnWeapons[]={
			"ADFRC_F88SA1_swarovski_laser",
			"ADFRC_hpII",
			"Throw",
			"Put"
		};
		magazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]={
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"ADFRC_F1_GRENADE",
			"ADFRC_F1_GRENADE",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]={
			"adfrc_Helmet_dpcu_canv",
			"ADFRC_carrierLite_dpcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_Heli_Light_01_armed_F;
	class B_Heli_Light_01_F;
	class ADFRC_DPCU_Heli_AH9: B_Heli_Light_01_armed_F{
		displayName="AH-9 (DPCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_ah9_dpcu.jpg";
		faction="ADF";
		editorSubcategory="EdSubcat_Helicopters";
		crew="ADFRC_DPCU_Soldier_HeliPilot";
		typicalCargo[]={
			"ADFRC_DPCU_Soldier_HeliCrew"
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
	class ADFRC_DPCU_Heli_MH9: B_Heli_Light_01_F{
		displayName="MH-9 (DPCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		editorPreview = "\ADF_Units\ADFRC_men_dpcu\preview\ADFRC_mh9_dpcu.jpg";
		faction="ADF";
		editorSubcategory="EdSubcat_Helicopters";
		crew="ADFRC_DPCU_Soldier_HeliPilot";
		typicalCargo[]={
			"ADFRC_DPCU_Soldier_HeliCrew",
			"ADFRC_DPCU_Soldier_BrickLeader",
			"ADFRC_DPCU_Soldier_F",
			"ADFRC_DPCU_Soldier_Engineer",
			"ADFRC_DPCU_Soldier_CFA"
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
class CfgWeapons{
	class UniformItem;
	class Uniform_Base;
	class ADFRC_Uniform_DPCU: Uniform_Base{
		displayName="Disruptive Pattern Combat Uniform (Long Sleeve)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;	
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_rifleman_dpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_DPCU_Rolled: Uniform_Base{
		displayName="Disruptive Pattern Combat Uniform (Rolled Sleeve)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_squadleader_dpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_DPCU_Tee: ADFRC_uniform_dpcu{	
		displayName="Disruptive Pattern Combat Uniform (Tee)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_marksman_dpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Coveralls_DPCU: ADFRC_uniform_dpcu{
		displayName="Army Aviation Coveralls (DPCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_pilot_dpcu";
			containerClass="Supply40";
			mass=60;
		};
	};
	/*
	class ADFRC_uniform_dpcu_medic: ADFRC_uniform_dpcu{
		scope=2;
		author="$STR_ADF_AUTHOR";
		displayName="Disruptive Pattern Combat Uniform (Medic)";
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_medic_dpcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	*/
};

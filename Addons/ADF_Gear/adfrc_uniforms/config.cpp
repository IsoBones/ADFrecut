class CfgPatches{
	class ADFRC_Gear_Uniforms{
		units[]={};
		weapons[]={
			"ADFRC_Uniform_AMCU",
			"ADFRC_Uniform_AMCU_Rolled",
			"ADFRC_Uniform_AMCU_Tee"
		};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADF_Core"
		};
	};
};
class CfgVehicles{
    class B_Soldier_base_F;
	class B_Soldier_diver_base_F;
	class ADFRC_Soldier_base_F: B_Soldier_base_F{
		displayName="Soldier Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		nakedUniform="U_BasicBody";
		side=1;
		faction="ADFRC_ADF";
		vehicleClass="Men";
		genericNames="NATOMen";
		identityTypes[]={
            "LanguageENG_F",
            "Head_NATO",
            "NoGlasses"
        };
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
    };
	class ADFRC_Soldier_diver_base_F: B_Soldier_diver_base_F{
		displayName="Diver Base";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=0;
		nakedUniform="U_BasicBody";
		side=1;
		faction="ADF";
		vehicleClass="MenDiver";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_diver_s"
				};
				speechPlural[]={
					"veh_infantry_diver_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_diver_s";
		textPlural="$STR_A3_nameSound_veh_infantry_diver_p";
		nameSound="veh_infantry_diver_s";
		genericNames="NATOMen";
		identityTypes[]={
            "LanguageENG_F",
            "Head_NATO",
			"G_NATO_diver"
        };
		armorStructural=4;
		explosionShielding=0.40000001;
		camouflage=0.60000002;
		primaryAmmoCoef=0.40000001;
		secondaryAmmoCoef=0.1;
		handgunAmmoCoef=0.2;
		Items[]={
			"FirstAidKit"
		};
		RespawnItems[]={
			"FirstAidKit"
		};
    };
	// Underwear
	class ADFRC_Underwear_RAR_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear RAR Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_RAR";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class ADFRC_Underwear_CDO_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear CDO Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_CDO";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class ADFRC_Underwear_TAN_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear TAN Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_Tan";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class ADFRC_Underwear_CDT_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear CDT Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_CDT";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class ADFRC_Underwear_Blue_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear Blue Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_Blue";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class ADFRC_Underwear_SASR_Base: ADFRC_Soldier_Base_F{
		displayName="Underwear SASR Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=0;
		uniformClass="ADFRC_BasicBody_SASR";
		model = "\A3\Characters_F\Common\basicbody";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
		class Wounds{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	// Infantry
	class ADFRC_MD_AMCU_Soldier_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Soldier Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_RAR";
		uniformClass="ADFRC_Uniform_AMCU";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_co.paa"
		};
	};
	class ADFRC_MD_AMCU_Soldier_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Soldier Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_RAR";
		uniformClass="ADFRC_Uniform_AMCU_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_co.paa"
		};
	};
	class ADFRC_MD_AMCU_Soldier_Tee_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Soldier Tee Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_RAR";
		uniformClass="ADFRC_Uniform_AMCU_RAR_Tee";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]={
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\basicbody_rar_co.paa"
		};
	};
	class ADFRC_MD_AMCU_Recon_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Recon Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_SF_s"
				};
				speechPlural[]={
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		camouflage=0.60000002;
		detectSkill=18;
		threat[]={0.80000001,0.20000001,0.20000001};
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_AMCU_Flagless";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_flagless_co.paa"
		};
	};
	class ADFRC_MD_AMCU_Recon_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Recon Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_SF_s"
				};
				speechPlural[]={
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		camouflage=0.60000002;
		detectSkill=18;
		threat[]={0.80000001,0.20000001,0.20000001};
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_AMCU_Flagless_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_flagless_co.paa"
		};
	};
	class ADFRC_MD_AMCU_Sniper_Temperate_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Sniper Temperate Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		detectSkill=18;
		camouflage=0.40000002;
		tLightInfluence=0.015;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_AMCU_Temperate";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
	class ADFRC_MD_AMCU_Sniper_Tropical_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Sniper Tropical Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		detectSkill=18;
		camouflage=0.40000002;
		tLightInfluence=0.015;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_AMCU_Tropical";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
	class ADFRC_MD_AMCU_Sniper_Arid_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Sniper Arid Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_Infantry_RAR_AMCU";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		detectSkill=18;
		camouflage=0.40000002;
		tLightInfluence=0.015;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_AMCU_Arid";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
	class ADFRC_MD_AMCU_Officer_Base: ADFRC_Soldier_Base_F {
		displayName = "Officer Base";
		author="$STR_ADFRC_AUTHOR";
		scope = 1;
		scopeCurator = 1;
		faction="ADFRC_F_MD";
		editorSubcategory="ADFRC_MD_Infantry_RAR_AMCU";
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_RAR";
		uniformClass = "ADFRC_Uniform_Field_AMCU";
		model="\A3\Characters_F_Beta\indep\ia_officer.p3d";
		hiddenSelections[] = {
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[] = {	
			"\ADF_Gear\adfrc_uniforms\data\uniform_field_amcu_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\uniform_field2_amcu_co.paa"
		};
	};
	// Commandos
	class ADFRC_MD_AMCU_CDO_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Commando Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_2CDO_AMCU";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_SF_s"
				};
				speechPlural[]={
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_AMCU_Flagless";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
	};
	class ADFRC_MD_AMCU_CDO_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Commando Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_2CDO_AMCU";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_SF_s"
				};
				speechPlural[]={
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_AMCU_Flagless_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
	};
	class ADFRC_MD_AMCU_CDO_Tee_Base: ADFRC_Soldier_Base_F{
		displayName="AMCU Commando Tee Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_2CDO_AMCU";
		class SpeechVariants{
			class Default{
				speechSingular[]={
					"veh_infantry_SF_s"
				};
				speechPlural[]={
					"veh_infantry_SF_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound="veh_infantry_SF_s";
		accuracy=3;
		threat[]={0.80000001,0.3,0.3};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_CDO";
		uniformClass="ADFRC_Uniform_AMCU_CDO_Tee";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_amcu_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\basicbody_cdo_co.paa"
		};
	};
	// Clearance Divers
	class ADFRC_MD_MTS_CD_Base: ADFRC_Soldier_Base_F{
		displayName="MTS Operator Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_CD_MTS";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Blue";
		uniformClass="ADFRC_Uniform_MTS";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mts_flagless_co.paa"
		};
	};
	class ADFRC_MD_MTS_CD_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="MTS Operator Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_CD_MTS";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Blue";
		uniformClass="ADFRC_Uniform_MTS_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mts_flagless_co.paa"
		};
	};
	class ADFRC_MD_MTS_CD_Tee_Base: ADFRC_Soldier_Base_F{
		displayName="MTS Operator Tee Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_CD_MTS";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_CDT";
		uniformClass="ADFRC_Uniform_MTS_CDT_Tee";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mts_flagless_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\basicbody_cdt_co.paa"
		};
	};
	class ADFRC_MD_MTS_CD_Diver_Base: ADFRC_Soldier_diver_base_F{
		displayName="MTS Diver Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_CD_MTS";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Blue";
		uniformClass="ADFRC_Wetsuit_MTS";
		model="\A3\characters_F\Common\diver_slotable";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\diver_suit_mts_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\diver_equip_mts_co.paa"
		};
	};
	// TAG
	class ADFRC_MD_Green_TAG_Base: ADFRC_Soldier_Base_F{
		displayName="MC Operator Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_TAG_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Green";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_green_flagless_co.paa"
		};
		vehicleClass="MenRecon";
	};
	class ADFRC_MD_Green_TAG_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="MC Operator Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_TAG_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Green_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_green_flagless_co.paa"
		};
		vehicleClass="MenRecon";
	};
	// SASR
	class ADFRC_MD_MC_SASR_Base: ADFRC_Soldier_Base_F{
		displayName="MC Operator Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_MC";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa"
		};
	};
	class ADFRC_MD_MC_SASR_Rolled_Base: ADFRC_Soldier_Base_F{
		displayName="MC Operator Rolled Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_MC_Rolled";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa"
		};
	};
	class ADFRC_MD_MC_SASR_Tee_Base: ADFRC_Soldier_Base_F{
		displayName="MTS Operator Tee Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		camouflage=1;
		detectSkill=18;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_SASR";
		uniformClass="ADFRC_Uniform_MC_SASR_Tee";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		vehicleClass="MenRecon";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\basicbody_sasr_co.paa"
		};
	};
	class ADFRC_MD_SASR_Sniper_Temperate_Base: ADFRC_Soldier_Base_F{
		displayName="MC Sniper Temperate Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		detectSkill=18;
		camouflage=0.40000002;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_MC_Temperate";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
	class ADFRC_MD_SASR_Sniper_Tropical_Base: ADFRC_Soldier_Base_F{
		displayName="MC Sniper Tropical Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		detectSkill=18;
		camouflage=0.40000002;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_MC_Tropical";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
	class ADFRC_MD_SASR_Sniper_Arid_Base: ADFRC_Soldier_Base_F{
		displayName="MC Sniper Arid Base";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		faction="ADFRC_F_MD";
		editorSubcategory= "ADFRC_MD_SpecialForces_SASR_MC";
		accuracy=3;
		threat[]={0.80000001,0.1,0.1};
		detectSkill=18;
		camouflage=0.40000002;
		modelSides[] = {3,2,1,0};
		nakedUniform="ADFRC_BasicBody_Tan";
		uniformClass="ADFRC_Uniform_Ghillie_MC_Arid";
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		primaryAmmoCoef=0.2;
		secondaryAmmoCoef=0.050000001;
		handgunAmmoCoef=0.1;
		vehicleClass="MenSniper";
		canHideBodies = true;
		hiddenSelections[]={
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_uniforms\data\uniform_mc_flagless_co.paa",
			"\a3\characters_f\common\data\ghillie_1_ca.paa"
		};
	};
};
class CfgWeapons{
	class Uniform_Base;
	class UniformItem;
	// Basic Bodies
	class ADFRC_BasicBody_RAR: Uniform_Base{
		displayName="Underwear (RAR)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_RAR_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_CDO: Uniform_Base{
		displayName="Underwear (CDO)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_CDO_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_Tan: Uniform_Base{
		displayName="Underwear (Tan)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_TAN_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_CDT: Uniform_Base{
		displayName="Underwear (CDT)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_CDT_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_Blue: Uniform_Base{
		displayName="Underwear (Dark Blue)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_Blue_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_SASR: Uniform_Base{
		displayName="Underwear (SASR)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_SASR_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	// AMCU
	class ADFRC_Uniform_AMCU: Uniform_Base{
		displayName="Combat Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_flag_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Rolled: Uniform_Base{
		displayName="Combat Dress (AMCU)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_flag_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_RAR_Tee: Uniform_Base{
		displayName="Combat Dress (AMCU)(Tee-RAR)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Flagless: Uniform_Base{
		displayName="Combat Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Recon_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Flagless_Rolled: Uniform_Base{
		displayName="Combat Dress (AMCU)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Recon_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_CDO_Tee: Uniform_Base{
		displayName="Combat Dress (AMCU)(Tee-CDO)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_CDO_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Temperate: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Temperate)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Temperate_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Tropical: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Tropical)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Tropical_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Arid: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Arid)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Arid_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Field_AMCU: Uniform_Base{
		displayName="Field Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_flag_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Officer_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Green/Sage (TAG Uniform)
	class ADFRC_Uniform_Green: Uniform_Base{
		displayName="Combat Dress (Green)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_Green_TAG_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Green_Rolled: Uniform_Base{
		displayName="Combat Dress (Green)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_Green_TAG_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Multicam
	class ADFRC_Uniform_MC: Uniform_Base{
		displayName="Combat Dress (Multicam)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MC_Rolled: Uniform_Base{
		displayName="Combat Dress (Multicam)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MC_SASR_Tee: Uniform_Base{
		displayName="Combat Dress (Multicam)(Tee-SASR)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Temperate: Uniform_Base{
		displayName="Ghillie Suit (MC-Temperate)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Temperate_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Tropical: Uniform_Base{
		displayName="Ghillie Suit (MC-Tropical)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Tropical_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Arid: Uniform_Base{
		displayName="Ghillie Suit (MC-Arid)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Arid_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	// Maritime Tiger Stripe
	class ADFRC_Uniform_MTS: Uniform_Base{
		displayName="Combat Dress (MTS)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MTS_Rolled: Uniform_Base{
		displayName="Combat Dress (MTS)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MTS_CDT_Tee: Uniform_Base{
		displayName="Combat Dress (MTS)(Tee-CDT)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Wetsuit_MTS: Uniform_Base{
		displayName="Wetsuit (MTS)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"A3\Characters_F\Common\Data\diver_suit_nato_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Diver_Base";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
};
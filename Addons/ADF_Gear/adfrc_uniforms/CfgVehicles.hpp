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
		nakedUniform="U_BasicBody";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa"
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
		nakedUniform="U_BasicBody";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU_Rolled";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa",
			""
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa"
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
		nakedUniform="U_BasicBody";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU_Rolled";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa",
			""
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
		model                      = "\adf_gear\adfrc_uniforms\adfrc_field_dress.p3d";
		uniformClass               = "ADFRC_Uniform_Field_AMCU";
	};

	class ADFRC_Uniform_Field_AMCU : ADFRC_MD_AMCU_Officer_Base {
		author                     = "$STR_ADFRC_AUTHOR";
		model                      = "\adf_gear\adfrc_uniforms\adfrc_field_dress.p3d";
		uniformClass               = "ADFRC_Uniform_Field_AMCU";

		hiddenSelections[]         = {  };
		hiddenSelectionsTextures[] = {  };
	};

	class ADFRC_Uniform_G3_Jacket_AMCU : ADFRC_Soldier_Base_F {
		author                     = "$STR_ADFRC_AUTHOR";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_Jacket_AMCU";

		hiddenSelections[]         = {  };
		hiddenSelectionsTextures[] = {  };
	};

    //?
    //? Crye G3s
    //?

	class ADFRC_Uniform_G3_AMCU : ADFRC_Soldier_Base_F {
		author                     = "$STR_ADFRC_AUTHOR";
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa"
		};
	};

    class ADFRC_Uniform_G3_Multicam : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa"
		};
	};

    class ADFRC_Uniform_G3_Multicam_Dirty : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Dirty";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_Dirty_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_Dirty_co.paa"
		};
	};

    class ADFRC_Uniform_G3_MulticamTrop : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MulticamTrop_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MulticamTrop_co.paa"
		};
	};

    class ADFRC_Uniform_G3_AMP : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMP_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMP_co.paa"
		};
	};

    class ADFRC_Uniform_G3_Green : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Green_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Green_co.paa"
		};
	};

	class ADFRC_Uniform_G3_MMP : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_MMP";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MMP_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MMP_co.paa"
		};
	};

    class ADFRC_Uniform_G3_GPU : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_GPU";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_GPU_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_GPU_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPN : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPN";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPN_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPN_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPD_Midpoint : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Midpoint";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Midpoint_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Midpoint_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPD_Middle_East : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Middle_East";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Middle_East_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Middle_East_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPD_Early : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Early";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Early_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Early_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPD : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_co.paa"
		};
	};

    class ADFRC_Uniform_G3_DPC : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPC";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPC_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPC_co.paa"
		};
	};

    class ADFRC_Uniform_G3_MTS : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_MTS";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MTS_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MTS_co.paa"
		};
	};


    class ADFRC_Uniform_G3_AMCU_Rolled : ADFRC_Uniform_G3_AMCU {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_AMCU_Rolled";

        hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_Multicam_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_Multicam_Dirty_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Dirty_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_Dirty_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_Dirty_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_MulticamTrop_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MulticamTrop_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MulticamTrop_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_AMP_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMP_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMP_co.paa",
			""
		};
	};


    class ADFRC_Uniform_G3_Green_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Green_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Green_co.paa",
			""
		};
	};
	
	class ADFRC_Uniform_G3_MMP_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_MMP_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MMP_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MMP_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_GPU_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_GPU_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_GPU_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_GPU_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPN_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPN_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPN_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPN_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPD_Midpoint_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Midpoint_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Midpoint_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Midpoint_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPD_Middle_East_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Middle_East_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Middle_East_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Middle_East_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPD_Early_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Early_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_Early_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_Early_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPD_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPD_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPD_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPD_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_DPC_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_DPC_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_DPC_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_DPC_co.paa",
			""
		};
	};

    class ADFRC_Uniform_G3_MTS_Rolled : ADFRC_Uniform_G3_AMCU_Rolled {
		author                     = "$STR_ADFRC_AUTHOR";
		uniformClass               = "ADFRC_Uniform_G3_MTS_Rolled";

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_MTS_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Ranger_Green_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_MTS_co.paa",
			""
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
		nakedUniform="U_BasicBody";
		vehicleClass="MenRecon";
		canHideBodies = true;
		
		
		//model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa"
		};
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
		nakedUniform="U_BasicBody";
		vehicleClass="MenRecon";
		canHideBodies = true;
		
		
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_AMCU_Rolled";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_AMC_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_AMC_co.paa",
			""
		};
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
		vehicleClass="MenRecon";
		canHideBodies = true;
		
		
		
		
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_Multicam";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"",
            "",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa"
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
		nakedUniform="U_BasicBody";
		vehicleClass="MenRecon";
		canHideBodies = true;
		
		
		
		model                      = "\adf_gear\adfrc_uniforms\crye_g3.p3d";
		uniformClass               = "ADFRC_Uniform_G3_Multicam_Rolled";

		hiddenSelections[] = {
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};

		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
			"", //Sleeves down, untucked
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa", //Sleeves rolled, untucked
			"", //Sleeves rolled, tucked
			"" //Sleeves down, tucked
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
		nakedUniform="U_BasicBody";
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
	class ADFRC_Uniform_G3_MC_UT_Base: ADFRC_Uniform_G3_AMCU
	{
		displayName="Combat Dress (MC)(Untucked)";
		author="ADF Recut";
		scope=1;
		scopeCurator=1;
		scopeArsenal=2;
		uniformClass="ADFRC_Uniform_G3_MC_UT";
		hiddenSelections[]=
		{
			"Gloves_1",
			"Pants_1",
			"Skin_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
            "\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa",
			"",
			"",
			""
		};
	};
	class ADFRC_Uniform_G3_MC_UT_Rolled_Base: ADFRC_Uniform_G3_AMCU
	{
		displayName="Combat Dress (MC)(Rolled)(Untucked)";
		author="ADF Recut";
		scope=1;
		scopeCurator=1;
		scopeArsenal=2;
		uniformClass="ADFRC_Uniform_G3_MC_UT_Rolled";
		hiddenSelections[]=
		{
			"Gloves_1",
			"Pants_1",
			"Shoes_1",
			"Shirt_1",
			"Shirt_2",
			"Shirt_3",
			"Shirt_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Gloves_Grey_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Pants_Multicam_co.paa",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Boots_Coyote_Brown_co.paa",
            "",
			"\ADF_Gear\adfrc_uniforms\data\Crye_G3_Shirt_Multicam_co.paa",
			"",
			""
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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
		nakedUniform="U_BasicBody";
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

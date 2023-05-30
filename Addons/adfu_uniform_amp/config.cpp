class DefaultEventhandlers;
class CfgPatches
{
	class ADFU_uniform_amp
	{
		units[]=
		{
			"ADFU_helicopterPilot_amp",
			"ADFU_assaultpack_black",
			"ADFU_assaultpack_green",
			"ADFU_assaultpack_tan",
			"ADFU_assaultpack_amp",
			"ADFU_assaultpack_black_medic",
			"ADFU_assaultpack_green_medic",
			"ADFU_assaultpack_tan_medic",
			"ADFU_assaultpack_amp_medic",
			"ADFU_kitbag_black",
			"ADFU_kitbag_green",
			"ADFU_kitbag_tan",
			"ADFU_kitbag_amp",
			"ADFU_kitbag_black_medic",
			"ADFU_kitbag_green_medic",
			"ADFU_kitbag_tan_medic",
			"ADFU_kitbag_amp_medic",
			"ADFU_carryall_black",
			"ADFU_carryall_green",
			"ADFU_carryall_tan",
			"ADFU_carryall_amp",
			"ADFU_carryall_black_medic",
			"ADFU_carryall_green_medic",
			"ADFU_carryall_tan_medic",
			"ADFU_carryall_amp_medic",
			"ADFU_coveralls_black_base",
			"ADFU_coveralls_green_base",
			"ADFU_coveralls_tan_base",
			"ADFU_uniform_amp_cam_base",
			"ADFU_uniform_amp_grn_base",
			"ADFU_uniform_amp_tan_base",
			"ADFU_uniform_amp_cam_ss_base",
			"ADFU_uniform_amp_grn_ss_base",
			"ADFU_uniform_amp_tan_ss_base",
			"ADFU_uniform_amp_tee_grn_base",
			"ADFU_uniform_amp_tee_tan_base",
			"ADFU_uniform_amp_tee_khk_base",
			"ADFU_rifleman_amp",
			"ADFU_squadleader_amp",
			"ADFU_teamleader_amp",
			"ADFU_grenadier_amp",
			"ADFU_engineer_amp",
			"ADFU_explosive_amp",
			"ADFU_marksman_amp",
			"ADFU_lightGunner_amp",
			"ADFU_heavyGunner_amp",
			"ADFU_riflemanAT_amp",
			"ADFU_medic_amp",
			"ADFU_ammobearer_amp",
			"ADFU_jetPilot_amp"
		};
		weapons[]=
		{
			"ADFU_uniform_amp_cam",
			"ADFU_uniform_amp_grn",
			"ADFU_uniform_amp_tan",
			"ADFU_uniform_amp_cam_ss",
			"ADFU_uniform_amp_grn_ss",
			"ADFU_uniform_amp_tan_ss",
			"ADFU_uniform_amp_tee_grn",
			"ADFU_uniform_amp_tee_tan",
			"ADFU_uniform_amp_tee_khk",
			"ADFU_coveralls_black",
			"ADFU_coveralls_green",
			"ADFU_coveralls_tan",
			"ADFU_PlateCarrier_Black",
			"ADFU_PlateCarrier_Sand",
			"ADFU_PlateCarrier_Green",
			"ADFU_PlateCarrier_AMP",
			"ADFU_PlateCarrier_Black_Snake",
			"ADFU_PlateCarrier_Sand_Snake",
			"ADFU_PlateCarrier_Green_Snake",
			"ADFU_PlateCarrier_Black_Digi",
			"ADFU_PlateCarrier_Sand_Digi",
			"ADFU_PlateCarrier_Green_Digi",
			"ADFU_CarrierLite_Black",
			"ADFU_CarrierLite_Sand",
			"ADFU_CarrierLite_Green",
			"ADFU_CarrierLite_AMP",
			"ADFU_CarrierLite_Black_Snake",
			"ADFU_CarrierLite_Sand_Snake",
			"ADFU_CarrierLite_Green_Snake",
			"ADFU_CarrierLite_Black_Digi",
			"ADFU_CarrierLite_Sand_Digi",
			"ADFU_CarrierLite_Green_Digi",
			"ADFU_CarrierHeavy_Black",
			"ADFU_CarrierHeavy_Sand",
			"ADFU_CarrierHeavy_Green",
			"ADFU_CarrierHeavy_AMP",
			"ADFU_CarrierHeavy_Black_Snake",
			"ADFU_CarrierHeavy_Sand_Snake",
			"ADFU_CarrierHeavy_Green_Snake",
			"ADFU_CarrierHeavy_Black_Digi",
			"ADFU_CarrierHeavy_Sand_Digi",
			"ADFU_CarrierHeavy_Green_Digi",
			"ADFU_PlateCarrier_BLACK_MEDIC",
			"ADFU_PlateCarrier_GREEN_MEDIC",
			"ADFU_PlateCarrier_SAND_MEDIC",
			"ADFU_booniehat_amp",
			"ADFU_Helmet_Black",
			"ADFU_Helmet_Desert",
			"ADFU_Helmet_Grass",
			"ADFU_Helmet_Sand",
			"ADFU_Helmet_Snake",
			"ADFU_Helmet_CamInk",
			"ADFU_Helmet_Cam",
			"ADFU_Helmet_Medic_Black",
			"ADFU_Helmet_Medic_Desert",
			"ADFU_Helmet_Medic_Grass",
			"ADFU_Helmet_Medic_Sand",
			"ADFU_Helmet_Medic_Snake",
			"ADFU_Helmet_Medic_CamInk",
			"ADFU_Helmet_Medic_Cam",
			"ADFU_ECH_Desert",
			"ADFU_ECH_Grass",
			"ADFU_ECH_Sand",
			"ADFU_ECH_Snake",
			"ADFU_ECH_CamInk",
			"ADFU_ECH_Cam",
			"ADFU_ECH_MEDIC_Desert",
			"ADFU_ECH_MEDIC_Grass",
			"ADFU_ECH_MEDIC_Sand",
			"ADFU_ECH_MEDIC_Snake",
			"ADFU_ECH_MEDIC_CamInk",
			"ADFU_ECH_MEDIC_Cam"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADFU_faction"
		};
		author="$STR_ADFU_AUTHOR";
	};
};
class CfgEditorSubcategories
{
	class ADFU_MEN_AMP // Category class, you point to it in editorSubcategory property
	{
		displayName = "$STR_ADFU_MEN_AMP"; // Name visible in the list
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class ADFU_Soldier_base_F;
	class B_assaultpack_Base;
	class B_Carryall_Base;
	class B_Kitbag_Base;
	class ADFU_assaultpack_black: B_assaultpack_Base
	{
		scope=2;
		displayName="ADF AssaultPack [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Black.paa"
		};
		maximumLoad=220;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_assaultpack_black_tl: ADFU_assaultpack_black
	{
		scope=1;
		displayName="ADF Carryall SASR TL";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Black.paa"
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
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFU_assaultpack_black_breach: ADFU_assaultpack_black
	{
		scope=1;
		displayName="ADF Carryall SASR Breacher";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Black.paa"
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
	class ADFU_assaultpack_black_eng: ADFU_assaultpack_black
	{
		scope=1;
		displayName="ADF Carryall SASR Breacher";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Black.paa"
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
	};
	class ADFU_assaultpack_green: ADFU_assaultpack_black
	{
		scope=2;
		displayName="ADF AssaultPack [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Green.paa"
		};
	};
	class ADFU_assaultpack_tan: ADFU_assaultpack_black
	{
		scope=2;
		displayName="ADF AssaultPack [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Tan.paa"
		};
	};
	class ADFU_assaultpack_amp: ADFU_assaultpack_black
	{
		scope=2;
		displayName="ADF AssaultPack [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Cam.paa"
		};
	};
	class ADFU_assaultpack_black_medic: B_assaultpack_Base
	{
		scope=2;
		displayName="ADF AssaultPack Medic [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Black-M.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=15;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_assaultpack_green_medic: ADFU_assaultpack_black_medic
	{
		scope=2;
		displayName="ADF AssaultPack Medic [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Green-M.paa"
		};
	};
	class ADFU_assaultpack_tan_medic: ADFU_assaultpack_black_medic
	{
		scope=2;
		displayName="ADF AssaultPack Medic [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Tan-M.paa"
		};
	};
	class ADFU_assaultpack_amp_medic: ADFU_assaultpack_black_medic
	{
		scope=2;
		displayName="ADF AssaultPack Medic [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\AssaultPack-Cam-M.paa"
		};
	};
	class ADFU_kitbag_black: B_Kitbag_Base
	{
		scope=2;
		displayName="ADF Kitbag [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Black.paa"
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_kitbag_green: ADFU_kitbag_black
	{
		scope=2;
		displayName="ADF Kitbag [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Green.paa"
		};
	};
	class ADFU_kitbag_tan: ADFU_kitbag_black
	{
		scope=2;
		displayName="ADF Kitbag [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Tan.paa"
		};
	};
	class ADFU_kitbag_amp: ADFU_kitbag_black
	{
		scope=2;
		displayName="ADF Kitbag [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Cam.paa"
		};
	};
	class ADFU_kitbag_black_medic: ADFU_kitbag_black
	{
		scope=2;
		displayName="ADF Kitbag Medic [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Black-M.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=15;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_kitbag_green_medic: ADFU_kitbag_black_medic
	{
		scope=2;
		displayName="ADF Kitbag Medic [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Green-M.paa"
		};
	};
	class ADFU_kitbag_tan_medic: ADFU_kitbag_black_medic
	{
		scope=2;
		displayName="ADF Kitbag Medic [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Tan-M.paa"
		};
	};
	class ADFU_kitbag_amp_medic: ADFU_kitbag_black_medic
	{
		scope=2;
		displayName="ADF Kitbag Medic [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\KitBag-Cam-M.paa"
		};
	};
	class ADFU_carryall_black: B_Carryall_Base
	{
		scope=2;
		displayName="ADF Carryall [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Black.paa"
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_carryall_green: ADFU_carryall_black
	{
		scope=2;
		displayName="ADF Carryall [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Green.paa"
		};
	};
	class ADFU_carryall_tan: ADFU_carryall_black
	{
		scope=2;
		displayName="ADF Carryall [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Tan.paa"
		};
	};
	class ADFU_carryall_amp: ADFU_carryall_black
	{
		scope=2;
		displayName="ADF Carryall [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Cam.paa"
		};
	};
	class ADFU_carryall_black_medic: ADFU_carryall_black
	{
		scope=2;
		displayName="ADF Carryall Medic [Black]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Black-M.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=15;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportMagazines
		{
		};
	};
	class ADFU_carryall_green_medic: ADFU_carryall_black_medic
	{
		scope=2;
		displayName="ADF Carryall Medic [Green]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Green-M.paa"
		};
	};
	class ADFU_carryall_tan_medic: ADFU_carryall_black_medic
	{
		scope=2;
		displayName="ADF Carryall Medic [Tan]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Tan-M.paa"
		};
	};
	class ADFU_carryall_amp_medic: ADFU_carryall_black_medic
	{
		scope=2;
		displayName="ADF Carryall Medic [AMP]";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Backpacks\CarryAll-Cam-M.paa"
		};
	};
	class ADFU_coveralls_black_base: ADFU_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		scope=1;
		faction="ADFU";
		author="$STR_ADFU_AUTHOR";
		vehicleClass="ADFU_MEN_AMP";
		displayName="ADF AMP Base Unit";
		nakedUniform="U_BasicBody";
		genericNames="NATOMen";
		model="\A3\Characters_F\Common\coveralls.p3d";
		uniformClass="ADFU_coveralls_black";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_BLACK_co.paa"
		};
	};
	class ADFU_coveralls_green_base: ADFU_coveralls_black_base
	{
		scope=1;
		uniformClass="ADFU_coveralls_green";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_GREEN_co.paa"
		};
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_coveralls_tan_base: ADFU_coveralls_black_base
	{
		scope=1;
		uniformClass="ADFU_coveralls_tan";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\uniform\Overalls\AMP_COVERALLS_SAND_co.paa"
		};
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_uniform_amp_cam_base: ADFU_Soldier_base_F
	{
		scope=1;
		faction="ADFU";
		editorSubcategory= "ADFU_MEN_AMP";
		author="$STR_ADFU_AUTHOR";
		genericNames="NATOMen";
		vehicleClass="ADFU_MEN_AMP";
		nakedUniform="U_BasicBody";
		displayName="ADF AMP Base Unit";
		_generalMacro="B_Soldier_base_F";
		uniformClass="ADFU_uniform_amp_cam";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
	};
	class ADFU_uniform_amp_grn_base: ADFU_uniform_amp_cam_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_amp_grn";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Green.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
	};
	class ADFU_uniform_amp_tan_base: ADFU_uniform_amp_cam_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_amp_tan";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Tan.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
	};
	class ADFU_uniform_amp_cam_ss_base: ADFU_uniform_amp_cam_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_amp_cam_ss";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_uniform_amp_grn_ss_base: ADFU_uniform_amp_grn_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_amp_grn_ss";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_uniform_amp_tan_ss_base: ADFU_uniform_amp_tan_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		uniformClass="ADFU_uniform_amp_tan_ss";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_uniform_amp_tee_grn_base: ADFU_Soldier_base_F
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass="ADFU_uniform_amp_tee_grn";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa",
			"ADFU_uniform_amp\Uniform\CDO\basicbody_1st_commando_co.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
	};
	class ADFU_uniform_amp_tee_tan_base: ADFU_uniform_amp_tee_grn_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass="ADFU_uniform_amp_tee_tan";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa",
			"ADFU_uniform_amp\Uniform\CDO\basicbody_2nd_commando_co.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
	};
	class ADFU_uniform_amp_tee_khk_base: ADFU_uniform_amp_tee_grn_base
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass="ADFU_uniform_amp_tee_khk";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Uniform\CDO\CDO-Cam.paa",
			"ADFU_uniform_amp\Uniform\CDO\basicbody_army_co.paa",
			"ADFU_uniform_amp\Uniform\team_ca.paa"
		};
	};
	class ADFU_rifleman_amp: ADFU_uniform_amp_cam_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		icon="iconMan";
		editorSubcategory="ADFU_MEN_AMP";
		vehicleClass="ADFU_MEN_AMP";
		displayName="Operator";
		editorPreview = "adfu_uniform_amp\preview\ADFU_rifleman_amp.jpg";
		weapons[]=
		{
			"ADFU_sasr_m4a5",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit",
			"NVGoggles_OPFOR"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"NVGoggles_OPFOR"
		};
		magazines[]=
		{
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_assaultpack_black";
	};
	class ADFU_squadleader_amp: ADFU_rifleman_amp
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Troop Leader";
		editorPreview = "adfu_uniform_amp\preview\ADFU_squadleader_amp.jpg";
		weapons[]=
		{
			"ADFU_sasr_m4a5_acog",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5_acog",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_f1_grenade",
			"ADFU_f1_grenade"
		};
		linkedItems[]=
		{
			"H_Cap_headphones",
			"ADFU_PlateCarrier_Green_Snake",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_headphones",
			"ADFU_PlateCarrier_Green_Snake",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManLeader";
		backpack="";
	};
	class ADFU_teamleader_amp: ADFU_rifleman_amp
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Patrol Leader";
		editorPreview = "adfu_uniform_amp\preview\ADFU_teamleader_amp.jpg";
		weapons[]=
		{
			"ADFU_sasr_m4a5gl_acog",
			"ADFU_weapon_usp_snds",
			"ADFU_weapon_m72a6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5gl_acog",
			"ADFU_weapon_usp_snds",
			"ADFU_weapon_m72a6",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Desert",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManLeader";
		backpack="ADFU_assaultpack_black_tl";
	};
	class ADFU_grenadier_amp: ADFU_rifleman_amp
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Grenadier";
		editorPreview = "adfu_uniform_amp\preview\ADFU_grenadier_amp.jpg";
		icon="iconManExplosive";
		weapons[]=
		{
			"ADFU_sasr_m4a5gl",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5gl",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_khk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_khk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_assaultpack_black_tl";
	};
	class ADFU_engineer_amp: ADFU_rifleman_amp
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Operator Engineer";
		editorPreview = "adfu_uniform_amp\preview\ADFU_engineer_amp.jpg";
		engineer=1;
		saboteur=1;
		canDeactivateMines=1;
		detectSkill=80;
		linkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Cam",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_kitbag_green";
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class ADFU_explosive_amp: ADFU_rifleman_amp
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Breacher";
		editorPreview = "adfu_uniform_amp\preview\ADFU_explosive_amp.jpg";
		saboteur=1;
		canDeactivateMines=1;
		detectSkill=80;
		weapons[]=
		{
			"ADFU_sasr_m4a5",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Black",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Black",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="ADFU_assaultpack_black_breach";
		icon="iconManExplosive";
	};
	class ADFU_marksman_amp: ADFU_uniform_amp_tee_tan_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Marksman";
		editorPreview = "adfu_uniform_amp\preview\ADFU_marksman_amp.jpg";
		weapons[]=
		{
			"ADFU_MK18_SASR",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_MK18_SASR",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
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
			"ADFU_Helmet_Sand",
			"ADFU_PlateCarrier_Green",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Sand",
			"ADFU_PlateCarrier_Green",
			"G_Bandanna_oli",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFU_CToperator_amp: ADFU_rifleman_amp
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Counter-Terrorism Operator";
		editorPreview = "adfu_uniform_amp\preview\ADFU_CToperator_amp.jpg";
		weapons[]=
		{
			"ADFU_CTmp5",
			"ADFU_weapon_usp",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_CTmp5",
			"ADFU_weapon_usp",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Black",
			"ADFU_PlateCarrier_Black_Digi",
			"G_AirPurifyingRespirator_01_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Black",
			"ADFU_PlateCarrier_Black_Digi",
			"G_AirPurifyingRespirator_01_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManRecon";
	};
	class ADFU_CTMedic_amp: ADFU_CToperator_amp
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Counter-Terrorism Medic";
		editorPreview = "adfu_uniform_amp\preview\ADFU_CTmedic_amp.jpg";
		attendant=1;
		icon="iconManMedic";
		picture="pictureHeal";
		backpack="ADFU_kitbag_black_medic";
	};
	class ADFU_medic_amp: ADFU_rifleman_amp
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Operator Medic";
		editorPreview = "adfu_uniform_amp\preview\ADFU_medic_amp.jpg";
		attendant=1;
		weapons[]=
		{
			"ADFU_sasr_m4a5_eotech",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_sasr_m4a5_eotech",
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"ADFU_Helmet_Medic_Sand",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Helmet_Medic_Sand",
			"ADFU_PlateCarrier_Green_Snake",
			"G_Bandanna_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManMedic";
		picture="pictureHeal";
		backpack="ADFU_kitbag_black_medic";
	};
	class ADFU_helicopterPilot_amp: ADFU_coveralls_green_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		editorSubcategory= "ADFU_MEN_AMP";
		displayName="Helicopter Pilot";
		editorPreview = "adfu_uniform_amp\preview\ADFU_helicopterPilot_amp.jpg";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		weapons[]=
		{
			"ADFU_weapon_usp",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_weapon_usp",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellPurple",
			"SmokeShellPurple"
		};
		respawnmagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellPurple",
			"SmokeShellPurple"
		};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacVest_oli",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
	};
	class ADFU_jetPilot_amp: ADFU_coveralls_tan_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		editorSubcategory= "ADFU_MEN_AMP";
		displayName="Pilot";
		editorPreview = "adfu_uniform_amp\preview\ADFU_jetPilot_amp.jpg";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		weapons[]=
		{
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ADFU_weapon_usp_snds",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_OPFOR"
		};
	};
};
class CfgGroups
{
	class West
	{
		name="BLUFOR";
		side=1;
		class ADFU
		{
			name="ADF";
			class SpecOps
			{
				name="Special Forces (SASR)";
				class ADFU_PatrolTeam_AMP
				{
					faction="ADFU";
					name="SASR Patrol";
					side=1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_squadleader_amp";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_amp";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_grenadier_amp";
					};
					class Unit3
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_medic_amp";
					};
					class Unit4
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_marksman_amp";
					};
					class Unit5
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_explosive_amp";
					};
				};
				class ADFU_SmallTeam_AMP
				{
					faction="ADFU";
					side=1;
					name="SASR Recce Element";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="ADFU_teamleader_amp";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="ADFU_rifleman_amp";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_marksman_amp";
					};
				};
				class ADFU_AttackTeam_AMP
				{
					faction="ADFU";
					side=1;
					name="SASR Mounted Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=1;
						vehicle="ADFU_land_LandRover_Transport";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CAPTAIN";
						side=1;
						vehicle="ADFU_teamleader_amp";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ADFU_marksman_amp";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ADFU_grenadier_amp";
					};
					class Unit4
					{
						position[]={15,-15,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ADFU_medic_amp";
					};
					class Unit5
					{
						position[]={20,-20,0};
						rank="LIEUTENANT";
						side=1;
						vehicle="ADFU_explosive_amp";
					};
				};
			};
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class ItemInfo;
	class ItemCore;
	class HeadGearItem;
	class ADFU_uniform_amp_cam: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Cam-LS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_cam_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_grn: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Green-LS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_grn_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_tan: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Tan-LS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_tan_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_cam_ss: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Cam-SS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_cam_ss_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_grn_ss: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Green-SS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_grn_ss_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_tan_ss: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Tan-SS]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_tan_ss_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_tee_grn: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Tee-Green]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_tee_grn_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_tee_tan: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Tee-Tan]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_tee_tan_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_uniform_amp_tee_khk: Uniform_Base
	{
		scope=2;
		displayName="Australian Multicam Pattern [Tee-Khaki]";
		picture="\A3\characters_f\Data\UI\icon_u_b_combatuniform_mcam_vest_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_uniform_amp_tee_khk_base";
			containerClass="Supply80";
			mass=40;
		};
	};
	class ADFU_coveralls_black: Uniform_Base
	{
		scope=2;
		displayName="Army Aviation Coveralls [Black]";
		picture="\ADFU_uniform_amp\ui\coverall_black_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_coveralls_black_base";
			containerClass="Supply40";
			mass=30;
		};
	};
	class ADFU_coveralls_green: Uniform_Base
	{
		scope=2;
		displayName="Army Aviation Coveralls [Green]";
		picture="\ADFU_uniform_amp\ui\coverall_green_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_coveralls_green_base";
			containerClass="Supply40";
			mass=30;
		};
	};
	class ADFU_coveralls_tan: Uniform_Base
	{
		scope=2;
		displayName="Army Aviation Coveralls [Tan]";
		picture="\ADFU_uniform_amp\ui\coverall_sand_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_coveralls_tan_base";
			containerClass="Supply40";
			mass=30;
		};
	};
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr;
	class ADFU_PlateCarrier_Black: V_PlateCarrier1_rgr
	{
		scope=2;
		displayName="ADF Carrier Rig [B]";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black.paa"
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
	class ADFU_PlateCarrier_Sand: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [T]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [G]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_AMP: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [AMP]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Cam.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Black_Snake: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [B-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Sand_Snake: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [T-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green_Snake: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [G-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Black_Digi: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [B-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Sand_Digi: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [T-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green_Digi: ADFU_PlateCarrier_Black
	{
		displayName="ADF Carrier Rig [G-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Black: V_PlateCarrier2_rgr
	{
		scope=2;
		displayName="ADF Carrier-Lite [B]";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
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
	class ADFU_CarrierLite_Sand: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [T]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [G]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_AMP: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [AMP]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Cam.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Black_Snake: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [B-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Sand_Snake: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [T-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green_Snake: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [G-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green-Snake.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Black_Digi: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [B-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Sand_Digi: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [T-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green_Digi: ADFU_CarrierLite_Black
	{
		displayName="ADF Carrier-Lite [G-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green-Digi.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Black: V_PlateCarrier1_rgr
	{
		scope=2;
		displayName="ADF Carrier-Lite [B]";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
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
	class ADFU_CarrierHeavy_Sand: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [T]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [G]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_AMP: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [A]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Cam.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Black_Snake: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [B-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Sand_Snake: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [T-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green_Snake: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [G-S]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Black_Digi: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [B-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Sand_Digi: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [T-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green_Digi: ADFU_CarrierHeavy_Black
	{
		displayName="ADF Carrier-Lite [G-D]";
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green.paa"
		};
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_BLACK_MEDIC: V_PlateCarrier1_rgr
	{
		scope=2;
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName="ADF Carrier Rig Black MEDIC (AMP)";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Black-Medic.paa"
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
	class ADFU_PlateCarrier_GREEN_MEDIC: V_PlateCarrier1_rgr
	{
		scope=2;
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName="ADF Carrier Rig Green MEDIC (AMP)";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Green-Medic.paa"
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
	class ADFU_PlateCarrier_SAND_MEDIC: V_PlateCarrier1_rgr
	{
		scope=2;
		picture="\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName="ADF Carrier Rig Sand MEDIC (AMP)";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_uniform_amp\Vest\Vest-Tan-Medic.paa"
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
	class H_Booniehat_tan;
	class H_Cap_red;
	class H_HelmetB_light;
	class H_HelmetB;
	class H_Cap_headphones;
	class ADFU_booniehat_amp: H_Booniehat_tan
	{
		scope=2;
		displayName="ADF Boonie [AMP]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Boonie-Cam.paa"
		};
	};
	class ADFU_cap_tan: H_Cap_red
	{
		displayName="ADF Cap [Sand]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model="\A3\Characters_F\common\capb";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Cap-Tan.paa"
		};
	};
	class ADFU_cap_green: H_Cap_red
	{
		displayName="ADF Cap [Green]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model="\A3\Characters_F\common\capb";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Cap-Green.paa"
		};
	};
	class ADFU_cap_black: H_Cap_red
	{
		displayName="ADF Cap [Black]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model="\A3\Characters_F\common\capb";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Cap-Black.paa"
		};
	};
	class ADFU_cap_amp: H_Cap_red
	{
		displayName="ADF Cap [AMP]";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model="\A3\Characters_F\common\capb";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Cap-Cam.paa"
		};
	};
	class ADFU_Helmet_Black: H_HelmetB_light
	{
		scope=2;
		displayName="ADF ACH [Black]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Black.paa"
		};
	};
	class ADFU_Helmet_Desert: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Desert]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Desert.paa"
		};
	};
	class ADFU_Helmet_Grass: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Grass]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Grass.paa"
		};
	};
	class ADFU_Helmet_Sand: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Sand]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Sand.paa"
		};
	};
	class ADFU_Helmet_Snake: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Snake]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Snake.paa"
		};
	};
	class ADFU_Helmet_CamInk: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Dipped]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-CamInk.paa"
		};
	};
	class ADFU_Helmet_Cam: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH [Camo]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Cam.paa"
		};
	};
	class ADFU_Helmet_Medic_Black: ADFU_Helmet_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Black]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Black-M.paa"
		};
	};
	class ADFU_Helmet_Medic_Desert: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Desert]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Desert-M.paa"
		};
	};
	class ADFU_Helmet_Medic_Grass: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Grass]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Grass-M.paa"
		};
	};
	class ADFU_Helmet_Medic_Sand: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Sand]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Sand-M.paa"
		};
	};
	class ADFU_Helmet_Medic_Snake: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Snake]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Snake-M.paa"
		};
	};
	class ADFU_Helmet_Medic_CamInk: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Dipped]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-CamInk-M.paa"
		};
	};
	class ADFU_Helmet_Medic_Cam: ADFU_Helmet_Medic_Black
	{
		scope=2;
		displayName="ADF ACH Medic [Paint]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Cam-M.paa"
		};
	};
	class ADFU_ECH_Desert: H_HelmetB
	{
		scope=2;
		displayName="ADF ECH [Desert]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Desert.paa"
		};
	};
	class ADFU_ECH_Grass: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH [Grass]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Grass.paa"
		};
	};
	class ADFU_ECH_Sand: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH [Sand]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Sand.paa"
		};
	};
	class ADFU_ECH_Snake: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH [Snake]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Snake.paa"
		};
	};
	class ADFU_ECH_CamInk: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Dipped]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-CamInk.paa"
		};
	};
	class ADFU_ECH_Cam: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH [Paint]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Cam.paa"
		};
	};
	class ADFU_ECH_MEDIC_Desert: ADFU_ECH_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Desert]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Desert-M.paa"
		};
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor=3;
			passThrough=0.5;
		};
	};
	class ADFU_ECH_MEDIC_Grass: ADFU_ECH_MEDIC_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Grass]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Grass-M.paa"
		};
	};
	class ADFU_ECH_MEDIC_Sand: ADFU_ECH_MEDIC_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Sand]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Sand-M.paa"
		};
	};
	class ADFU_ECH_MEDIC_Snake: ADFU_ECH_MEDIC_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Snake]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Snake-M.paa"
		};
	};
	class ADFU_ECH_MEDIC_CamInk: ADFU_ECH_MEDIC_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Dipped]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-CamInk-M.paa"
		};
	};
	class ADFU_ECH_MEDIC_Cam: ADFU_ECH_MEDIC_Desert
	{
		scope=2;
		displayName="ADF ECH Medic [Paint]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amp\Headgear\Helmet-Cam-M.paa"
		};
	};
	class srifle_EBR_F;
	class ADFU_MK18_SASR: srifle_EBR_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	class SMG_05_F;
	class ADFU_CTmp5: SMG_05_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};

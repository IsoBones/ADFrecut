class CfgPatches
{
	class ADFU_weapon_base
	{
		units[]=
		{
			"ADFU_weaponbox_launchers",
			"ADFU_weaponbox_optics",
			"ADFU_weaponbox_pistols",
			"ADFU_weaponbox_m4a5",
			"ADFU_weaponbox_f88",
			"ADFU_weaponbox_mg",
			"ADFU_weaponbox_sr25",
			"ADFU_weaponbox_amp",
			"ADFU_weaponbox_dpcu",
			"ADFU_weaponbox_dpdu",
			"ADFU_weaponbox_large",
			"ADFU_weaponbox_medium"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_magazines",
			"ADFU_weapon_accessories",
			"ADFU_weapon_optics",
			"ADFU_weapon_f88sa1",
			"ADFU_weapon_f88sa2",
			"ADFU_weapon_m4",
			"ADFU_weapon_sr25",
			"ADFU_weapon_minimi",
			"ADFU_weapon_maximi",
			"ADFU_weapon_mag58",
			"ADFU_weapon_usp",
			"ADFU_weapon_hpII",
			"ADFU_weapon_f1",
			"ADFU_weapon_carlgustav"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class WeaponSlotsInfo;
class CfgVehicleIcons
{
	icon_ADFU_box="\ADFU_weapon_base\icons\iconbox_ADFU_ca.paa";
	icon_ADFU_uniform="\ADFU_weapon_base\icons\iconbox_uni_ca.paa";
	icon_ADFU_crate="\ADFU_weapon_base\icons\iconcrate_ADFU_ca.paa";
};
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_Wps_F;
	class Box_NATO_AmmoVeh_F;
	class ADFU_weaponbox_large: Box_NATO_AmmoVeh_F
	{
		scope=2;
		icon="icon_ADFU_box";
		displayName="[ADF] Empty Container";
		author="$STR_ADFU_AUTHOR";
		maximumLoad=99999;
		transportMaxWeapons=15000;
		transportMaxMagazines=20000;
		transportMaxBackpacks=50;
		weight=1000;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"ADFU_weapon_base\data\ADFU_container_dpcu_co.paa"
		};
	};
	class ADFU_weaponbox_medium: Box_NATO_Wps_F
	{
		scope=2;
		displayName="[ADF] Empty Weaponbox";
		icon="icon_ADFU_crate";
		author="$STR_ADFU_AUTHOR";
		transportMaxWeapons=50;
		transportMaxMagazines=200;
		transportMaxBackpacks=5;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		model="\ADFU_weapon_base\Weaponbox.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_base\data\ADFU_weaponbox_co.paa",
			"ADFU_weapon_base\data\ADFU_weaponbox_signs_ca.paa"
		};
	};
	class ADFU_weaponbox_launchers: ADFU_weaponbox_large
	{
		scope=2;
		accuracy=1000;
		vehicleClass="Ammo";
		displayName="[ADF] Launchers";
		author="$STR_ADFU_AUTHOR";
		maximumLoad=99999;
		transportMaxWeapons=15000;
		transportMaxMagazines=20000;
		transportMaxBackpacks=50;
		class TransportWeapons
		{
			class _xx_ADFU_carlgustav_m3
			{
				weapon="ADFU_carlgustav_m3";
				count=10;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_magazine_84mm_asm_509
			{
				magazine="ADFU_magazine_84mm_asm_509";
				count=20;
			};
			class _xx_ADFU_magazine_84mm_he_441d
			{
				magazine="ADFU_magazine_84mm_he_441d";
				count=20;
			};
			class _xx_ADFU_magazine_84mm_heat_551c
			{
				magazine="ADFU_magazine_84mm_heat_551c";
				count=20;
			};
			class _xx_ADFU_magazine_84mm_heat_751
			{
				magazine="ADFU_magazine_84mm_heat_751";
				count=20;
			};
			class _xx_ADFU_magazine_84mm_hedp_502
			{
				magazine="ADFU_magazine_84mm_hedp_502";
				count=20;
			};
		};
	};
	class ADFU_weaponbox_optics: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Optics Container";
		author="$STR_ADFU_AUTHOR";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ADFU_swarovski_optic
			{
				name="ADFU_swarovski_optic";
				count=10;
			};
			class _xx_ADFU_elcan_c79
			{
				name="ADFU_elcan_c79";
				count=10;
			};
			class _xx_ADFU_acog_ta648
			{
				name="ADFU_acog_ta648";
				count=10;
			};
			class _xx_ADFU_acog_ta648_rds
			{
				name="ADFU_acog_ta648_rds";
				count=10;
			};
			class _xx_ADFU_acog_ta648_t
			{
				name="ADFU_acog_ta648_t";
				count=10;
			};
			class _xx_ADFU_acog_ta648_rds_t
			{
				name="ADFU_acog_ta648_rds_t";
				count=10;
			};
			class _xx_ADFU_acog_ta31
			{
				name="ADFU_acog_ta31";
				count=10;
			};
			class _xx_ADFU_acog_ta31_t
			{
				name="ADFU_acog_ta31_t";
				count=10;
			};
			class _xx_ADFU_eotech552
			{
				name="ADFU_eotech552";
				count=10;
			};
			class _xx_ADFU_eotech552_3XDOWN
			{
				name="ADFU_eotech552_3XDOWN";
				count=10;
			};
			class _xx_ADFU_eotech552_3XUP
			{
				name="ADFU_eotech552_3XUP";
				count=10;
			};
		};
	};
	class ADFU_weaponbox_pistols: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Handgun Container";
		author="$STR_ADFU_AUTHOR";
		class TransportWeapons
		{
			class _xx_ADFU_weapon_hpII
			{
				weapon="ADFU_weapon_hpII";
				count=20;
			};
			class _xx_ADFU_weapon_usp
			{
				weapon="ADFU_weapon_usp";
				count=20;
			};
		};
		class TransportMagazines
		{
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=50;
			};
		};
		class TransportItems
		{
			class _xx_ADFU_weapon_usp_silencer
			{
				name="ADFU_weapon_usp_silencer";
				count=10;
			};
		};
	};
	class ADFU_weaponbox_m4a5: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] M4A5 Weapon Box";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_base\data\ADFU_weaponbox_co.paa",
			"ADFU_weapon_base\data\labels_m4a5_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFU_m4a5
			{
				weapon="ADFU_m4a5";
				count=5;
			};
			class _xx_ADFU_m4a5_afg
			{
				weapon="ADFU_m4a5_afg";
				count=5;
			};
			class _xx_ADFU_m4a5_vfg
			{
				weapon="ADFU_m4a5_vfg";
				count=5;
			};
			class _xx_ADFU_m4a5_m203
			{
				weapon="ADFU_m4a5_m203";
				count=5;
			};
			class _xx_ADFU_m4a5_m203fg
			{
				weapon="ADFU_m4a5_m203fg";
				count=5;
			};
			class _xx_ADFU_m4a5_des
			{
				weapon="ADFU_m4a5_des";
				count=5;
			};
			class _xx_ADFU_m4a5_afg_des
			{
				weapon="ADFU_m4a5_afg_des";
				count=5;
			};
			class _xx_ADFU_m4a5_vfg_des
			{
				weapon="ADFU_m4a5_vfg_des";
				count=5;
			};
			class _xx_ADFU_m4a5_m203_des
			{
				weapon="ADFU_m4a5_m203_des";
				count=5;
			};
			class _xx_ADFU_m4a5_m203fg_des
			{
				weapon="ADFU_m4a5_m203fg_des";
				count=5;
			};
			class _xx_ADFU_m4a5_des2
			{
				weapon="ADFU_m4a5_des2";
				count=5;
			};
			class _xx_ADFU_m4a5_afg_des2
			{
				weapon="ADFU_m4a5_afg_des2";
				count=5;
			};
			class _xx_ADFU_m4a5_vfg_des2
			{
				weapon="ADFU_m4a5_vfg_des2";
				count=5;
			};
			class _xx_ADFU_m4a5_m203_des2
			{
				weapon="ADFU_m4a5_m203_des2";
				count=5;
			};
			class _xx_ADFU_m4a5_m203fg_des2
			{
				weapon="ADFU_m4a5_m203fg_des2";
				count=5;
			};
			class _xx_ADFU_m4a5_wdl
			{
				weapon="ADFU_m4a5_wdl";
				count=5;
			};
			class _xx_ADFU_m4a5_afg_wdl
			{
				weapon="ADFU_m4a5_afg_wdl";
				count=5;
			};
			class _xx_ADFU_m4a5_vfg_wdl
			{
				weapon="ADFU_m4a5_vfg_wdl";
				count=5;
			};
			class _xx_ADFU_m4a5_m203_wdl
			{
				weapon="ADFU_m4a5_m203_wdl";
				count=5;
			};
			class _xx_ADFU_m4a5_m203fg_wdl
			{
				weapon="ADFU_m4a5_m203fg_wdl";
				count=5;
			};
			class _xx_ADFU_m4a5_wdl2
			{
				weapon="ADFU_m4a5_wdl2";
				count=5;
			};
			class _xx_ADFU_m4a5_afg_wdl2
			{
				weapon="ADFU_m4a5_afg_wdl2";
				count=5;
			};
			class _xx_ADFU_m4a5_vfg_wdl2
			{
				weapon="ADFU_m4a5_vfg_wdl2";
				count=5;
			};
			class _xx_ADFU_m4a5_m203_wdl2
			{
				weapon="ADFU_m4a5_m203_wdl2";
				count=5;
			};
			class _xx_ADFU_m4a5_m203fg_wdl2
			{
				weapon="ADFU_m4a5_m203fg_wdl2";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=100;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=30;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Green
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Green";
				count=30;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Yellow";
				count=30;
			};
			class _xx_ADFU_30Rnd_STANAG
			{
				magazine="ADFU_30Rnd_STANAG";
				count=100;
			};
			class _xx_ADFU_30Rnd_STANAG_TR
			{
				magazine="ADFU_30Rnd_STANAG_TR";
				count=100;
			};
			class _xx_ADFU_30Rnd_STANAG_TG
			{
				magazine="ADFU_30Rnd_STANAG_TG";
				count=100;
			};
			class _xx_ADFU_30Rnd_STANAG_TY
			{
				magazine="ADFU_30Rnd_STANAG_TY";
				count=100;
			};
			class _xx_ADFU_30Rnd_STANAG_IR
			{
				magazine="ADFU_30Rnd_STANAG_IR";
				count=100;
			};
			class _xx_ADFU_30Rnd_STANAG_mixed
			{
				magazine="ADFU_30Rnd_STANAG_mixed";
				count=100;
			};
		};
		class TransportItems
		{
			class _xx_ADFU_M4_SILENCER_B_F
			{
				name="ADFU_M4_SILENCER_B_F";
				count=30;
			};
			class _xx_ADFU_M4_SILENCER_T_F
			{
				name="ADFU_M4_SILENCER_T_F";
				count=30;
			};
			class _xx_ADFU_M4_SILENCER_W_F
			{
				name="ADFU_M4_SILENCER_W_F";
				count=30;
			};
		};
	};
	class ADFU_weaponbox_f88: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] F88 Austeyr Box";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_base\data\ADFU_weaponbox_co.paa",
			"ADFU_weapon_base\data\labels_aug_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFU_F88SA1
			{
				weapon="ADFU_F88SA1";
				count=5;
			};
			class _xx_ADFU_F88SA1_fg
			{
				weapon="ADFU_F88SA1_fg";
				count=5;
			};
			class _xx_ADFU_F88SA1_gl
			{
				weapon="ADFU_F88SA1_gl";
				count=5;
			};
			class _xx_ADFU_f88sa2
			{
				weapon="ADFU_f88sa2";
				count=5;
			};
			class _xx_ADFU_f88sa2_fg
			{
				weapon="ADFU_f88sa2_fg";
				count=5;
			};
			class _xx_ADFU_f88sa2_camo
			{
				weapon="ADFU_f88sa2_camo";
				count=5;
			};
			class _xx_ADFU_f88sa2_camo_fg
			{
				weapon="ADFU_f88sa2_camo_fg";
				count=5;
			};
			class _xx_ADFU_f88sa2_gl
			{
				weapon="ADFU_f88sa2_gl";
				count=5;
			};
			class _xx_ADFU_f88sa2_gl_camo
			{
				weapon="ADFU_f88sa2_gl_camo";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_30Rnd_aug
			{
				magazine="ADFU_30Rnd_aug";
				count=100;
			};
			class _xx_ADFU_30Rnd_aug_TR
			{
				magazine="ADFU_30Rnd_aug_TR";
				count=30;
			};
			class _xx_ADFU_30Rnd_aug_TY
			{
				magazine="ADFU_30Rnd_aug_TY";
				count=30;
			};
			class _xx_ADFU_30Rnd_aug_TG
			{
				magazine="ADFU_30Rnd_aug_TG";
				count=30;
			};
			class _xx_ADFU_30Rnd_aug_IR
			{
				magazine="ADFU_30Rnd_aug_IR";
				count=30;
			};
			class _xx_ADFU_30Rnd_aug_mixed
			{
				magazine="ADFU_30Rnd_aug_mixed";
				count=30;
			};
		};
		class TransportItems
		{
			class _xx_ADFU_f88_muzzle_snds
			{
				name="ADFU_f88_muzzle_snds";
				count=20;
			};
			class _xx_ADFU_f88_muzzle_snds_tan
			{
				name="ADFU_f88_muzzle_snds_tan";
				count=20;
			};
			class _xx_ADFU_F88SA1_light
			{
				name="ADFU_F88SA1_light";
				count=20;
			};
			class _xx_ADFU_F88SA1_laser
			{
				name="ADFU_F88SA1_laser";
				count=20;
			};
			class _xx_ADFU_f88sa2_light
			{
				name="ADFU_f88sa2_light";
				count=20;
			};
			class _xx_ADFU_f88sa2_light_tan
			{
				name="ADFU_f88sa2_light_tan";
				count=20;
			};
			class _xx_ADFU_f88sa2_laser
			{
				name="ADFU_f88sa2_laser";
				count=20;
			};
			class _xx_ADFU_f88sa2_laser_tan
			{
				name="ADFU_f88sa2_laser_tan";
				count=20;
			};
		};
	};
	class ADFU_weaponbox_mg: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Support Weapons";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_base\data\ADFU_weaponbox_co.paa",
			"ADFU_weapon_base\data\ADFU_weaponbox_signs_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFU_minimi
			{
				weapon="ADFU_minimi";
				count=5;
			};
			class _xx_ADFU_minimi_para
			{
				weapon="ADFU_minimi_para";
				count=5;
			};
			class _xx_ADFU_maximi
			{
				weapon="ADFU_maximi";
				count=5;
			};
			class _xx_ADFU_mag58
			{
				weapon="ADFU_mag58";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_100Rnd_556_Belt
			{
				magazine="ADFU_100Rnd_556_Belt";
				count=25;
			};
			class _xx_ADFU_100Rnd_556_Belt_TR
			{
				magazine="ADFU_100Rnd_556_Belt_TR";
				count=25;
			};
			class _xx_ADFU_100Rnd_556_Belt_TR5
			{
				magazine="ADFU_100Rnd_556_Belt_TR5";
				count=25;
			};
			class _xx_ADFU_200Rnd_556_Belt
			{
				magazine="ADFU_200Rnd_556_Belt";
				count=25;
			};
			class _xx_ADFU_200Rnd_556_Belt_TR
			{
				magazine="ADFU_200Rnd_556_Belt_TR";
				count=25;
			};
			class _xx_ADFU_200Rnd_556_Belt_TR5
			{
				magazine="ADFU_200Rnd_556_Belt_TR5";
				count=25;
			};
			class _xx_ADFU_50Rnd_762_Belt
			{
				magazine="ADFU_50Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFU_50Rnd_762_Belt_TR
			{
				magazine="ADFU_50Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFU_50Rnd_762_Belt_TR5
			{
				magazine="ADFU_50Rnd_762_Belt_TR5";
				count=25;
			};
			class _xx_ADFU_100Rnd_762_Belt
			{
				magazine="ADFU_100Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFU_100Rnd_762_Belt_TR
			{
				magazine="ADFU_100Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFU_100_Rnd_762_Belt_TR5
			{
				magazine="ADFU_100_Rnd_762_Belt_TR5";
				count=25;
			};
			class _xx_ADFU_150Rnd_762_Belt
			{
				magazine="ADFU_150Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFU_150Rnd_762_Belt_TR
			{
				magazine="ADFU_150Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFU_150Rnd_762_Belt_TR5
			{
				magazine="ADFU_150Rnd_762_Belt_TR5";
				count=25;
			};
		};
	};
	class ADFU_weaponbox_sr25: ADFU_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] SR25 Marksman Box";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_weapon_base\data\ADFU_weaponbox_co.paa",
			"ADFU_weapon_base\data\labels_sr25_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFU_sr25
			{
				weapon="ADFU_sr25";
				count=10;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=100;
			};
		};
		class TransportItems
		{
			class _xx_ADFU_SR25_SILENCER_M_F
			{
				name="ADFU_SR25_SILENCER_M_F";
				count=20;
			};
		};
	};
	class ADFU_weaponbox_amp: ADFU_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFU_AUTHOR";
		displayName="[ADF] Uniforms AMP";
		icon="icon_ADFU_uniform";
		transportMaxWeapons=0;
		transportMaxMagazines=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ADFU_PlateCarrier_Black
			{
				name="ADFU_PlateCarrier_Black";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Sand
			{
				name="ADFU_PlateCarrier_Sand";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Green
			{
				name="ADFU_PlateCarrier_Green";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_AMP
			{
				name="ADFU_PlateCarrier_AMP";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Black_Snake
			{
				name="ADFU_PlateCarrier_Black_Snake";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Sand_Snake
			{
				name="ADFU_PlateCarrier_Sand_Snake";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Green_Snake
			{
				name="ADFU_PlateCarrier_Green_Snake";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Black_Digi
			{
				name="ADFU_PlateCarrier_Black_Digi";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Sand_Digi
			{
				name="ADFU_PlateCarrier_Sand_Digi";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_Green_Digi
			{
				name="ADFU_PlateCarrier_Green_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Black
			{
				name="ADFU_CarrierLite_Black";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Sand
			{
				name="ADFU_CarrierLite_Sand";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Green
			{
				name="ADFU_CarrierLite_Green";
				count=20;
			};
			class _xx_ADFU_CarrierLite_AMP
			{
				name="ADFU_CarrierLite_AMP";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Black_Snake
			{
				name="ADFU_CarrierLite_Black_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Sand_Snake
			{
				name="ADFU_CarrierLite_Sand_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Green_Snake
			{
				name="ADFU_CarrierLite_Green_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Black_Digi
			{
				name="ADFU_CarrierLite_Black_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Sand_Digi
			{
				name="ADFU_CarrierLite_Sand_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierLite_Green_Digi
			{
				name="ADFU_CarrierLite_Green_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Black
			{
				name="ADFU_CarrierHeavy_Black";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Sand
			{
				name="ADFU_CarrierHeavy_Sand";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Green
			{
				name="ADFU_CarrierHeavy_Green";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_AMP
			{
				name="ADFU_CarrierHeavy_AMP";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Black_Snake
			{
				name="ADFU_CarrierHeavy_Black_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Sand_Snake
			{
				name="ADFU_CarrierHeavy_Sand_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Green_Snake
			{
				name="ADFU_CarrierHeavy_Green_Snake";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Black_Digi
			{
				name="ADFU_CarrierHeavy_Black_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Sand_Digi
			{
				name="ADFU_CarrierHeavy_Sand_Digi";
				count=20;
			};
			class _xx_ADFU_CarrierHeavy_Green_Digi
			{
				name="ADFU_CarrierHeavy_Green_Digi";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_BLACK_MEDIC
			{
				name="ADFU_PlateCarrier_BLACK_MEDIC";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_GREEN_MEDIC
			{
				name="ADFU_PlateCarrier_GREEN_MEDIC";
				count=20;
			};
			class _xx_ADFU_PlateCarrier_SAND_MEDIC
			{
				name="ADFU_PlateCarrier_SAND_MEDIC";
				count=20;
			};
			class _xx_ADFU_booniehat_amp
			{
				name="ADFU_booniehat_amp";
				count=20;
			};
			class _xx_ADFU_cap_tan
			{
				name="ADFU_cap_tan";
				count=20;
			};
			class _xx_ADFU_cap_green
			{
				name="ADFU_cap_green";
				count=20;
			};
			class _xx_ADFU_cap_black
			{
				name="ADFU_cap_black";
				count=20;
			};
			class _xx_ADFU_cap_amp
			{
				name="ADFU_cap_amp";
				count=20;
			};
			class _xx_ADFU_Helmet_Black
			{
				name="ADFU_Helmet_Black";
				count=20;
			};
			class _xx_ADFU_Helmet_Desert
			{
				name="ADFU_Helmet_Desert";
				count=20;
			};
			class _xx_ADFU_Helmet_Grass
			{
				name="ADFU_Helmet_Grass";
				count=20;
			};
			class _xx_ADFU_Helmet_Sand
			{
				name="ADFU_Helmet_Sand";
				count=20;
			};
			class _xx_ADFU_Helmet_Snake
			{
				name="ADFU_Helmet_Snake";
				count=20;
			};
			class _xx_ADFU_Helmet_CamInk
			{
				name="ADFU_Helmet_CamInk";
				count=20;
			};
			class _xx_ADFU_Helmet_Cam
			{
				name="ADFU_Helmet_Cam";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Black
			{
				name="ADFU_Helmet_Medic_Black";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Desert
			{
				name="ADFU_Helmet_Medic_Desert";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Grass
			{
				name="ADFU_Helmet_Medic_Grass";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Sand
			{
				name="ADFU_Helmet_Medic_Sand";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Snake
			{
				name="ADFU_Helmet_Medic_Snake";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_CamInk
			{
				name="ADFU_Helmet_Medic_CamInk";
				count=20;
			};
			class _xx_ADFU_Helmet_Medic_Cam
			{
				name="ADFU_Helmet_Medic_Cam";
				count=20;
			};
			class _xx_ADFU_ECH_Desert
			{
				name="ADFU_ECH_Desert";
				count=20;
			};
			class _xx_ADFU_ECH_Grass
			{
				name="ADFU_ECH_Grass";
				count=20;
			};
			class _xx_ADFU_ECH_Sand
			{
				name="ADFU_ECH_Sand";
				count=20;
			};
			class _xx_ADFU_ECH_Snake
			{
				name="ADFU_ECH_Snake";
				count=20;
			};
			class _xx_ADFU_ECH_CamInk
			{
				name="ADFU_ECH_CamInk";
				count=20;
			};
			class _xx_ADFU_ECH_Cam
			{
				name="ADFU_ECH_Cam";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_Desert
			{
				name="ADFU_ECH_MEDIC_Desert";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_Grass
			{
				name="ADFU_ECH_MEDIC_Grass";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_Sand
			{
				name="ADFU_ECH_MEDIC_Sand";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_Snake
			{
				name="ADFU_ECH_MEDIC_Snake";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_CamInk
			{
				name="ADFU_ECH_MEDIC_CamInk";
				count=20;
			};
			class _xx_ADFU_ECH_MEDIC_Cam
			{
				name="ADFU_ECH_MEDIC_Cam";
				count=20;
			};
			class _xx_ADFU_assaultpack_black
			{
				name="ADFU_assaultpack_black";
				count=20;
			};
			class _xx_ADFU_assaultpack_green
			{
				name="ADFU_assaultpack_green";
				count=20;
			};
			class _xx_ADFU_assaultpack_tan
			{
				name="ADFU_assaultpack_tan";
				count=20;
			};
			class _xx_ADFU_assaultpack_amp
			{
				name="ADFU_assaultpack_amp";
				count=20;
			};
			class _xx_ADFU_assaultpack_black_medic
			{
				name="ADFU_assaultpack_black_medic";
				count=20;
			};
			class _xx_ADFU_assaultpack_green_medic
			{
				name="ADFU_assaultpack_green_medic";
				count=20;
			};
			class _xx_ADFU_assaultpack_tan_medic
			{
				name="ADFU_assaultpack_tan_medic";
				count=20;
			};
			class _xx_ADFU_assaultpack_amp_medic
			{
				name="ADFU_assaultpack_amp_medic";
				count=20;
			};
			class _xx_ADFU_kitbag_black
			{
				name="ADFU_kitbag_black";
				count=20;
			};
			class _xx_ADFU_kitbag_green
			{
				name="ADFU_kitbag_green";
				count=20;
			};
			class _xx_ADFU_kitbag_tan
			{
				name="ADFU_kitbag_tan";
				count=20;
			};
			class _xx_ADFU_kitbag_amp
			{
				name="ADFU_kitbag_amp";
				count=20;
			};
			class _xx_ADFU_kitbag_black_medic
			{
				name="ADFU_kitbag_black_medic";
				count=20;
			};
			class _xx_ADFU_kitbag_green_medic
			{
				name="ADFU_kitbag_green_medic";
				count=20;
			};
			class _xx_ADFU_kitbag_tan_medic
			{
				name="ADFU_kitbag_tan_medic";
				count=20;
			};
			class _xx_ADFU_kitbag_amp_medic
			{
				name="ADFU_kitbag_amp_medic";
				count=20;
			};
			class _xx_ADFU_carryall_black
			{
				name="ADFU_carryall_black";
				count=20;
			};
			class _xx_ADFU_carryall_green
			{
				name="ADFU_carryall_green";
				count=20;
			};
			class _xx_ADFU_carryall_tan
			{
				name="ADFU_carryall_tan";
				count=20;
			};
			class _xx_ADFU_carryall_amp
			{
				name="ADFU_carryall_amp";
				count=20;
			};
			class _xx_ADFU_carryall_black_medic
			{
				name="ADFU_carryall_black_medic";
				count=20;
			};
			class _xx_ADFU_carryall_green_medic
			{
				name="ADFU_carryall_green_medic";
				count=20;
			};
			class _xx_ADFU_carryall_tan_medic
			{
				name="ADFU_carryall_tan_medic";
				count=20;
			};
			class _xx_ADFU_carryall_amp_medic
			{
				name="ADFU_carryall_amp_medic";
				count=20;
			};
			class _xx_ADFU_uniform_amp_cam
			{
				name="ADFU_uniform_amp_cam";
				count=20;
			};
			class _xx_ADFU_uniform_amp_grn
			{
				name="ADFU_uniform_amp_grn";
				count=20;
			};
			class _xx_ADFU_uniform_amp_tan
			{
				name="ADFU_uniform_amp_tan";
				count=20;
			};
			class _xx_ADFU_uniform_amp_cam_ss
			{
				name="ADFU_uniform_amp_cam_ss";
				count=20;
			};
			class _xx_ADFU_uniform_amp_grn_ss
			{
				name="ADFU_uniform_amp_grn_ss";
				count=20;
			};
			class _xx_ADFU_uniform_amp_tan_ss
			{
				name="ADFU_uniform_amp_tan_ss";
				count=20;
			};
			class _xx_ADFU_uniform_amp_tee_grn
			{
				name="ADFU_uniform_amp_tee_grn";
				count=20;
			};
			class _xx_ADFU_uniform_amp_tee_tan
			{
				name="ADFU_uniform_amp_tee_tan";
				count=20;
			};
			class _xx_ADFU_uniform_amp_tee_khk
			{
				name="ADFU_uniform_amp_tee_khk";
				count=20;
			};
			class _xx_ADFU_coveralls_black
			{
				name="ADFU_coveralls_black";
				count=20;
			};
			class _xx_ADFU_coveralls_green
			{
				name="ADFU_coveralls_green";
				count=20;
			};
			class _xx_ADFU_coveralls_tan
			{
				name="ADFU_coveralls_tan";
				count=20;
			};
		};
	};
	class ADFU_weaponbox_dpcu: ADFU_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFU_AUTHOR";
		displayName="[ADF] Uniforms DPCU";
		icon="icon_ADFU_uniform";
		transportMaxWeapons=0;
		transportMaxMagazines=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ADFU_carrierLite_dpcu
			{
				name="ADFU_carrierLite_dpcu";
				count=20;
			};
			class _xx_ADFU_plateCarrier_dpcu
			{
				name="ADFU_plateCarrier_dpcu";
				count=20;
			};
			class _xx_ADFU_tacticalVest_dpcu
			{
				name="ADFU_tacticalVest_dpcu";
				count=20;
			};
			class _xx_ADFU_HelmetC_dpcu
			{
				name="ADFU_HelmetC_dpcu";
				count=20;
			};
			class _xx_ADFU_helmetB_dpcu
			{
				name="ADFU_helmetB_dpcu";
				count=20;
			};
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=20;
			};
			class _xx_ADFU_AssaultPack_dpcu
			{
				name="ADFU_AssaultPack_dpcu";
				count=20;
			};
			class _xx_ADFU_Carryall_dpcu
			{
				name="ADFU_Carryall_dpcu";
				count=20;
			};
			class _xx_ADFU_Carryall_dpcu_diver
			{
				name="ADFU_Carryall_dpcu_diver";
				count=20;
			};
			class _xx_ADFU_Carryall_dpcu_medic
			{
				name="ADFU_Carryall_dpcu_medic";
				count=20;
			};
			class _xx_ADFU_Carryall_dpcu_engineer
			{
				name="ADFU_Carryall_dpcu_engineer";
				count=20;
			};
			class _xx_ADFU_Carryall_dpcu_at
			{
				name="ADFU_Carryall_dpcu_at";
				count=20;
			};
			class _xx_ADFU_uniform_dpcu
			{
				name="ADFU_uniform_dpcu";
				count=20;
			};
			class _xx_ADFU_uniform_dpcu_recon
			{
				name="ADFU_uniform_dpcu_recon";
				count=20;
			};
			class _xx_ADFU_uniform_dpcu_medic
			{
				name="ADFU_uniform_dpcu_medic";
				count=20;
			};
			class _xx_ADFU_uniform_dpcu_tee
			{
				name="ADFU_uniform_dpcu_tee";
				count=20;
			};
			class _xx_ADFU_coveralls_dpcu
			{
				name="ADFU_coveralls_dpcu";
				count=20;
			};
		};
	};
	class ADFU_weaponbox_dpdu: ADFU_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFU_AUTHOR";
		displayName="[ADF] Uniforms DPDU";
		icon="icon_ADFU_uniform";
		transportMaxWeapons=0;
		transportMaxMagazines=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ADFU_carrierlite_dpdu
			{
				name="ADFU_carrierlite_dpdu";
				count=20;
			};
			class _xx_ADFU_tacticalvest_dpdu
			{
				name="ADFU_tacticalvest_dpdu";
				count=20;
			};
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=20;
			};
			class _xx_ADFU_helmetB_dpdu
			{
				name="ADFU_helmetB_dpdu";
				count=20;
			};
			class _xx_ADFU_carryall_dpdu
			{
				name="ADFU_carryall_dpdu";
				count=20;
			};
			class _xx_ADFU_carryall_dpdu_medic
			{
				name="ADFU_carryall_dpdu_medic";
				count=20;
			};
			class _xx_ADFU_carryall_dpdu_engineer
			{
				name="ADFU_carryall_dpdu_engineer";
				count=20;
			};
			class _xx_ADFU_carryall_dpdu_at
			{
				name="ADFU_carryall_dpdu_at";
				count=20;
			};
			class _xx_ADFU_uniform_dpdu
			{
				name="ADFU_uniform_dpdu";
				count=20;
			};
			class _xx_ADFU_uniform_dpdu_medic
			{
				name="ADFU_uniform_dpdu_medic";
				count=20;
			};
			class _xx_ADFU_uniform_dpdu_recon
			{
				name="ADFU_uniform_dpdu_recon";
				count=20;
			};
			class _xx_ADFU_uniform_dpdu_pilot
			{
				name="ADFU_uniform_dpdu_pilot";
				count=20;
			};
		};
	};
};

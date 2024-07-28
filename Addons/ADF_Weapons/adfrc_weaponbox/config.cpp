class CfgPatches
{
	class ADFRC_Weaponbox
	{
		units[]=
		{
			"ADFRC_weaponbox_launchers",
			"ADFRC_weaponbox_optics",
			"ADFRC_weaponbox_pistols",
			"ADFRC_weaponbox_m4a5",
			"ADFRC_weaponbox_f88",
			"ADFRC_weaponbox_mg",
			"ADFRC_weaponbox_sr25",
			"ADFRC_weaponbox_amp",
			"ADFRC_weaponbox_dpcu",
			"ADFRC_weaponbox_dpdu",
			"ADFRC_weaponbox_large",
			"ADFRC_weaponbox_medium"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADF_Core"
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
	icon_ADFRC_box="\ADF_Weapons\adfrc_weaponbox\icons\iconbox_ADFRC_ca.paa";
	icon_ADFRC_uniform="\ADF_Weapons\adfrc_weaponbox\icons\iconbox_uni_ca.paa";
	icon_ADFRC_crate="\ADF_Weapons\adfrc_weaponbox\icons\iconcrate_ADFRC_ca.paa";
};
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_Wps_F;
	class Box_NATO_AmmoVeh_F;
	class ADFRC_weaponbox_large: Box_NATO_AmmoVeh_F
	{
		scope=2;
		icon="icon_ADFRC_box";
		displayName="[ADF] Empty Container";
		author="$STR_ADFRC_AUTHOR";
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
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_container_dpcu_co.paa"
		};
	};
	class ADFRC_weaponbox_medium: Box_NATO_Wps_F
	{
		scope=2;
		displayName="[ADF] Empty Weaponbox";
		icon="icon_ADFRC_crate";
		author="$STR_ADFRC_AUTHOR";
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
		model="\ADF_Weapons\adfrc_weaponbox\Weaponbox.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_co.paa",
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_signs_ca.paa"
		};
	};
	class ADFRC_weaponbox_launchers: ADFRC_weaponbox_large
	{
		scope=2;
		accuracy=1000;
		vehicleClass="Ammo";
		displayName="[ADF] Launchers";
		author="$STR_ADFRC_AUTHOR";
		maximumLoad=99999;
		transportMaxWeapons=15000;
		transportMaxMagazines=20000;
		transportMaxBackpacks=50;
		class TransportWeapons
		{
			class _xx_ADFRC_carlgustav_m3
			{
				weapon="ADFRC_carlgustav_m3";
				count=10;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_magazine_84mm_asm_509
			{
				magazine="ADFRC_magazine_84mm_asm_509";
				count=20;
			};
			class _xx_ADFRC_magazine_84mm_he_441d
			{
				magazine="ADFRC_magazine_84mm_he_441d";
				count=20;
			};
			class _xx_ADFRC_magazine_84mm_heat_551c
			{
				magazine="ADFRC_magazine_84mm_heat_551c";
				count=20;
			};
			class _xx_ADFRC_magazine_84mm_heat_751
			{
				magazine="ADFRC_magazine_84mm_heat_751";
				count=20;
			};
			class _xx_ADFRC_magazine_84mm_hedp_502
			{
				magazine="ADFRC_magazine_84mm_hedp_502";
				count=20;
			};
		};
	};
	class ADFRC_weaponbox_optics: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Optics Container";
		author="$STR_ADFRC_AUTHOR";
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ADFRC_swarovski_optic
			{
				name="ADFRC_swarovski_optic";
				count=10;
			};
			class _xx_ADFRC_elcan_c79
			{
				name="ADFRC_elcan_c79";
				count=10;
			};
			class _xx_ADFRC_acog_ta648
			{
				name="ADFRC_acog_ta648";
				count=10;
			};
			class _xx_ADFRC_acog_ta648_rds
			{
				name="ADFRC_acog_ta648_rds";
				count=10;
			};
			class _xx_ADFRC_acog_ta648_t
			{
				name="ADFRC_acog_ta648_t";
				count=10;
			};
			class _xx_ADFRC_acog_ta648_rds_t
			{
				name="ADFRC_acog_ta648_rds_t";
				count=10;
			};
			class _xx_ADFRC_acog_ta31
			{
				name="ADFRC_acog_ta31";
				count=10;
			};
			class _xx_ADFRC_acog_ta31_t
			{
				name="ADFRC_acog_ta31_t";
				count=10;
			};
			class _xx_ADFRC_eotech552
			{
				name="ADFRC_eotech552";
				count=10;
			};
			class _xx_ADFRC_eotech552_3XDOWN
			{
				name="ADFRC_eotech552_3XDOWN";
				count=10;
			};
			class _xx_ADFRC_eotech552_3XUP
			{
				name="ADFRC_eotech552_3XUP";
				count=10;
			};
		};
	};
	class ADFRC_weaponbox_pistols: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Handgun Container";
		author="$STR_ADFRC_AUTHOR";
		class TransportWeapons
		{
			class _xx_ADFRC_weapon_hpII
			{
				weapon="ADFRC_weapon_hpII";
				count=20;
			};
			class _xx_ADFRC_weapon_usp
			{
				weapon="ADFRC_weapon_usp";
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
			class _xx_ADFRC_weapon_usp_silencer
			{
				name="ADFRC_weapon_usp_silencer";
				count=10;
			};
		};
	};
	class ADFRC_weaponbox_m4a5: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] M4A5 Weapon Box";
		author="$STR_ADFRC_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_co.paa",
			"ADF_Weapons\adfrc_weaponbox\data\labels_m4a5_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFRC_m4a5
			{
				weapon="ADFRC_m4a5";
				count=5;
			};
			class _xx_ADFRC_m4a5_afg
			{
				weapon="ADFRC_m4a5_afg";
				count=5;
			};
			class _xx_ADFRC_m4a5_vfg
			{
				weapon="ADFRC_m4a5_vfg";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203
			{
				weapon="ADFRC_m4a5_m203";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203fg
			{
				weapon="ADFRC_m4a5_m203fg";
				count=5;
			};
			class _xx_ADFRC_m4a5_des
			{
				weapon="ADFRC_m4a5_des";
				count=5;
			};
			class _xx_ADFRC_m4a5_afg_des
			{
				weapon="ADFRC_m4a5_afg_des";
				count=5;
			};
			class _xx_ADFRC_m4a5_vfg_des
			{
				weapon="ADFRC_m4a5_vfg_des";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203_des
			{
				weapon="ADFRC_m4a5_m203_des";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203fg_des
			{
				weapon="ADFRC_m4a5_m203fg_des";
				count=5;
			};
			class _xx_ADFRC_m4a5_des2
			{
				weapon="ADFRC_m4a5_des2";
				count=5;
			};
			class _xx_ADFRC_m4a5_afg_des2
			{
				weapon="ADFRC_m4a5_afg_des2";
				count=5;
			};
			class _xx_ADFRC_m4a5_vfg_des2
			{
				weapon="ADFRC_m4a5_vfg_des2";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203_des2
			{
				weapon="ADFRC_m4a5_m203_des2";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203fg_des2
			{
				weapon="ADFRC_m4a5_m203fg_des2";
				count=5;
			};
			class _xx_ADFRC_m4a5_wdl
			{
				weapon="ADFRC_m4a5_wdl";
				count=5;
			};
			class _xx_ADFRC_m4a5_afg_wdl
			{
				weapon="ADFRC_m4a5_afg_wdl";
				count=5;
			};
			class _xx_ADFRC_m4a5_vfg_wdl
			{
				weapon="ADFRC_m4a5_vfg_wdl";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203_wdl
			{
				weapon="ADFRC_m4a5_m203_wdl";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203fg_wdl
			{
				weapon="ADFRC_m4a5_m203fg_wdl";
				count=5;
			};
			class _xx_ADFRC_m4a5_wdl2
			{
				weapon="ADFRC_m4a5_wdl2";
				count=5;
			};
			class _xx_ADFRC_m4a5_afg_wdl2
			{
				weapon="ADFRC_m4a5_afg_wdl2";
				count=5;
			};
			class _xx_ADFRC_m4a5_vfg_wdl2
			{
				weapon="ADFRC_m4a5_vfg_wdl2";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203_wdl2
			{
				weapon="ADFRC_m4a5_m203_wdl2";
				count=5;
			};
			class _xx_ADFRC_m4a5_m203fg_wdl2
			{
				weapon="ADFRC_m4a5_m203fg_wdl2";
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
			class _xx_ADFRC_30Rnd_STANAG
			{
				magazine="ADFRC_30Rnd_STANAG";
				count=100;
			};
			class _xx_ADFRC_30Rnd_STANAG_TR
			{
				magazine="ADFRC_30Rnd_STANAG_TR";
				count=100;
			};
			class _xx_ADFRC_30Rnd_STANAG_TG
			{
				magazine="ADFRC_30Rnd_STANAG_TG";
				count=100;
			};
			class _xx_ADFRC_30Rnd_STANAG_TY
			{
				magazine="ADFRC_30Rnd_STANAG_TY";
				count=100;
			};
			class _xx_ADFRC_30Rnd_STANAG_IR
			{
				magazine="ADFRC_30Rnd_STANAG_IR";
				count=100;
			};
			class _xx_ADFRC_30Rnd_STANAG_mixed
			{
				magazine="ADFRC_30Rnd_STANAG_mixed";
				count=100;
			};
		};
		class TransportItems
		{
			class _xx_ADFRC_M4_SILENCER_B_F
			{
				name="ADFRC_M4_SILENCER_B_F";
				count=30;
			};
			class _xx_ADFRC_M4_SILENCER_T_F
			{
				name="ADFRC_M4_SILENCER_T_F";
				count=30;
			};
			class _xx_ADFRC_M4_SILENCER_W_F
			{
				name="ADFRC_M4_SILENCER_W_F";
				count=30;
			};
		};
	};
	class ADFRC_weaponbox_f88: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] F88 Austeyr Box";
		author="$STR_ADFRC_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_co.paa",
			"ADF_Weapons\adfrc_weaponbox\data\labels_aug_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFRC_F88SA1
			{
				weapon="ADFRC_F88SA1";
				count=5;
			};
			class _xx_ADFRC_F88SA1_fg
			{
				weapon="ADFRC_F88SA1_fg";
				count=5;
			};
			class _xx_ADFRC_F88SA1_gl
			{
				weapon="ADFRC_F88SA1_gl";
				count=5;
			};
			class _xx_ADFRC_f88sa2
			{
				weapon="ADFRC_f88sa2";
				count=5;
			};
			class _xx_ADFRC_f88sa2_fg
			{
				weapon="ADFRC_f88sa2_fg";
				count=5;
			};
			class _xx_ADFRC_f88sa2_camo
			{
				weapon="ADFRC_f88sa2_camo";
				count=5;
			};
			class _xx_ADFRC_f88sa2_camo_fg
			{
				weapon="ADFRC_f88sa2_camo_fg";
				count=5;
			};
			class _xx_ADFRC_f88sa2_gl
			{
				weapon="ADFRC_f88sa2_gl";
				count=5;
			};
			class _xx_ADFRC_f88sa2_gl_camo
			{
				weapon="ADFRC_f88sa2_gl_camo";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_30Rnd_aug
			{
				magazine="ADFRC_30Rnd_aug";
				count=100;
			};
			class _xx_ADFRC_30Rnd_aug_TR
			{
				magazine="ADFRC_30Rnd_aug_TR";
				count=30;
			};
			class _xx_ADFRC_30Rnd_aug_TY
			{
				magazine="ADFRC_30Rnd_aug_TY";
				count=30;
			};
			class _xx_ADFRC_30Rnd_aug_TG
			{
				magazine="ADFRC_30Rnd_aug_TG";
				count=30;
			};
			class _xx_ADFRC_30Rnd_aug_IR
			{
				magazine="ADFRC_30Rnd_aug_IR";
				count=30;
			};
			class _xx_ADFRC_30Rnd_aug_mixed
			{
				magazine="ADFRC_30Rnd_aug_mixed";
				count=30;
			};
		};
		class TransportItems
		{
			class _xx_ADFRC_f88_muzzle_snds
			{
				name="ADFRC_f88_muzzle_snds";
				count=20;
			};
			class _xx_ADFRC_f88_muzzle_snds_tan
			{
				name="ADFRC_f88_muzzle_snds_tan";
				count=20;
			};
			class _xx_ADFRC_F88SA1_light
			{
				name="ADFRC_F88SA1_light";
				count=20;
			};
			class _xx_ADFRC_F88SA1_laser
			{
				name="ADFRC_F88SA1_laser";
				count=20;
			};
			class _xx_ADFRC_f88sa2_light
			{
				name="ADFRC_f88sa2_light";
				count=20;
			};
			class _xx_ADFRC_f88sa2_light_tan
			{
				name="ADFRC_f88sa2_light_tan";
				count=20;
			};
			class _xx_ADFRC_f88sa2_laser
			{
				name="ADFRC_f88sa2_laser";
				count=20;
			};
			class _xx_ADFRC_f88sa2_laser_tan
			{
				name="ADFRC_f88sa2_laser_tan";
				count=20;
			};
		};
	};
	class ADFRC_weaponbox_mg: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] Support Weapons";
		author="$STR_ADFRC_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_co.paa",
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_signs_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFRC_minimi
			{
				weapon="ADFRC_minimi";
				count=5;
			};
			class _xx_ADFRC_minimi_para
			{
				weapon="ADFRC_minimi_para";
				count=5;
			};
			class _xx_ADFRC_maximi
			{
				weapon="ADFRC_maximi";
				count=5;
			};
			class _xx_ADFRC_mag58
			{
				weapon="ADFRC_mag58";
				count=5;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_100Rnd_556_Belt
			{
				magazine="ADFRC_100Rnd_556_Belt";
				count=25;
			};
			class _xx_ADFRC_100Rnd_556_Belt_TR
			{
				magazine="ADFRC_100Rnd_556_Belt_TR";
				count=25;
			};
			class _xx_ADFRC_100Rnd_556_Belt_TR5
			{
				magazine="ADFRC_100Rnd_556_Belt_TR5";
				count=25;
			};
			class _xx_ADFRC_200Rnd_556_Belt
			{
				magazine="ADFRC_200Rnd_556_Belt";
				count=25;
			};
			class _xx_ADFRC_200Rnd_556_Belt_TR
			{
				magazine="ADFRC_200Rnd_556_Belt_TR";
				count=25;
			};
			class _xx_ADFRC_200Rnd_556_Belt_TR5
			{
				magazine="ADFRC_200Rnd_556_Belt_TR5";
				count=25;
			};
			class _xx_ADFRC_50Rnd_762_Belt
			{
				magazine="ADFRC_50Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFRC_50Rnd_762_Belt_TR
			{
				magazine="ADFRC_50Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFRC_50Rnd_762_Belt_TR5
			{
				magazine="ADFRC_50Rnd_762_Belt_TR5";
				count=25;
			};
			class _xx_ADFRC_100Rnd_762_Belt
			{
				magazine="ADFRC_100Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFRC_100Rnd_762_Belt_TR
			{
				magazine="ADFRC_100Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFRC_100_Rnd_762_Belt_TR5
			{
				magazine="ADFRC_100_Rnd_762_Belt_TR5";
				count=25;
			};
			class _xx_ADFRC_150Rnd_762_Belt
			{
				magazine="ADFRC_150Rnd_762_Belt";
				count=25;
			};
			class _xx_ADFRC_150Rnd_762_Belt_TR
			{
				magazine="ADFRC_150Rnd_762_Belt_TR";
				count=25;
			};
			class _xx_ADFRC_150Rnd_762_Belt_TR5
			{
				magazine="ADFRC_150Rnd_762_Belt_TR5";
				count=25;
			};
		};
	};
	class ADFRC_weaponbox_sr25: ADFRC_weaponbox_medium
	{
		scope=2;
		displayName="[ADF] SR25 Marksman Box";
		author="$STR_ADFRC_AUTHOR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Weapons\adfrc_weaponbox\data\ADFRC_weaponbox_co.paa",
			"ADF_Weapons\adfrc_weaponbox\data\labels_sr25_ca.paa"
		};
		class TransportWeapons
		{
			class _xx_ADFRC_sr25
			{
				weapon="ADFRC_sr25";
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
			class _xx_ADFRC_SR25_SILENCER_M_F
			{
				name="ADFRC_SR25_SILENCER_M_F";
				count=20;
			};
		};
	};
	class ADFRC_weaponbox_amp: ADFRC_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFRC_AUTHOR";
		displayName="[ADF] Uniforms AMP";
		icon="icon_ADFRC_uniform";
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
			class _xx_ADFRC_PlateCarrier_Black
			{
				name="ADFRC_PlateCarrier_Black";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Sand
			{
				name="ADFRC_PlateCarrier_Sand";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Green
			{
				name="ADFRC_PlateCarrier_Green";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_AMP
			{
				name="ADFRC_PlateCarrier_AMP";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Black_Snake
			{
				name="ADFRC_PlateCarrier_Black_Snake";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Sand_Snake
			{
				name="ADFRC_PlateCarrier_Sand_Snake";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Green_Snake
			{
				name="ADFRC_PlateCarrier_Green_Snake";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Black_Digi
			{
				name="ADFRC_PlateCarrier_Black_Digi";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Sand_Digi
			{
				name="ADFRC_PlateCarrier_Sand_Digi";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_Green_Digi
			{
				name="ADFRC_PlateCarrier_Green_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Black
			{
				name="ADFRC_CarrierLite_Black";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Sand
			{
				name="ADFRC_CarrierLite_Sand";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Green
			{
				name="ADFRC_CarrierLite_Green";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_AMP
			{
				name="ADFRC_CarrierLite_AMP";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Black_Snake
			{
				name="ADFRC_CarrierLite_Black_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Sand_Snake
			{
				name="ADFRC_CarrierLite_Sand_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Green_Snake
			{
				name="ADFRC_CarrierLite_Green_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Black_Digi
			{
				name="ADFRC_CarrierLite_Black_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Sand_Digi
			{
				name="ADFRC_CarrierLite_Sand_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierLite_Green_Digi
			{
				name="ADFRC_CarrierLite_Green_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Black
			{
				name="ADFRC_CarrierHeavy_Black";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Sand
			{
				name="ADFRC_CarrierHeavy_Sand";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Green
			{
				name="ADFRC_CarrierHeavy_Green";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_AMP
			{
				name="ADFRC_CarrierHeavy_AMP";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Black_Snake
			{
				name="ADFRC_CarrierHeavy_Black_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Sand_Snake
			{
				name="ADFRC_CarrierHeavy_Sand_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Green_Snake
			{
				name="ADFRC_CarrierHeavy_Green_Snake";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Black_Digi
			{
				name="ADFRC_CarrierHeavy_Black_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Sand_Digi
			{
				name="ADFRC_CarrierHeavy_Sand_Digi";
				count=20;
			};
			class _xx_ADFRC_CarrierHeavy_Green_Digi
			{
				name="ADFRC_CarrierHeavy_Green_Digi";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_BLACK_MEDIC
			{
				name="ADFRC_PlateCarrier_BLACK_MEDIC";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_GREEN_MEDIC
			{
				name="ADFRC_PlateCarrier_GREEN_MEDIC";
				count=20;
			};
			class _xx_ADFRC_PlateCarrier_SAND_MEDIC
			{
				name="ADFRC_PlateCarrier_SAND_MEDIC";
				count=20;
			};
			class _xx_ADFRC_booniehat_amp
			{
				name="ADFRC_booniehat_amp";
				count=20;
			};
			class _xx_ADFRC_cap_tan
			{
				name="ADFRC_cap_tan";
				count=20;
			};
			class _xx_ADFRC_cap_green
			{
				name="ADFRC_cap_green";
				count=20;
			};
			class _xx_ADFRC_cap_black
			{
				name="ADFRC_cap_black";
				count=20;
			};
			class _xx_ADFRC_cap_amp
			{
				name="ADFRC_cap_amp";
				count=20;
			};
			class _xx_ADFRC_Helmet_Black
			{
				name="ADFRC_Helmet_Black";
				count=20;
			};
			class _xx_ADFRC_Helmet_Desert
			{
				name="ADFRC_Helmet_Desert";
				count=20;
			};
			class _xx_ADFRC_Helmet_Grass
			{
				name="ADFRC_Helmet_Grass";
				count=20;
			};
			class _xx_ADFRC_Helmet_Sand
			{
				name="ADFRC_Helmet_Sand";
				count=20;
			};
			class _xx_ADFRC_Helmet_Snake
			{
				name="ADFRC_Helmet_Snake";
				count=20;
			};
			class _xx_ADFRC_Helmet_CamInk
			{
				name="ADFRC_Helmet_CamInk";
				count=20;
			};
			class _xx_ADFRC_Helmet_Cam
			{
				name="ADFRC_Helmet_Cam";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Black
			{
				name="ADFRC_Helmet_Medic_Black";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Desert
			{
				name="ADFRC_Helmet_Medic_Desert";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Grass
			{
				name="ADFRC_Helmet_Medic_Grass";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Sand
			{
				name="ADFRC_Helmet_Medic_Sand";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Snake
			{
				name="ADFRC_Helmet_Medic_Snake";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_CamInk
			{
				name="ADFRC_Helmet_Medic_CamInk";
				count=20;
			};
			class _xx_ADFRC_Helmet_Medic_Cam
			{
				name="ADFRC_Helmet_Medic_Cam";
				count=20;
			};
			class _xx_ADFRC_ECH_Desert
			{
				name="ADFRC_ECH_Desert";
				count=20;
			};
			class _xx_ADFRC_ECH_Grass
			{
				name="ADFRC_ECH_Grass";
				count=20;
			};
			class _xx_ADFRC_ECH_Sand
			{
				name="ADFRC_ECH_Sand";
				count=20;
			};
			class _xx_ADFRC_ECH_Snake
			{
				name="ADFRC_ECH_Snake";
				count=20;
			};
			class _xx_ADFRC_ECH_CamInk
			{
				name="ADFRC_ECH_CamInk";
				count=20;
			};
			class _xx_ADFRC_ECH_Cam
			{
				name="ADFRC_ECH_Cam";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_Desert
			{
				name="ADFRC_ECH_MEDIC_Desert";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_Grass
			{
				name="ADFRC_ECH_MEDIC_Grass";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_Sand
			{
				name="ADFRC_ECH_MEDIC_Sand";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_Snake
			{
				name="ADFRC_ECH_MEDIC_Snake";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_CamInk
			{
				name="ADFRC_ECH_MEDIC_CamInk";
				count=20;
			};
			class _xx_ADFRC_ECH_MEDIC_Cam
			{
				name="ADFRC_ECH_MEDIC_Cam";
				count=20;
			};
			class _xx_ADFRC_assaultpack_black
			{
				name="ADFRC_assaultpack_black";
				count=20;
			};
			class _xx_ADFRC_assaultpack_green
			{
				name="ADFRC_assaultpack_green";
				count=20;
			};
			class _xx_ADFRC_assaultpack_tan
			{
				name="ADFRC_assaultpack_tan";
				count=20;
			};
			class _xx_ADFRC_assaultpack_amp
			{
				name="ADFRC_assaultpack_amp";
				count=20;
			};
			class _xx_ADFRC_assaultpack_black_medic
			{
				name="ADFRC_assaultpack_black_medic";
				count=20;
			};
			class _xx_ADFRC_assaultpack_green_medic
			{
				name="ADFRC_assaultpack_green_medic";
				count=20;
			};
			class _xx_ADFRC_assaultpack_tan_medic
			{
				name="ADFRC_assaultpack_tan_medic";
				count=20;
			};
			class _xx_ADFRC_assaultpack_amp_medic
			{
				name="ADFRC_assaultpack_amp_medic";
				count=20;
			};
			class _xx_ADFRC_kitbag_black
			{
				name="ADFRC_kitbag_black";
				count=20;
			};
			class _xx_ADFRC_kitbag_green
			{
				name="ADFRC_kitbag_green";
				count=20;
			};
			class _xx_ADFRC_kitbag_tan
			{
				name="ADFRC_kitbag_tan";
				count=20;
			};
			class _xx_ADFRC_kitbag_amp
			{
				name="ADFRC_kitbag_amp";
				count=20;
			};
			class _xx_ADFRC_kitbag_black_medic
			{
				name="ADFRC_kitbag_black_medic";
				count=20;
			};
			class _xx_ADFRC_kitbag_green_medic
			{
				name="ADFRC_kitbag_green_medic";
				count=20;
			};
			class _xx_ADFRC_kitbag_tan_medic
			{
				name="ADFRC_kitbag_tan_medic";
				count=20;
			};
			class _xx_ADFRC_kitbag_amp_medic
			{
				name="ADFRC_kitbag_amp_medic";
				count=20;
			};
			class _xx_ADFRC_carryall_black
			{
				name="ADFRC_carryall_black";
				count=20;
			};
			class _xx_ADFRC_carryall_green
			{
				name="ADFRC_carryall_green";
				count=20;
			};
			class _xx_ADFRC_carryall_tan
			{
				name="ADFRC_carryall_tan";
				count=20;
			};
			class _xx_ADFRC_carryall_amp
			{
				name="ADFRC_carryall_amp";
				count=20;
			};
			class _xx_ADFRC_carryall_black_medic
			{
				name="ADFRC_carryall_black_medic";
				count=20;
			};
			class _xx_ADFRC_carryall_green_medic
			{
				name="ADFRC_carryall_green_medic";
				count=20;
			};
			class _xx_ADFRC_carryall_tan_medic
			{
				name="ADFRC_carryall_tan_medic";
				count=20;
			};
			class _xx_ADFRC_carryall_amp_medic
			{
				name="ADFRC_carryall_amp_medic";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_cam
			{
				name="ADFRC_uniform_amp_cam";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_grn
			{
				name="ADFRC_uniform_amp_grn";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_tan
			{
				name="ADFRC_uniform_amp_tan";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_cam_ss
			{
				name="ADFRC_uniform_amp_cam_ss";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_grn_ss
			{
				name="ADFRC_uniform_amp_grn_ss";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_tan_ss
			{
				name="ADFRC_uniform_amp_tan_ss";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_tee_grn
			{
				name="ADFRC_uniform_amp_tee_grn";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_tee_tan
			{
				name="ADFRC_uniform_amp_tee_tan";
				count=20;
			};
			class _xx_ADFRC_uniform_amp_tee_khk
			{
				name="ADFRC_uniform_amp_tee_khk";
				count=20;
			};
			class _xx_ADFRC_coveralls_black
			{
				name="ADFRC_coveralls_black";
				count=20;
			};
			class _xx_ADFRC_coveralls_green
			{
				name="ADFRC_coveralls_green";
				count=20;
			};
			class _xx_ADFRC_coveralls_tan
			{
				name="ADFRC_coveralls_tan";
				count=20;
			};
		};
	};
	class ADFRC_weaponbox_dpcu: ADFRC_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFRC_AUTHOR";
		displayName="[ADF] Uniforms DPCU";
		icon="icon_ADFRC_uniform";
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
			class _xx_ADFRC_carrierLite_dpcu
			{
				name="ADFRC_carrierLite_dpcu";
				count=20;
			};
			class _xx_ADFRC_plateCarrier_dpcu
			{
				name="ADFRC_plateCarrier_dpcu";
				count=20;
			};
			class _xx_ADFRC_tacticalVest_dpcu
			{
				name="ADFRC_tacticalVest_dpcu";
				count=20;
			};
			class _xx_ADFRC_HelmetC_dpcu
			{
				name="ADFRC_HelmetC_dpcu";
				count=20;
			};
			class _xx_ADFRC_helmetB_dpcu
			{
				name="ADFRC_helmetB_dpcu";
				count=20;
			};
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=20;
			};
			class _xx_ADFRC_AssaultPack_dpcu
			{
				name="ADFRC_AssaultPack_dpcu";
				count=20;
			};
			class _xx_ADFRC_Carryall_dpcu
			{
				name="ADFRC_Carryall_dpcu";
				count=20;
			};
			class _xx_ADFRC_Carryall_dpcu_diver
			{
				name="ADFRC_Carryall_dpcu_diver";
				count=20;
			};
			class _xx_ADFRC_Carryall_dpcu_medic
			{
				name="ADFRC_Carryall_dpcu_medic";
				count=20;
			};
			class _xx_ADFRC_Carryall_dpcu_engineer
			{
				name="ADFRC_Carryall_dpcu_engineer";
				count=20;
			};
			class _xx_ADFRC_Carryall_dpcu_at
			{
				name="ADFRC_Carryall_dpcu_at";
				count=20;
			};
			class _xx_ADFRC_uniform_dpcu
			{
				name="ADFRC_uniform_dpcu";
				count=20;
			};
			class _xx_ADFRC_uniform_dpcu_recon
			{
				name="ADFRC_uniform_dpcu_recon";
				count=20;
			};
			class _xx_ADFRC_uniform_dpcu_medic
			{
				name="ADFRC_uniform_dpcu_medic";
				count=20;
			};
			class _xx_ADFRC_uniform_dpcu_tee
			{
				name="ADFRC_uniform_dpcu_tee";
				count=20;
			};
			class _xx_ADFRC_coveralls_dpcu
			{
				name="ADFRC_coveralls_dpcu";
				count=20;
			};
		};
	};
	class ADFRC_weaponbox_dpdu: ADFRC_weaponbox_large
	{
		scope=2;
		vehicleClass="Ammo";
		author="$STR_ADFRC_AUTHOR";
		displayName="[ADF] Uniforms DPDU";
		icon="icon_ADFRC_uniform";
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
			class _xx_ADFRC_carrierlite_dpdu
			{
				name="ADFRC_carrierlite_dpdu";
				count=20;
			};
			class _xx_ADFRC_tacticalvest_dpdu
			{
				name="ADFRC_tacticalvest_dpdu";
				count=20;
			};
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=20;
			};
			class _xx_ADFRC_helmetB_dpdu
			{
				name="ADFRC_helmetB_dpdu";
				count=20;
			};
			class _xx_ADFRC_carryall_dpdu
			{
				name="ADFRC_carryall_dpdu";
				count=20;
			};
			class _xx_ADFRC_carryall_dpdu_medic
			{
				name="ADFRC_carryall_dpdu_medic";
				count=20;
			};
			class _xx_ADFRC_carryall_dpdu_engineer
			{
				name="ADFRC_carryall_dpdu_engineer";
				count=20;
			};
			class _xx_ADFRC_carryall_dpdu_at
			{
				name="ADFRC_carryall_dpdu_at";
				count=20;
			};
			class _xx_ADFRC_uniform_dpdu
			{
				name="ADFRC_uniform_dpdu";
				count=20;
			};
			class _xx_ADFRC_uniform_dpdu_medic
			{
				name="ADFRC_uniform_dpdu_medic";
				count=20;
			};
			class _xx_ADFRC_uniform_dpdu_recon
			{
				name="ADFRC_uniform_dpdu_recon";
				count=20;
			};
			class _xx_ADFRC_uniform_dpdu_pilot
			{
				name="ADFRC_uniform_dpdu_pilot";
				count=20;
			};
		};
	};
};

class CfgPatches
{
	class ADFRC_optics
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_swarovski_optic",
			"ADFRC_elcan_c79",
			"ADFRC_acog_ta648",
			"ADFRC_acog_ta648_rds",
			"ADFRC_acog_ta648_t",
			"ADFRC_acog_ta648_rds_t",
			"ADFRC_acog_ta31",
			"ADFRC_acog_ta31_t",
			"ADFRC_eotech552",
			"ADFRC_eotech552_3XDOWN",
			"ADFRC_eotech552_3XUP",
			"ADFRC_MicroT2"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ADF_Core",
			"A3_Weapons_F",
			"A3_Weapons_F_Acc"
		};
	};
};

#include "Optics_JR.hpp"
class SlotInfo;
class CowsSlot: SlotInfo
{
};
class CowsSlot_ADFU: CowsSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	compatibleItems[]=
	{
		"ADFRC_acog_ta31",
		"ADFRC_acog_ta31_t",
		"ADFRC_acog_ta648",
		"ADFRC_acog_ta648_rds",
		"ADFRC_acog_ta648_rds_t",
		"ADFRC_acog_ta648_t",
		"ADFRC_elcan_c79",
		"ADFRC_elcan_c79",
		"ADFRC_eotech552",
		"ADFRC_eotech552_3XDOWN",
		"ADFRC_eotech552_3XUP",
		"optic_ACO_grn",
		"optic_Arco",
		"optic_DMS",
		"optic_Holosight",
		"optic_LRPS",
		"optic_MRCO",
		"optic_NVS",
		"optic_Nightstalker",
		"optic_SOS",
		"optic_aco",
		"optic_hamr",
		"optic_tws",
		"optic_tws_mg"
	};
};
class CowsSlot_ADFRC_Styer: CowsSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	compatibleItems[]=
	{
		"ADFRC_swarovski_optic",
		"ADFRC_elcan_c79",
		"ADFRC_acog_ta648",
		"ADFRC_acog_ta648_rds",
		"ADFRC_acog_ta648_t",
		"ADFRC_acog_ta648_rds_t",
		"ADFRC_acog_ta31",
		"ADFRC_acog_ta31_t",
		"ADFRC_eotech552",
		"ADFRC_eotech552_3XDOWN",
		"ADFRC_eotech552_3XUP",
		"optic_Nightstalker",
		"optic_NVS",
		"optic_DMS",
		"optic_LRPS",
		"optic_SOS",
		"optic_MRCO",
		"optic_Arco",
		"optic_aco",
		"optic_ACO_grn",
		"optic_hamr",
		"optic_Holosight",
		"optic_tws"
	};
};
class CowsSlot_ADFRC_Rifle: CowsSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	compatibleItems[]=
	{
		"ADFRC_elcan_c79",
		"ADFRC_acog_ta648",
		"ADFRC_acog_ta648_rds",
		"ADFRC_acog_ta648_t",
		"ADFRC_acog_ta648_rds_t",
		"ADFRC_acog_ta31",
		"ADFRC_acog_ta31_t",
		"ADFRC_eotech552",
		"ADFRC_eotech552_3XDOWN",
		"ADFRC_eotech552_3XUP",
		"optic_Nightstalker",
		"optic_NVS",
		"optic_DMS",
		"optic_LRPS",
		"optic_SOS",
		"optic_MRCO",
		"optic_Arco",
		"optic_aco",
		"optic_ACO_grn",
		"optic_hamr",
		"optic_Holosight",
		"optic_tws",
		"optic_AMS",
		"optic_AMS_KHK",
		"optic_AMS_snd",
		"optic_KHS_blk",
		"optic_KHS_hex",
		"optic_KHS_old",
		"optic_KHS_tan"
	};
};
class CowsSlot_ADFRC_MG: CowsSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	compatibleItems[]=
	{
		"ADFRC_elcan_c79",
		"ADFRC_acog_ta648",
		"ADFRC_acog_ta648_rds",
		"ADFRC_acog_ta648_t",
		"ADFRC_acog_ta648_rds_t",
		"ADFRC_acog_ta31",
		"ADFRC_acog_ta31_t",
		"ADFRC_eotech552",
		"ADFRC_eotech552_3XDOWN",
		"ADFRC_eotech552_3XUP",
		"optic_Nightstalker",
		"optic_NVS",
		"optic_DMS",
		"optic_LRPS",
		"optic_SOS",
		"optic_MRCO",
		"optic_Arco",
		"optic_aco",
		"optic_ACO_grn",
		"optic_hamr",
		"optic_Holosight",
		"optic_tws_mg"
	};
};
class cfgWeapons
{
	class SlotInfo;
	class ItemInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_M;
	
	#include "T2\T2.hpp"
	#include "DPP\DPP.hpp"
	class ADFRC_swarovski_optic: ItemCore
	{
		scope=2;
		displayName="Swarovski CQB Optic";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_swarovski_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_swarovski.p3d";
		descriptionShort="1.5x Swarovski Rifle Optic &lt;br/&gt; Rail Mounted AUG A1 Optics";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=10;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\ADF_Weapons\adfrc_optics\optic_swarovski_2d.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="OPTIC";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]={};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Iron: Snip
				{
					opticsID=2;
					opticsDisplayName="";
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class ADFRC_elcan_c79: ItemCore
	{
		scope=2;
		displayName="Elcan C79";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_elcan_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_elcan_c79.p3d";
		descriptionShort="3.4x Battle Sight &lt;br/&gt; SpecterOS3.4x";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Adjustable Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eyeAim";
			class OpticsModes
			{
				class Elcan3x
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.22;
					opticsZoomMax=0.215;
					opticsZoomInit=0.25;
					memoryPointCamera="opticView";
					discretedistance[]={100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class IronSight
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eyeAim";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class ADFRC_acog_ta648: ItemCore
	{
		scope=2;
		displayName="ACOG TA648 (Black)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta648_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta648.p3d";
		descriptionShort="6x Marksman Optic &lt;br /&gt; Trijicon Advanced Combat Optical Gunsight";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Designated Marksman Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG6x
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.115;
					opticsZoomMax=0.11;
					opticsZoomInit=0.115;
					memoryPointCamera="opticView";
					discretedistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class ADFRC_acog_ta648_rds: ItemCore
	{
		scope=2;
		displayName="ACOG TA648 + RDS (Black)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta648_rds_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta648_rds.p3d";
		descriptionShort="6x Marksman Optic + Red Dot Sight &lt;br /&gt; Trijicon Advanced Combat Optical Gunsight";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Designated Marksman Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class RDS1x
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class ACOG6x
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.115;
					opticsZoomMax=0.11;
					opticsZoomInit=0.115;
					memoryPointCamera="opticView";
					discretedistance[]={100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class ADFRC_acog_ta648_t: ADFRC_acog_ta648
	{
		scope=2;
		displayName="ACOG TA648 (Tan)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta648_tan_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta648_tan.p3d";
	};
	class ADFRC_acog_ta648_rds_t: ADFRC_acog_ta648_rds
	{
		scope=2;
		displayName="ACOG TA648 + RDS (Tan)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta648_rds_tan_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta648_rds_tan.p3d";
	};
	class ADFRC_acog_ta31: ItemCore
	{
		scope=2;
		displayName="ACOG TA31 (Black)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta31_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta31.p3d";
		descriptionShort="4x Combat Optic &lt;br /&gt; Trijicon Advanced Combat Optical Gunsight";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="opticView";
			class OpticsModes
			{
				class ACOG4x
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.2175;
					opticsZoomMax=0.16500001;
					opticsZoomInit=0.1825;
					memoryPointCamera="opticView";
					discretedistance[]={100,200,300,400,500,600};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class IronSight
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
	class ADFRC_acog_ta31_t: ADFRC_acog_ta31
	{
		scope=2;
		displayName="ACOG TA31 (TAN)";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_ta31_tan_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_acog_ta31_tan.p3d";
	};
	class ADFRC_eotech552: ADFRC_acog_ta31
	{
		scope=2;
		displayName="EOTech 552";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_eotech552_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_eotech_552.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br/&gt; No Magnification CQB Optic";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
	class ADFRC_eotech552_3XDOWN: ADFRC_eotech552
	{
		scope=2;
		displayName="EOTech 552 + 3x Magnifier";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_optics\ui\optic_eotech552_3x_ca.paa";
		model="\ADF_Weapons\adfrc_optics\optic_eotech_552_3XDown.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		
        MRT_SwitchItemNextClass = "ADFRC_eotech552_3XUP";
        MRT_switchItemHintText = "1x";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class IronSight
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="iron_eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
	class ADFRC_eotech552_3XUP: ADFRC_eotech552_3XDOWN
	{
		scope=2;
		displayName="EOTech 552 + 3x Magnifier";
		author="$STR_ADF_AUTHOR";
		model="\ADF_Weapons\adfrc_optics\optic_eotech_552_3XUp.p3d";
		descriptionShort="Holographic Weapon Sight &lt;br /&gt; Flip Down Magnifier";
		
        MRT_SwitchItemNextClass = "ADFRC_eotech552_3XDOWN";
        MRT_switchItemHintText = "1x";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="Adjustable Range Optics";
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera="eye";
			class OpticsModes
			{
				class Magnified
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.25749999;
					opticsZoomMax=0.175;
					opticsZoomInit=0.25749999;
					memoryPointCamera="eye";
					discretedistance[]={100,200,300};
					discreteDistanceInitIndex=2;
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
};

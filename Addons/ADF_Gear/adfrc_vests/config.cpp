class CfgPatches
{
	class adfrc_vests
	{
		name="adfrc_vests";
		author=$STR_ADF_AUTHOR;
		requiredAddons[]=
        {
			"A3_Data_F_AoW_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"ADF_Core"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Man;
	class ContainerSupply;
	class B_Soldier_F;
	class B_diver_F;
	class ADFRC_Hydration1_Tan_1_Backpanel: ReammoBox
	{
		scope = 2;
		author="Exer";
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "\ADF_Gear\adfrc_vests\Hydpack1.p3d";
		displayName = "ADF TBAS Hydration Pack V1 (Tan)";
		icon = "iconBackpack";
		hiddenSelections[]={"acc1","acc2"};
		hiddenSelectionsTextures[]={""};
		maximumLoad = 120;
	};
	class ADFRC_AssaultPack_Tan_1_Backpanel: ReammoBox
	{
		scope = 2;
		author="Exer";
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "\ADF_Gear\adfrc_vests\Hydpack2.p3d";
		displayName = "ADF TBAS Modular Assault Pack (Tan)";
		icon = "iconBackpack";
		hiddenSelections[]={"acc1","acc2"};
		hiddenSelectionsTextures[]={""};
		maximumLoad = 120;
	};
};
class cfgWeapons
{
	// INHERITENCES
	class ItemCore;
	class ItemInfo;
	class VestItem;
	class V_PlateCarrier1_blk;
	class V_PlateCarrierH_CTRG;
	class V_TacVest_blk;
	class V_PlateCarrierGL_rgr;
	class Vest_Camo_Base;
	
	// DPCU VESTS
	class ADFRC_carrierLite_dpcu: V_PlateCarrier1_blk
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carrier-Lite [DPCU]";
		model="\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		picture="\ADF_Gear\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_vests\data\adfrc_carrierLite_dpcu.paa"
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
	class ADFRC_plateCarrier_dpcu: V_PlateCarrierH_CTRG
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carrier Rig [DPCU]";
		picture="\ADF_Gear\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_vests\data\adfrc_carrierLite_dpcu.paa"
		};
	};
	class ADFRC_tacticalVest_dpcu: V_TacVest_blk
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Tactical Vest [DPCU]";
		picture="\ADF_Gear\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_vests\data\tacticalVest_DPCU_co.paa"
		};
	};
	// DPDU VESTS
	class ADFRC_carrierlite_dpdu: V_PlateCarrier1_blk
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carrier-Lite [DPDU]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_vests\data\adfrc_carrierLite_dpdu.paa"
		};
	};
	class ADFRC_tacticalvest_dpdu: V_TacVest_blk
	{
		scope=2;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Tactical Vest (DPDU)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_vests\data\tacticalVest_DPDU_co.paa"
		};
	};
	// TBAS
	class ADFRC_PC_Tan_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 1 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=260;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 2 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_3: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 3 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_3.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_4: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 4 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_4.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_5: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 5 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_5.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_6: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 6 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_6.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_Tan_7: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 7 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_7.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_LPC_Tan_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 1 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\LPC_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\LPC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_LPC_Tan_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 2 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\LPC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\LPC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	/*class ADFRC_PC_AMC_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "AA - ADF TBAS(TEST)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\LPC_1.p3d";
		hiddenSelections[]={
			"acc",
			"Belt",
			"camo3",
			"holster",
			"LeftUpLeg"
			
		};
		hiddenSelectionsTextures[]={
			"adf_gear\adfrc_vests\data\tan\acc1_tan_co.paa",
			"adf_gear\adfrc_vests\data\tan\belt_tan_co.paa",
			"adf_gear\adfrc_vests\data\tan\lpc_lasercut_tan_co.paa",
			"adf_gear\adfrc_vests\data\tan\holster_tan_co.paa",
			"adf_gear\adfrc_vests\data\tan\cryepants_tan_co.paa"
			
		};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\LPC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=260;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 2 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_3: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 3 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_3.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_4: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 4 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_4.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_5: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 5 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_5.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_6: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 6 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_6.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_PC_AMC_7: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 7 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\PC_7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\PC_7.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_LPC_AMC_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 1 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\LPC_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\LPC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFRC_LPC_AMC_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 2 (Tan)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\LPC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\LPC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};*/
};
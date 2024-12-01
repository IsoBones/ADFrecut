////////////////////////////////////////////////////////////////////
//DeRap: P:\ADF_Gear_2\adfrc_vests\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Sat Nov 30 17:25:50 2024 : 'file' last modified on Sat Nov 30 17:25:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class adfrc_vests
	{
		name = "adfrc_vests";
		author = "$STR_ADF_AUTHOR";
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder","A3_Data_F_Mod_Loadorder","ADF_Core"};
		units[] = {};
		weapons[] = {"ADFRC_carrierLite_dpcu","ADFRC_plateCarrier_dpcu","ADFRC_tacticalVest_dpcu","ADFRC_carrierlite_dpdu","ADFRC_tacticalvest_dpdu","ADFRC_TBAS_T2_Medic","ADFRC_TBAS_T2_TL","ADFRC_TBAS_T2_LMG","ADFRC_TBAS_T2_Rifleman_Pistol","ADFRC_TBAS_T2_DMR","ADFRC_TBAS_T2_Eng","ADFRC_TBAS_T2_Gren","ADFRC_TBAS_T2_Scout","ADFRC_TBAS_T2_Rifleman","ADFRC_TBAS_T2_Rifleman_Light","ADFRC_TBAS_T2_Officer","ADFRC_TBAS_T2_SECO","ADFRC_TBAS_T5_CFA","ADFRC_TBAS_T5_TL","ADFRC_TBAS_T5_LMG","ADFRC_TBAS_T5_DMR","ADFRC_TBAS_T5_Eng","ADFRC_TBAS_T5_Gren","ADFRC_TBAS_T5_Breacher","ADFRC_TBAS_T5_Operator","ADFRC_TBAS_T5_Commando_CQB","ADFRC_TBAS_T5_PatrolCom","ADFRC_TBAS_T5_TAG","ADFRC_TBAS_T5_TAG_TL","ADFRC_TBAS_T5_TAG_CFA","ADFRC_TBAS_T5_TAG_Breacher","ADFRC_JPC_CFA","ADFRC_JPC_TL","ADFRC_JPC_LMG","ADFRC_JPC_DMR","ADFRC_JPC_Eng","ADFRC_JPC_Gren","ADFRC_JPC_Breacher","ADFRC_JPC_Operator","ADFRC_JPC_Commando_CQB","ADFRC_JPC_PatrolCom","ADFRC_JPC_TAG","ADFRC_JPC_TAG_TL","ADFRC_JPC_TAG_CFA","ADFRC_JPC_TAG_Breacher","ADFRC_TBAS_T0_AMCU_Rifleman","ADFRC_TBAS_T0_AMCU_CFA","ADFRC_TBAS_T0_AMCU_TL","ADFRC_TBAS_T0_AMCU_LMG","ADFRC_TBAS_T0_AMCU_S_SR25","ADFRC_TBAS_T0_AMCU_S_SR98","ADFRC_TBAS_T0_AMCU_S_Tac2","ADFRC_TBAS_T0_AMCU_S_AXSR","ADFRC_TBAS_T0_AMCU_S_AW50F","ADFRC_TBAS_T0_AMCU_S_SR25E2","ADFRC_TBAS_T0_AMCU_S_M107A1","ADFRC_TBAS_T0_MC_S_Tac2","ADFRC_TBAS_T0_MC_S_AXSR","ADFRC_TBAS_T0_MC_S_M107A1","ADFRC_TBAS_T0_MC_S_SR25E2","ADFRC_PilotVest"};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Man;
	class ContainerSupply;
	class B_Soldier_F;
	class B_diver_F;
};
class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class VestItem;
	class V_PlateCarrier1_blk;
	class V_PlateCarrierH_CTRG;
	class V_TacVest_blk;
	class V_PlateCarrierGL_rgr;
	class Vest_Camo_Base;
	class ADFRC_carrierLite_dpcu: V_PlateCarrier1_blk
	{
		scope = 2;
		author = "$STR_ADF_AUTHOR";
		displayName = "ADF Carrier-Lite [DPCU]";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		picture = "\ADF_Gear_2\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_vests\data\adfrc_carrierLite_dpcu.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFRC_plateCarrier_dpcu: V_PlateCarrierH_CTRG
	{
		scope = 2;
		author = "$STR_ADF_AUTHOR";
		displayName = "ADF Carrier Rig [DPCU]";
		picture = "\ADF_Gear_2\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_vests\data\adfrc_carrierLite_dpcu.paa"};
	};
	class ADFRC_tacticalVest_dpcu: V_TacVest_blk
	{
		scope = 2;
		author = "$STR_ADF_AUTHOR";
		displayName = "ADF Tactical Vest [DPCU]";
		picture = "\ADF_Gear_2\adfrc_vests\data\icon_DPCU_Vest_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_vests\data\tacticalVest_DPCU_co.paa"};
	};
	class ADFRC_carrierlite_dpdu: V_PlateCarrier1_blk
	{
		scope = 2;
		author = "$STR_ADF_AUTHOR";
		displayName = "ADF Carrier-Lite [DPDU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_vests\data\adfrc_carrierLite_dpdu.paa"};
	};
	class ADFRC_tacticalvest_dpdu: V_TacVest_blk
	{
		scope = 2;
		author = "$STR_ADF_AUTHOR";
		displayName = "ADF Tactical Vest [DPDU]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_vests\data\tacticalVest_DPDU_co.paa"};
	};
	class ADFRC_TBAS_T2_Medic: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Medic";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_LMG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Machine Gunner";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Rifleman_Pistol: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Rifleman (Pistol)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_DMR: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - DMR";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Eng: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Engineer";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Gren: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Grenadier";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Scout: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Scout";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Rifleman: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Rifleman";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Rifleman_Light: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Rifleman (Light)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_Officer: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Officer";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T2_SECO: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T2 - Section Commander";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_12.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_12.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_CFA: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - CFA";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_LMG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Machine Gunner";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_DMR: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - DMR";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_Eng: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Engineer";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_Gren: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Grenadier";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_Breacher: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Breacher";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_Operator: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Operator";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_Commando_CQB: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - CQB";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_PatrolCom: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - Patrol Commander";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_TAG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - TAG Operator";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_TAG_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - TAG Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_TAG_CFA: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - TAG CFA";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T5_TAG_Breacher: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T5 - TAG Breacher";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_CFA: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - CFA";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_2.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_LMG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Machine Gunner";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_3.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_DMR: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - DMR";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_5.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_Eng: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Engineer";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_6.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_Gren: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Grenadier";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_7.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_Breacher: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Breacher";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_8.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_Operator: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Operator";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_9.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_Commando_CQB: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - CQB";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_10.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_PatrolCom: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - Patrol Commander";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_11.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_TAG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - TAG Operator";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_TAG_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - TAG Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_TAG_CFA: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - TAG CFA";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_1.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_JPC_TAG_Breacher: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "JPC - TAG Breacher";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_Rifleman: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Rifleman (EF88)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_CFA: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - CFA";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_TL: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Team Leader";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_LMG: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - LMG";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_SR25: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (SR25)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_SR98: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (SR98)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_Tac2: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (Tac2)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_AXSR: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (AXSR)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_AW50F: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (AW50F)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_SR25E2: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (SR25E2)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_AMCU_S_M107A1: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 - Sniper (M107A1)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_MC_S_Tac2: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 MC - Sniper (Tac2)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_MC_S_AXSR: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 MC - Sniper (AXSR)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_MC_S_M107A1: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 MC - Sniper (M107A1)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_TBAS_T0_MC_S_SR25E2: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "TBAS T0 MC - Sniper (SR25E2)";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\TBAS_T2\tbas_4.p3d";
			containerClass = "Supply180";
			mass = 60;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 60;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 60;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 60;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 260;
					passThrough = 0.1;
				};
			};
		};
	};
	class ADFRC_PilotVest: Vest_Camo_Base
	{
		scope = 2;
		author = "Exer";
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "ADF Aircrew Vest";
		picture = "";
		model = "\ADF_Gear_2\adfrc_vests\vest_aircrew.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "\ADF_Gear_2\adfrc_vests\vest_aircrew.p3d";
			containerClass = "Supply90";
			mass = 30;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
		};
	};
};

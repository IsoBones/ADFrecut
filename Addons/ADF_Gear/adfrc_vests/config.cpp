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
		displayName="ADF Tactical Vest [DPDU]";
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
	class ADFRC_TBAS_T2_Medic: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Medic";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_1.p3d";
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
	class ADFRC_TBAS_T2_TL: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Team Leader";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_2.p3d";
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
	class ADFRC_TBAS_T2_LMG: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Machine Gunner";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_3.p3d";
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
	class ADFRC_TBAS_T2_Rifleman_Pistol: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Rifleman (Pistol)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_4.p3d";
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
	class ADFRC_TBAS_T2_DMR: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - DMR";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_5.p3d";
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
	class ADFRC_TBAS_T2_Eng: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Engineer";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_6.p3d";
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
	class ADFRC_TBAS_T2_Gren: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Grenadier";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_7.p3d";
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
	class ADFRC_TBAS_T2_Scout: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Scout";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_8.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_8.p3d";
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
	

	class ADFRC_TBAS_T2_Rifleman: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Rifleman";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_9.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_9.p3d";
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
	

	class ADFRC_TBAS_T2_Rifleman_Light: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Rifleman (Light)";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_10.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_10.p3d";
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
	
class ADFRC_TBAS_T2_Officer: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Officer";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_11.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_11.p3d";
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
	
class ADFRC_TBAS_T2_SECO: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "TBAS T2 - Section Commander";
		picture = "";
		model="\ADF_Gear\adfrc_vests\tbas_12.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\tbas_12.p3d";
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

	
	
	
	
	
	class ADFRC_PilotVest: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF Aircrew Vest";
		picture = "";
		model="\ADF_Gear\adfrc_vests\vest_aircrew.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\ADF_Gear\adfrc_vests\vest_aircrew.p3d";
			containerClass="Supply90";
			mass=30;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
		};
	};
};
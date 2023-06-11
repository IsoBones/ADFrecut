class CfgPatches
{
	class ADFU_uniform_amcu
	{
		units[]=
		{
			"ADFU_AMCU_Soldier_Base",
			"ADFU_rifleman_amcu",
			"ADFU_rifleman_amcu_recon"
		};
		weapons[]=
		{
			"ADFU_helmetC_amcu",
			"ADFU_uniform_amcu",
			"ADFU_uniform_amcu_recon"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"ADFU_uniform_dpcu",
			"ADFU_faction"
		};
	};
};
class CfgEditorSubcategories
{
	class ADFU_MEN_AMCU // Category class, you point to it in editorSubcategory property
	{
		displayName = " Men (AMCU)"; // Name visible in the list
	};
};
class cfgVehicles
{
	class ADFU_Soldier_base_F;
	class ADFU_AMCU_Soldier_Base: ADFU_Soldier_base_F
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		faction="ADFU";
		editorSubcategory= "ADFU_MEN_AMCU";
		genericNames="NATOMen";
		nakedUniform="U_BasicBody";
		uniformClass="U_B_CombatUniform_mcam_vest";
		weapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"ADFU_F88SA1_swarovski_laser",
			"ADFU_weapon_hpII",
			"Throw",
			"Put",
			"Binocular"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		respawnMagazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"ADFU_F1_GRENADE",
			"ADFU_F1_GRENADE"
		};
		linkedItems[]=
		{
			"ADFU_HelmetC_amcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_HelmetC_amcu",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class ADFU_rifleman_amcu: ADFU_AMCU_Soldier_Base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Rifleman";
		//editorPreview = "adfu_uniform_dpcu\preview\ADFU_rifleman_dpcu.jpg";
		editorSubcategory= "ADFU_MEN_AMCU";
		//vehicleClass="$STR_ADFU_MEN_DPCU";
		uniformAccessories[]={};
		uniformClass="ADFU_uniform_amcu";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amcu\data\uniform_amcu_CO.paa"
		};
		backpack="";
	};
	class ADFU_rifleman_amcu_ss: ADFU_rifleman_amcu
	{
		scope=2;
		scopeCurator=2;
		author="$STR_ADFU_AUTHOR";
		displayName="Rifleman (Rolled Sleeve)";
		uniformClass="ADFU_uniform_amcu_recon";
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amcu\data\uniform_amcu_CO.paa"
		};
	};
};
class cfgWeapons
{
	class UniformItem;
	class U_B_CombatUniform_mcam;
	class U_B_CombatUniform_mcam_vest;
	class HeadGearItem;
	class H_HelmetB;
	class ADFU_HelmetC_amcu: H_HelmetB
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF ECH [AMCU]";
		weaponPoolAvailable=1;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_uniform_amcu\data\amcu_helmet_co.paa"
		};
	};
	class ADFU_uniform_amcu: U_B_CombatUniform_mcam
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="AMCU Combat Dress (Long Sleeve)";
		picture="\ADFU_uniform_amcu\data\icon_u_b_combatuniform_AMCU_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_rifleman_amcu";
			containerClass="Supply20";
			mass=80;
		};
	};
	class ADFU_uniform_amcu_recon: U_B_CombatUniform_mcam_vest
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="AMCU Combat Dress (Short Sleeve)";
		picture="\ADFU_uniform_amcu\data\icon_u_b_combatuniform_AMCU_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_rifleman_amcu_ss";
			containerClass="Supply20";
			mass=80;
		};
	};
};
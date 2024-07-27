class CfgPatches
{
	class adfrc_backpacks
	{
		name="ADFRC_Backpacks";
		author=$STR_ADF_AUTHOR;
		requiredAddons[]=
        	{
			"A3_Data_F",
			"ADF_Core"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_assaultpack_Base;
	class B_CarryAll_Base;
	class B_Kitbag_Base;
	class B_AssaultPack_blk;
	class B_AssaultPack_rgr_Medic;

// ASSAULTPACKS
	class adfrc_assaultpack_black: B_assaultpack_Base
	{
		scope = public;
		displayName = "ADF Assault Pack [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Black_co.paa"};
		maximumLoad = 220;
		class TransportItems{};
		class TransportMagazines{};
	};
	class adfrc_assaultpack_green: adfrc_assaultpack_black
	{
		scope = public;
		displayName = "ADF Assault Pack [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Green_co.paa"};
	};
	class adfrc_assaultpack_tan: adfrc_assaultpack_black
	{
		scope = public;
		displayName = "ADF Assault Pack [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Tan_co.paa"};
	};
	class adfrc_assaultpack_amp: adfrc_assaultpack_black
	{
		scope = public;
		displayName = "ADF Assault Pack [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Cam_co.paa"};
	};
	class adfrc_assaultpack_dpcu: adfrc_assaultpack_black
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Assault Pack [DPCU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPCU_co.paa"};
	};
	class adfrc_assaultpack_amc: adfrc_assaultpack_black
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Assault Pack [AMC]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_AMC_co.paa"};
	};
	class adfrc_assaultpack_black_medic: B_assaultpack_Base
	{
		scope = public;
		displayName = "ADF Assault Pack Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Black_M_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class adfrc_assaultpack_green_medic: adfrc_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF Assault Pack Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Green_M_co.paa"};
	};
	class adfrc_assaultpack_tan_medic: adfrc_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF Assault Pack Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Tan_M_co.paa"};
	};
	class adfrc_assaultpack_amp_medic: adfrc_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF Assault Pack Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Cam_M_co.paa"};
	};
	class adfrc_assaultpack_dpcu_medic: adfrc_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF Assault Pack Medic [DPCU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPCU_M_co.paa"};
	};
	


// KITBAGS
	class adfrc_kitbag_black: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Black_co.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class adfrc_kitbag_green: adfrc_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Green_co.paa"};
	};
	class adfrc_kitbag_tan: adfrc_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Tan_co.paa"};
	};
	class adfrc_kitbag_amp: adfrc_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Cam_co.paa"};
	};
	class adfrc_kitbag_amc: adfrc_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [AMC]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_AMC_co.paa"};
	};
	class adfrc_kitbag_black_medic: adfrc_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Black_M_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class adfrc_kitbag_green_medic: adfrc_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Green_M_co.paa"};
	};
	class adfrc_kitbag_tan_medic: adfrc_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Tan_M_co.paa"};
	};
	class adfrc_kitbag_amp_medic: adfrc_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Cam_M_co.paa"};
	};

// CARRYALL BACKAPCKS
	class adfrc_CarryAll_black: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Black_co.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class adfrc_CarryAll_green: adfrc_CarryAll_black
	{
		scope = public;
		displayName = "ADF Carryall [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Green_co.paa"};
	};
	class adfrc_CarryAll_tan: adfrc_CarryAll_black
	{
		scope = public;
		displayName = "ADF Carryall [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Tan_co.paa"};
	};
	class adfrc_CarryAll_amp: adfrc_CarryAll_black
	{
		scope = public;
		displayName = "ADF Carryall [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Cam_co.paa"};
	};
	class adfrc_CarryAll_dpcu: adfrc_CarryAll_black
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall [DPCU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPCU_co.paa"};
		/*class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_30Rnd_aug
			{
				magazine="adfrc_30Rnd_aug";
				count=5;
			};
			class _xx_ADFU_F1_GRENADE
			{
				magazine="adfrc_F1_GRENADE";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellRed";
				count=1;
			};
		}; */
	};
	class adfrc_CarryAll_amc: adfrc_CarryAll_black
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall [AMC]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_AMC_co.paa"};
		/*class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFU_30Rnd_aug
			{
				magazine="adfrc_30Rnd_aug";
				count=5;
			};
			class _xx_ADFU_F1_GRENADE
			{
				magazine="adfrc_F1_GRENADE";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellRed";
				count=1;
			};
		}; */
	};
	class adfrc_CarryAll_dpdu: adfrc_CarryAll_black
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall [DPDU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPDU_co.paa"};
	};
	class adfrc_CarryAll_black_medic: adfrc_CarryAll_black
	{
		scope = public;
		displayName = "ADF Carryall Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Black_M_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class adfrc_CarryAll_green_medic: adfrc_CarryAll_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Green_M_co.paa"};
	};
	class adfrc_CarryAll_tan_medic: adfrc_CarryAll_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Tan_M_co.paa"};
	};
	class adfrc_CarryAll_amp_medic: adfrc_CarryAll_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Cam_M_co.paa"};
	};
	class adfrc_CarryAll_dpdu_medic: adfrc_CarryAll_black_medic
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall Medic [DPDU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPDU_M_co.paa"};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpdu
			{
				name="ADFU_booniehat_dpdu";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class adfrc_CarryAll_dpcu_medic: adfrc_CarryAll_black_medic
	{
		scope = public;
		author="$STR_ADFU_AUTHOR";
		displayName="ADF Carryall Medic [DPCU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPCU_M_co.paa"};
		class TransportItems
		{
			class _xx_ADFU_booniehat_dpcu
			{
				name="ADFU_booniehat_dpcu";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};

// CUSTOM DPCU BACKPACKS
	class ADFRC_AssaultPack_TL_dpcu: B_AssaultPack_blk
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Assault Pack [DPCU]";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\assaultpack_DPCU_co.paa"
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFRC_Carryall_LSW_dpcu: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall LSW (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_200Rnd_556_Belt_TR5
			{
				magazine="ADFRC_200Rnd_556_Belt_TR5";
				count=2;
			};
		};
	};
	class ADFRC_Carryall_MG_dpcu: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall MG (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_150Rnd_762_Belt_TR5
			{
				magazine="ADFRC_150Rnd_762_Belt_TR5";
				count=4;
			};
		};
	};
	class adfrc_CarryAll_dpcu_diver: adfrc_CarryAll_dpcu
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Diver Carryall (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_adfrc_ECH_DPCU
			{
				name="adfrc_ECH_DPCU";
				count=1;
			};
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
			class _xx_ADFRC_carrierLite_dpcu
			{
				name="ADFRC_carrierLite_dpcu";
				count=1;
			};
			class _xx_ADFRC_uniform_dpcu
			{
				name="ADFRC_uniform_dpcu";
				count=1;
			};
		};
	};
	class adfrc_CarryAll_dpcu_engineer: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall Engineer (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
	};
	class adfrc_CarryAll_dpcu_at: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall AT (DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_magazine_84mm_hedp_502
			{
				magazine="ADFRC_magazine_84mm_hedp_502";
				count=1;
			};
			class _xx_ADFRC_magazine_84mm_heat_751
			{
				magazine="ADFRC_magazine_84mm_heat_551c";
				count=1;
			};
		};
	};
	class ADFRC_Carryall_gl_dpcu: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall GL (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_DPCU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpcu
			{
				name="ADFRC_booniehat_dpcu";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=15;
			};
			class _xx_ADFRC_F1_GRENADE
			{
				magazine="ADFRC_F1_GRENADE";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
		};
	};
// CUSTOM DPDU BACKPACKS
	class ADFRC_kitbag_2cdo: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
		};
	};
	class ADFRC_kitbag_tan_GL: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag GL (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
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
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFRC_kitbag_tan_MG: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag MG (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_100Rnd_556_Belt_TR5
			{
				magazine="ADFRC_100Rnd_556_Belt_TR5";
				count=4;
			};
		};
	};
	class ADFRC_kitbag_tan_HMG: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag HMG (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_100Rnd_556_Belt_TR5
			{
				magazine="ADFRC_100_Rnd_762_Belt_TR5";
				count=3;
			};
		};
	};
	class ADFRC_kitbag_tan_at: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag AT (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_magazine_84mm_heat_751
			{
				magazine="ADFRC_magazine_84mm_heat_751";
				count=1;
			};
			class _xx_ADFRC_magazine_84mm_hedp_502
			{
				magazine="ADFRC_magazine_84mm_hedp_502";
				count=1;
			};
		};
	};
	class ADFRC_kitbag_tan_exp: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag Breacher (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
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
	class ADFRC_kitbag_tan_eng: ADFRC_kitbag_tan
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="ADF Kitbag Engineer (2nd Commandos)";
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
		};
	};
	class ADFRC_carryall_dpdu_engineer: B_Carryall_Base
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="Engineer Ruck (DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPDU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				name="ClaymoreDirectionalMine_Remote_Mag";
				count=5;
			};
		};
	};
	class ADFRC_carryall_dpdu_at: B_Carryall_Base
	{
		author=$STR_ADF_AUTHOR;
		scope=1;
		displayName="Anti-Tank Rucksack (DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPDU_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_dpdu
			{
				name="ADFRC_booniehat_dpdu";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_f1_grenade
			{
				magazine="ADFRC_f1_grenade";
				count=2;
			};
			class _xx_ADFRC_magazine_84mm_heat_551c
			{
				magazine="ADFRC_magazine_84mm_heat_551c";
				count=3;
			};
			class _xx_ADFRC_magazine_84mm_heat_751
			{
				magazine="ADFRC_magazine_84mm_heat_751";
				count=2;
			};
		};
	};
// CUSTOM AMCU BACKPACKS
	class ADFRC_AssaultPack_TL_AMCU: B_AssaultPack_blk
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Assault Pack [AMCU]";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\assaultpack_AMC_co.paa"
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
		};
	};
	class ADFRC_Carryall_LSW_AMCU: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall LSW (AMCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_200Rnd_556_Belt_TR5
			{
				magazine="ADFRC_200Rnd_556_Belt_TR5";
				count=2;
			};
		};
	};
	class ADFRC_Carryall_MG_AMCU: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall MG (AMCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_150Rnd_762_Belt_TR5
			{
				magazine="ADFRC_150Rnd_762_Belt_TR5";
				count=4;
			};
		};
	};
	class adfrc_CarryAll_AMCU_diver: adfrc_CarryAll_AMC
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Diver Carryall (AMCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_adfrc_ECH_AMCU
			{
				name="adfrc_ECH_AMCU";
				count=1;
			};
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
			class _xx_ADFRC_carrierLite_AMCU
			{
				name="ADFRC_carrierLite_AMCU";
				count=1;
			};
			class _xx_ADFRC_uniform_AMCU
			{
				name="ADFRC_uniform_AMCU";
				count=1;
			};
		};
	};
	class adfrc_CarryAll_AMCU_engineer: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall Engineer (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
	};
	class adfrc_CarryAll_AMCU_at: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall AT (AMCU)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_ADFRC_magazine_84mm_hedp_502
			{
				magazine="ADFRC_magazine_84mm_hedp_502";
				count=1;
			};
			class _xx_ADFRC_magazine_84mm_heat_751
			{
				magazine="ADFRC_magazine_84mm_heat_551c";
				count=1;
			};
		};
	};
	class ADFRC_Carryall_gl_AMCU: B_Carryall_Base
	{
		scope=1;
		author=$STR_ADF_AUTHOR;
		displayName="ADF Carryall GL (Army)";
		hiddenSelectionsTextures[]=
		{
			"\ADF_Gear\adfrc_backpacks\data\carryall_AMC_co.paa"
		};
		class TransportItems
		{
			class _xx_ADFRC_booniehat_AMCU
			{
				name="ADFRC_booniehat_AMCU";
				count=1;
			};
			class _xx_SmokeShell
			{
				name="SmokeShell";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=15;
			};
			class _xx_ADFRC_F1_GRENADE
			{
				magazine="ADFRC_F1_GRENADE";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
		};
	};
};
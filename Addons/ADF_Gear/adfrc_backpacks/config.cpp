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
class CfgVehicles{
	class ReammoBox;
// ASSAULTPACK BASE
	class B_assaultpack_Base;
	class ADFRC_AssaultPack_Black: B_assaultpack_Base{ // Rather pointless addition - B_AssaultPack_blk <- Does the same thing
		displayName = "Assault Pack (Black)";
		author="$STR_ADF_AUTHOR";
		scope=1;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[]={
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Black_co.paa"
		};
	};
	class ADFRC_AssaultPack_Green: B_assaultpack_Base{ // Rather pointless addition - B_AssaultPack_sgg <- Does the same thing
		displayName = "Assault Pack (Green)";
		author="$STR_ADF_AUTHOR";
		scope=1;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Green_co.paa"
		};
	};
	class ADFRC_AssaultPack_Tan: B_assaultpack_Base{
		displayName = "Assault Pack (Tan)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Tan_co.paa"
		};
	};
	class ADFRC_AssaultPack_AMP: B_assaultpack_Base{
		displayName = "Assault Pack (AMP)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Cam_co.paa"
		};
	};
	class ADFRC_AssaultPack_DPCU: B_assaultpack_Base{
		displayName = "Assault Pack (DPCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPCU_co.paa"};
	};
	class ADFRC_AssaultPack_DPDU: B_assaultpack_Base{
		displayName = "Assault Pack (DPDU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPDU_co.paa"};
	};
	class ADFRC_AssaultPack_AMC: B_assaultpack_Base{
		displayName = "Assault Pack (AMCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\AssaultPack_AMC_co.paa"};
	};
	class ADFRC_AssaultPack_Black_MED: B_assaultpack_Base{
		displayName = "Assault Pack (Black)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Black_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_Green_MED: B_assaultpack_Base{
		displayName = "Assault Pack (Green)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Green_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_Tan_Medic: B_assaultpack_Base{
		displayName = "Assault Pack (Tan)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Tan_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_AMP_Medic: B_assaultpack_Base{
		displayName = "Assault Pack (AMP)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_Cam_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_DPCU_Medic: B_assaultpack_Base{
		displayName = "Assault Pack (DPCU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPCU_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_DPDU_Medic: B_assaultpack_Base{
		displayName = "Assault Pack (DPDU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear\adfrc_backpacks\data\AssaultPack_DPDU_M_co.paa"
		};
	};
// KITBAG BASE
	class B_Kitbag_Base;
	class adfrc_kitbag_black: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Black_co.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class adfrc_kitbag_green: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Green_co.paa"};
	};
	class adfrc_kitbag_tan: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Tan_co.paa"};
	};
	class adfrc_kitbag_amp: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Cam_co.paa"};
	};
	class adfrc_kitbag_amc: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [AMC]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_AMC_co.paa"};
	};
	class adfrc_kitbag_black_medic: B_Kitbag_Base
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
	class adfrc_kitbag_green_medic: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Green_M_co.paa"};
	};
	class adfrc_kitbag_tan_medic: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Tan_M_co.paa"};
	};
	class adfrc_kitbag_amp_medic: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\KitBag_Cam_M_co.paa"};
	};
// CARRYALL BACKAPCK BASE
	class B_CarryAll_Base;
	class adfrc_CarryAll_black: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall [Black]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Black_co.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class adfrc_CarryAll_green: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Green_co.paa"};
	};
	class adfrc_CarryAll_tan: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Tan_co.paa"};
	};
	class adfrc_CarryAll_amp: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Cam_co.paa"};
	};
	class adfrc_CarryAll_dpcu: B_CarryAll_Base
	{
		scope = public;
		author="$STR_ADF_AUTHOR";
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
	class adfrc_CarryAll_amc: B_CarryAll_Base
	{
		scope = public;
		author="$STR_ADF_AUTHOR";
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
	class adfrc_CarryAll_dpdu: B_CarryAll_Base
	{
		scope = public;
		author="$STR_ADF_AUTHOR";
		displayName="ADF Carryall [DPDU]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_DPDU_co.paa"};
	};
	class adfrc_CarryAll_black_medic: B_CarryAll_Base
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
	class adfrc_CarryAll_green_medic: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Green_M_co.paa"};
	};
	class adfrc_CarryAll_tan_medic: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Tan_M_co.paa"};
	};
	class adfrc_CarryAll_amp_medic: B_CarryAll_Base
	{
		scope = public;
		displayName = "ADF Carryall Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_Cam_M_co.paa"};
	};
	class adfrc_CarryAll_dpdu_medic: B_CarryAll_Base
	{
		scope = public;
		author="$STR_ADF_AUTHOR";
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
	class adfrc_CarryAll_dpcu_medic: B_CarryAll_Base
	{
		scope = public;
		author="$STR_ADF_AUTHOR";
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
	class adfrc_CarryAll_amcu_medic: B_CarryAll_Base
	{
		scope = private;
		author="$STR_ADF_AUTHOR";
		displayName="ADF Carryall Medic [AMC]";
		hiddenSelectionsTextures[] = {"\ADF_Gear\adfrc_backpacks\data\CarryAll_AMC_co.paa"};
		class TransportItems
		{
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





	class ADFRC_AssaultPack_Black_MED_CFA: ADFRC_AssaultPack_Black_MED{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFRC_AssaultPack_Green_MED_CFA: ADFRC_AssaultPack_Green_MED{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFRC_AssaultPack_Tan_Medic_CFA: ADFRC_AssaultPack_Tan_Medic{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFRC_AssaultPack_AMP_Medic_CFA: ADFRC_AssaultPack_AMP_Medic{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFRC_AssaultPack_DPCU_Medic_CFA: ADFRC_AssaultPack_DPCU_Medic{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class ADFRC_AssaultPack_DPDU_Medic_CFA: ADFRC_AssaultPack_DPDU_Medic{
		author="$STR_ADF_AUTHOR";
		scope=1;
		class TransportItems{
			class _xx_Medikit{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit{
				name="FirstAidKit";
				count=10;
			};
		};
	};


	class B_AssaultPack_blk;
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
// BULLOCK BAGS (THANKS PROJECT:UNCUT!)
	class adfrc_Bullock_Base: ReammoBox
	{
		scope = 1;
		class TransportMagazines {};
		class TransportWeapons{};
		reversed = 1;
		vehicleClass = Backpacks;
		mapSize = 2;
		isbackpack = 1;
		allowedSlots[] = {901};
		model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
		picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
		displayName = "ADF Bag";
		icon = "iconBackpack";
		transportMaxMagazines = 20;
		transportMaxWeapons = 1;
		class DestructionEffects {};
		hiddenSelections[] = {"Camo, Camo1"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		maximumLoad = 0;
		side = 3;
	};
	class adfrc_patrol_bullock_amcu: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock AMCU";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_amcu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_mc: adfrc_Bullock_Base 
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock MC";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_mc_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_dpdu: adfrc_Bullock_Base 
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock DPDU";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_dpdu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_dpcu: adfrc_Bullock_Base 
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock DPCU";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_dpcu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_coyote: adfrc_Bullock_Base 
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock Coyote";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_coyote_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
// BULLOCK RADIO BAGS (THANKS PROJECT:UNCUT!)
	class adfrc_patrol_bullock_amcu_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock AMCU 177";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_amcu_co.paa", "ADF_Gear\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class adfrc_patrol_bullock_mc_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock MC 177";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_mc_co.paa", "ADF_Gear\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class adfrc_patrol_bullock_dpcu_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock DPCU 177";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_dpcu_co.paa", "ADF_Gear\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class adfrc_patrol_bullock_dpdu_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock DPDU 177";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_dpdu_co.paa", "ADF_Gear\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class adfrc_patrol_bullock_coyote_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock Coyote 177";
      	picture = "\ADF_Gear\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear\adfrc_backpacks\data\bullock_coyote_co.paa", "ADF_Gear\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };  
};
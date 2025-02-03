class CfgPatches{
	class ADFRC_Backpacks{
		name="ADFRC_Backpacks";
		author="ADF Re-Cut Team";
		requiredAddons[]={
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Black_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Green_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Tan_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Cam_co.paa"
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
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_DPCU_co.paa"};
	};
	class ADFRC_AssaultPack_DPDU: B_assaultpack_Base{
		displayName = "Assault Pack (DPDU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_DPDU_co.paa"};
	};
	class ADFRC_AssaultPack_AMCU: B_assaultpack_Base{
		displayName = "Assault Pack (AMCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_AMC_co.paa"};
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Black_M_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Green_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_Tan_MED: B_assaultpack_Base{
		displayName = "Assault Pack (Tan)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Tan_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_AMP_MED: B_assaultpack_Base{
		displayName = "Assault Pack (AMP)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_Cam_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_DPCU_MED: B_assaultpack_Base{
		displayName = "Assault Pack (DPCU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_DPCU_M_co.paa"
		};
	};
	class ADFRC_AssaultPack_DPDU_MED: B_assaultpack_Base{
		displayName = "Assault Pack (DPDU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\AssaultPack_DPDU_M_co.paa"
		};
	};
// KITBAG BASE
	class B_Kitbag_Base;
	class ADFRC_Kitbag_Black: B_Kitbag_Base{ // Has Flag
		displayName = "Kitbag (Black)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Black_co.paa"
		};
	};
	class ADFRC_Kitbag_Green: B_Kitbag_Base{ // Has Flag
		displayName = "Kitbag (Green)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Green_co.paa"
		};
	};
	class ADFRC_Kitbag_Tan: B_Kitbag_Base{ // Has Flag
		displayName = "Kitbag (Tan)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Tan_co.paa"
		};
	};
	class ADFRC_Kitbag_AMP: B_Kitbag_Base{
		displayName = "Kitbag (AMP)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Cam_co.paa"
		};
	};
	class ADFRC_Kitbag_AMCU: B_Kitbag_Base{
		displayName = "Kitbag (AMCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_AMC_co.paa"
		};
	};
	class ADFRC_Kitbag_Black_MED: B_Kitbag_Base{
		displayName = "Kitbag (Black)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Black_M_co.paa"
		};
	};
	class ADFRC_Kitbag_Green_MED: B_Kitbag_Base{
		displayName = "Kitbag (Green)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Green_M_co.paa"
		};
	};
	class ADFRC_Kitbag_Tan_MED: B_Kitbag_Base{
		displayName = "Kitbag (Tan)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Tan_M_co.paa"
		};
	};
	class ADFRC_Kitbag_AMP_MED: B_Kitbag_Base{
		displayName = "Kitbag (AMP)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\KitBag_Cam_M_co.paa"
		};
	};
// CARRYALL BACKAPCK BASE
	class B_CarryAll_Base;
	class ADFRC_CarryAll_Black: B_CarryAll_Base{ // Has Flag
		displayName = "Carryall (Black)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Black_co.paa"
		};
	};
	class ADFRC_CarryAll_Green: B_CarryAll_Base{ // Has Flag
		displayName = "Carryall (Green)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Green_co.paa"};
	};
	class ADFRC_CarryAll_Tan: B_CarryAll_Base{ // Has Flag
		displayName = "Carryall (Tan)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Tan_co.paa"
		};
	};
	class ADFRC_CarryAll_AMP: B_CarryAll_Base{
		displayName = "Carryall (AMP)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Cam_co.paa"
		};
	};
	class ADFRC_CarryAll_DPCU: B_CarryAll_Base{
		displayName = "Carryall (DPCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPCU_co.paa"
		};
	};
	class ADFRC_CarryAll_AMCU: B_CarryAll_Base{
		displayName = "Carryall (AMCU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_AMC_co.paa"};
	};
	class ADFRC_CarryAll_DPDU: B_CarryAll_Base{
		displayName = "Carryall (DPDU)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPDU_co.paa"
		};
	};
	class ADFRC_CarryAll_Black_MED: B_CarryAll_Base{
		displayName = "Carryall (Black)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Black_M_co.paa"
		};
	};
	class ADFRC_CarryAll_Green_MED: B_CarryAll_Base{
		displayName = "Carryall (Green)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Green_M_co.paa"
		};
	};
	class ADFRC_CarryAll_Tan_MED: B_CarryAll_Base{
		displayName = "Carryall (Tan)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Tan_M_co.paa"
		};
	};
	class ADFRC_CarryAll_AMP_MED: B_CarryAll_Base{
		displayName = "Carryall (AMP)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_Cam_M_co.paa"
		};
	};
	class ADFRC_CarryAll_DPDU_MED: B_CarryAll_Base{
		displayName = "Carryall (DPDU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPDU_M_co.paa"
		};
	};
	class ADFRC_CarryAll_DPCU_MED: B_CarryAll_Base{
		displayName = "Carryall (DPCU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPCU_M_co.paa"
		};
	};
	class ADFRC_CarryAll_AMCU_MED: B_CarryAll_Base{
		displayName = "Carryall (AMCU)[Medic]";
		author="$STR_ADF_AUTHOR";
		scope=2;
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelections[]={
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_AMC_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\assaultpack_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\carryall_DPCU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPDU_co.paa"
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
			"\ADF_Gear_2\adfrc_backpacks\data\CarryAll_DPDU_co.paa"
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
		model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
		picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
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
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock AMCU";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_amcu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_mc: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock MC";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_mc_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_dpdu: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock DPDU";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_dpdu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_dpcu: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock DPCU";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_dpcu_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
    class adfrc_patrol_bullock_coyote: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock.p3d";
      	displayname = "Patrol Pack Bullock Coyote";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_coyote_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
    };
// BULLOCK RADIO BAGS (THANKS PROJECT:UNCUT!)
	class adfrc_patrol_bullock_amcu_177: adfrc_Bullock_Base
	{
      	author = "ADFU Team";
      	scope = 2;
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock AMCU 177";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_amcu_co.paa", "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"};
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
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock MC 177";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_mc_co.paa", "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"};
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
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock DPCU 177";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_dpcu_co.paa", "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"};
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
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock DPDU 177";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_dpdu_co.paa", "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"};
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
      	model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
      	displayname = "Patrol Pack Bullock Coyote 177";
      	picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
      	hiddenSelections[] = {"Camo", "Camo1"}; 							//"camo" = Base-Bag. camo1 = Radio
      	hiddenSelectionsTextures[] = {"ADF_Gear_2\adfrc_backpacks\data\bullock_coyote_co.paa", "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"};
      	maximumLoad = 360;
      	mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };
// MOLLE BACKPACKS
	class adfrc_molle_bag_117g: ReammoBox
	{
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		class TransportMagazines {};
		class TransportWeapons{};
		reversed = 1;
		displayName = "ADF Molle Backpack [117g]";
		vehicleClass = Backpacks;
		mapSize = 2;
		isbackpack = 1;
		allowedSlots[] = {901};
		picture = "";
		model = "ADF_Gear_2\adfrc_backpacks\molle_117g.p3d";
		maximumLoad = 100;
		mass=05;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class adfrc_molle_bag_117g_slingshot: adfrc_molle_bag_117g
	{
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "ADF Molle Backpack [117g Slingshot]";
		picture = "";
		model = "ADF_Gear_2\adfrc_backpacks\molle_117g_slingshot.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class adfrc_molle_bag_ASIP: adfrc_molle_bag_117g
	{
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "ADF Molle Backpack [ASIP]";
		picture = "";
		model = "ADF_Gear_2\adfrc_backpacks\molle_asip.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
// EXERS MOLLE BACKPACKS
	class ADFRC_BP_Placeholder_AMCU_1: ReammoBox
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
		model = "ADF_Gear_2\adfrc_backpacks\bp_1.p3d";
		displayName = "Combat Pack";
		picture = "";
		icon  = "";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 120;
		mass=25;
	};
	class ADFRC_BP_Hydration_AMCU_1: ReammoBox
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
		model = "ADF_Gear_2\adfrc_backpacks\bp_2.p3d";
		displayName = "Hydration Carrier";
		picture = "";
		icon  = "";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 100;
		mass=20;
	};
	class ADFRC_BP_Assault_AMCU_1: ReammoBox
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
		model = "ADF_Gear_2\adfrc_backpacks\bp_3.p3d";
		displayName = "Assault Pack";
		picture = "";
		icon  = "";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 220;
		mass=30;
	};
	class ADFRC_BP_TacBag_AMCU_1: ReammoBox
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
		model = "ADF_Gear_2\adfrc_backpacks\bp_4.p3d";
		displayName = "Tactical Backpack";
		picture = "";
		icon  = "";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad = 300;
		mass=30;
	};


	/////TBAS T5 Backpanels
	class adfrc_T5_Backpanel: adfrc_molle_bag_117g
	{
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "TBAS T5 Backpanel Base";
		picture = "";
		model = "ADF_Gear_2\adfrc_backpacks\TBAS_T5_Backpannel.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		maximumLoad = 100;
		mass=05;
	};


	/////JPC Backpanels
	class adfrc_JPC_Backpanel: adfrc_molle_bag_117g
	{
		scope = 2;
		scopeArsenal = 2;
		eden = 2;
		displayName = "JPC Backpanel Base";
		picture = "";
		model = "ADF_Gear_2\adfrc_backpacks\JPC_Backpannel.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		maximumLoad = 100;
		mass=05;
	};
};
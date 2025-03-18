class CfgWeapons{
	class Uniform_Base;
	class UniformItem;
	// Basic Bodies
	class ADFRC_BasicBody_RAR: Uniform_Base{
		displayName="Underwear (RAR)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_RAR_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_CDO: Uniform_Base{
		displayName="Underwear (CDO)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_CDO_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_Tan: Uniform_Base{
		displayName="Underwear (Tan)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_TAN_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_CDT: Uniform_Base{
		displayName="Underwear (CDT)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_CDT_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_Blue: Uniform_Base{
		displayName="Underwear (Dark Blue)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_Blue_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	class ADFRC_BasicBody_SASR: Uniform_Base{
		displayName="Underwear (SASR)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Underwear_SASR_Base";
			containerClass="Supply0";
			mass=5;
		};
	};
	// AMCU
	class ADFRC_Uniform_AMCU: Uniform_Base{
		displayName="Combat Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_AMCU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Rolled: Uniform_Base{
		displayName="Combat Dress (AMCU)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_AMCU_Rolled.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_RAR_Tee: Uniform_Base{
		displayName="Combat Dress (AMCU)(Tee-RAR)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_AMCU_RAR_Tee.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Soldier_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Flagless: Uniform_Base{
		displayName="Combat Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Recon_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_Flagless_Rolled: Uniform_Base{
		displayName="Combat Dress (AMCU)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Recon_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_AMCU_CDO_Tee: Uniform_Base{
		displayName="Combat Dress (AMCU)(Tee-CDO)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_AMCU_CDO_Tee.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_CDO_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Temperate: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Temperate)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_AMCU_Temperate.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Temperate_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Tropical: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Tropical)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_AMCU_Tropical.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Tropical_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_AMCU_Arid: Uniform_Base{
		displayName="Ghillie Suit (AMCU-Arid)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_AMCU_Arid.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_AMCU_Sniper_Arid_Base";
			containerClass="Supply60";
			mass=60;
		};
	};


	class ADFRC_Uniform_Field_AMCU : Uniform_Base {
		displayName="Field Dress (AMCU)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Field_AMCU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Uniform_Field_AMCU";
			containerClass="Supply40";
			mass=40;
		};
	};

    //?
    //? Crye G3s
    //?

	class ADFRC_Uniform_G3_AMCU: Uniform_Base {
		displayName="Crye G3 Combat Dress (AMC)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_AMCU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_Uniform_G3_AMCU";
			containerClass="Supply40";
			mass=40;
		};
	};

	class ADFRC_Uniform_G3_Jacket_AMCU: ADFRC_Uniform_G3_AMCU {
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeArsenal=1;
	};

    class ADFRC_Uniform_G3_Multicam: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (AMP)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_Multicam.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_Multicam";
		};
	};

	class ADFRC_Uniform_G3_MMP: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (MMP)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_MMP.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_MMP";
		};
	};

	class ADFRC_Uniform_G3_GPU: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (GPU)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_GPU.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_GPU";
		};
	};

    class ADFRC_Uniform_G3_DPN: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPN)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPN.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPN";
		};
	};

    class ADFRC_Uniform_G3_DPD_Midpoint: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Midpoint)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Midpoint.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Midpoint";
		};
	};

    class ADFRC_Uniform_G3_DPD_Middle_East: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Middle East)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Middle_East.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Middle_East";
		};
	};

    class ADFRC_Uniform_G3_DPD_Early: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Early)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Early.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Early";
		};
	};

    class ADFRC_Uniform_G3_DPD: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD";
		};
	};

    class ADFRC_Uniform_G3_DPC: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPC)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPC.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPC";
		};
	};

    class ADFRC_Uniform_G3_MTS: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (MTS)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_MTS.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_MTS";
		};
	};

    class ADFRC_Uniform_G3_AMCU_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (AMC, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_AMCU_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_AMCU_Rolled";
		};
	};

    class ADFRC_Uniform_G3_Multicam_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (AMP, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_Multicam_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_Multicam_Rolled";
		};
	};

	class ADFRC_Uniform_G3_MMP_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (MMP, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_MMP_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_MMP_Rolled";
		};
	};

	class ADFRC_Uniform_G3_GPU_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (GPU, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_GPU_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_GPU_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPN_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPN, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPN_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPN_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPD_Midpoint_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Midpoint, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Midpoint_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Midpoint_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPD_Middle_East_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Middle East, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Middle_East_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Middle_East_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPD_Early_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD Early, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Early_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Early_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPD_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPD, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPD_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPD_Rolled";
		};
	};

    class ADFRC_Uniform_G3_DPC_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (DPC, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_DPC_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_DPC_Rolled";
		};
	};

    class ADFRC_Uniform_G3_MTS_Rolled: ADFRC_Uniform_G3_AMCU {
		author      = "$STR_ADFRC_AUTHOR";
		displayName = "Crye G3 Combat Dress (MTS, Rolled Sleeves)";
		picture     = "\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_G3_MTS_Rolled.paa";

		class ItemInfo: ItemInfo {
			uniformClass = "ADFRC_Uniform_G3_MTS_Rolled";
		};
	};

	// Green/Sage (TAG Uniform)
	class ADFRC_Uniform_Green: Uniform_Base{
		displayName="Combat Dress (Green)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Green.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_Green_TAG_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Green_Rolled: Uniform_Base{
		displayName="Combat Dress (Green)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Green_Rolled.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_Green_TAG_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	// Multicam
	class ADFRC_Uniform_MC: Uniform_Base{
		displayName="Combat Dress (Multicam)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_MC.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MC_Rolled: Uniform_Base{
		displayName="Combat Dress (Multicam)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_MC_Rolled.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MC_SASR_Tee: Uniform_Base{
		displayName="Combat Dress (Multicam)(Tee-SASR)";
		author="$STR_ADF_AUTHOR";
		scope=2;
		scopeCurator=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_MC_SASR_Tee.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MC_SASR_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Temperate: Uniform_Base{
		displayName="Ghillie Suit (MC-Temperate)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_MC_Temperate.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Temperate_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Tropical: Uniform_Base{
		displayName="Ghillie Suit (MC-Tropical)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_MC_Tropical.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Tropical_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	class ADFRC_Uniform_Ghillie_MC_Arid: Uniform_Base{
		displayName="Ghillie Suit (MC-Arid)";
		author="$STR_ADFRC_AUTHOR";
		scope=2;
		scopeArsenal=2;
		picture="\ADF_Gear\adfrc_uniforms\ui\ADFRC_Uniform_Ghillie_MC_Arid.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_SASR_Sniper_Arid_Base";
			containerClass="Supply60";
			mass=60;
		};
	};
	// Maritime Tiger Stripe ## MOVE TO NAVAL ADD-ON ##
	class ADFRC_Uniform_MTS: Uniform_Base{
		displayName="Combat Dress (MTS)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MTS_Rolled: Uniform_Base{
		displayName="Combat Dress (MTS)(Rolled Sleeves)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Rolled_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Uniform_MTS_CDT_Tee: Uniform_Base{
		displayName="Combat Dress (MTS)(Tee-CDT)";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Tee_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFRC_Wetsuit_MTS: Uniform_Base{
		displayName="Wetsuit (MTS)";
		author="$STR_ADFRC_AUTHOR";
		scope=1;
		scopeCurator=1;
		picture="\ADF_Gear\adfrc_uniforms\ui\wip_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]={
			"camo"
		};
		hiddenSelectionsTextures[]={
			"A3\Characters_F\Common\Data\diver_suit_nato_co.paa"
		};
		class ItemInfo: UniformItem{
			uniformModel="-";
			uniformClass="ADFRC_MD_MTS_CD_Diver_Base";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
};
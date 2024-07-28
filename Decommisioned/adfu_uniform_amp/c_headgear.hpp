	class H_Booniehat_tan;		// External class reference
	class H_Cap_red;			// External class reference
	class H_HelmetB_light;		// External class reference
	class H_HelmetB;
	class H_Cap_headphones;

// ADF HEADGEAR CONFIGS
// BOONIE HATS AND CAPS
	class ADFU_booniehat_amp: H_Booniehat_tan
	{
		scope = public;
		displayName = "ADF Boonie [AMP]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Boonie-Cam.paa"};
	};
	class ADFU_cap_tan: H_Cap_red
	{
		displayName = "ADF Cap [Sand]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Cap-Tan.paa"};
	};
	class ADFU_cap_green: H_Cap_red
	{
		displayName = "ADF Cap [Green]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Cap-Green.paa"};
	};
	class ADFU_cap_black: H_Cap_red
	{
		displayName = "ADF Cap [Black]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Cap-Black.paa"};
	};
	class ADFU_cap_amp: H_Cap_red
	{
		displayName = "ADF Cap [AMP]";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Cap-Cam.paa"};
	};


// ADVANCED COMBAT HELMETS
	class ADFU_Helmet_Black: H_HelmetB_light
	{
		scope = public;
		displayName = "ADF ACH [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Black.paa"};
	};
	class ADFU_Helmet_Desert: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Desert.paa"};
	};
	class ADFU_Helmet_Grass: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Grass.paa"};
	};
	class ADFU_Helmet_Sand: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Sand.paa"};
	};
	class ADFU_Helmet_Snake: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Snake.paa"};
	};
	class ADFU_Helmet_CamInk: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-CamInk.paa"};
	};
	class ADFU_Helmet_Cam: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH [Camo]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Cam.paa"};
	};

// ADVANCED COMBAT HELMET MEDIC
	class ADFU_Helmet_Medic_Black: ADFU_Helmet_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Black-M.paa"};
	};
	class ADFU_Helmet_Medic_Desert: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Desert-M.paa"};
	};
	class ADFU_Helmet_Medic_Grass: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Grass-M.paa"};
	};
	class ADFU_Helmet_Medic_Sand: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Sand-M.paa"};
	};
	class ADFU_Helmet_Medic_Snake: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Snake-M.paa"};
	};
	class ADFU_Helmet_Medic_CamInk: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-CamInk-M.paa"};
	};
	class ADFU_Helmet_Medic_Cam: ADFU_Helmet_Medic_Black
	{
		scope = public;
		displayName = "ADF ACH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Cam-M.paa"};
	};


// HELMETS ENHANCED COMBAT HELEMTS //
	class ADFU_ECH_Desert: H_HelmetB
	{
		scope = public;
		displayName = "ADF ECH [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Desert.paa"};
	};
	class ADFU_ECH_Grass: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Grass.paa"};
	};
	class ADFU_ECH_Sand: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Sand.paa"};
	};
	class ADFU_ECH_Snake: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Snake.paa"};
	};
	class ADFU_ECH_CamInk: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-CamInk.paa"};
	};
	class ADFU_ECH_Cam: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Cam.paa"};
	};

// ENHANCED COMBAT HELEMTS MEDIC
	class ADFU_ECH_MEDIC_Desert: ADFU_ECH_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Desert-M.paa"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			armor = 3;
			passThrough = 0.5;
		};
	};
	class ADFU_ECH_MEDIC_Grass: ADFU_ECH_MEDIC_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Grass]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Grass-M.paa"};
	};
	class ADFU_ECH_MEDIC_Sand: ADFU_ECH_MEDIC_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Sand]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Sand-M.paa"};
	};
	class ADFU_ECH_MEDIC_Snake: ADFU_ECH_MEDIC_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Snake]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Snake-M.paa"};
	};
	class ADFU_ECH_MEDIC_CamInk: ADFU_ECH_MEDIC_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Dipped]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-CamInk-M.paa"};
	};
	class ADFU_ECH_MEDIC_Cam: ADFU_ECH_MEDIC_Desert
	{
		scope = public;
		displayName = "ADF ECH Medic [Paint]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Headgear\Helmet-Cam-M.paa"};
	};
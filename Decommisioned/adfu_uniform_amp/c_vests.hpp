class V_PlateCarrier1_rgr;	// External class reference
class V_PlateCarrier2_rgr;	// External class reference

// ADF PLATE CARRIER - BASED ON KERRYS PLATE CARRIER (NO MAG DROP POUCH)
	// PLAIN COLORS

	class ADFU_PlateCarrier_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "ADF Carrier Rig [B]";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFU_PlateCarrier_Sand: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [T]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [G]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_AMP: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [AMP]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Cam.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// SNAKE TEXTURES
	class ADFU_PlateCarrier_Black_Snake: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [B-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Sand_Snake: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [T-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green_Snake: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [G-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// DIGI TEXTURES
	class ADFU_PlateCarrier_Black_Digi: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [B-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Sand_Digi: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [T-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_PlateCarrier_Green_Digi: ADFU_PlateCarrier_BLACK
	{
		displayName = "ADF Carrier Rig [G-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};

// ADF CARRIER-LIGHT - BASED ON NATO VEST02.p3d
	// PLAIN COLORS
	class ADFU_CarrierLite_Black: V_PlateCarrier2_rgr
	{
		scope = 2;
		displayName = "ADF Carrier-Lite [B]";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFU_CarrierLite_Sand: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [T]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [G]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_AMP: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [AMP]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Cam.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// SNAKE TEXTURES
	class ADFU_CarrierLite_Black_Snake: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [B-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Sand_Snake: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [T-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green_Snake: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [G-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green-Snake.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// DIGI TEXTURES
	class ADFU_CarrierLite_Black_Digi: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [B-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Sand_Digi: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [T-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierLite_Green_Digi: ADFU_CarrierLite_BLACK
	{
		displayName = "ADF Carrier-Lite [G-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green-Digi.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};

// ADF CARRIER-HYDROPACK - BASED ON NATO VEST01.p3d
	// PLAIN COLORS
	class ADFU_CarrierHeavy_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "ADF Carrier-Lite [B]";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFU_CarrierHeavy_Sand: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [T]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [G]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_AMP: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [A]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Cam.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// SNAKE TEXTURES
	class ADFU_CarrierHeavy_Black_Snake: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [B-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Sand_Snake: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [T-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green_Snake: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [G-S]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	// DIGI TEXTURES
	class ADFU_CarrierHeavy_Black_Digi: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [B-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Sand_Digi: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [T-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};
	class ADFU_CarrierHeavy_Green_Digi: ADFU_CarrierHeavy_BLACK
	{
		displayName = "ADF Carrier-Lite [G-D]";
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green.paa"};
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
	};

// Medic Vests
	class ADFU_PlateCarrier_BLACK_MEDIC: V_PlateCarrier1_rgr {
		scope = 2;
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName = "ADF Carrier Rig Black MEDIC (AMP)";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Black-Medic.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFU_PlateCarrier_GREEN_MEDIC: V_PlateCarrier1_rgr {
		scope = 2;
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName = "ADF Carrier Rig Green MEDIC (AMP)";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Green-Medic.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
	class ADFU_PlateCarrier_SAND_MEDIC: V_PlateCarrier1_rgr {
		scope = 2;
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName = "ADF Carrier Rig Sand MEDIC (AMP)";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADFU_uniform_amp\Vest\Vest-Tan-Medic.paa"};

		class ItemInfo: ItemInfo {
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply140";
			mass = 60;
			armor = "5*0.8";
			passThrough = 0.400000;
			hiddenSelections[] = {"camo"};
		};
	};
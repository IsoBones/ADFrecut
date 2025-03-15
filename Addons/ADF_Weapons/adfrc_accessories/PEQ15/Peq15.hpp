//// M4A5
///Standard Right
class ADFRC_PEQ15_BLK_IRL: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 Black (IR-Laser)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_BLK";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		inertia = 0.1;
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_BLK_IRT";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_BLK_IRT";
        MRT_switchItemHintText = "IR-Laser";
	};
	
class ADFRC_PEQ15_BLK_IRT: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 Black (IR-Light)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_BLK";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 15;
				size = 1;
				innerAngle = 5;
				outerAngle = 60;
				coneFadeCoef = 6;
				position = "flashdir";
				direction = "flashpos";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 100;
				dayLight = 0;
				irLight = 1;	
				class Attenuation
				{
					start = 0;
					constant = 0.5;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 27;
					hardLimitEnd = 34;
				};
				volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
				scale[] = {1,1,1};
			};
		};
		inertia = 0.1;
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_BLK_IRL";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_BLK_IRL";
        MRT_switchItemHintText = "IR-Light";
	};
	
class ADFRC_PEQ15_FDE_IRL: ADFRC_PEQ15_BLK_IRL
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 FDE (IR-Laser)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_FDE";
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_FDE_IRT";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_FDE_IRT";
	};
	
class ADFRC_PEQ15_FDE_IRT: ADFRC_PEQ15_BLK_IRT
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 FDE (IR-Light)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_FDE";
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_FDE_IRL";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_FDE_IRL";
	};
	
	
///M4 Top
class ADFRC_PEQ15_M4_Top_BLK_IRL: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 Black (IR-Laser)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_M4_Top_BLK";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		inertia = 0.1;
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_M4_Top_BLK_IRT";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_M4_Top_BLK_IRT";
        MRT_switchItemHintText = "IR-Laser";
	};
	
class ADFRC_PEQ15_M4_Top_BLK_IRT: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 Black (IR-Light)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_BLK_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_M4_Top_BLK";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 15;
				size = 1;
				innerAngle = 5;
				outerAngle = 60;
				coneFadeCoef = 6;
				position = "flashdir";
				direction = "flashpos";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = 100;
				dayLight = 0;
				irLight = 1;	
				class Attenuation
				{
					start = 0;
					constant = 0.5;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 27;
					hardLimitEnd = 34;
				};
				volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
				scale[] = {1,1,1};
			};
		};
		inertia = 0.1;
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_M4_Top_BLK_IRL";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_M4_Top_BLK_IRL";
        MRT_switchItemHintText = "IR-Light";
	};
	
class ADFRC_PEQ15_M4_Top_FDE_IRL: ADFRC_PEQ15_M4_Top_BLK_IRL
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 FDE (IR-Laser)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_M4_Top_FDE";
		
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_M4_Top_FDE_IRT";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_M4_Top_FDE_IRT";
	};
	
class ADFRC_PEQ15_M4_Top_FDE_IRT: ADFRC_PEQ15_M4_Top_BLK_IRT
	{
		author = "Brucey";
		scope = 2;
		displayName = "L3 AN/PEQ-15 FDE (IR-Light)";
		picture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\PEQ15\ui\PEQ15_FDE_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\PEQ15\ADFRC_PEQ15_M4_Top_FDE";
		MRT_SwitchItemNextClass = "ADFRC_PEQ15_M4_Top_FDE_IRL";
        MRT_SwitchItemPrevClass = "ADFRC_PEQ15_M4_Top_FDE_IRL";
	};
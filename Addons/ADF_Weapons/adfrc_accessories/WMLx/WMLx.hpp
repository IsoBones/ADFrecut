//// M4A5
///Standard Right
class ADFRC_WMLx_BLK_R_WL: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "Inforce WMLx Light (Right)";
		picture = "\ADF_Weapons\adfrc_accessories\WMLx\ui\WMLx_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\WMLx\ui\WMLx_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\WMLx\ADFRC_WMLX_WL";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 150;
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
		inertia = 0.05;
		
		MRT_SwitchItemNextClass = "ADFRC_WMLx_BLK_R_IR";
        MRT_SwitchItemPrevClass = "ADFRC_WMLx_BLK_R_IR";
        MRT_switchItemHintText = "White Light";
	};
	
class ADFRC_WMLx_BLK_R_IR: ADFRC_WMLx_BLK_R_WL
	{
		displayName = "Inforce WMLx iR (Right)";
		model = "ADF_Weapons\adfrc_accessories\WMLx\ADFRC_WMLX_IR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 35;
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
		MRT_SwitchItemNextClass = "ADFRC_WMLx_BLK_R_WL";
        MRT_SwitchItemPrevClass = "ADFRC_WMLx_BLK_R_WL";
        MRT_switchItemHintText = "iR";
	};
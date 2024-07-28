class ADFRC_X400_Light: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "Surefire X400 (Light)";
		picture = "\ADF_Weapons\adfrc_accessories\X400\ui\X400_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\X400\ui\X400_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\X400\ADFRC_X400";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 90;
				size = 1;
				innerAngle = 7;
				outerAngle = 120;
				coneFadeCoef = 6;
				position = "flash dir";
				direction = "flash";
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
		
		inertia = 0.2;
		
		MRT_SwitchItemNextClass = "ADFRC_X400_Laser";
        MRT_SwitchItemPrevClass = "ADFRC_X400_Laser";
        MRT_switchItemHintText = "Light";
	};
	
class ADFRC_X400_Laser: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "Surefire X400 (Laser)";
		picture = "\ADF_Weapons\adfrc_accessories\X400\ui\X400_ca.paa";
		UiPicture = "\ADF_Weapons\adfrc_accessories\X400\ui\X400_ca.paa";
		model = "ADF_Weapons\adfrc_accessories\X400\ADFRC_X400";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2.5;
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		inertia = 0.2;
		
		MRT_SwitchItemNextClass = "ADFRC_X400_Light";
        MRT_SwitchItemPrevClass = "ADFRC_X400_Light";
        MRT_switchItemHintText = "IR-Laser";
	};
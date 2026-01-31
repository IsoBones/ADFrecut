class ADFRC_F9_FOXTROT2: ItemCore
	{
		author = "Brucey";
		scope = 2;
		displayName = "Sig Sauer Foxtrot2 FDE";
		picture = "ADF_Weapons\adfrc_accessories\P320\data\ui\ADFRC_Foxtrot2_FDE.paa";
		uipicture = "ADF_Weapons\adfrc_accessories\P320\data\ui\ADFRC_Foxtrot2_FDE.paa";
		model = "ADF_Weapons\adfrc_accessories\P320\ADFRC_Foxtrot2_FDE";
		
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 01.225;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 100;
				size = 1;
				innerAngle = 5;
				outerAngle = 100;
				coneFadeCoef = 8;
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
	};
class ADFRC_DPP : ItemCore
	{
		displayName="Leupold Deltapoint Pro";
		author=Brucey;
		picture="\ADF_Weapons\adfrc_optics\DPP\ui\ADFRC_DPP_CA.paa";
		model = "\ADF_Weapons\adfrc_optics\DPP\ADFRC_Deltapoint_Pro.p3d";
		scope =2;
		descriptionShort = "Deltapoint Pro";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1.25;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Aco
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 25;
					
					distanceZoomMax = 25;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.1;
	};
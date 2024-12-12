class ADFRC_F9_Romeo2 : ItemCore
	{
		displayName="Sig Sauer Romeo2";
		author=Brucey;
		picture="\ADF_Optics\Romeo2\data\ui\ADFRC_Romeo2_FDE.paa";
		model = "\ADF_Optics\Romeo2\ADFRC_Romeo2";
		scope =2;
		descriptionShort = "Romeo2";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.9875;
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
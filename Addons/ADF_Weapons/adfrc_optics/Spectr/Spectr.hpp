class ADFRC_MicroT2 : ItemCore
	{
		displayName="Aimpoint T2";
		author=Brucey;
		picture="ADF_Weapons\adfrc_optics\T2\UI\T2_ca.paa";
		uipicture="ADF_Weapons\adfrc_optics\T2\UI\T2_ca.paa";
		model = "ADF_Weapons\adfrc_optics\T2\ADFRC_T2.p3d";
		scope =2;
		descriptionShort = "Aimpoint T2";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
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
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.1;
	};
	
	
////// Magnified 
///DOWN
class ADFRC_MicroT2_Down : ADFRC_MicroT2
	{
		displayName="Aimpoint T2 (Mag - Down)";
		author=Brucey;
		picture="ADF_Weapons\adfrc_optics\T2\UI\T2_Mag_ca.paa";
		uipicture="ADF_Weapons\adfrc_optics\T2\UI\T2_Mag_ca.paa";
		model = "ADF_Weapons\adfrc_optics\T2\ADFRC_T2_Down.p3d";
		scope =2;
		descriptionShort = "Aimpoint T2";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
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
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
        MRT_SwitchItemNextClass = "ADFRC_MicroT2_Up";
        MRT_switchItemHintText = "1x";
		
		inertia = 0.25;
	};
	
class ADFRC_MicroT2_Up : ADFRC_MicroT2
	{
		displayName="Aimpoint T2 (Mag - UP)";
		author=Brucey;
		picture="ADF_Weapons\adfrc_optics\T2\UI\T2_Mag_ca.paa";
		uipicture="ADF_Weapons\adfrc_optics\T2\UI\T2_Mag_ca.paa";
		model = "ADF_Weapons\adfrc_optics\T2\ADFRC_T2_Up.p3d";
		scope =2;
		descriptionShort = "Aimpoint T2";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Magnified
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 3;
					opticsZoomMax = 3.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
				};
			};
		};
		
		
		
        MRT_SwitchItemNextClass = "ADFRC_MicroT2_Down";
        MRT_switchItemHintText = "3x";
		
		inertia = 0.2;
	};
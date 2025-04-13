class ADFRC_EXPS3 : ItemCore
	{
		displayName="EoTech EXPS3";
		author=Brucey;
		picture="\ADF_Optics\EXPS3\UI\EXPS3_ca.paa";
		uipicture="\ADF_Optics\EXPS3\UI\EXPS3_ca.paa";
		model = "ADF_Optics\EXPS3\ADFRC_EXPS3.p3d";
		scope =2;
		descriptionShort = "EoTech EXPS3";
		zeroingSound = ["A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",0.316228,1,5];
		
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
					opticsDisablePeripherialVision = 1;
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
class ADFRC_EXPS3_Down : ADFRC_EXPS3
	{
		displayName="EoTech EXPS3 (Mag - Down)";
		author=Brucey;
		picture="\ADF_Optics\EXPS3\UI\EXPS3_Mag_ca.paa";
		uipicture="\ADF_Optics\EXPS3\UI\EXPS3_Mag_ca.paa";
		model = "ADF_Optics\EXPS3\ADFRC_EXPS3_Mag_Down.p3d";
		scope =2;
		descriptionShort = "EoTech EXPS3";
		
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
					opticsDisablePeripherialVision = 1;
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
		
        MRT_SwitchItemNextClass = "ADFRC_EXPS3_Up";
        MRT_switchItemHintText = "1x";
		
		inertia = 0.25;
	};
	
class ADFRC_EXPS3_Up : ADFRC_EXPS3
	{
		displayName="EoTech EXPS3 (Mag - UP)";
		author=Brucey;
		picture="\ADF_Optics\EXPS3\UI\EXPS3_Mag_ca.paa";
		uipicture="\ADF_Optics\EXPS3\UI\EXPS3_Mag_ca.paa";
		model = "ADF_Optics\EXPS3\ADFRC_EXPS3_Mag_Up.p3d";
		scope =2;
		descriptionShort = "EoTech EXPS3";
		
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
					opticsZoomMin = "0.25/3";
					opticsZoomMax = "0.25/3";
					opticsZoomInit = "0.25/3";
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
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
		
		
		
        MRT_SwitchItemNextClass = "ADFRC_EXPS3_Down";
        MRT_switchItemHintText = "3x";
		
		inertia = 0.2;
	};
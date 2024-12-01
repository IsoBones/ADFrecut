class ADFRC_TA31_BLK : ItemCore
	{
		displayName="Trijicon ACOG TA31 4x32 (Black)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_BLK_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.14;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Optic432
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "eye1";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class Irons
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.12;
	};
	
class ADFRC_TA31_FDE : ADFRC_TA31_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 (FDE)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_FDE_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_FDE.p3d";
	};
	
class ADFRC_TA31_RMR_BLK : ItemCore
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (Black)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_RMR_BLK_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_RMR_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_RMR_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.14;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Optic432
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "eye1";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class Irons
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.15;
	};
	
class ADFRC_TA31_RMR_FDE : ADFRC_TA31_RMR_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (FDE)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_RMR_FDE_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_RMR_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_RMR_FDE.p3d";
	};
	
class ADFRC_TA31_KF_BLK : ItemCore
	{
		displayName="Trijicon ACOG TA31 4x32 (Black/KF)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_KF_BLK_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_KF_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.14;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Optic432
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "eye1";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class Irons
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.13;
	};
	
class ADFRC_TA31_KF_FDE : ADFRC_TA31_KF_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 (FDE/KF)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_KF_FDE_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_KF_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_FDE.p3d";
	};
	
class ADFRC_TA31_KF_RMR_BLK : ItemCore
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (Black/KF)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_KF_RMR_BLK_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_KF_RMR_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_RMR_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.14;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Optic432
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "eye1";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class Irons
				{
					opticsID = 3;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
		
		inertia = 0.16;
	};
	
class ADFRC_TA31_KF_RMR_FDE : ADFRC_TA31_KF_RMR_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (FDE/KF)";
		author="Brucey";
		picture="ADF_Optics\TA31\UI\TA31_KF_RMR_FDE_ca.paa";
		uipicture="ADF_Optics\TA31\UI\TA31_KF_RMR_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_RMR_FDE.p3d";
	};
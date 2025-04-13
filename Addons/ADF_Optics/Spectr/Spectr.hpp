class ADFRC_Specter_RAR : ItemCore
	{
		displayName="Elcan SpecterDR 1x/4x (RAR)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_RAR_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_RAR_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_RAR.p3d";
		scope =2;
		descriptionShort = "Spectr DR 1x/4x";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 0.14;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Optic1
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.6;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye1";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				};
				class Optic4
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
		
		inertia = 0.1;
	};
	
	
class ADFRC_Specter_RAR_KF : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x (RAR - KF)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_RAR_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_RAR_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_RAR_KF.p3d";
	};
	
class ADFRC_Specter_CDO : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x (CDO)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_CDO.p3d";
	};
	
class ADFRC_Specter_CDO_KF : ADFRC_Specter_CDO
	{
		displayName="Elcan SpecterDR 1x/4x (CDO - KF)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_CDO_KF.p3d";
	};
	
class ADFRC_Specter_CDO_DPP : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x Leupold DPP (CDO)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_CDO_DP.p3d";
	};
	
class ADFRC_Specter_CDO_KF_DPP : ADFRC_Specter_CDO
	{
		displayName="Elcan SpecterDR 1x/4x Leupold DPP (CDO - KF)";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_CDO_DP_KF.p3d";
	};
	
	
class ADFRC_Specter_C_RAR : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x (RAR) - Camo";
		picture="\ADF_Optics\Spectr\UI\Spectr_RAR_C_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_RAR_C_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_RAR.p3d";
	};
	
class ADFRC_Specter_RAR_C : ADFRC_Specter_C_RAR
	{
	};
	
class ADFRC_Specter_RAR_C_KF : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x (RAR - KF) - Camo";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_RAR_C_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_RAR_C_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_RAR_KF.p3d";
	};
	

	
class ADFRC_Specter_C_CDO : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x (CDO) - Camo";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_C_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_C_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_CDO.p3d";
	};
	
class ADFRC_Specter_CDO_C_KF : ADFRC_Specter_CDO
	{
		displayName="Elcan SpecterDR 1x/4x (CDO - KF) - Camo";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_C_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_C_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_CDO_KF.p3d";
	};
	
class ADFRC_Specter_CDO_C_DPP : ADFRC_Specter_RAR
	{
		displayName="Elcan SpecterDR 1x/4x Leupold DPP (CDO) - Camo";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_c_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_c_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_CDO_DP.p3d";
	};
	
class ADFRC_Specter_CDO_C_KF_DPP : ADFRC_Specter_CDO
	{
		displayName="Elcan SpecterDR 1x/4x Leupold DPP (CDO - KF) - Camo";
		author="Brucey";
		picture="\ADF_Optics\Spectr\UI\Spectr_CDO_c_KF_ca.paa";
		uipicture="\ADF_Optics\Spectr\UI\Spectr_CDO_c_KF_ca.paa";
		model = "ADF_Optics\Spectr\ADFRC_Spectr_C_CDO_DP_KF.p3d";
	};
	
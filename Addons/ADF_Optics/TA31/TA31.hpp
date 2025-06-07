class ADFRC_TA31_BLK : ItemCore
	{
		displayName="Trijicon ACOG TA31 4x32 (Black)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_BLK_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_N_ca.paa";
			bodyTextureSize = 1.15;
        };
        weaponInfoType = "CBA_ScriptedOptic";
		
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 10;
			RMBhint = "1/4x";
			optics = true;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";

			class OpticsModes {
				class Snip {
					opticsID = 1;
					opticsDisplayName = WFOV;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[]={100,200,300,400};
					discreteDistanceInitIndex=0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					cameraDir = "";
				};
				class Irons
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye2";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {50};
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
		picture="\ADF_Optics\TA31\UI\TA31_FDE_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_FDE.p3d";
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_N_ca.paa";
			bodyTextureSize = 1.15;
        };
	};
	
class ADFRC_TA31_RMR_BLK : ADFRC_TA31_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (Black)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_RMR_BLK_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_RMR_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_RMR_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_RMR_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_RMR_N_ca.paa";
			bodyTextureSize = 1.15;
        };
		
		inertia = 0.15;
	};
	
class ADFRC_TA31_RMR_FDE : ADFRC_TA31_RMR_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (FDE)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_RMR_FDE_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_RMR_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_RMR_FDE.p3d";
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_RMR_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_RMR_N_ca.paa";
			bodyTextureSize = 1.15;
        };
	};
	
class ADFRC_TA31_KF_BLK : ADFRC_TA31_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 (Black/KF)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_KF_BLK_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_KF_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		inertia = 0.13;
	};
	
class ADFRC_TA31_KF_FDE : ADFRC_TA31_KF_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 (FDE/KF)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_KF_FDE_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_KF_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_FDE.p3d";
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_N_ca.paa";
			bodyTextureSize = 1.15;
        };
	};
	
class ADFRC_TA31_KF_RMR_BLK : ADFRC_TA31_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (Black/KF)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_KF_RMR_BLK_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_KF_RMR_BLK_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_RMR_BLK.p3d";
		scope =2;
		descriptionShort = "TA31 4x32";
		
		inertia = 0.16;
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_RMR_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_RMR_N_ca.paa";
			bodyTextureSize = 1.15;
        };
	};
	
class ADFRC_TA31_KF_RMR_FDE : ADFRC_TA31_KF_RMR_BLK
	{
		displayName="Trijicon ACOG TA31 4x32 RMR (FDE/KF)";
		author="Brucey";
		picture="\ADF_Optics\TA31\UI\TA31_KF_RMR_FDE_ca.paa";
		uipicture="\ADF_Optics\TA31\UI\TA31_KF_RMR_FDE_ca.paa";
		model = "ADF_Optics\TA31\ADFRC_TA31_KF_RMR_FDE.p3d";
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA31\Textures\ADRC_ACOG_Ret_CA.paa";
            reticleTextureSize = 0.33;

            bodyTexture = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_RMR_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA31\Textures\ScopeBody_FDE_RMR_N_ca.paa";
			bodyTextureSize = 1.15;
        };
	};
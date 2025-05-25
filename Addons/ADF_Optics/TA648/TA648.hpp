
	class ADFRC_acog_ta648: ItemCore
	{
		scope=2;
		displayName="Trijicon ACOG TA648";
		author="Brucey";
		picture="\ADF_Optics\ui\optic_ta648_ca.paa";
		model="\ADF_Optics\TA648\ADFRC_TA648.p3d";
		descriptionShort="6x Marksman Optic &lt;br /&gt; Trijicon Advanced Combat Optical Gunsight"; 
		
		
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA648\Textures\Reticle_762_CA.paa";
            reticleTextureSize = 0.88;

            bodyTexture = "\ADF_Optics\TA648\Textures\ScopeBody_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA648\Textures\ScopeBody_N_ca.paa";
			bodyTextureSize = 1.15;
        };
        weaponInfoType = "CBA_ScriptedOptic";
		
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 26;
			RMBhint = "6x48";
			optics = true;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";

			class OpticsModes {
				class Snip {
					opticsID = 1;
					opticsDisplayName = WFOV;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					cameraDir = "";
				};
			};

		};
	};
	class ADFRC_acog_ta648_rds: ADFRC_acog_ta648
	{
		scope=2;
		displayName="Trijicon ACOG TA648 (RMR)";
		picture="\ADF_Optics\ui\optic_ta648_rds_ca.paa";
		model="\ADF_Optics\TA648\ADFRC_TA648_RMR.p3d";
		descriptionShort="6x Marksman Optic + Red Dot Sight &lt;br /&gt; Trijicon Advanced Combat Optical Gunsight";
		
		
		class CBA_ScriptedOptic {
            reticleTexture = "\ADF_Optics\TA648\Textures\Reticle_762_CA.paa";
            reticleTextureSize = 0.88;

            bodyTexture = "\ADF_Optics\TA648\Textures\ScopeBody_RD_D_ca.paa";
            bodyTextureNight = "\ADF_Optics\TA648\Textures\ScopeBody_RD_N_ca.paa";
			bodyTextureSize = 1.15;
        };
		
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 26;
			RMBhint = "6x48";
			optics = true;
			modelOptics = "\x\cba\addons\optics\cba_optic_small_pip.p3d";
			class OpticsModes
			{
				class Snip {
					opticsID = 1;
					opticsDisplayName = WFOV;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomMax = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					opticsZoomInit = "6 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelperZeroing')";
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					cameraDir = "";
				};
				class RDS1x
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				
			};
		};
	};
	class ADFRC_acog_ta648_t: ADFRC_acog_ta648
	{
		scope=1;
	};
	class ADFRC_acog_ta648_rds_t: ADFRC_acog_ta648_rds
	{
		scope=1;
	};
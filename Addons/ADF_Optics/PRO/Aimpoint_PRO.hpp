class ADFRC_Aimpoint_Pro_S : ItemCore
	{
		displayName="Aimpoint PRO (Short)";
		author=Brucey;
		picture="\ADF_Optics\PRO\UI\PRO_S_ca.paa";
		uipicture="\ADF_Optics\PRO\UI\PRO_S_ca.paa";
		model = "ADF_Optics\PRO\ADFRC_PRO_S.p3d";
		scope =2;
		descriptionShort = "Aimpoint PRO";
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
		
		inertia = 0.11;
	};
	
class ADFRC_Aimpoint_Pro_S_FC : ADFRC_Aimpoint_Pro_S
	{
		displayName="Aimpoint PRO (Short - Flip Caps)";
		picture="\ADF_Optics\PRO\UI\PRO_S_FC_ca.paa";
		uipicture="\ADF_Optics\PRO\UI\PRO_S_FC_ca.paa";
		model = "ADF_Optics\PRO\ADFRC_PRO_S_FC.p3d";
		inertia = 0.1;
	};
	
class ADFRC_Aimpoint_Pro_T : ADFRC_Aimpoint_Pro_S
	{
		displayName="Aimpoint PRO (Tall)";
		picture="\ADF_Optics\PRO\UI\PRO_T_ca.paa";
		uipicture="\ADF_Optics\PRO\UI\PRO_T_ca.paa";
		model = "ADF_Optics\PRO\ADFRC_PRO_T.p3d";
		inertia = 0.1;
	};
	
class ADFRC_Aimpoint_Pro_T_FC : ADFRC_Aimpoint_Pro_S
	{
		displayName="Aimpoint PRO (Tall - Flip Caps)";
		picture="\ADF_Optics\PRO\UI\PRO_T_FC_ca.paa";
		uipicture="\ADF_Optics\PRO\UI\PRO_T_FC_ca.paa";
		model = "ADF_Optics\PRO\ADFRC_PRO_T_FC.p3d";
		inertia = 0.1;
	};
	
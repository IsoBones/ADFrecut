//BASE
	class adfrc_SR25_Base: Rifle_Base_F
    {
		author = "Brucey";
		magazines[] = {};
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0125;
		recoil = "recoil_ebr";
		reloadAction = "GestureReloadSPAR_01";
		magazineReloadSwitchPhase = 0.47999999;
		selectionFireAnim = "zasleh";
        swayDecaySpeed = 1.25;
		maxZeroing = 3000;
		handAnim[] = {"OFP2_ManSkeleton","A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};
		ace_overheating_mrbs = 2000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 0; 
		ace_overheating_barrelMass = 3;
		ace_railHeightAboveBore = 3.3;  // Distance between center of bore and rail in centimeters
		
		cartridgepos = "nabojnicestart"; //remember this? Make sure it’s named
//right
		cartridgevel = "nabojniceend"; //the “end” is the velocity as I
//mentioned earlier 
		
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
        
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;


        dexterity = 1.8;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.8912509,1,25};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.8912509,1,25};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.8912509,1,25};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.8912509,1,25};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,25};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,25};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,25};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,25};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.70794576,1,25};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.70794576,1,25};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.70794576,1,25};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.70794576,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",1.0,1,10};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.70794576,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.70794576,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.70794576,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Safety_02",0.11220184,1,5};
		modes[] = {"single"};
		inertia = 0.99;
		scope=1;
		scopeWeapon=1;
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		scopeArsenal = 1;
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		
		
		discretedistanceinitindex = 0;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		discretedistance[] = { 100 };
	
		   class WeaponSlotsInfo {
			mass = 90;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {};
            class PointerSlot : asdg_FrontSideRail //side slot
            {};
        };
       class Single : Mode_SemiAuto
{			autofire = 0;
			sounds[] = { "StandardSound", "SilencedSound" };
			
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_InteriorTail_SoundSet",};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet", "SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 0.1;
			dispersion = 0.000436332;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};
};


////// M110A1s
	class adfrc_M110A2: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 508;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_762_MK316Mod0"
		};
		magazineWell[] = {"CBA_762x51_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_M110A2";
		descriptionShort = "KAC SR-25 URX4 <br/>FDE<br/>Caliber: 7.62x51";
		inertia = 0.5;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A2_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A2_CA.paa";
		displayName = "M110A2";
		recoil = "recoil_adfrc_MRSASS_4";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 105;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {-0.051,0.41};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {	
			iconPinpoint="center";
			iconPosition[] = {0.564,0.273};
			iconScale  = 0.18;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.207,0.617};
			iconScale  = 0.16;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.225,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "M110A2";
		};
	};
	
	class adfrc_M110A3L: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 558;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_M110A3L";
		descriptionShort = "KAC SR-25 URX4 <br/>FDE<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A3L_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A3L_CA.paa";
		displayName = "M110A3-L";
		recoil = "recoil_adfrc_MRSASS_1";
		
		 class WeaponSlotsInfo {
			mass = 115;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
				iconPinpoint="center";
				iconPosition[] = {-0.051,0.41};
				iconScale  = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
				iconPinpoint="center";
				iconPosition[] = {0.592,0.285};
				iconScale  = 0.18;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
				iconPinpoint="center";
				iconPosition[] = {0.164,0.629};
				iconScale  = 0.16;
				iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
				iconPinpoint="center";
				iconPosition[] = {0.191,0.414};
				iconScale  = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "M110A3-L";
		};
	};
	
	class adfrc_M110A3S: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 368.3;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_M110A3S";
		descriptionShort = "KAC SR-25 URX4 <br/>FDE<br/>Caliber: 7.62x51";
		inertia = 0.4;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A3S_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_M110A3S_CA.paa";
		displayName = "M110A3-S";
		recoil = "recoil_adfrc_MRSASS_3";
		
		 class WeaponSlotsInfo {
			mass = 95;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
				iconPinpoint="center";
				iconPosition[] = {0.115,0.41};
				iconScale  = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
				iconPinpoint="center";
				iconPosition[] = {0.592,0.285};
				iconScale  = 0.18;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
				iconPinpoint="center";
				iconPosition[] = {0.283,0.629};
				iconScale  = 0.16;
				iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
				iconPinpoint="center";
				iconPosition[] = {0.295,0.422};
				iconScale  = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "M110A3-S";
		};
	};
	

////// 22 inch 762
	class adfrc_SR25_762_22_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 558;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_762_MK316Mod0"
		};
		magazineWell[] = {"CBA_762x51_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_22";
		descriptionShort = "KAC SR-25 URX4 BLK 22in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 22in LMT";
		recoil = "recoil_adfrc_MRSASS_3";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 115;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {-0.053,0.426};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.572,0.285};
			iconScale  = 0.17;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.133,0.68};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.145,0.418};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 LMT 22in";
		};
	};
	
	class adfrc_SR25_762_22_LMT_FDE: adfrc_SR25_762_22_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 22in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 22in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 LMT 22in Dimpled";
		};
	};
	
	class adfrc_SR25_762_22_B5_BLK: adfrc_SR25_762_22_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 22in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 22in B5";
		recoil = "recoil_adfrc_MRSASS_3";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 B5 22in";
		};
	};
	
	class adfrc_SR25_762_22_B5_FDE: adfrc_SR25_762_22_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 22in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 22in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 B5 22in";
		};
	};
	
////// 20 inch 762
	class adfrc_SR25_762_20_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 508;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_762_MK316Mod0"
		};
		magazineWell[] = {"CBA_762x51_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_20";
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 20in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 20in LMT";
		recoil = "recoil_adfrc_MRSASS_3";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 110;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {-0.053,0.426};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.572,0.285};
			iconScale  = 0.17;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.133,0.68};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.145,0.418};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 LMT 20in";
		};
	};
	
	class adfrc_SR25_762_20_LMT_FDE: adfrc_SR25_762_20_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 20in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 20in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 LMT 20in Dimpled";
		};
	};
	
	class adfrc_SR25_762_20_B5_BLK: adfrc_SR25_762_20_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 20in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 20in B5";
		recoil = "recoil_adfrc_MRSASS_3";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 B5 20in";
		};
	};
	
	class adfrc_SR25_762_20_B5_FDE: adfrc_SR25_762_20_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 20in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 20in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 B5 20in";
		};
	};
	
	
////// 16 inch 762
	class adfrc_SR25_762_16_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 406.4;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_762_MK316Mod0"
		};
		magazineWell[] = {"CBA_762x51_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_16";
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 16in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.5;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 16in LMT";
		recoil = "recoil_adfrc_MRSASS_4";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 100;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {0.088,0.406};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.576,0.273};
			iconScale  = 0.19;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.25,0.668};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.264,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 LMT 16in";
		};
	};
	
	class adfrc_SR25_762_16_LMT_FDE: adfrc_SR25_762_16_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 16in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 16in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_15_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 LMT 16in Dimpled";
		};
	};
	
	class adfrc_SR25_762_16_B5_BLK: adfrc_SR25_762_16_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 16in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 16in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 B5 16in";
		};
	};
	
	class adfrc_SR25_762_16_B5_FDE: adfrc_SR25_762_16_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 16in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 16in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_15_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 B5 16in";
		};
	};
	
	
////// 14 inch 762
	class adfrc_SR25_762_14_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 406.4;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_762_MK316Mod0"
		};
		magazineWell[] = {"CBA_762x51_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_14";
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 14.5in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.35;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 14.5in LMT";
		recoil = "recoil_adfrc_MRSASS_5";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 97;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {0.088,0.406};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.576,0.273};
			iconScale  = 0.19;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.25,0.668};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.264,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 LMT 14.5in";
		};
	};
	
	class adfrc_SR25_762_14_LMT_FDE: adfrc_SR25_762_14_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 14.5in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 14.5in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_13_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 LMT 14in Dimpled";
		};
	};
	
	class adfrc_SR25_762_14_B5_BLK: adfrc_SR25_762_14_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 7.62x51 14.5in<br/>Black<br/>Caliber: 7.62x51";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 7.62x51 14.5in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 7.62x51 B5 14in";
		};
	};
	
	class adfrc_SR25_762_14_B5_FDE: adfrc_SR25_762_14_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 7.62x51 14.5in<br/>Black<br/>Caliber: 7.62x51";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 7.62x51 14.5in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_13_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 7.62x51 B5 14in";
		};
	};
	
	
	
	


////// 22 inch 65CM
	class adfrc_SR25_65CM_22_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 558;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_22";
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 22in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 22in LMT";
		recoil = "recoil_adfrc_MRSASS_1";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 115;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {-0.053,0.426};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.572,0.285};
			iconScale  = 0.17;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.133,0.68};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.145,0.418};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM LMT 22in";
		};
	};
	
	class adfrc_SR25_65CM_22_LMT_FDE: adfrc_SR25_65CM_22_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 22in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 22in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM LMT 22in Dimpled";
		};
	};
	
	class adfrc_SR25_65CM_22_B5_BLK: adfrc_SR25_65CM_22_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 22in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 22in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM B5 22in";
		};
	};
	
	class adfrc_SR25_65CM_22_B5_FDE: adfrc_SR25_65CM_22_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 22in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 22in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM B5 22in";
		};
	};
	
////// 20 inch 65CM
	class adfrc_SR25_65CM_20_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 508;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_20";
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 20in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 20in LMT";
		recoil = "recoil_adfrc_MRSASS_1";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 110;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {-0.053,0.426};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.572,0.285};
			iconScale  = 0.17;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.133,0.68};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.145,0.418};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM LMT 20in";
		};
	};
	
	class adfrc_SR25_65CM_20_LMT_FDE: adfrc_SR25_65CM_20_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 20in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 20in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM LMT 20in Dimpled";
		};
	};
	
	class adfrc_SR25_65CM_20_B5_BLK: adfrc_SR25_65CM_20_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 20in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 20in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM B5 20in";
		};
	};
	
	class adfrc_SR25_65CM_20_B5_FDE: adfrc_SR25_65CM_20_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 20in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_20_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 20in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_17_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM B5 20in";
		};
	};
	
	
////// 16 inch 65CM
	class adfrc_SR25_65CM_16_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 406.4;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_16";
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 16in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.5;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 16in LMT";
		recoil = "recoil_adfrc_MRSASS_2";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 100;
			allowedSlots[] = {901};
           class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {0.088,0.406};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.576,0.273};
			iconScale  = 0.19;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.25,0.668};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.264,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM LMT 16in";
		};
	};
	
	class adfrc_SR25_65CM_16_LMT_FDE: adfrc_SR25_65CM_16_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 16in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 16in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_15_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM LMT 16in Dimpled";
		};
	};
	
	class adfrc_SR25_65CM_16_B5_BLK: adfrc_SR25_65CM_16_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 16in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 16in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM B5 16in";
		};
	};
	
	class adfrc_SR25_65CM_16_B5_FDE: adfrc_SR25_65CM_16_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 16in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 16in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_15_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM B5 16in";
		};
	};
	
	
////// 14 inch 65CM
	class adfrc_SR25_65CM_14_LMT_BLK: adfrc_SR25_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 406.4;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		magazines[] = {
			"adfrc_20rnd_AR10_GI_65CM_147ELDM"
		};
		magazineWell[] = {"CBA_65C_AR10"};
		model = "adf_weapons4\adfrc_sr25\SR25\adfrc_SR25_14";
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 14.5in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.35;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_LMT_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 14.5in LMT";
		recoil = "recoil_adfrc_MRSASS_3";
		
		hiddenSelections[] = { "stock_B5" };
		hiddenSelectionsTextures[] = { "" };
		
		 class WeaponSlotsInfo {
			mass = 97;
			allowedSlots[] = {901};
           class MuzzleSlot : asdg_MuzzleSlot_762
            {
			iconPinpoint="center";
			iconPosition[] = {0.088,0.406};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.576,0.273};
			iconScale  = 0.19;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.25,0.668};
			iconScale  = 0.21;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.264,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
        };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM LMT 14.5in";
		};
	};
	
	class adfrc_SR25_65CM_14_LMT_FDE: adfrc_SR25_65CM_14_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 14.5in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_LMT_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 14.5in LMT";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_sopmod","stock_B5" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_13_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_SOPMOD_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM LMT 14in Dimpled";
		};
	};
	
	class adfrc_SR25_65CM_14_B5_BLK: adfrc_SR25_65CM_14_LMT_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 BLK 6.5CM 14.5in<br/>Black<br/>Caliber: 6.5CM";
		inertia = 0.6;
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_BLK_B5_CA.paa";
		displayName = "SR-25 URX4 BLK 6.5CM 14.5in B5";
		
		hiddenSelections[] = { "stock_sopmod" };
		hiddenSelectionsTextures[] = { "" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 BLK 6.5CM B5 14in";
		};
	};
	
	class adfrc_SR25_65CM_14_B5_FDE: adfrc_SR25_65CM_14_B5_BLK
	{
		author = "Brucey";
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		descriptionShort = "KAC SR-25 URX4 FDE 6.5CM 14.5in<br/>Black<br/>Caliber: 6.5CM";
		picture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		UiPicture = "\adf_weapons4\adfrc_sr25\SR25\data\ui\Gear_adfrc_SR25_14_FDE_B5_CA.paa";
		displayName = "SR-25 URX4 FDE 6.5CM 14.5in B5";
		
		hiddenSelections[] = { "Camo_a2grip","camo_barrels","camo_ch","camo_handguard","camo_lower","camo_upper","stock_b5","stock_sopmod" };
		hiddenSelectionsTextures[] = { "\mss\adfrc_Core\textures\adfrc_A2_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Barrels_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_KAC_CH_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_URX4_13_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Lower_FDE_CO","\adf_weapons4\adfrc_sr25\SR25\textures\adfrc_SR25_Upper_FDE_CO","\mss\adfrc_Core\textures\adfrc_B5_FDE_CO","" };
		 
		class Library
		{
			libTextDesc = "SR-25 URX4 FDE 6.5CM B5 14in";
		};
	};
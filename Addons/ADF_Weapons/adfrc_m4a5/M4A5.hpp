	class Rifle_Base_F;
	class ADFRC_M4A5_556_Base: Rifle_Base_F
    {
		author = "Brucey";
        scope = 1;
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0125;
		magazineReloadSwitchPhase = 0.48;
		selectionFireAnim = "zasleh";
		inertia = 0.3;
        swayDecaySpeed = 1.25;
		handAnim[] = {"OFP2_ManSkeleton","A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 0; 
		ace_overheating_barrelMass = 3;
		ace_railHeightAboveBore = 1.8;  // Distance between center of bore and rail in centimeters
		
		cartridgepos = "nabojnicestart"; //remember this? Make sure it’s named
//right
		cartridgevel = "nabojniceend"; //the “end” is the velocity as I
//mentioned earlier 
		
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
        
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
		
		magazines[] = {
			"ADFRC_30Rnd_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};


        dexterity = 1.3;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.446684,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",0.562341,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",0.562341,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",0.562341,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.446684,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.446684,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.446684,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",0.562341,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",0.562341,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",0.562341,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",0.562341,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",0.562341,1,15};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.70794576,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.70794576,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.70794576,1,20};
		modes[] = {"Single","FullAuto"};
	
		   class WeaponSlotsInfo {
			mass = 105;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
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
			class SilencedSound: BaseSoundModeType {
			SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType {
			soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
						
dispersion = 0.000581776;
maxRange = 250;
maxRangeProbab = 0.2;
midRange = 150;
midRangeProbab = 0.7;
minRange = 2;
minRangeProbab = 0.5;
reloadTime = 0.07;
};

class FullAuto: Mode_FullAuto {
aiRateOfFire = 1e-06;
class BaseSoundModeType {
};
dispersion = 0.000581776;
maxRange = 30;
maxRangeProbab = 0.05;
midRange = 15;
midRangeProbab = 0.7;
minRange = 2;
minRangeProbab = 0.9;
reloadTime = 0.07;
class SilencedSound: BaseSoundModeType {
SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
};
class StandardSound: BaseSoundModeType {
soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
};
};
};

class ADFRC_M4A5_Troy_556_14: ADFRC_M4A5_556_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 292.1;
		ACE_barrelLength = 368.3;
		recoil = "recoil_spar";
		recoilProne = "recoil_spar";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_t_145";
		descriptionShort = "M4A1-AU Carbine Troy Rail <br/>14.5in<br/>Caliber: 5.56";
		inertia = 0.325;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M4A1-AU Carbine 5.56MM Troy Rail(FDE)";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		 
		class Library
		{
			libTextDesc = "M4A5-T 14.5";
		};
	};
	
class ADFRC_M4A5_Troy_556_14_BLK: ADFRC_M4A5_Troy_556_14
	{
		displayName = "M4A1-AU Carbine 5.56MM Troy Rail (Black)";
		hiddenSelections[] = { "CamoTroy" };
		hiddenSelectionsTextures[] = { 
		"ADF_Weapons\ADFRC_M4A5\Textures\Handguard\adfrc_troy_blk_Co.paa"
		};
	};

class ADFRC_M4A5_Combo_556_14_BLK: ADFRC_M4A5_Troy_556_14
	{
		displayName = "M4A1-AU Combo 5.56MM 14.5 'Combo' (Black)";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_c_145";
		hiddenSelections[] = { "CamoTroy" };
		hiddenSelectionsTextures[] = { 
		"ADF_Weapons\ADFRC_M4A5\Textures\Handguard\adfrc_troy_blk_Co.paa"
		};
	};

class ADFRC_M4A5_Combo_556_14_FDE: ADFRC_M4A5_Troy_556_14
	{
		displayName = "M4A1-AU Combo 5.56MM 14.5 'Combo' (FDE)";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_c_145";
	};
	
class ADFRC_M4A5_Combo_556_10_BLK: ADFRC_M4A5_556_Base
	{
		displayName = "M4A1-AU Combo 5.56MM  11.5 'Combo' (Black)";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_c_105";
		hiddenSelections[] = { "CamoTroy" };
		hiddenSelectionsTextures[] = { 
		"ADF_Weapons\ADFRC_M4A5\Textures\Handguard\adfrc_troy_blk_Co.paa"
		};
		
		author = "Brucey";
		ACE_barrelTwist = 292.1;
		ACE_barrelLength = 292.1;
		recoil = "recoil_spar";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		recoilProne = "assaultRifleBase";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		descriptionShort = "M4A5 Troy Rail<br/>10.5in<br/>Caliber: 5.56";
		inertia = 0.325;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		
		 
		class Library
		{
			libTextDesc = "M4A5-C 10.5";
		};
	};
	
class ADFRC_M4A5_Combo_556_10_FDE: ADFRC_M4A5_Combo_556_10_BLK
	{
		displayName = "M4A1-AU Combo 5.56MM 11.5 'Combo' (FDE)";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_c_105";
		hiddenSelections[] = { "CamoTroy" };
		hiddenSelectionsTextures[] = { 
		"ADF_Weapons\ADFRC_M4A5\Textures\Handguard\adfrc_troy_fde_Co.paa"
		};
		};
	
class ADFRC_M4A5_KAC_556: ADFRC_M4A5_556_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 292.1;
		ACE_barrelLength = 368.3;
		recoil = "recoil_spar";
		recoilProne = "assaultRifleBase";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5";
		descriptionShort = "M4A1-AU Carbine<br/>14.5in<br/>Caliber: 5.56";
		inertia = 0.325;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M4A1-AU Carbine 5.56MM";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		magazines[] = {
			"ADFRC_30Rnd_STANAG"
		};
		
		class Library
		{
			libTextDesc = "M4A5 5.56MM 14.5";
		};
	};
	
class ADFRC_M4A5_KAC_NOFS_556: ADFRC_M4A5_556_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 292.1;
		ACE_barrelLength = 368.3;
		recoil = "recoil_spar";
		recoilProne = "assaultRifleBase";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_NOFS";
		descriptionShort = "M4A1-AU Carbine<br/>14.5in<br/>Caliber: 5.56";
		inertia = 0.325;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M4A1-AU Carbine 5.56MM (No Front Sight)";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		magazines[] = {
			"ADFRC_30Rnd_STANAG"
		};
		
		 
		class Library
		{
			libTextDesc = "M4A5 5.56MM 14.5 (NOFS)";
		};
	};
	
	
class UGL_F;
class ADFRC_M4A5_556_GLBase: Rifle_Base_F
    {
		author = "Brucey";
        scope = 1;
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0125;
		magazineReloadSwitchPhase = 0.48;
		selectionFireAnim = "zasleh";
		inertia = 0.3;
        swayDecaySpeed = 1.25;
		handAnim[] = {"OFP2_ManSkeleton","A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 0; 
		ace_overheating_barrelMass = 3;
		ace_railHeightAboveBore = 1.8;  // Distance between center of bore and rail in centimeters
		
		cartridgepos = "nabojnicestart"; //remember this? Make sure it’s named
//right
		cartridgevel = "nabojniceend"; //the “end” is the velocity as I
//mentioned earlier 
		
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		
		class EGLM: UGL_F
		{
			displayName = $STR_A3_A_CfgWeapons_arifle_AUG_GL_base_F_EGLM0;
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			discreteDistance[] =
			{
				50,
				100,
				150,
				200,
				250
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadKatibaUGL;
			reloadMagazineSound[] = {"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_UGL_reload",db-2,1,10};
		};
		muzzles[] =
		{
			this,
			EGLM
		};
        
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
		
		magazines[] = {
			"ADFRC_30Rnd_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};


        dexterity = 1.3;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.446684,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",0.562341,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",0.562341,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",0.562341,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.446684,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.446684,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.446684,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",0.562341,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",0.562341,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",0.562341,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",0.562341,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",0.562341,1,15};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",0.70794576,1,20};
		soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",0.70794576,1,20};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.70794576,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.70794576,1,20};
		modes[] = {"Single","FullAuto"};
	
		   class WeaponSlotsInfo {
			mass = 105;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
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
			class SilencedSound: BaseSoundModeType {
			SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType {
			soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
						
dispersion = 0.000581776;
maxRange = 250;
maxRangeProbab = 0.2;
midRange = 150;
midRangeProbab = 0.7;
minRange = 2;
minRangeProbab = 0.5;
reloadTime = 0.07;
};

class FullAuto: Mode_FullAuto {
aiRateOfFire = 1e-06;
class BaseSoundModeType {
};
dispersion = 0.000581776;
maxRange = 30;
maxRangeProbab = 0.05;
midRange = 15;
midRangeProbab = 0.7;
minRange = 2;
minRangeProbab = 0.9;
reloadTime = 0.07;
class SilencedSound: BaseSoundModeType {
SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
};
class StandardSound: BaseSoundModeType {
soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
};
};
};

class ADFRC_M4A5_KAC_M203_556: ADFRC_M4A5_556_GLBase
	{
		author = "Brucey";
		ACE_barrelTwist = 292.1;
		ACE_barrelLength = 368.3;
		recoil = "recoil_spar";
		recoilProne = "assaultRifleBase";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "adf_weapons\adfrc_m4a5\adfrc_m4A5_m203";
		descriptionShort = "M4A1-AU Carbine<br/>14.5in<br/>Caliber: 5.56";
		inertia = 0.325;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "M4A1-AU Carbine M203 5.56MM 14.5";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		magazines[] = {
			"ADFRC_30Rnd_STANAG"
		};
		
		class Library
		{
			libTextDesc = "M4A5 5.56MM M203 14.5";
		};
	};
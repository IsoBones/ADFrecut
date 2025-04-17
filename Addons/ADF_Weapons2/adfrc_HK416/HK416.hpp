	class Rifle_Base_F;
	class ADFRC_HK416_556_Base: Rifle_Base_F
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
			mass = 83;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
            {
			iconPinpoint="center";
			iconPosition[] = {0.016,0.41};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.5,0.25};
			iconScale  = 0.17;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.211,0.719};
			iconScale  = 0.25;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.248,0.414};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
			class compatibleItems: compatibleItems {
			ADFRC_PEQ15_M4_Top_BLK_IRL = 1;
			ADFRC_PEQ15_M4_Top_BLK_IRT = 1;
			ADFRC_PEQ15_M4_Top_FDE_IRL = 1;
			ADFRC_PEQ15_M4_Top_FDE_IRT = 1;
			};
			};
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

class ADFRC_HK416_556_115: ADFRC_HK416_556_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 294;
		recoil = "recoil_spar";
		recoilProne = "recoil_spar";
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "adf_weapons2\adfrc_hk416\adfrc_Hk416";
		descriptionShort = "HK416 <br/>11.5in<br/>Caliber: 5.56";
		inertia = 0.225;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "ADF_Weapons2\adfrc_HK416\UI\adfrc_416_CA.paa";
		UiPicture = "ADF_Weapons2\adfrc_HK416\UI\adfrc_416_CA.paa";
		displayName = "HK416 11.5 5.56 Carbine";
		discretedistance[] = { 100, 200, 300, 400 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		 
		class Library
		{
			libTextDesc = "HK416";
		};
	};
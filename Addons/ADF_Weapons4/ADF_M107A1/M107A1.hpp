//BASE
	class ADFRC_M107A1_Base: Rifle_Base_F
    {
		author = "Brucey";
        scope = protected;
		magazines[] = {};
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0125;
		recoil = "recoil_ADFRC_AM_Semi";
		magazineReloadSwitchPhase = 0.3;
		selectionFireAnim = "zasleh";
        swayDecaySpeed = 1.25;
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};
		ace_overheating_mrbs = 800; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
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
        descriptionShort = "Sniper Rifle <br/>Caliber: .50BMG";


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
	
		    class WeaponSlotsInfo {
			mass = 130;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_50
            {
			iconPinpoint="center";
			iconPosition[] = {-0.01,0.402};
			iconScale  = 0.25;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.619,0.289};
			iconScale  = 0.15;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
        };
       class Single : Mode_SemiAuto
{			autofire = 0;
			sounds[] = { "StandardSound", "SilencedSound" };
			
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"ADFRC_M107A1_Shot_SoundSet", "GM6Lynx_Tail_SoundSet", "GM6Lynx_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"ADFRC_M107A1_Suppressed_SoundSet", "DMR01_silencerTail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 0.28;
			dispersion = 0.000436332;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};

reloadaction = "ADFRC_GestureReloadM107";
magazineReloadSwitchPhase = 0.5;
drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",0.56234133,1,15};
reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",0.251189,1,10};

};


	//50 Cal - 29 inch
	class ADFRC_M107A1_50_29_FDE : ADFRC_M107A1_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 381;
		ACE_barrelLength = 737;
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		magazines[] = {
			"adfrc_10rnd_50_M1022_LR"
		};
		magazineWell[] = {"CBA_50BMG_M107"};
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "ADF_Weapons4\ADF_M107A1\ADFRC_M107A1";
		descriptionShort = "Barrett M107A1 <br/>FDE<br/>Caliber: 50BMG";
		inertia = 0.95;
		scope=1;
		scopeWeapon=1;
		scopeArsenal = 1;
		//picture = "\mss\MSS_LRAP\AX_Mk3\data\ui\Gear_MSS_AXSR_27_BLK";
		//UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Barrett M107A1 50BMG";
		discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		hiddenSelections[] = { "Camo1", "Camo2" };
		hiddenSelectionsTextures[] = { "\ADF_Weapons4\ADF_M107A1\Textures\ADFRC_M107A1_1_FDE_CO.paa", "\ADF_Weapons4\ADF_M107A1\Textures\ADFRC_M107A1_2_FDE_CO.paa" };
		 
		class Library
		{
			libTextDesc = "M107A1 50BMG";
		};
	};
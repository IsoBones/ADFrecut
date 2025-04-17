//BASE
	class ADFRC_SR98_Base: Rifle_Base_F
    {
		author = "Brucey";
        scope = protected;
		magazines[] = {};
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.04;
		recoil = "recoil_dmr_06";
		magazineReloadSwitchPhase = 0.3;
		selectionFireAnim = "zasleh";
        swayDecaySpeed = 1.25;
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};
		ace_overheating_mrbs = 250; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 0; 
		ace_overheating_barrelMass = 3;
		ace_railHeightAboveBore = 3;  // Distance between center of bore and rail in centimeters
		
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
        descriptionShort = "Sniper Rifle <br/>Caliber: 7.62x51";


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
		inertia = 0.8;
	
		    class WeaponSlotsInfo {
			mass = 174;
			allowedSlots[] = {901};
            class CowsSlot : asdg_OpticRail1913 //Top / optic slot
            {
			};
			class UnderBarrelSlot : asdg_UnderSlot_AI_Bipod //Top / optic slot
            {
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			};
			class MuzzleSlot : asdg_MuzzleSlot_762
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
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 1.6;
			dispersion = 0.000349066;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};

///////////BOLT ACTION ANIMATION
class Eventhandlers: Eventhandlers {
        // Bolt action EH is in it's own class for better mod cross compatibility
        class ADFRC_BoltAction {
            fired = "[_this select 0,_this select 1,_this select 2] call ADFRC_fnc_boltAction;";
        };
		};
		
    // your bolt action reload sound - {sound path, volume, pitch, distance}
    // it important to include file extension!
    // while engine assumes .wss extension for all sounds which doesn't specify, this one is other
    ADFRC_boltActionSound[] ={"ADF_Weapons\core\Anims\Gestures\bolt.wss", 1.42, 1, 20};
    // your bolt action animation [gesture]
    ADFRC_boltActionAnim = "ADFRC_GestureRechamberM2010";
	ADFRC_boltActionCasePos[]		= {-0.02,-0.15,0.01};
	ADFRC_boltActionCaseDir[]		= {0.3,-0.15,0.25};
	ADFRC_boltActionCaseDelay		= 0.25;
	ADFRC_boltActionCaseSelection	= "leftHand";
    
};

	
	class ADFRC_SR98: ADFRC_SR98_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 660;
		deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfoldedsoundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		magazines[] = {
			"ADFRC_Mag_10rd_SR98_BallF1"
		};
		magazineWell[] = {"CBA_762x51_AICS"};
		cursor = "srifle";
		cursorAim = "EmptyCursor";
		model = "ADF_Weapons4\adfrc_SR98\ADFRC_SR98";
		descriptionShort = "Accuracy International SR98 <br/>Caliber: 7.62x51";
		inertia = 0.6;
		scope=1;
		scopeWeapon=1;
		scopeArsenal = 1;
		picture = "\A3\Weapons_F\LongRangeRifles\M320\Data\UI\gear_M320_LRR_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		displayName = "AI SR98 7.62x51";
		discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
		discretedistanceinitindex = 2;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		 
		class Library
		{
			libTextDesc = "SR98 7.62x51";
		};
	};
class Pistol_Base_F;
	class ADFRC_G19_Base : Pistol_Base_F
    {
		author = "Brucey";
        scope = protected;
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0125;
		recoil = "recoil_pistol_p07";
		recoilProne = "recoil_pistol_p07";
		magazineReloadSwitchPhase = 0.4;
		selectionFireAnim = "zasleh";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2",1.0,1,30};
        swayDecaySpeed = 1.25;
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};
		ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 0; 
		ace_overheating_barrelMass = 3;
		ace_railHeightAboveBore = 2.8;  // Distance between center of bore and rail in centimeters
		
		cartridgepos = "nabojnicestart"; //remember this? Make sure it’s named
//right
		cartridgevel = "nabojniceend"; 
        
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Handgun <br/>Caliber: 9mm";


        bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.501187, 1, 15};
               bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.501187, 1, 15};
               bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.501187, 1, 15};
               bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.501187, 1, 15};
               bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.398107, 1, 15};
               bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.398107, 1, 15};
               bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.398107, 1, 15};
               bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.398107, 1, 15};
               bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.223872, 1, 15};
               bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.223872, 1, 15};
               bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.223872, 1, 15};
               bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.223872, 1, 15};
               soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
			   
			   modes[] = {"single"};
			   inertia = 0.15;
			   
			class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound", "SilencedSound" };
			
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"P07_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = {"P07_silencerShot_SoundSet","P07_silencerTail_SoundSet","P07_silencerInteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 0.1;
			dispersion = 0.0025;
			maxrange = 100;
			maxrangeprobab = 0.05;
			midrange = 50;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 50;
};
};

	class ADFRC_G19_G5_MOS_9 : ADFRC_G19_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 250;
		ACE_barrelLength = 102;
		magazines[] = {
			"ADFRC_15rnd_9MM_BALL_G19"
		};
		magazineWell[] = {"CBA_9x19_Glock_Cpct","CBA_9x19_Glock_Full"};
		model = "ADF_Weapons\adfrc_g19\G19";
		descriptionShort = "Glock 19 <br/> Gen5 MOS<br/>Caliber: 9MM";
		inertia = 0.75;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "ADF_Weapons\adfrc_g19\data\ui\Gear_ADFRC_G19";
		UiPicture = "ADF_Weapons\adfrc_g19\data\ui\Gear_ADFRC_G19_PreviewUI";
		displayName = "Glock 19 Gen 5 MOS";
		discretedistance[] = { 25 };
		discretedistanceinitindex = 1;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		
		class WeaponSlotsInfo {
			mass = 13.125;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_9MM
           {
	iconPinpoint="center";
	iconPosition[] = {0.148,0.328};
	iconScale  = 0.34;
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
};
            class CowsSlot : asdg_PistolOpticMount //Top / optic slot
            {
	iconPinpoint="center";
	iconPosition[] = {0.65,0.25};
	iconScale  = 0.07;
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
};
            class PointerSlot : asdg_PistolUnderRail //side slot
          {
	iconPinpoint="center";
	iconPosition[] = {0.396,0.516};
	iconScale  = 0.25;
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
};
        };
		 
		class Library
		{
			libTextDesc = "G19 9mm";
		};
	};
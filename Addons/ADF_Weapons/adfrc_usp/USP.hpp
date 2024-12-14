class Pistol_Base_F;
	class ADFRC_USP_Base : Pistol_Base_F
    {
		author = "Brucey";
        scope = protected;
		muzzleend = "konec hlavne"; //Muzzle end
		muzzlepos = "usti hlavne";
        maxRecoilSway = 0.0115;
		recoil = "recoil_pistol_p07";
		recoilProne = "recoil_pistol_p07";
		magazineReloadSwitchPhase = 0.4;
		selectionFireAnim = "zasleh";
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
			   inertia = 0.75;	
		
		reloadAction = "MPP_Fast_Reload";
		reloadSound[] = {"ADF_Weapons\core\animsounds\MPP_Fast_Reload.ogg",2,1,30};
		reloadMagazineSound[] = {"ADF_Weapons\core\animsounds\MPP_Fast_Reload.ogg",2,1,30};
			   
			class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound", "SilencedSound" };
			
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"4Five_Shot_SoundSet","P07_Tail_SoundSet","P07_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = {"4Five_silencerShot_SoundSet","P07_silencerTail_SoundSet","P07_silencerInteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 0.12;
			dispersion = 0.0029;
			maxrange = 100;
			maxrangeprobab = 0.05;
			midrange = 50;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 40;
};
};

class ADFRC_USP : ADFRC_USP_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 124;
		magazines[] = {
			"ADFRC_15rnd_9MM_BALL_USP"
		};
		magazineWell[] = {"CBA_9x19_USP"};
		model = "ADF_Weapons\ADFRC_USP\ADFRC_USP";
		descriptionShort = "HK <br/> USP <br/>Caliber: 9MM";
		inertia = 0.9;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "ADF_Weapons\ADFRC_USP\data\ui\gear_ADFRC_USP_ca";
		UiPicture = "ADF_Weapons\ADFRC_USP\data\ui\gear_ADFRC_USP_ca";
		displayName = "HK USP 9mm";
		discretedistance[] = { 25 };
		discretedistanceinitindex = 1;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		
		class WeaponSlotsInfo {
			mass = 16.875;
			allowedSlots[] = {901};
		class Library
		{
			libTextDesc = "HK USP";
		};
	};
};
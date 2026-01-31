//BASE
	
	class ADFRC_AXSR_Base: ADFRC_LRAP_Base
	{
		handAnim[] = {"OFP2_ManSkeleton","adf_weapons4\adfrc_axsr\data\AX_SR_handanim.rtm"};
	};
	//308s
	class ADFRC_AXSR_762_DE : ADFRC_AXSR_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 254;
		ACE_barrelLength = 508;
		ace_railHeightAboveBore = 3.3;
		magazines[] = {
			"ADFRC_10rnd_762_Mk316Mod0_AXSR"
		};
		magazineWell[] = {"MSS_AXSR_762"};
		recoil = "recoil_ADFRC_LRAP_3";
		model = "adf_weapons4\adfrc_axsr\ADFRC_AXSR_20";
		descriptionShort = "Accuracy International AX-SR DE <br/>Covert Rifle<br/>Caliber: 7.62x51";
		inertia = 0.75;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_S_FDE_CA";
		UiPicture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_S_FDE_CA";
		displayName = "AX-SR DE 7.62x51";
		
		class WeaponSlotsInfo {
			mass = 132;
			allowedSlots[] = {901};
			class MuzzleSlot : asdg_MuzzleSlot_338
            {
		iconPinpoint="center";
		iconPosition[] = {0.18,0.418};
		iconScale  = 0.18;
		iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
		};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
		iconPinpoint="center";
		iconPosition[] = {0.572,0.332};
		iconScale  = 0.13;
		iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
		iconPinpoint="center";
		iconPosition[] = {0.314,0.59};
		iconScale  = 0.13;
		iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
		iconPinpoint="center";
		iconPosition[] = {0.311,0.418};
		iconScale  = 0.16;
		iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
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
				soundSetShot[] = {"ADFRC_LRAP_308_Shot_SoundSet", "DMR01_Tail_SoundSet", "DMR01_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"ADFRC_LRAP_308_Suppressed_SoundSet", "DMR01_silencerTail_SoundSet","DMR01_silencerInteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 1.5;
			dispersion = 0.0001890773;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};
			
		class Library
		{
			libTextDesc = "Accuracy International AX-SR";
		};
	};
	
	//338LMs
	class ADFRC_AXSR_338LM_DE : ADFRC_AXSR_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 236.22;
		ACE_barrelLength = 685.8;
		ace_railHeightAboveBore = 3.3;
		magazines[] = {
			"ADFRC_10rnd_338LM_Lap_250_AXSR"
		};
		magazineWell[] = {"ADFRC_AXSR_338LM"};
		recoil = "recoil_ADFRC_LRAP_5";
		model = "adf_weapons4\adfrc_axsr\ADFRC_AXSR_27";
		descriptionShort = "Accuracy International AX-SR DE <br/>Covert Rifle<br/>Caliber: .338LM";
		inertia = 0.9;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_L_FDE_CA";
		UiPicture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_L_FDE_CA";
		displayName = "AX-SR DE .338LM";
		
		class WeaponSlotsInfo {
			mass = 151.8;
			allowedSlots[] = {901};
			class MuzzleSlot : asdg_MuzzleSlot_338
            {
			iconPinpoint="center";
			iconPosition[] = {0.078,0.426};
			iconScale  = 0.18;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.572,0.332};
			iconScale  = 0.13;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";	
			};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.314,0.59};
			iconScale  = 0.13;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";	
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.311,0.418};
			iconScale  = 0.16;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";	
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
				soundSetShot[] = {"ADFRC_LRAP_338_Shot_SoundSet", "GM6Lynx_Tail_SoundSet", "GM6Lynx_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"ADFRC_LRAP_338_Suppressed_SoundSet", "GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 1.5;
			dispersion = 0.000247255;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};
			
		class Library
		{
			libTextDesc = "Accuracy International AX-SR";
		};
	};
	
	//300NM"
	class ADFRC_AXSR_300NM_DE : ADFRC_AXSR_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 685.8;
		ace_railHeightAboveBore = 3.3;
		magazines[] = {
			"ADFRC_10rnd_300NM_M1163_AXSR"
		};
		magazineWell[] = {"ADFRC_AXSR_300NM"};
		recoil = "recoil_ADFRC_LRAP_4";
		model = "adf_weapons4\adfrc_axsr\ADFRC_AXSR_27";
		descriptionShort = "Accuracy International AX-SR DE <br/>Covert Rifle<br/>Caliber: .300NM";
		inertia = 0.85;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_L_FDE_CA";
		UiPicture = "\adf_weapons4\adfrc_axsr\data\ui\Gear_ADFRC_AXSR_L_FDE_CA";
		displayName = "AX-SR DE .300NM";
		
		class WeaponSlotsInfo {
			mass = 147;
			allowedSlots[] = {901};
			class MuzzleSlot : asdg_MuzzleSlot_338
            {
			iconPinpoint="center";
			iconPosition[] = {0.078,0.426};
			iconScale  = 0.18;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
            class CowsSlot : asdg_OpticRail1913_long //Top / optic slot
            {	
			iconPinpoint="center";
			iconPosition[] = {0.572,0.332};
			iconScale  = 0.13;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
	};
			 class UnderBarrelSlot : asdg_UnderSlot //bottom / bipod
            {
			iconPinpoint="center";
			iconPosition[] = {0.314,0.59};
			iconScale  = 0.13;
			iconPicture = "\A3\weapons_f_mark\data\UI\attachment_under.paa";
			};
            class PointerSlot : asdg_FrontSideRail //side slot
            {
			iconPinpoint="center";
			iconPosition[] = {0.311,0.418};
			iconScale  = 0.16;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
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
				soundSetShot[] = {"ADFRC_LRAP_338_Shot_SoundSet", "GM6Lynx_Tail_SoundSet", "GM6Lynx_InteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = {"ADFRC_LRAP_338_Suppressed_SoundSet", "GM6Lynx_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
			};
						
			canshootinwater = 1;
			aiDispersionCoefY = 10;
			aiDispersionCoefX = 8;
			reloadTime = 1.5;
			dispersion = 0.000247255;
			maxrange = 600;
			maxrangeprobab = 0.05;
			midrange = 300;
			midrangeprobab = 0.7;
			minrange = 1;
			minrangeprobab = 0.3;
            airateoffire = 4;
};
			
		class Library
		{
			libTextDesc = "Accuracy International AX-SR";
		};
	};

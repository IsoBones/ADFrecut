/*
- Needs new hand animations
- Needs a GL Holo - not sure where to mount it
- 9 mm SMG variant maybe?
- Needs UI icons
*/

#include "basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "ASDG.hpp"
#include "cfgMagazines.hpp"
class CfgRecoils
{
	class recoil_default;
	// EF88 5.56 mm
	class recoil_aug: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.8,
			0.3,
			0.2
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_556;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_AUG_base_F: Rifle_Base_F
	{
		model = "\adfu_weapon_ef88\AUG_F.p3d";
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_AUG_base_F_Library0;
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"
		};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_AUG_base_F1;
		reloadAction = "GestureReloadMk20";
		magazines[] =
		{
			30Rnd_556x45_AUG_Mag_F,
			30Rnd_556x45_AUG_Mag_Tracer_F
		};
		magazineReloadSwitchPhase = 0.48;
		htMin = 9;
		htMax = 870;
		inertia = 0.4;
		aimTransitionSpeed = 1.1;
		dexterity = 1.6;
		initSpeed = 970;
		recoil = recoil_aug;
		maxZeroing = 1000;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",db-12,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",db-12,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",db-12,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",db-12,1,15};
		soundBullet[] =
		{
			bullet1,1/12,
			bullet2,1/12,
			bullet3,1/12,
			bullet4,1/12,
			bullet5,1/12,
			bullet6,1/12,
			bullet7,1/12,
			bullet8,1/12,
			bullet9,1/12,
			bullet10,1/12,
			bullet11,1/12,
			bullet12,1/12
		};
		drySound[] = {"\adfu_weapon_ef88\Data\Sounds\AUG_dry",db-2,1,10};
		reloadMagazineSound[] = {"\adfu_weapon_ef88\Data\Sounds\AUG_reload",db0,1,10};
		changeFiremodeSound[] = {"",db0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] =
				{
					0,      // X
					0.38    // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
			mass = 80;
		};
		modes[] =
		{
			FullAuto,
			Single,
			single_medium_optics1,
			single_medium_optics2,
			fullauto_medium
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.088;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.088;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
				};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = false;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
	  	};
	};
	class arifle_AUG_GL_base_F: arifle_AUG_base_F
	{
		model = "\adfu_weapon_ef88\AUG_GL_F.p3d";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\adfu_weapon_ef88\Data\AUG_CO.paa",
			"\adfu_weapon_ef88\Data\GL40_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"
		};
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 0.9;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
	    	mass = 100;
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
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadKatibaUGL;
			reloadMagazineSound[] = {"\adfu_weapon_ef88\Data\Sounds\AUG_UGL_reload",db-2,1,10};
		};
		muzzles[] =
		{
			this,
			EGLM
		};
	};
	class arifle_AUG_C_base_F: arifle_AUG_base_F
	{
		model = "\adfu_weapon_ef88\AUG_C_F.p3d";
		inertia = 0.3;
		dexterity = 1.6;
		aimTransitionSpeed = 1.2;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
	    	mass = 65;
	  	};
	};
	class arifle_AUG_black_base_F: arifle_AUG_base_F
	{
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_black_CO.paa"};
	};
	class arifle_AUG_GL_black_base_F: arifle_AUG_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\adfu_weapon_ef88\Data\AUG_black_CO.paa",
			"\adfu_weapon_ef88\Data\GL40_black_CO.paa"
		};
	};
	class arifle_AUG_C_black_base_F: arifle_AUG_C_base_F
	{
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_black_CO.paa"};
	};
	class arifle_AUG_F: arifle_AUG_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88 (Tan)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_F_X_CA.paa";
		baseWeapon = arifle_AUG_F;
	};
	class arifle_AUG_GL_F: arifle_AUG_GL_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88-GL (Tan)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_GL_F_X_CA.paa";
		baseWeapon = arifle_AUG_GL_F;
	};
	class arifle_AUG_C_F: arifle_AUG_C_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88-C (Tan)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_C_F_X_CA.paa";
		baseWeapon = arifle_AUG_C_F;
	};
	class arifle_AUG_black_F: arifle_AUG_black_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88 (Black)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_black_F;
	};
	class arifle_AUG_GL_black_F: arifle_AUG_GL_black_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88-GL (Black)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_GL_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_GL_black_F;
	};
	class arifle_AUG_C_black_F: arifle_AUG_C_black_base_F
	{
		author = "A3 Aegis/Atlas Team | Adapted by ADFRC";
		scope = public;
		displayName = "EF88-C (Black)";
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_C_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_C_black_F;
	};
	#include "presets.hpp"
};
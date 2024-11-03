class CfgPatches
{
	class adfrc_f88sa1
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_F88SA1",
			"ADFRC_F88SA1_gl",
			"ADFRC_F88SA1_elcan",
			"ADFRC_F88SA1_gl_elcan",
			"ADFRC_F88SA1_tag48",
			"ADFRC_F88SA1_gl_ta648",
			"ADFRC_F88SA1_mrco",
			"ADFRC_F88SA1_gl_mrco",
			"ADFRC_F88SA1_hamr",
			"ADFRC_F88SA1_gl_hamr",
			"ADFRC_F88SA1_fg"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFRC_magazines",
			"adfrc_accessories",
			"adfrc_optics"
		};
	};
};
#include "\ADF_Weapons\adfrc_ef88\cfgSoundShaders.hpp"
#include "\ADF_Weapons\adfrc_ef88\cfgSoundSets.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
//////////////////////////////////class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {};
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Binocular;
	class Pistol;
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class ADFRC_F88SA1_base: Rifle_Base_F
	{
		scope=0;
		model="\adf_weapons\adfrc_f88sa1\ADFRC_F88SA1.p3d";
		displayName="F88S-A1 Austeyr";
		picture="\adf_weapons\adfrc_f88sa1\UI\gear_ADFRC_F88SA1_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\adf_weapons\adfrc_f88sa1\anim\f88sa1_steyr_handanim.rtm"
		};
		magazines[]=
		{
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug_TR",
			"ADFRC_30Rnd_aug_TY",
			"ADFRC_30Rnd_aug_TG",
			"ADFRC_30Rnd_aug_IR",
			"ADFRC_30Rnd_aug_mixed"
		};
		descriptionShort="5.56mm F88 Austeyr Assault Rifle";
		reloadMagazineSound[]=
		{
			"\adf_weapons\adfrc_f88sa1\sound\F88_Reload",
			0.85000002,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"\adf_weapons\adfrc_f88sa1\sound\mode_click6",
			0.56234133,
			1,
			30
		};
		class Library
		{
			libTextDesc="5.56mm F88 Austeyr Assault Rifle";
		};
		reloadAction="GestureReloadMk20";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		discreteDistance[]={50,100,200,300,400};
		discreteDistanceInitIndex=2;
		dexterity=1.8;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
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
			aidispersioncoefx=1.4;
			aidispersioncoefy=1.7;
			airateoffire=2;
			airateoffiredistance=500;
			artillerycharge=1;
			artillerydispersion=1;
			autofire=0;
			burst=1;
			canshootinwater=0;
			dispersion=0.00092999998;
			displayname="Single";
			ffcount=1;
			fffrequency=11;
			ffmagnitude=0.5;
			flash="gunfire";
			flashsize=0.1;
			maxrange=500;
			maxrangeprobab=0.2;
			midrange=250;
			midrangeprobab=0.69999999;
			minrange=2;
			minrangeprobab=0.30000001;
			multiplier=1;
			recoil="recoil_single_sdar";
			recoilprone="recoil_single_prone_sdar";
			reloadtime=0.064999998;
			requiredoptictype=-1;
			showtoplayer=1;
			soundburst=0;
			soundcontinuous=0;
			soundend[]={};
			soundloop[]={};
			texturetype="semi";
			useaction=0;
			useactiontitle="";
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
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
			displayname="Full Auto";
			reloadTime=0.096000001;
			recoil="recoil_auto_sdar";
			recoilProne="recoil_auto_prone_sdar";
			dispersion=0.00092999998;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.0099999998,
			1
		};
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_M",
					"ADFRC_f88_muzzle_snds",
					"ADFRC_f88_muzzle_snds_tan"
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"ADFRC_F88SA1_laser",
					"ADFRC_F88SA1_light"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				effectname="RifleAssaultCloud";
				positionname="Usti hlavne";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class ADFRC_F88SA1: ADFRC_F88SA1_base
	{
		baseWeapon= "F88SA1 Austeyr";
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		adfrc_switch=0;
		adfrc_alternate="ADFRC_F88SA1_fg";
		adfrc_magazine="";
	};
	class ADFRC_F88SA1_gl: ADFRC_F88SA1
	{
		scope=2;
		model="\adf_weapons\adfrc_f88sa1\ADFRC_F88SA1_M203.p3d";
		author="$STR_ADFRC_AUTHOR";
		dexterity=1.6799999;
		displayName="F88S-A1 Austeyr M203";
		muzzles[]=
		{
			"this",
			"M203"
		};
		adfrc_switch=0;
		adfrc_alternate="";
		adfrc_magazine="";
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\adf_weapons\adfrc_f88sa1\anim\f88sa1_steyr_m203_handanim.rtm"
		};
		class M203: UGL_F
		{
			displayName="M203";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell"
			};
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"adf_weapons\adfrc_f88sa1\sound\f88_m203",
					4,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
	};
	class ADFRC_F88SA1_elcan: ADFRC_F88SA1
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_F88SA1_gl_elcan: ADFRC_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_elcan_c79";
			};
		};
	};
	class ADFRC_F88SA1_tag48: ADFRC_F88SA1
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648";
			};
		};
	};
	class ADFRC_F88SA1_gl_ta648: ADFRC_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648";
			};
		};
	};
	class ADFRC_F88SA1_mrco: ADFRC_F88SA1
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class ADFRC_F88SA1_gl_mrco: ADFRC_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class ADFRC_F88SA1_hamr: ADFRC_F88SA1
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
		};
	};
	class ADFRC_F88SA1_gl_hamr: ADFRC_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
		};
	};
	class ADFRC_F88SA1_swarovski_laser: ADFRC_F88SA1
	{
		scope=1;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_swarovski_optic";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="ADFRC_F88SA1_laser";
			};
		};
	};
	class ADFRC_F88SA1_gl_eotech_laser: ADFRC_F88SA1_gl
	{
		scope=1;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_eotech552";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="ADFRC_F88SA1_laser";
			};
		};
	};
	class ADFRC_F88SA1_eotech_laser: ADFRC_F88SA1
	{
		scope=1;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_eotech552";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="ADFRC_F88SA1_laser";
			};
		};
	};
	class ADFRC_F88SA1_ta648_laser: ADFRC_F88SA1
	{
		scope=1;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_acog_ta648";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="ADFRC_F88SA1_laser";
			};
		};
	};
};

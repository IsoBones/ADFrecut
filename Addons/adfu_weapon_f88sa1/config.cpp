class CfgPatches
{
	class ADFU_weapon_f88sa1
	{
		units[]={};
		weapons[]=
		{
			"ADFU_F88SA1",
			"ADFU_F88SA1_gl",
			"ADFU_F88SA1_elcan",
			"ADFU_F88SA1_gl_elcan",
			"ADFU_F88SA1_tag48",
			"ADFU_F88SA1_gl_ta648",
			"ADFU_F88SA1_mrco",
			"ADFU_F88SA1_gl_mrco",
			"ADFU_F88SA1_hamr",
			"ADFU_F88SA1_gl_hamr",
			"ADFU_F88SA1_fg"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_magazines",
			"ADFU_weapon_accessories",
			"ADFU_weapon_optics"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail1913;
class CowsSlot_ADFU_Styer;
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
	class ADFU_F88SA1_base: Rifle_Base_F
	{
		scope=0;
		model="\ADFU_weapon_f88sa1\ADFU_F88SA1.p3d";
		displayName="F88S-A1 Austeyr";
		picture="\ADFU_weapon_f88sa1\UI\gear_ADFU_F88SA1_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_f88sa1\anim\f88sa1_steyr_handanim.rtm"
		};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug_TR",
			"ADFU_30Rnd_aug_TY",
			"ADFU_30Rnd_aug_TG",
			"ADFU_30Rnd_aug_IR",
			"ADFU_30Rnd_aug_mixed"
		};
		descriptionShort="5.56mm F88 Austeyr Assault Rifle";
		reloadMagazineSound[]=
		{
			"\ADFU_weapon_f88sa1\sound\F88_Reload",
			0.85000002,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"\ADFU_weapon_f88sa1\sound\mode_click6",
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
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					"db-12",
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					"db-12",
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				begin2[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot2",
					"db0",
					26.5,
					900
				};
				begin3[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				begin4[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot2",
					"db0",
					26.5,
					900
				};
				begin5[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\ADFU_weapon_f88sa1\sound\f88_snds_1",
					"db0",
					1,
					200
				};
				begin2[]=
				{
					"\ADFU_weapon_f88sa1\sound\f88_snds_2",
					"db0",
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
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
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					"db-12",
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					"db-12",
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				begin2[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot2",
					"db0",
					26.5,
					900
				};
				begin3[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				begin4[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot2",
					"db0",
					26.5,
					900
				};
				begin5[]=
				{
					"\ADFU_weapon_f88sa1\sound\F88monoshot1",
					"db0",
					26.5,
					900
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\ADFU_weapon_f88sa1\sound\f88_snds_1",
					"db0",
					1,
					200
				};
				begin2[]=
				{
					"\ADFU_weapon_f88sa1\sound\f88_snds_2",
					"db0",
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
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
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_M",
					"ADFU_f88_muzzle_snds",
					"ADFU_f88_muzzle_snds_tan"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"ADFU_F88SA1_laser",
					"ADFU_F88SA1_light"
				};
			};
			class CowsSlot: CowsSlot_ADFU_Styer
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
	class ADFU_F88SA1: ADFU_F88SA1_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_F88SA1_fg";
		ADFU_weapon_magazine="";
	};
	class ADFU_F88SA1_fg: ADFU_F88SA1_base
	{
		scope=1;
		model="\ADFU_weapon_f88sa1\ADFU_F88SA1_FG.p3d";
		author="$STR_ADFU_AUTHOR";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="ADFU_F88SA1";
		ADFU_weapon_magazine="";
	};
	class ADFU_F88SA1_gl: ADFU_F88SA1
	{
		scope=2;
		model="\ADFU_weapon_f88sa1\ADFU_F88SA1_M203.p3d";
		author="$STR_ADFU_AUTHOR";
		dexterity=1.6799999;
		displayName="F88S-A1 Austeyr M203";
		muzzles[]=
		{
			"this",
			"M203"
		};
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="";
		ADFU_weapon_magazine="";
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_f88sa1\anim\f88sa1_steyr_m203_handanim.rtm"
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
					"ADFU_weapon_f88sa1\sound\f88_m203",
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
	class ADFU_F88SA1_elcan: ADFU_F88SA1
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_F88SA1_gl_elcan: ADFU_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_F88SA1_tag48: ADFU_F88SA1
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648";
			};
		};
	};
	class ADFU_F88SA1_gl_ta648: ADFU_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648";
			};
		};
	};
	class ADFU_F88SA1_mrco: ADFU_F88SA1
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class ADFU_F88SA1_gl_mrco: ADFU_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class ADFU_F88SA1_hamr: ADFU_F88SA1
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
		};
	};
	class ADFU_F88SA1_gl_hamr: ADFU_F88SA1_gl
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
		};
	};
};

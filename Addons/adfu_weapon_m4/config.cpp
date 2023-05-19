class CfgPatches
{
	class ADFU_weapon_m4
	{
		units[]={};
		weapons[]=
		{
			"ADFU_m4a5",
			"ADFU_m4a5_afg",
			"ADFU_m4a5_vfg",
			"ADFU_m4a5_m203",
			"ADFU_m4a5_m203fg",
			"ADFU_m4a5_des",
			"ADFU_m4a5_afg_des",
			"ADFU_m4a5_vfg_des",
			"ADFU_m4a5_m203_des",
			"ADFU_m4a5_m203fg_des",
			"ADFU_m4a5_des2",
			"ADFU_m4a5_afg_des2",
			"ADFU_m4a5_vfg_des2",
			"ADFU_m4a5_m203_des2",
			"ADFU_m4a5_m203fg_des2",
			"ADFU_m4a5_wdl",
			"ADFU_m4a5_afg_wdl",
			"ADFU_m4a5_vfg_wdl",
			"ADFU_m4a5_m203_wdl",
			"ADFU_m4a5_m203fg_wdl",
			"ADFU_m4a5_wdl2",
			"ADFU_m4a5_afg_wdl2",
			"ADFU_m4a5_vfg_wdl2",
			"ADFU_m4a5_m203_wdl2",
			"ADFU_m4a5_m203fg_wdl2",
			"ADFU_m4_eotech",
			"ADFU_m4_ta31",
			"ADFU_m4a5_afg_eotech",
			"ADFU_m4a5_afg_eotech_sd",
			"ADFU_m4a5_afg_ta31",
			"ADFU_m4a5_vfg_eotech",
			"ADFU_m4a5_vfg_elcan",
			"ADFU_m4a5_m203_eotechX3",
			"ADFU_m4a5_m203_ta31",
			"ADFU_m4a5_m203fg_eotechX3",
			"ADFU_m4a5_m203fg_eotechX3_sd",
			"ADFU_m4a5_m203fg_elcan",
			"ADFU_m4_des_eotech",
			"ADFU_m4_des_ta31",
			"ADFU_m4a5_afg_des_eotech",
			"ADFU_m4a5_afg_des_eotech_sd",
			"ADFU_m4a5_afg_des_ta31",
			"ADFU_m4a5_vfg_des_eotech",
			"ADFU_m4a5_vfg_des_elcan",
			"ADFU_m4a5_m203_des_eotechX3",
			"ADFU_m4a5_m203_des_ta31",
			"ADFU_m4a5_m203fg_des_eotechX3",
			"ADFU_m4a5_m203fg_des_eotechX3_sd",
			"ADFU_m4a5_m203fg_des_elcan",
			"ADFU_m4_wdl_eotech",
			"ADFU_m4_wdl_ta31",
			"ADFU_m4a5_afg_wdl_eotech",
			"ADFU_m4a5_afg_wdl_eotech_sd",
			"ADFU_m4a5_afg_wdl_ta31",
			"ADFU_m4a5_vfg_wdl_eotech",
			"ADFU_m4a5_vfg_wdl_elcan",
			"ADFU_m4a5_m203_wdl_eotechX3",
			"ADFU_m4a5_m203_wdl_ta31",
			"ADFU_m4a5_m203fg_wdl_eotechX3",
			"ADFU_m4a5_m203fg_wdl_eotechX3_sd",
			"ADFU_m4a5_m203fg_wdl_elcan",
			"ADFU_m4a5_base"
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
class MuzzleSlot;
class CowsSlot_ADFU;
class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	class ADFU_m4a5_base: Rifle_Base_F
	{
		scope=1;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		dexterity=1.6799999;
		displayName="M4A5 Carbine";
		picture="\ADFU_weapon_m4\UI\gear_m4_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG_TR",
			"ADFU_30Rnd_STANAG_TG",
			"ADFU_30Rnd_STANAG_TY",
			"ADFU_30Rnd_STANAG_IR",
			"ADFU_30Rnd_STANAG_mixed"
		};
		reloadAction="GestureReloadEBR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_m4\anim\ADFU_m4.rtm"
		};
		reloadMagazineSound[]=
		{
			"\ADFU_weapon_m4\sound\m4_Reload",
			0.85000002,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"\ADFU_weapon_m4\sound\firemode_selector",
			0.56234133,
			1,
			30
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Assault Carbine<br/>Caliber: 5.56x45 NATO";
		discreteDistance[]={50,100,200,300,400};
		discreteDistanceInitIndex=2;
		hasBipod=0;
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
			weaponSoundEffect="DefaultRifle";
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
					"\ADFU_weapon_m4\sound\M4_S1",
					"db3",
					3.25,
					900
				};
				begin2[]=
				{
					"\ADFU_weapon_m4\sound\M4_S2",
					"db3",
					3.25,
					900
				};
				begin3[]=
				{
					"\ADFU_weapon_m4\sound\M4_S3",
					"db3",
					3.25,
					900
				};
				begin4[]=
				{
					"\ADFU_weapon_m4\sound\M4_S4",
					"db3",
					3.25,
					900
				};
				begin5[]=
				{
					"\ADFU_weapon_m4\sound\M4_S1",
					"db3",
					3.25,
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
					"\ADFU_weapon_m4\sound\m4_snds_1",
					"db0",
					1,
					200
				};
				begin2[]=
				{
					"\ADFU_weapon_m4\sound\m4_snds_2",
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
			sound[]=
			{
				"",
				10,
				1
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
			soundbeginwater[]=
			{
				"sound",
				1
			};
			soundburst=0;
			soundclosure[]=
			{
				"closure1",
				0.5,
				"closure2",
				0.5
			};
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
					"\ADFU_weapon_m4\sound\M4_A1",
					"db3",
					3.25,
					900
				};
				begin2[]=
				{
					"\ADFU_weapon_m4\sound\M4_A2",
					"db3",
					3.25,
					900
				};
				begin3[]=
				{
					"\ADFU_weapon_m4\sound\M4_A3",
					"db3",
					3.25,
					900
				};
				begin4[]=
				{
					"\ADFU_weapon_m4\sound\M4_A4",
					"db3",
					3.25,
					900
				};
				begin5[]=
				{
					"\ADFU_weapon_m4\sound\M4_A1",
					"db3",
					3.25,
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
					"\ADFU_weapon_m4\sound\m4_snds_1",
					"db0",
					1,
					200
				};
				begin2[]=
				{
					"\ADFU_weapon_m4\sound\m4_snds_2",
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
			reloadTime=0.079499997;
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
		class Library
		{
			libTextDesc="5.56mm Assault Rifle";
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
					"ADFU_f88_muzzle_snds",
					"ADFU_f88_muzzle_snds_tan",
					"ADFU_m4a5_muzzle_snds",
					"ADFU_m4a5_muzzle_snds_tan",
					"ADFU_m4a5_muzzle_snds_wdl"
				};
			};
			class PointerSlot: PointerSlot
			{
			};
			class CowsSlot: CowsSlot_ADFU
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
	class ADFU_m4a5: ADFU_m4a5_base
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		displayName="M4A5 Carbine (Black)";
		picture="\ADFU_weapon_m4\UI\gear_m4_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_m4a5_afg: ADFU_m4a5_base
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4_AFG.p3d";
		displayName="M4A5 Angled Grip (Black)";
		picture="\ADFU_weapon_m4\UI\gear_m4_afg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_m4\anim\ADFU_m4_afg.rtm"
		};
	};
	class ADFU_m4a5_vfg: ADFU_m4a5_base
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4_VFG.p3d";
		displayName="M4A5 Vertical Grip (Black)";
		picture="\ADFU_weapon_m4\UI\gear_m4_vfg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_m4\anim\ADFU_m4_vfg.rtm"
		};
	};
	class ADFU_m4a5_m203: ADFU_m4a5_base
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4_M203.p3d";
		displayName="M4A5 M203 (Black)";
		picture="\ADFU_weapon_m4\UI\gear_m4_m203_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_m4\anim\ADFU_m4gl.rtm"
		};
		muzzles[]=
		{
			"this",
			"M203"
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
					"ADFU_weapon_m4\sound\m4_m203",
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
	class ADFU_m4a5_m203fg: ADFU_m4a5_m203
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4_M203FG.p3d";
		displayName="M4A5 M203 Grip (Black)";
		picture="\ADFU_weapon_m4\UI\gear_m4_m203fg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"ADFU_weapon_m4\anim\ADFU_m4_glhg.rtm"
		};
	};
	class ADFU_m4a5_des: ADFU_m4a5
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		displayName="M4A5 Carbine (Desert)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_co.paa"
		};
	};
	class ADFU_m4a5_afg_des: ADFU_m4a5_afg
	{
		scope=2;
		displayName="M4A5 Angled Grip (Desert)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_afg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_grips_des_co.paa"
		};
	};
	class ADFU_m4a5_vfg_des: ADFU_m4a5_vfg
	{
		scope=2;
		displayName="M4A5 Vertical Grip (Desert)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_vfg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_grips_des_co.paa"
		};
	};
	class ADFU_m4a5_m203_des: ADFU_m4a5_m203
	{
		scope=2;
		displayName="M4A5 M203 (Desert)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_m203_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_m203_des_co.paa"
		};
	};
	class ADFU_m4a5_m203fg_des: ADFU_m4a5_m203fg
	{
		scope=2;
		displayName="M4A5 M203 Grip (Desert)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_m203fg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_m203_des_co.paa"
		};
	};
	class ADFU_m4a5_des2: ADFU_m4a5
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		displayName="M4A5 Carbine (Desert 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_sk_co.paa"
		};
	};
	class ADFU_m4a5_afg_des2: ADFU_m4a5_afg
	{
		scope=2;
		displayName="M4A5 Angled Grip (Desert 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_afg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_grips_des_sk_co.paa"
		};
	};
	class ADFU_m4a5_vfg_des2: ADFU_m4a5_vfg
	{
		scope=2;
		displayName="M4A5 Vertical Grip (Desert 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_vfg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_grips_des_sk_co.paa"
		};
	};
	class ADFU_m4a5_m203_des2: ADFU_m4a5_m203
	{
		scope=2;
		displayName="M4A5 M203 (Desert 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_m203_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_m203_des_sk_co.paa"
		};
	};
	class ADFU_m4a5_m203fg_des2: ADFU_m4a5_m203fg
	{
		scope=2;
		displayName="M4A5 M203 Grip (Desert 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_des_m203fg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\desert\ADFU_m4_main_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_secondary_des_sk_co.paa",
			"\ADFU_weapon_m4\data\desert\ADFU_m4_m203_des_sk_co.paa"
		};
	};
	class ADFU_m4a5_wdl: ADFU_m4a5
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		displayName="M4A5 Carbine (Woodland)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_co.paa"
		};
	};
	class ADFU_m4a5_afg_wdl: ADFU_m4a5_afg
	{
		scope=2;
		displayName="M4A5 Angled Grip (Woodland)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_afg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_grips_wdl_co.paa"
		};
	};
	class ADFU_m4a5_vfg_wdl: ADFU_m4a5_vfg
	{
		scope=2;
		displayName="M4A5 Vertical Grip (Woodland)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_vfg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_grips_wdl_co.paa"
		};
	};
	class ADFU_m4a5_m203_wdl: ADFU_m4a5_m203
	{
		scope=2;
		displayName="M4A5 M203 (Woodland)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_m203_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_m203_wdl_co.paa"
		};
	};
	class ADFU_m4a5_m203fg_wdl: ADFU_m4a5_m203fg
	{
		scope=2;
		displayName="M4A5 M203 Grip (Woodland)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_m203fg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_m203_wdl_co.paa"
		};
	};
	class ADFU_m4a5_wdl2: ADFU_m4a5
	{
		scope=2;
		model="\ADFU_weapon_m4\ADFU_M4.p3d";
		displayName="M4A5 Carbine (Woodland 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_sk_co.paa"
		};
	};
	class ADFU_m4a5_afg_wdl2: ADFU_m4a5_afg
	{
		scope=2;
		displayName="M4A5 Angled Grip (Woodland 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_afg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_grips_wdl_sk_co.paa"
		};
	};
	class ADFU_m4a5_vfg_wdl2: ADFU_m4a5_vfg
	{
		scope=2;
		displayName="M4A5 Vertical Grip (Woodland 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_vfg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"foregrip"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_grips_wdl_sk_co.paa"
		};
	};
	class ADFU_m4a5_m203_wdl2: ADFU_m4a5_m203
	{
		scope=2;
		displayName="M4A5 M203 (Woodland 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_m203_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_m203_wdl_sk_co.paa"
		};
	};
	class ADFU_m4a5_m203fg_wdl2: ADFU_m4a5_m203fg
	{
		scope=2;
		displayName="M4A5 M203 Grip (Woodland 2)";
		picture="\ADFU_weapon_m4\UI\gear_m4_wdl_m203fg_x_ca.paa";
		author="$STR_ADFU_AUTHOR";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"m203"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_main_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_secondary_wdl_sk_co.paa",
			"\ADFU_weapon_m4\data\woodland\ADFU_m4_m203_wdl_sk_co.paa"
		};
	};
	class ADFU_m4_eotech: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4_ta31: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_afg_eotech: ADFU_m4a5_afg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_afg_eotech_sd: ADFU_m4a5_afg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds";
			};
		};
	};
	class ADFU_m4a5_afg_ta31: ADFU_m4a5_afg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_vfg_eotech: ADFU_m4a5_vfg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_vfg_elcan: ADFU_m4a5_vfg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_m4a5_m203_eotechX3: ADFU_m4a5_m203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203_ta31: ADFU_m4a5_m203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_m203fg_eotechX3: ADFU_m4a5_m203fg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203fg_eotechX3_sd: ADFU_m4a5_m203fg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds";
			};
		};
	};
	class ADFU_m4a5_m203fg_elcan: ADFU_m4a5_m203fg
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_m4_des_eotech: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4_des_ta31: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31_t";
			};
		};
	};
	class ADFU_m4a5_afg_des_eotech: ADFU_m4a5_afg_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_afg_des_eotech_sd: ADFU_m4a5_afg_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_tan";
			};
		};
	};
	class ADFU_m4a5_afg_des_ta31: ADFU_m4a5_afg_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31_t";
			};
		};
	};
	class ADFU_m4a5_vfg_des_eotech: ADFU_m4a5_vfg_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_vfg_des_elcan: ADFU_m4a5_vfg_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_m4a5_m203_des_eotechX3: ADFU_m4a5_m203_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203_des_ta31: ADFU_m4a5_m203_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31_t";
			};
		};
	};
	class ADFU_m4a5_m203fg_des_eotechX3: ADFU_m4a5_m203fg_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203fg_des_eotechX3_sd: ADFU_m4a5_m203fg_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_tan";
			};
		};
	};
	class ADFU_m4a5_m203fg_des_elcan: ADFU_m4a5_m203fg_des2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_m4_wdl_eotech: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4_wdl_ta31: ADFU_m4a5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_afg_wdl_eotech: ADFU_m4a5_afg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_afg_wdl_eotech_sd: ADFU_m4a5_afg_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
		};
	};
	class ADFU_m4a5_afg_wdl_ta31: ADFU_m4a5_afg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_vfg_wdl_eotech: ADFU_m4a5_vfg_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
		};
	};
	class ADFU_m4a5_vfg_wdl_elcan: ADFU_m4a5_vfg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_m4a5_m203_wdl_eotechX3: ADFU_m4a5_m203_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203_wdl_ta31: ADFU_m4a5_m203_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31";
			};
		};
	};
	class ADFU_m4a5_m203fg_wdl_eotechX3: ADFU_m4a5_m203fg_wdl
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
		};
	};
	class ADFU_m4a5_m203fg_wdl_eotechX3_sd: ADFU_m4a5_m203fg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XUP";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
		};
	};
	class ADFU_m4a5_m203fg_wdl_elcan: ADFU_m4a5_m203fg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
/* New Classes For SASR*/
	class ADFU_sasr_m4a5: ADFU_m4a5_vfg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XDOWN";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFU_sasr_m4a5gl: ADFU_m4a5_m203fg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552_3XDOWN";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFU_sasr_m4a5_acog: ADFU_m4a5_vfg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31_t";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFU_sasr_m4a5gl_acog: ADFU_m4a5_m203fg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta31_t";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFU_sasr_m4a5gl_eotech: ADFU_m4a5_m203fg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class ADFU_sasr_m4a5_eotech: ADFU_m4a5_vfg_wdl2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_eotech552";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_m4a5_muzzle_snds_wdl";
			};
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};

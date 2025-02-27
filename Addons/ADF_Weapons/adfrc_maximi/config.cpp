class CfgPatches
{
	class ADFRC_maximi
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_maximi",
			"ADFRC_maximi_elcan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFRC_minimi",
			"ADFRC_accessories"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_ADFRC;
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
	class ADFRC_minimi_BASE;
	class ADFRC_maximi: ADFRC_minimi_BASE
	{
		scope=2;
		model="\ADF_Weapons\adfrc_maximi\ADFRC_F89_Maximi.p3d";
		displayName="FN Maximi";
		author="$STR_ADF_AUTHOR";
		picture="\ADF_Weapons\adfrc_maximi\UI\gear_f89_max_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADF_Weapons\adfrc_maximi\anim\f89_max.rtm"
		};
		magazines[]=
		{
			"ADFRC_50Rnd_762_Belt",
			"ADFRC_50Rnd_762_Belt_TR",
			"ADFRC_50Rnd_762_Belt_TR5",
			"ADFRC_100Rnd_762_Belt",
			"ADFRC_100Rnd_762_Belt_TR",
			"ADFRC_100_Rnd_762_Belt_TR5",
			"ADFRC_150Rnd_762_Belt",
			"ADFRC_150Rnd_762_Belt_TR",
			"ADFRC_150Rnd_762_Belt_TR5"
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		hasBipod=1;
		class FullAuto: Mode_FullAuto
		{
			sounds[]= {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
			};
			reloadTime=0.092500001;
			dispersion=0.0011;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			showToPlayer=1;
		};
		class FullAutoDeployed: Mode_SemiAuto
		{
			displayName="Bipod Deployed";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=0.079999998;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			dispersion=0.00101;
			soundContinuous=0;
			burst=1;
			autoFire=1;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			showToPlayer=1;
		};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=1;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=800;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
		};
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class CowsSlot: asdg_OpticRail1913
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
			};
		};
	};class ADFRC_maximi_Spectr: ADFRC_maximi
	{
		author="$STR_ADF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item="ADFRC_Specter_CDO";
				slot="CowsSlot";
			};
		};
	};
	class ADFRC_maximi_elcan: ADFRC_maximi
	{
		author="$STR_ADF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item="ADFRC_Specter_CDO";
				slot="CowsSlot";
			};
		};
	};
	class ADFRC_maximi_V2: ADFRC_maximi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_maximi\ADFRC_F89_Maximi_V2.p3d";
		displayName="FN Maximi V2";
	};
};

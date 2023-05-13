class CfgPatches
{
	class ADFU_weapon_maximi
	{
		units[]={};
		weapons[]=
		{
			"ADFU_maximi",
			"ADFU_maximi_elcan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_weapon_minimi",
			"ADFU_weapon_accessories"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class ItemCore;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_ADFU;
class CfgWeapons
{
	class ADFU_minimi_BASE;
	class ADFU_maximi: ADFU_minimi_BASE
	{
		scope=2;
		model="\ADFU_weapon_maximi\ADFU_F89_Maximi.p3d";
		displayName="FN Maximi";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_maximi\UI\gear_f89_max_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_maximi\anim\f89_max.rtm"
		};
		magazines[]=
		{
			"ADFU_50Rnd_762_Belt",
			"ADFU_50Rnd_762_Belt_TR",
			"ADFU_50Rnd_762_Belt_TR5",
			"ADFU_100Rnd_762_Belt",
			"ADFU_100Rnd_762_Belt_TR",
			"ADFU_100_Rnd_762_Belt_TR5",
			"ADFU_150Rnd_762_Belt",
			"ADFU_150Rnd_762_Belt_TR",
			"ADFU_150Rnd_762_Belt_TR5"
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
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot_ADFU
			{
			};
			class PointerSlot: PointerSlot
			{
			};
		};
	};
	class ADFU_maximi_elcan: ADFU_maximi
	{
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item="ADFU_ELCAN_c79";
				slot="CowsSlot";
			};
		};
	};
};

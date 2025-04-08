class CfgPatches
{
	class ADFRC_Minimi
	{
		units[]={};
		weapons[]=
		{
			"ADFRC_minimi_BASE","ADFRC_F89_Minimi","ADFRC_F89_Minimi_Classic","ADFRC_F89_Minimi_Mod","ADFRC_F89_Minimi_Para","ADFRC_F89_Minimi_Mod_S","ADFRC_F89_Minimi_Para_S",
			"ADFRC_Minimi_PRESET_Spectr",
			"ADFRC_Minimi_PRESET_Spectr_Squad",
			"ADFRC_Minimi_Mod_PRESET_EXPS3",
			"ADFRC_Minimi_Mod_PRESET_EXPS3_PEQ15",
			"ADFRC_Minimi_Mod_PRESET_Spectr",
			"ADFRC_Minimi_Mod_PRESET_Spectr_PEQ15"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
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

class cfgCloudlets
{
	class MachineGunEject;
	class MachineGunCartridge;
	class ADFRC_m249_MachineGunEject: MachineGunEject
	{
		lifeTime=20;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
	class ADFRC_m249_machineGunCartridge: MachineGunCartridge
	{
		lifeTime=20;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
};
class ADFRC_m249_linkseject
{
	class MachineGunEject
	{
		simulation="particles";
		type="ADFRC_m249_MachineGunEject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class ADFRC_m249_MachineGunCartridge
{
	class MachineGunCartridge
	{
		simulation="particles";
		type="ADFRC_m249_machineGunCartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};


class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class ADFRC_minimi_BASE: Rifle_Long_Base_F
	{
		scope=1;
		author="$STR_ADF_AUTHOR";
		reloadAction="GestureReloadM200";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADF_Weapons\ADFRC_minimi\anim\f89.rtm"
		};
		dexterity=100;
		model="\ADF_Weapons\ADFRC_minimi\ADFRC_F89_Minimi.p3d";
		displayName="5.56mm F89 Base Class";
		nameSound="Mgun";
		picture="\ADF_Weapons\ADFRC_minimi\UI\gear_f89_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazines[]=
		{
			"ADFRC_100Rnd_556_Belt",
			"ADFRC_100Rnd_556_Belt_TR",
			"ADFRC_100Rnd_556_Belt_TR5",
			"ADFRC_200Rnd_556_Belt",
			"ADFRC_200Rnd_556_Belt_TR",
			"ADFRC_200Rnd_556_Belt_TR5"
		};
		hasBipod=1;
		class Library
		{
			libTextDesc="Australian Defence Force 5.56mm Minimi";
		};
		descriptionShort="F89 Minimi";
		cursor="mg";
		cursorAim="EmptyCursor";
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class CowsSlot: asdg_OpticRail1913
			{
			};
		};
		modes[]=
		{
			"FullAuto",
			"FullAutoDeployed",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		discreteDistance[]={300,400,500,600,700,800,900,1000};
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
		class FullAuto: Mode_FullAuto
		{
			sound = ["",10,1];
			soundBegin = ["sound",1];
			soundBeginWater = ["sound",1];
			soundBurst = 0;
			soundClosure = ["sound",1];
			soundContinuous = 0;
			soundEnd = ["sound",1];
			soundLoop = [];
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"Zafir_Shot_SoundSet","Zafir_Tail_SoundSet"};
			};
			displayName="Bipod Folded";
			reloadTime=0.079999998;
			dispersion=0.00101;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			weaponSoundEffect="DefaultRifle";
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
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"Zafir_Shot_SoundSet","Zafir_Tail_SoundSet"};
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
		aiDispersionCoefY=23;
		aiDispersionCoefX=19;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.446684,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\weapons\zafir\zafir_reload",
			0.446684,
			1,
			20
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				effectname="MachineGunCloud";
				positionname="Usti hlavne";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class ThirdEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="ADFRC_m249_linkseject";
			};
		};
	};
	class ADFRC_F89_Minimi: ADFRC_minimi_BASE
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi.p3d";
		displayName="F89 Minimi";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_minimi\UI\gear_f89_x_ca.paa";
		ace_overheating_mrbs = 2500; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.25; 
		ace_overheating_closedBolt = 1; 
		ace_overheating_barrelMass = 4;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 465;
		
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADF_Weapons\adfrc_maximi\anim\f89_max.rtm"
		};
		magazineWell[] = {"STANAG_556x45", "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "M249_556x45", "CBA_556x45_MINIMI"};
		magazines[]=
		{
			"ADFRC_30Rnd_PMAG"
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
			sounds[] = { "StandardSound", "SilencedSound" };
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class SilencedSound: BaseSoundModeType {
			SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType {
			soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
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
			sounds[] = { "StandardSound", "SilencedSound" };
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
            };
			class SilencedSound: BaseSoundModeType {
			SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType {
			soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
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
	
		   class WeaponSlotsInfo {
			mass = 180;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
            {};
            class CowsSlot : asdg_OpticRail1913 //Top / optic slot
            {};
            class PointerSlot : asdg_FrontSideRail //side slot
            {};
        };
	};
	class ADFRC_F89_Minimi_Classic: ADFRC_F89_Minimi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi_Classic.p3d";
		displayName="F89 Minimi (Classic)";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_minimi\UI\gear_f89_x_ca.paa";
		
		class WeaponSlotsInfo {
			mass = 155;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
            {};
            class CowsSlot : asdg_OpticRail1913 //Top / optic slot
            {};
        };
	};
	
	class ADFRC_F89_Minimi_Mod: ADFRC_F89_Minimi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi_Mod.p3d";
		displayName="F89 Minimi Modernised";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_maximi\UI\gear_f89_max_x_ca.paa";
	};
	class ADFRC_F89_Minimi_Para: ADFRC_F89_Minimi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi_Para.p3d";
		displayName="F89 Minimi Para";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_minimi\UI\gear_f89para_x_ca.paa";
	};
	
	class ADFRC_F89_Minimi_Mod_S: ADFRC_F89_Minimi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi_Mod_S.p3d";
		displayName="F89 Minimi Modernised (Short)";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_maximi\UI\gear_f89_max_x_ca.paa";
	
		ACE_barrelLength = 349;
		class WeaponSlotsInfo {
			mass = 160;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
            {};
            class CowsSlot : asdg_OpticRail1913 //Top / optic slot
            {};
            class PointerSlot : asdg_FrontSideRail //side slot
            {};
        };
		
		};
	class ADFRC_F89_Minimi_Para_S: ADFRC_F89_Minimi
	{
		scope=2;
		model="\ADF_Weapons\adfrc_minimi\ADFRC_F89_Minimi_Para_S.p3d";
		displayName="F89 Minimi Para (Short)";
		author="Brucey";
		picture="\ADF_Weapons\adfrc_minimi\UI\gear_f89para_x_ca.paa";
	
		ACE_barrelLength = 349;
		class WeaponSlotsInfo {
			mass = 148;
			allowedSlots[] = {901};
            class MuzzleSlot : asdg_MuzzleSlot_556
            {};
            class CowsSlot : asdg_OpticRail1913 //Top / optic slot
            {};
            class PointerSlot : asdg_FrontSideRail //side slot
            {};
        };
	
		};
		#include "Presets.hpp"
};
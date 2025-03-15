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
	class ADFRC_minimi_BASE;
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
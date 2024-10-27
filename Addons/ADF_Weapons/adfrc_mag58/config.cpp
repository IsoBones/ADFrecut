class CfgPatches
{
	class adfrc_mag58
	{
		units[]={};
		weapons[]=
		{
			"adfrc_mag58",
			"adfrc_mag58_elcan",
			"adfrc_mag58_ta648",
			"adfrc_mag58_mrco",
			"adfrc_mag58_hamr",
			"adfrc_mag58_deployed",
			"adfrc_mag58_vehicle"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"ADF_Core",
		};
		magazines[]=
		{
			"ADFRC_vehicle_200rnd_762x51_Tracer"
		};
	};
};
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class CowsSlot_ADFRC_MG;
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
	class SlotInfo;
	class ItemCore;
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class adfrc_mag58: Rifle_Long_Base_F
	{
		scope=2;
		displayName="FN MAG-58";
		author="$STR_ADFRC_AUTHOR";
		model="\ADF_Weapons\adfrc_mag58\adfrc_mag58.p3d";
		dexterity=1.45;
		picture="\ADF_Weapons\adfrc_mag58\UI\gear_adfrc_mag58_x_ca.paa";
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		magazines[]=
		{
			"150Rnd_762x51_Box",
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
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADF_Weapons\ADFRC_minimi\anim\f89.rtm"
		};
		reloadAction="GestureReloadM200";
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
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_762
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
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\sfx7",
					0.15000001,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					0.15000001,
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
				begin1[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",
					1.3,
					1,
					1400
				};
				begin2[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_02",
					1.3,
					1,
					1400
				};
				begin3[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_03",
					1.3,
					1,
					1400
				};
				begin4[]=
				{
					"\a3\sounds_f_exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_closeShot_01",
					1.3,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.1;
			dispersion=0.00101;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			weaponSoundEffect="DefaultRifle";
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
		reloadMagazineSound[]=
		{
			"\ADF_Weapons\adfrc_mag58\sound\reload.wss",
			0.056234099,
			1,
			10
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				positionname="Usti hlavne";
				effectname="MachineGunCloud";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class ThirdEffect
			{
				positionName="link_eject_start";
				directionName="link_eject_end";
				effectName="adfrc_mag58_linkseject";
			};
			class FifthEffect
			{
				positionName="link_eject_start";
				directionName="link_eject_end";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class adfrc_mag58_elcan: adfrc_mag58
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_Specter_RAR";
			};
		};
	};
	class adfrc_mag58_ta648: adfrc_mag58
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
	class adfrc_mag58_mrco: adfrc_mag58
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_Specter_CDO_KF";
			};
		};
	};
	class adfrc_mag58_hamr: adfrc_mag58
	{
		scope=2;
		author="$STR_ADFRC_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFRC_Specter_RAR";
			};
		};
	};
	class adfrc_mag58_deployed: adfrc_mag58
	{
		scope=1;
		model="\ADF_Weapons\adfrc_mag58\adfrc_mag58_DEPLOYED.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADF_Weapons\adfrc_mag58\anim\mag58_prone.rtm"
		};
	};
	class adfrc_mag58_vehicle: adfrc_mag58
	{
		scope=1;
		displayName="7.62MM FN MAG-58";
		magazines[]=
		{
			"ADFRC_vehicle_200Rnd_762x51_Tracer"
		};
		ballisticsComputer=0;
		class GunParticles
		{
			class effect1
			{
				positionName="gun_muzzle";
				directionName="gun_chamber";
				effectName="MachineGunCloud";
			};
		};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_vehicle_200rnd_762x51_Tracer: 150Rnd_762x51_Box
	{
		scope=1;
		displayName="200 Round 7.62mm Tracer";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count=200;
		type="2*  256";
		tracersEvery=3;
	};
};
class cfgCloudlets
{
	class MachineGunEject;
	class MachineGunCartridge;
	class adfrc_mag58_Eject: MachineGunEject
	{
		lifeTime=20;
		size[]={0.94999999};
		bounceOnSurface=0.25;
	};
	class adfrc_mag58_Cartridge: MachineGunCartridge
	{
		lifeTime=20;
		size[]={0.94999999};
		bounceOnSurface=0.25;
	};
	class adfrc_mag58_vehicle_cartridge: MachineGunCartridge
	{
		lifeTime=10;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
};
class adfrc_mag58_vehicle_casingeject
{
	class MachineGunEject
	{
		simulation="particles";
		type="adfrc_mag58_vehicle_cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class adfrc_mag58_linkseject
{
	class MachineGunEject
	{
		simulation="particles";
		type="adfrc_mag58_Eject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class adfrc_mag58_MachineGunCartridge
{
	class MachineGunCartridge
	{
		simulation="particles";
		type="adfrc_mag58_Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridgeMed
	{
		simulation="particles";
		type="adfrc_mag58_Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};

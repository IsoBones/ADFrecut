class CfgPatches
{
	class ADFU_weapon_minimi
	{
		units[]={};
		weapons[]=
		{
			"ADFU_minimi",
			"ADFU_minimi_para",
			"ADFU_minimi_elcan",
			"ADFU_minimi_para_elcan",
			"ADFU_minimi_BASE"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc"
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
class cfgCloudlets
{
	class MachineGunEject;
	class MachineGunCartridge;
	class ADFU_m249_MachineGunEject: MachineGunEject
	{
		lifeTime=20;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
	class ADFU_m249_machineGunCartridge: MachineGunCartridge
	{
		lifeTime=20;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
};
class ADFU_m249_linkseject
{
	class MachineGunEject
	{
		simulation="particles";
		type="ADFU_m249_MachineGunEject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class ADFU_m249_MachineGunCartridge
{
	class MachineGunCartridge
	{
		simulation="particles";
		type="ADFU_m249_machineGunCartridge";
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
	class ADFU_minimi_BASE: Rifle_Long_Base_F
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		reloadAction="GestureReloadM200";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_minimi\anim\f89.rtm"
		};
		dexterity=100;
		model="\ADFU_weapon_minimi\ADFU_F89_Para.p3d";
		displayName="5.56mm F89 Base Class";
		nameSound="Mgun";
		picture="\ADFU_weapon_minimi\UI\gear_f89_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		magazines[]=
		{
			"ADFU_100Rnd_556_Belt",
			"ADFU_100Rnd_556_Belt_TR",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_200Rnd_556_Belt",
			"ADFU_200Rnd_556_Belt_TR",
			"ADFU_200Rnd_556_Belt_TR5"
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
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot_ADFU
			{
			};
		};
		modes[]=
		{
			"FullAuto",
			"FullAutoDeployed"
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.79432797,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.79432797,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.79432797,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.79432797,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432797,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432797,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432797,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432797,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.79432797,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.79432797,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.79432797,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.79432797,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
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
					1.122018,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					1.122018,
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
					"ADFU_weapon_minimi\sound\weapon_minimi_single_01",
					1.7,
					1.35,
					900
				};
				begin2[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_02",
					1.7,
					1.35,
					900
				};
				begin3[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_03",
					1.7,
					1.35,
					900
				};
				begin4[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_04",
					1.7,
					1.35,
					900
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
			displayName="Bipod Folded";
			reloadTime=0.079999998;
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
		class FullAutoDeployed: Mode_SemiAuto
		{
			displayName="Bipod Deployed";
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
					1.122018,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					1.122018,
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
					"ADFU_weapon_minimi\sound\weapon_minimi_single_01",
					1.7,
					1.35,
					900
				};
				begin2[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_02",
					1.7,
					1.35,
					900
				};
				begin3[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_03",
					1.7,
					1.35,
					900
				};
				begin4[]=
				{
					"ADFU_weapon_minimi\sound\weapon_minimi_single_04",
					1.7,
					1.35,
					900
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
				effectName="ADFU_m249_linkseject";
			};
		};
	};
	class ADFU_minimi: ADFU_minimi_BASE
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_minimi\ADFU_F89.p3d";
		displayName="F89 FN Minimi";
		picture="\ADFU_weapon_minimi\UI\gear_f89_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_minimi\anim\f89.rtm"
		};
	};
	class ADFU_minimi_elcan: ADFU_minimi
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
	class ADFU_minimi_para: ADFU_minimi
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_minimi\ADFU_F89_Para.p3d";
		displayName="F89 FN Minimi Para";
		picture="\ADFU_weapon_minimi\UI\gear_f89para_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_minimi\anim\f89_para.rtm"
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
			class PointerSlot: PointerSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
		};
	};
	class ADFU_minimi_para_elcan: ADFU_minimi_para
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
};

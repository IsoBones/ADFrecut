class CfgPatches
{
	class ADFU_weapon_carlgustav
	{
		units[]={};
		weapons[]=
		{
			"ADFU_carlgustav_m3",
			"ADFU_carlgustav_m3_mrco"
		};
		magazines[]=
		{
			"ADFU_magazine_84mm_asm_509",
			"ADFU_magazine_84mm_he_441d",
			"ADFU_magazine_84mm_heat_551c",
			"ADFU_magazine_84mm_heat_751",
			"ADFU_magazine_84mm_hedp_502",
			"ADFU_magazine_84mm_base"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_weapon_optics"
		};
		author="$STR_ADFU_AUTHOR";
		ammo[]=
		{
			"ADFU_Gustav_HEAT_JET",
			"ADFU_RR_Ammo_Base",
			"ADFU_Shell_84mm_adm_401",
			"ADFU_Shell_84mm_asm_509",
			"ADFU_Shell_84mm_he_441d",
			"ADFU_Shell_84mm_heat_551c",
			"ADFU_Shell_84mm_heat_751",
			"ADFU_Shell_84mm_hedp_502",
			"ADFU_Shell_84mm_illum_545c",
			"ADFU_Shell_84mm_mt_756",
			"ADFU_Shell_84mm_smk_469c"
		};
	};
};
class cfgAmmo
{
	class ShellBase;
	class RocketBase;
	class SubmunitionBase;
	class BulletBase;
	class ADFU_Gustav_HEAT_JET: BulletBase
	{
		author="$STR_ADFU_AUTHOR";
		explosive=1;
		hit=950;
		indirectHit=20;
		indirectHitRange=5;
		airFriction=-0.0089999996;
		deflecting=5;
		caliber=50;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		timeToLive=3;
		typicalSpeed=1000;
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			default_mat="ImpactEffectsGroundSabot";
		};
	};
	class ADFU_RR_Ammo_Base: RocketBase
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		model="\A3\weapons_f\ammo\shell";
		hit=350;
		indirectHit=50;
		indirectHitRange=20;
		cost=200;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=265;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=10;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		effectsMissileInit="";
		effectsMissile="ArtilleryTrails";
		simulationStep=0.02;
		airLock=0;
		irLock=0;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=1;
		whistleDist=50;
		class CamShakeExplode
		{
			power="(82*0.2)";
			duration="((round (82^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((18 + 82^0.5)*8)";
		};
		class CamShakeHit
		{
			power=82;
			duration="((round (82^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="((82^0.25*2))";
			duration="((round (82^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((82^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class ADFU_Shell_84mm_adm_401: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_adm_401_fly";
		mass=40;
	};
	class ADFU_Shell_84mm_asm_509: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_asm_509_fly";
		mass=55;
		hit=900;
		inndirectHit=200;
		indirectHitRange=10;
	};
	class ADFU_Shell_84mm_he_441d: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_he_441d_fly";
		mass=40;
		hit=20;
		inndirectHit=50;
		indirectHitRange=20;
	};
	class ADFU_Shell_84mm_heat_551c: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_heat_551c_fly";
		mass=45;
		AIS_Penetrator=1;
		AIS_Penetrator_HEAT=1;
		AIS_Penetrator_Ammo="AIS_HEAT_JET_Heavy";
		hit=650;
		indirectHit=11;
		indirectHitRange=2;
		maxSpeed=350;
		thrustTime=2;
		thrust=150;
		effectsMissileInit="";
		effectsMissile="Missile0";
	};
	class ADFU_Shell_84mm_heat_751: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_heat_751_fly";
		mass=65;
		hit=700;
		indirectHit=20;
		indirectHitRange=5;
		AIS_Penetrator=1;
		AIS_Penetrator_HEAT=1;
		AIS_Penetrator_Ammo="ADFU_Gustav_HEAT_JET";
	};
	class ADFU_Shell_84mm_hedp_502: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_hedp_502_fly";
		mass=40;
		AIS_Penetrator=1;
		AIS_Penetrator_HEAT=0;
		AIS_Penetrator_Ammo="AIS_HEAT_JET_Light";
		hit=250;
		indirectHit=30;
		indirectHitRange=20;
	};
	class ADFU_Shell_84mm_illum_545c: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_illum_545c_fly";
		mass=30;
	};
	class ADFU_Shell_84mm_mt_756: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_mt_756_fly";
		mass=40;
	};
	class ADFU_Shell_84mm_smk_469c: ADFU_RR_Ammo_Base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\ammo\84mm_smk_469c_fly";
		mass=35;
		hit=60;
		indirectHit=20;
		indirectHitRange=5;
	};
};
class cfgMagazines
{
	class CA_LauncherMagazine;
	class ADFU_magazine_84mm_base: CA_LauncherMagazine
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		modelSpecial="\ADFU_weapon_carlgustav\carlgustav";
		initSpeed=255;
		count=1;
		type="6 * 256";
		mass=40;
	};
	class ADFU_magazine_84mm_asm_509: ADFU_magazine_84mm_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="84mm ASM 509";
		descriptionShort="ASM 509";
		displaynameshort="Anti-Structure";
		picture="\ADFU_weapon_carlgustav\ui\84mm_asm_509_ca.paa";
		model="\ADFU_weapon_carlgustav\ammo\84mm_asm_509";
		ammo="ADFU_Shell_84mm_asm_509";
		mass=70;
	};
	class ADFU_magazine_84mm_he_441d: ADFU_magazine_84mm_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="84mm HE 441D";
		descriptionShort="High Explosive Munition";
		displaynameshort="HE 441D";
		picture="\ADFU_weapon_carlgustav\ui\84mm_he_441d_ca.paa";
		model="\ADFU_weapon_carlgustav\ammo\84mm_he_441d";
		ammo="ADFU_Shell_84mm_he_441d";
		mass=45;
	};
	class ADFU_magazine_84mm_heat_551c: ADFU_magazine_84mm_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="84mm HEAT 551C";
		descriptionShort="High Explosive Anti-Tank Munition";
		displaynameshort="HEAT 551C";
		picture="\ADFU_weapon_carlgustav\ui\84mm_heat_551c_ca.paa";
		model="\ADFU_weapon_carlgustav\ammo\84mm_heat_551c";
		ammo="ADFU_Shell_84mm_heat_551c";
		mass=55;
	};
	class ADFU_magazine_84mm_heat_751: ADFU_magazine_84mm_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="84mm HEAT 751";
		descriptionShort="High Explosive Anti-Tank. Tandem Warhead";
		displaynameshort="HEAT 751";
		picture="\ADFU_weapon_carlgustav\ui\84mm_heat_751_ca.paa";
		model="\ADFU_weapon_carlgustav\ammo\84mm_heat_751";
		ammo="ADFU_Shell_84mm_heat_751";
		mass=70;
	};
	class ADFU_magazine_84mm_hedp_502: ADFU_magazine_84mm_base
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="84mm HEDP 502";
		descriptionShort="High Explosive Dual Purpose Munition";
		displaynameshort="HEDP 502";
		picture="\ADFU_weapon_carlgustav\ui\84mm_hedp_502_ca.paa";
		model="\ADFU_weapon_carlgustav\ammo\84mm_hedp_502";
		ammo="ADFU_Shell_84mm_hedp_502";
		mass=40;
	};
};
class SlotInfo;
class CowsSlot_ADFU;
class PointerSlot;
class WeaponSlotsInfo;
class launch_MRAWS_base_F;
class cfgWeapons
{
	class Launcher_Base_F;
	class ADFU_carlgustav_m3: Launcher_Base_F
	{
		scope=2;
		displayName="Carl Gustav M3";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_carlgustav\carlgustav_empty";
		picture="\ADFU_weapon_carlgustav\ui\carlgustav_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_carlgustav\anim\m3_carlgustav.rtm"
		};
		reloadAction="ReloadRPG";
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.177828,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"ADFU_weapon_carlgustav\sound\carlgustav_reload.ogg",
			1,
			1,
			20
		};
		reloadSound[]=
		{
			"",
			1,
			1
		};
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[]=
			{
				"ADFU_weapon_carlgustav\sound\carlgustav_shot.ogg",
				3.1622777,
				1,
				1400
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		soundFly[]=
		{
			"A3\sounds_f\weapons\Explosion\cannon_fly",
			0.61622798,
			1.5,
			700
		};
		weaponSoundEffect="DefaultRifle";
		modelOptics="\A3\Weapons_F\acc\reticle_NLAW";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.375;
				opticsZoomMax=1;
				opticsZoomInit=0.75;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=0;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		cameraDir="look";
		value=20;
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			"ADFU_magazine_84mm_asm_509",
			"ADFU_magazine_84mm_he_441d",
			"ADFU_magazine_84mm_heat_551c",
			"ADFU_magazine_84mm_heat_751",
			"ADFU_magazine_84mm_hedp_502"
		};
		recoil="recoil_single_nlaw";
		aiRateOfFire=7;
		aiRateOfFireDistance=600;
		minRange=10;
		minRangeProbab=0.30000001;
		midRange=400;
		midRangeProbab=0.57999998;
		maxRange=600;
		maxRangeProbab=0.039999999;
		class GunParticles
		{
			class effect1
			{
				positionName="back_end";
				directionName="back_start";
				effectName="Gustav_Backblast";
			};
			class effect2
			{
				positionName="front_end";
				directionName="front_start";
				effectName="Gustav_ForwardBlast";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class CowsSlot: CowsSlot_ADFU
			{
			};
		};
		class ItemInfo
		{
			priority=3;
		};
		descriptionShort="Australian Carl Gustav M3";
		class Library
		{
			libTextDesc="84mm Recoilless Rifle";
		};
	};
	class ADFU_carlgustav_m3_mrco: ADFU_carlgustav_m3
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item="optic_MRCO";
				slot="CowsSlot";
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class GustavCircleSmoke: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.25;
		moveVelocity[]=
		{
			"directionX * 2.2",
			"directionY * 2.2",
			"directionZ * 2.2"
		};
		rotationVelocity=1;
		weight=0.1285;
		volume=0.1;
		rubbing=0.80000001;
		size[]={0.15000001,0.30000001,0.5};
		sizeCoef="1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.40000001},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.050000001;
		randomDirectionIntensity=0.15000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar=0.2;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.050000001,0.050000001,0.050000001};
		MoveVelocityVar[]={0.15000001,0.15000001,0.001};
		rotationVelocityVar=20;
		sizeVar=0.1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GustavCircleFire: Default
	{
		interval="0.01 * humidity + 0.005";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,2,0};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.125 * humidity",
			"0.122 * humidity",
			"0.123 * humidity",
			"0.120 * humidity"
		};
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.5},
			{0.69999999,0.69999999,0.69999999,0.60000002},
			{0.80000001,0.80000001,0.80000001,0.44999999},
			{0.80000001,0.80000001,0.80000001,0.30000001},
			{0.89999998,0.89999998,0.89999998,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.079999998},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1;
		positionVar[]={2.5,3,2.5};
		MoveVelocityVar[]={1,2,1};
		rotationVelocityVar=20;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class GustavFloorDust: Default
	{
		interval=0.0099999998;
		circleRadius=1.5;
		circleVelocity[]={0.050000001,0.050000001,-0.050000001};
		particleShape="\A3\data_f\missileSmoke";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7.5;
		moveVelocity[]={0,0,0.050000001};
		rotationVelocity=0.5;
		weight=10.65;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={1,1};
		color[]=
		{
			{0.1,0.1,0.1,0.30000001},
			{0.2,0.2,0.18000001,0.25},
			{0.1,0.090000004,0.090000004,0.02}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0.25,0.25,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]={0,0,0};
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=1;
		randomDirectionIntensityVar=0;
	};
};
class Gustav_Backblast
{
	class Light1
	{
		simulation="light";
		type="FiredLightMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.12;
		qualityLevel=-1;
	};
	class MortarFired1
	{
		simulation="particles";
		type="MortarFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.075000003;
		qualityLevel=-1;
	};
	class CannonFired2
	{
		simulation="particles";
		type="CannonFired2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.039999999;
	};
	class CannonFired3
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.80000001;
		qualityLevel=-1;
	};
	class CannonFired3Med
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.60000002;
		qualityLevel=-1;
	};
	class CannonFiredDust1
	{
		simulation="particles";
		type="CircleDustTankBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class CannonFiredDust2
	{
		simulation="particles";
		type="CircleDustTankSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class Gustav_ForwardBlast
{
	class GustavFloor
	{
		simulation="particles";
		type="GustavFloorDust";
		position[]={0,0,-0.5};
		intensity=1;
		interval=1;
		lifeTime=3;
		qualityLevel=-1;
	};
	class _xx_00
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0.2,0,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_02
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0.1732,0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_04
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0.1,0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_06
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0,0.2,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_08
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={-0.1,0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_10
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={-0.1732,0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_12
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={-0.2,0,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_14
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={-0.1732,-0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_16
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={-0.1,-0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_18
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0,-0.2,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_20
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0.1,-0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_22
	{
		simulation="particles";
		type="GustavCircleSmoke";
		position[]={0.1732,-0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_01
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.19320001,0.051800001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_03
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.14139999,0.14139999,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_05
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.051800001,0.19320001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_07
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.051800001,0.19320001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_09
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.14139999,0.14139999,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_11
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.19320001,0.051800001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_13
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.19320001,-0.051800001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_15
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.14139999,-0.14139999,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_17
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={-0.051800001,-0.19320001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_19
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.051800001,-0.19320001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_21
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.14139999,-0.14139999,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_23
	{
		simulation="particles";
		type="GustavCircleFire";
		position[]={0.19320001,-0.051800001,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
};

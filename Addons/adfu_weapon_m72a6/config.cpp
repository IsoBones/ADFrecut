class CfgPatches
{
	class ADFU_weapon_m72a6
	{
		units[]={};
		weapons[]=
		{
			"ADFU_weapon_m72a6",
			"ADFU_weapon_m72a6_ARMED",
			"ADFU_weapon_m72a6_USED"
		};
		magazines[]=
		{
			"ADFU_M_M72_AT",
			"ADFU_M_M72_Collapsed_AT",
			"ADFU_M_M72_USED_AT"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"ADFU_weaponswitch"
		};
		ammo[]=
		{
			"ADFU_R_66MM_M72"
		};
	};
};
class cfgAmmo
{
	class R_60mm_HE;
	class ADFU_R_66MM_M72: R_60mm_HE
	{
		model="\ADFU_weapon_m72a6\M72A6_Rocket_Fly";
		hit=550;
		cost=300;
		initTime=0;
		AIS_Penetrator=1;
		AIS_Penetrator_HEAT=1;
		AIS_Penetrator_Ammo="AIS_HEAT_JET_Light";
		maxSpeed=250;
		thrustTime=2;
		thrust=100;
		timeToLive=20;
		fuseDistance=15;
		airFriction=0.050000001;
		sideAirFriction=0.5;
		indirectHit=50;
		indirectHitRange=10;
		effectsMissile="missile3";
		whistleDist=16;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		simulationStep=0.02;
		airLock=0;
		irLock=0;
		maneuvrability=0;
		allowAgainstInfantry=1;
	};
};
class cfgMagazines
{
	class CA_LauncherMagazine;
	class ADFU_M_M72_AT: CA_LauncherMagazine
	{
		scope=1;
		displayName="M72 LAW AT Rocket";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_m72a6\ui\m72a6_at_co.paa";
		allowedSlots[]={801,901,701};
		model="\ADFU_weapon_m72a6\M72A6_Rocket";
		modelSpecial="\ADFU_weapon_m72a6\M72A6_Loaded";
		ammo="ADFU_R_66MM_M72";
		type="2 * 256";
		initSpeed=145;
		mass=0;
		descriptionShort="M72A6 HEAT Rocket - W/Launcher";
	};
	class ADFU_M_M72_Collapsed_AT: ADFU_M_M72_AT
	{
		scope=1;
		count=0;
		type=0;
		displayName="M72 LAW AT Rocket";
		author="$STR_ADFU_AUTHOR";
		mass=0;
	};
	class ADFU_M_M72_USED_AT: ADFU_M_M72_AT
	{
		scope=1;
		count=0;
		type=0;
		displayName="Empty";
		author="$STR_ADFU_AUTHOR";
		picture="";
		mass=0;
	};
};
class SlotInfo;
class CowsSlot;
class PointerSlot;
class WeaponSlotsInfo;
class cfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class ADFU_weapon_m72a6: Launcher_Base_F
	{
		scope=2;
		displayName="M72A6 LAW";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_m72a6\ui\m72a6_launcher_ca.paa";
		model="\ADFU_weapon_m72a6\M72A6_Collapsed.p3d";
		modelSpecial="\ADFU_weapon_m72a6\M72A6_Collapsed.p3d";
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
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.35481301,
			1,
			20
		};
		ADFU_weapon_switch=1;
		ADFU_weapon_alternate="ADFU_weapon_m72a6_ARMED";
		ADFU_weapon_magazine="ADFU_M_M72_AT";
		class BaseSoundModeType;
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
			class IronSight
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
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		magazines[]=
		{
			"ADFU_M_M72_Collapsed_AT"
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
		class WeaponSlotsInfo
		{
		};
		class ItemInfo
		{
			priority=3;
		};
		descriptionShort="M72A6 - Australian Manufacture";
		class Library
		{
			libTextDesc="66mm Disposable Rocket Launcher";
		};
	};
	class ADFU_weapon_m72a6_ARMED: ADFU_weapon_m72a6
	{
		scope=1;
		displayName="M72A6 LAW (ARMED)";
		picture="\ADFU_weapon_m72a6\ui\m72a6_armed_ca.paa";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_m72a6\M72A6_Empty.p3d";
		modelSpecial="\ADFU_weapon_m72a6\M72A6_Loaded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_m72a6\anim\m72a6.rtm"
		};
		reloadAction="ReloadRPG";
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.177828,
			1,
			15
		};
		soundFly[]=
		{
			"A3\sounds_f\weapons\Explosion\cannon_fly",
			0.316228,
			1.5,
			700
		};
		weaponSoundEffect="DefaultRifle";
		magazines[]=
		{
			"ADFU_M_M72_AT"
		};
		ADFU_weapon_switch=1;
		ADFU_weapon_alternate="ADFU_weapon_m72a6";
		ADFU_weapon_magazine=0;
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			weaponSoundEffect="DefaultRifle";
			begin1[]=
			{
				"ADFU_weapon_m72a6\sound\M72A6_LAW_FIRED.ogg",
				3.1622777,
				1,
				700
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		begin1[]=
		{
			"ADFU_weapon_m72a6\sound\M72A6_LAW_FIRED.ogg",
			3.1622777,
			1,
			700
		};
		soundBegin[]=
		{
			"begin1",
			1
		};
		class OpticsModes
		{
			class IronSight
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
		class GunParticles
		{
			class effect1
			{
				positionName="back_end";
				directionName="back_start";
				effectName="RocketBackEffectsRPGNT";
			};
			class effect2
			{
				positionName="front_end";
				directionName="front_start";
				effectName="M72A6_ForwardBlast";
			};
		};
	};
	class ADFU_weapon_m72a6_USED: ADFU_weapon_m72a6
	{
		scope=1;
		displayName="M72A6 LAW (USED)";
		picture="\ADFU_weapon_m72a6\ui\m72a6_used_ca.paa";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_m72a6\M72A6_Empty.p3d";
		modelSpecial="\ADFU_weapon_m72a6\M72A6_Empty.p3d";
		ADFU_weapon_switch=0;
		ADFU_weapon_alternate="";
		ADFU_weapon_magazine="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_m72a6\anim\m72a6.rtm"
		};
		reloadAction="ReloadRPG";
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry6",
			0.177828,
			1,
			15
		};
		sound[]=
		{
			"A3\sounds_f\weapons\Cannons\cannon_30mm",
			1.995262,
			1,
			800
		};
		soundFly[]=
		{
			"A3\sounds_f\weapons\Explosion\cannon_fly",
			0.316228,
			1.5,
			700
		};
		weaponSoundEffect="DefaultRifle";
		magazines[]=
		{
			"ADFU_M_M72_USED_AT"
		};
	};
};
class CfgCloudlets
{
	class Default;
	class M72A6_CircleSmoke: Default
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
};
class M72A6_ForwardBlast
{
	class _xx_00
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0.2,0,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_02
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0.1732,0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_04
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0.1,0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_06
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0,0.2,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_08
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={-0.1,0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_10
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={-0.1732,0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_12
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={-0.2,0,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_14
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={-0.1732,-0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_16
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={-0.1,-0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_18
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0,-0.2,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_20
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0.1,-0.1732,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
	class _xx_22
	{
		simulation="particles";
		type="M72A6_CircleSmoke";
		position[]={0.1732,-0.1,0.050000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=-1;
	};
};

class CfgPatches
{
	class adfu_bushmaster
	{
		units[]=
		{
			"bma3_bushmaster_base_F",
			"bma3_bushmaster_unarmed_F",
			"bma3_bushmaster_unarmed_ecm_F",
			"bma3_bushmaster_unarmed_command_F",
			"bma3_bushmaster_pws127mm_F",
			"bma3_bushmaster_pws127mm_ecm_F"
		};
		weapons[]=
		{
			"bma3_r400_rws",
			"bma3_bushmaster_mag58"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		magazines[]=
		{
			"bma3_bushmaster_200rnd_762x51_Tracer",
			"bma3_bushmaster_1000rnd_127x99_Tracer"
		};
		ammo[]={};
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class ExhaustEffect_BushmasterRefract
{
	class ExhaustsEffectRefract01
	{
		simulation="particles";
		type="ExhaustSmokeHEMTTRefract";
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
		};
		class CargoTurret;
		class EventHandlers;
		class AnimationSources;
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
	};
	class adfu_bushmaster_base_F: Car_F
	{
		scope=1;
		_generalMacro="BMA3_Bushmaster_base_F";
		displayName="BMA3_Bushmaster_base_F";
		vehicleClass="Car";
		picture="\bma3\bma3_bushmaster_data\ui\bushmaster_picture_ca.paa";
		author="P1NGA | ADF Re-Cut";
		faction="ADFU";
		side=1;
		size=10;
		accuracy=0.25;
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		dustBackLeftPos="wheel_1_2_bound";
		dustBackRightPos="wheel_2_2_bound";
		armor=200;
		armorStructural=4;
		damageResistance=0.0061900001;
		fuelExplosionPower=5;
		crewVulnerable=0;
		crewCrashProtection=0.15000001;
		crewExplosionProtection=0.99989998;
		threat[]={0.80000001,0.60000002,0.30000001};
		driverAction="bushmaster_driver";
		driverInAction="bushmaster_driver";
		driverLeftHandAnimName="driveWheel";
		driverRightHandAnimName="driveWheel";
		destrType="DestructWreck";
		viewDriverInExternal=1;
		viewGunnerInexternal=1;
		forceHideDriver=1;
		driverForceOptics=0;
		driverOpticsModel="";
		memoryPointDriverOptics="driverview";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		crew="ADFU_rifleman_dpcu";
		cargoIsCoDriver[]={0,0,0,0,0};
		cargoProxyIndexes[]={4,5,6,7,8};
		getInProxyOrder[]={4,5,6,7,8,1,2,3};
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"slingload_point_01",
			"slingload_point_02",
			"slingload_point_03",
			"slingload_point_04"
		};
		transportSoldier=5;
		hideProxyInCombat=1;
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
			"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
			"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
			"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
		};
		class textureSources
		{
			class adf_001
			{
				displayName="Australian Army 001";
				author="P1NGA";
				factions[]={};
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
				};
			};
			class adf_002: adf_001
			{
				displayName="Australian Army 002";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_02.paa"
				};
			};
			class adf_003: adf_001
			{
				displayName="Australian Army 003";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_03.paa"
				};
			};
			class adf_004: adf_001
			{
				displayName="Australian Army 004";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_04.paa"
				};
			};
			class adf_005: adf_001
			{
				displayName="Australian Army 005";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_05.paa"
				};
			};
			class adf_006: adf_001
			{
				displayName="Australian Army 006";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_06.paa"
				};
			};
			class adf_007: adf_001
			{
				displayName="Australian Army 007";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_07.paa"
				};
			};
			class adf_008: adf_001
			{
				displayName="Australian Army 008";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_08.paa"
				};
			};
			class adf_009: adf_001
			{
				displayName="Australian Army 009";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_09.paa"
				};
			};
			class adf_010: adf_001
			{
				displayName="Australian Army 010";
				author="P1NGA";
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_10.paa"
				};
			};
			class aaf_001
			{
				displayName="Australian Air Force 001";
				author="P1NGA";
				factions[]={};
				textures[]=
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_airforce_01.paa"
				};
			};
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"bma3\bma3_bushmaster_sounds\getin",
			1,
			1
		};
		soundGetOut[]=
		{
			"bma3\bma3_bushmaster_sounds\getout",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"bma3\bma3_bushmaster_sounds\Start_int",
			0.5,
			1
		};
		soundEngineOnExt[]=
		{
			"bma3\bma3_bushmaster_sounds\start_ext",
			0.60000002,
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"bma3\bma3_bushmaster_sounds\stop_int",
			0.5,
			1
		};
		soundEngineOffExt[]=
		{
			"bma3\bma3_bushmaster_sounds\stop_ext",
			0.60000002,
			1,
			100
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\IDLE_EXT",
					0.75,
					1,
					150
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="1*engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\HIGH_EXT",
					0.75,
					1,
					300
				};
				frequency="0.7 + ((rpm/ 4500) factor[(600/ 4500),(4500/ 4500)])*0.95";
				volume="1*engineOn*camPos*(thrust factor[0,1])*(((rpm/ 4500) factor[(850/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(4500/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\LOW_EXT",
					0.5,
					1,
					200
				};
				frequency="0.75 + ((rpm/ 4500) factor[(600/ 4500),(4500/ 4500)])*0.95";
				volume="1*engineOn*camPos*(thrust factor[1,0])*(((rpm/ 4500) factor[(850/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(4500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\DISTANCE",
					1,
					1,
					1000
				};
				frequency="0.75 + ((rpm/ 4500) factor[(600/ 4500),(4500/ 4500)])*0.95";
				volume="1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/ 4500) factor[(850/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(4500/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\turbo",
					0.5,
					1,
					50
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.9,1])*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\rev_ext",
					0.5,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*((rpm/ 4500) factor[(4000/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\IDLE_int",
					0.5,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="1*engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\HIGH_int",
					0.5,
					1
				};
				frequency="0.7 + ((rpm/ 4500) factor[(600/ 4500),(4500/ 4500)])*0.95";
				volume="1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/ 4500) factor[(850/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(4500/ 4500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\LOW_int",
					0.40000001,
					1
				};
				frequency="0.75 + ((rpm/ 4500) factor[(600/ 4500),(4500/ 4500)])*0.95";
				volume="1*engineOn*(1-camPos)*(thrust factor[1,0])*(((rpm/ 4500) factor[(850/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(4500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\NoSound",
					0,
					0
				};
				frequency="0";
				volume="0";
			};
			class Engine3_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\turbo",
					0.050000001,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(thrust factor[0.9,1])*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\rev",
					0.40000001,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 4500) factor[(4000/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\ext_exhaust_2",
					0.60000002,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\ext_exhaust_3",
					0.60000002,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\ext_exhaust_5",
					0.60000002,
					1,
					300
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\ext_exhaust_6",
					0.60000002,
					1,
					325
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\ext_exhaust_7",
					0.60000002,
					1,
					350
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\int_exhaust_2",
					0.60000002,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\int_exhaust_3",
					0.60000002,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\int_exhaust_5",
					0.60000002,
					1
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\int_exhaust_6",
					0.60000002,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"bma3\bma3_bushmaster_sounds\int_exhaust_7",
					0.60000002,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.1220185,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.56234133,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor= -250;
				explosionShielding=1;
				passThrough=0;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				name="wheel_1_2_steering";
				armor= -250;
				explosionShielding=1;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				name="wheel_2_1_steering";
				armor= -250;
				explosionShielding=1;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				name="wheel_2_2_steering";
				armor= -250;
				explosionShielding=1;
				radius=0.25;
			};
			class HitFuel: HitLFWheel
			{
				armor= -250;
				name="fuel";
				visual="";
				passThrough=0;
				explosionShielding=0.2;
				radius=0.1;
			};
			class HitEngine: HitFuel
			{
				armor=0.80000001;
				name="motor";
				radius=0.15000001;
			};
			class HitBody: HitFuel
			{
				armor=1;
				name="body";
				radius=0.25;
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=115;
		fuelCapacity=84;
		wheelCircumference=3.924;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		idleRpm=800;
		redRpm=4500;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				2.3180001,
				"D3",
				1.85,
				"D4",
				1.65,
				"D5",
				1.45
			};
			TransmissionRatios[]=
			{
				"High",
				5.539
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		enginePower=276;
		maxOmega=471;
		peakTorque=1253;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.178,0.5},
			{0.25,0.85000002},
			{0.40000001,0.89999998},
			{0.5,1},
			{0.72500002,0.94999999},
			{0.85000002,0.60000002},
			{1,0.30000001}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=150;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=22500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=2066;
				springStrength=201234;
				springDamperRate=20600.6;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=275000;
			};
			class RF: LF
			{
				boneName="wheel_2_1";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=275000;
			};
		};
		class RenderTargets
		{
			class DriverCamera
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pip1_pos";
					pointDirection="pip1_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class RemoteWeaponCamera
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="Gun_Camera";
					pointDirection="Gun_Camera_Dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HitReserveWheel
			{
				source="Hit";
				hitpoint="HitReserveWheel";
				raw=1;
			};
			class proxy
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class show_ecm
			{
				displayName="ECM Jammers";
				source="Proxy";
				initPhase=0;
				mass=-50;
			};
			class show_shovel: show_ecm
			{
				displayName="Show Shovel";
				source="Proxy";
				initPhase=0;
			};
			class show_fireaxe: show_ecm
			{
				displayName="Show Fire-axe";
				source="Proxy";
				initPhase=0;
			};
			class show_arm: show_ecm
			{
				displayName="Show Lifting Arm";
				source="Proxy";
				initPhase=0;
			};
			class show_extension: show_ecm
			{
				displayName="Show Lifting Extension";
				source="Proxy";
				initPhase=0;
			};
			class show_winch: show_ecm
			{
				displayName="Left Side Winch";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_cover",
					0
				};
			};
			class show_cover: show_ecm
			{
				displayName="Left Side Generator";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_winch",
					0
				};
			};
			class show_ant_low_3_1: show_ecm
			{
				displayName="Left Rear Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_3_1",
					0
				};
			};
			class show_ant_low_3_2: show_ant_low_3_1
			{
				displayName="Right Rear Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_3_2",
					0
				};
			};
			class show_ant_high_3_1: show_ant_low_3_1
			{
				displayName="Left Rear Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_3_1",
					0
				};
			};
			class show_ant_high_3_2: show_ant_high_3_1
			{
				displayName="Right Rear Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_3_2",
					0
				};
			};
			class show_ant_low_2_1: show_ecm
			{
				displayName="Left Mid Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_2_1",
					0
				};
			};
			class show_ant_low_2_2: show_ant_low_2_1
			{
				displayName="Right Mid Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_2_2",
					0
				};
			};
			class show_ant_high_2_1: show_ant_low_2_1
			{
				displayName="Left Mid Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_2_1",
					0
				};
			};
			class show_ant_high_2_2: show_ant_high_2_1
			{
				displayName="Right Mid Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_2_2",
					0
				};
			};
			class show_ant_powered: show_ecm
			{
				displayName="Show Retransmission Antenna";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_1_1",
					0,
					"show_ant_high_1_1",
					0
				};
			};
			class show_ant_low_1_1: show_ecm
			{
				displayName="Left Front Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_1_1",
					0
				};
			};
			class show_ant_low_1_2: show_ant_low_1_1
			{
				displayName="Right Front Antenna (Short)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_high_1_2",
					0
				};
			};
			class show_ant_high_1_1: show_ant_low_1_1
			{
				displayName="Left Front Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_1_1",
					0
				};
			};
			class show_ant_high_1_2: show_ant_high_1_1
			{
				displayName="Right Front Antenna (High)";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ant_low_1_2",
					0
				};
			};
			class show_ammobox_01: show_ecm
			{
				displayName="Show Ammo-box 1";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_jerrycan_01",
					0
				};
			};
			class show_ammobox_02: show_ecm
			{
				displayName="Show Ammo-box 2";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_jerrycan_02",
					0
				};
			};
			class show_ammobox_03: show_ecm
			{
				displayName="Show Ammo-box 3";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_jerrycan_03",
					0
				};
			};
			class show_ammobox_04: show_ecm
			{
				displayName="Show Ammo-box 4";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_jerrycan_04",
					0
				};
			};
			class show_jerrycan_01: show_ecm
			{
				displayName="Show Jerry-can 1";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ammobox_01",
					0
				};
			};
			class show_jerrycan_02: show_ecm
			{
				displayName="Show Jerry-can 2";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ammobox_02",
					0
				};
			};
			class show_jerrycan_03: show_ecm
			{
				displayName="Show Jerry-can 3";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ammobox_03",
					0
				};
			};
			class show_jerrycan_04: show_ecm
			{
				displayName="Show Jerry-can 4";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"show_ammobox_04",
					0
				};
			};
			class deploy_wire_cutters: show_ecm
			{
				displayName="Deploy Wire Cutters";
				initPhase=0;
				mass=0;
			};
		};
		class UserActions
		{
			class wire_cutters_deploy
			{
				userActionID=50;
				displayName="Deploy Wire Cutters";
				radius=20;
				showWindow=0;
				priority=0;
				position="Center_Point";
				onlyForPlayer=0;
				condition="(this animationPhase 'deploy_wire_cutters') <= 0.5 AND (alive this) AND (player in [driver this])";
				statement="this animate ['deploy_wire_cutters',1];";
			};
			class wire_cutters_undeploy: wire_cutters_deploy
			{
				userActionID=51;
				displayName="Un-Deploy Wire Cutters";
				condition="(this animationPhase 'deploy_wire_cutters') > 0.5 AND (alive this) AND (player in [driver this])";
				statement="this animate ['deploy_wire_cutters',0];";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Rear: Left
			{
				selection="Light_Rear";
				color[]={0,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				hitpoint="";
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=0;
				intensity=0;
				useFlare=0;
				dayLight=0;
				flareSize=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left"
			},
			
			{
				"Right"
			}
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustEffectTankSide";
			};
			class AirCon_Vents
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffect_BushmasterRefract";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class adfu_bushmaster_unarmed_F: adfu_bushmaster_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bushmaster Transport";
		model="bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon="\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed.paa";
		author="P1NGA";
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0.5,
			"show_fireaxe",
			0.5,
			"show_arm",
			0.5,
			"show_extension",
			0.5,
			"show_winch",
			1,
			"show_cover",
			0.5,
			"show_spare",
			1,
			"show_ant_powered",
			0,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0.5,
			"show_ant_high_3_2",
			0.5,
			"show_ant_low_2_1",
			1,
			"show_ant_low_2_2",
			1,
			"show_ant_high_2_1",
			0.5,
			"show_ant_high_2_2",
			0.5,
			"show_ant_low_1_1",
			1,
			"show_ant_low_1_2",
			1,
			"show_ant_high_1_1",
			0.5,
			"show_ant_high_1_2",
			0.5,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			1,
			"show_ammobox_04",
			1,
			"show_jerrycan_01",
			0.5,
			"show_jerrycan_02",
			0.5,
			"show_jerrycan_03",
			0.5,
			"show_jerrycan_04",
			0.5
		};
		textureList[]=
		{
			"adf_001",
			1,
			"adf_002",
			1,
			"adf_003",
			1,
			"adf_004",
			1,
			"adf_005",
			1,
			"adf_006",
			1,
			"adf_007",
			1,
			"adf_008",
			1,
			"adf_009",
			1,
			"adf_010",
			1
		};
		class Turrets: Turrets
		{
			class Turret_01: CargoTurret
			{
				LODTurnedOut=1;
				isPersonTurret=1;
				precisegetinout=0;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerCompartments="Compartment1";
				maxElev=45;
				minElev=-45;
				maxTurn=75;
				minTurn=-75;
				initTurn=0;
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerAction="vehicle_turnout_1";
				gunnerInAction="bushmaster_ffv_front";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=1;
				commanding=1;
				gunnerName="Front Cover";
				animationSourceHatch="HatchGunner";
			};
			class Turret_02: Turret_01
			{
				proxyIndex=2;
				commanding=2;
				gunnerName="Left Rear Cover";
				gunnerInAction="bushmaster_ffv_rearleft";
				animationSourceHatch="HatchGunnerRearLeft";
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo l dir";
			};
			class Turret_03: Turret_01
			{
				proxyIndex=3;
				commanding=3;
				gunnerName="Right Rear Cover";
				gunnerInAction="bushmaster_ffv_rearright";
				animationSourceHatch="HatchGunnerRearRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
			};
		};
	};
	class adfu_bushmaster_unarmed_ecm_F: adfu_bushmaster_unarmed_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bushmaster Transport ECM";
		model="bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon="\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_ecm.paa";
		author="P1NGA";
		animationList[]=
		{
			"show_ecm",
			1,
			"show_shovel",
			0.5,
			"show_fireaxe",
			0.5,
			"show_arm",
			0.5,
			"show_extension",
			0.5,
			"show_winch",
			1,
			"show_cover",
			0.5,
			"show_spare",
			1,
			"show_ant_powered",
			0,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0.5,
			"show_ant_high_3_2",
			0.5,
			"show_ant_low_2_1",
			1,
			"show_ant_low_2_2",
			1,
			"show_ant_high_2_1",
			0.5,
			"show_ant_high_2_2",
			0.5,
			"show_ant_low_1_1",
			1,
			"show_ant_low_1_2",
			1,
			"show_ant_high_1_1",
			0.5,
			"show_ant_high_1_2",
			0.5,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			1,
			"show_ammobox_04",
			1,
			"show_jerrycan_01",
			0.5,
			"show_jerrycan_02",
			0.5,
			"show_jerrycan_03",
			0.5,
			"show_jerrycan_04",
			0.5
		};
	};
	class adfu_bushmaster_unarmed_command_F: adfu_bushmaster_unarmed_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bushmaster Transport Command";
		model="bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon="\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author="P1NGA";
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0.5,
			"show_fireaxe",
			0.5,
			"show_arm",
			0.5,
			"show_extension",
			0.5,
			"show_winch",
			1,
			"show_cover",
			0.5,
			"show_spare",
			1,
			"show_ant_powered",
			1,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0.5,
			"show_ant_high_3_2",
			0.5,
			"show_ant_low_2_1",
			1,
			"show_ant_low_2_2",
			1,
			"show_ant_high_2_1",
			0.5,
			"show_ant_high_2_2",
			0.5,
			"show_ant_low_1_1",
			0,
			"show_ant_low_1_2",
			1,
			"show_ant_high_1_1",
			0,
			"show_ant_high_1_2",
			0.5,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			1,
			"show_ammobox_04",
			1,
			"show_jerrycan_01",
			0.5,
			"show_jerrycan_02",
			0.5,
			"show_jerrycan_03",
			0.5,
			"show_jerrycan_04",
			0.5
		};
	};
	class adfu_bushmaster_pws127mm_F: adfu_bushmaster_unarmed_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bushmaster (Armed)";
		model="bma3\bma3_bushmaster\bma3_bushmaster_r400.p3d";
		Icon="\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author="P1NGA";
		animationList[]=
		{
			"show_ecm",
			0,
			"show_shovel",
			0.5,
			"show_fireaxe",
			0.5,
			"show_arm",
			0.5,
			"show_extension",
			0.5,
			"show_winch",
			1,
			"show_cover",
			0.5,
			"show_spare",
			1,
			"show_ant_powered",
			0,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0.5,
			"show_ant_high_3_2",
			0.5,
			"show_ant_low_2_1",
			1,
			"show_ant_low_2_2",
			1,
			"show_ant_high_2_1",
			0.5,
			"show_ant_high_2_2",
			0.5,
			"show_ant_low_1_1",
			1,
			"show_ant_low_1_2",
			1,
			"show_ant_high_1_1",
			0.5,
			"show_ant_high_1_2",
			0.5,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			1,
			"show_ammobox_04",
			1,
			"show_jerrycan_01",
			0.5,
			"show_jerrycan_02",
			0.5,
			"show_jerrycan_03",
			0.5,
			"show_jerrycan_04",
			0.5
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyType="CPGunner";
				proxyIndex=1;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"BMA3_r400_rws"
				};
				magazines[]=
				{
					"BMA3_bushmaster_1000rnd_127x99_Tracer",
					"BMA3_bushmaster_1000rnd_127x99_Tracer",
					"BMA3_bushmaster_1000rnd_127x99_Tracer"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				gunnerAction="bushmaster_gunner";
				gunnerInAction="bushmaster_gunner";
				forceHideGunner=1;
				gunnerForceOptics=0;
				hasGunner=1;
				InGunnerMayFire=1;
				lockWhenDriverOut=0;
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				memoryPointGunnerOptics="gunnerview";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				memoryPointGun="usti hlavne";
				primaryGunner=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				usePip=1;
				minTurn=-360;
				maxTurn=360;
				minElev=-13;
				maxElev=40;
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0.5;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
				};
				gunnerDoor="";
			};
			class Turret_01: CargoTurret
			{
				LODTurnedOut=1;
				isPersonTurret=1;
				precisegetinout=0;
				gunnerCompartments="Compartment1";
				maxElev=45;
				minElev=-45;
				maxTurn=75;
				minTurn=-75;
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerAction="vehicle_turnout_1";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=2;
				commanding=2;
				gunnerName="Left Rear Cover";
				gunnerInAction="bushmaster_ffv_rearleft";
				animationSourceHatch="HatchGunnerRearLeft";
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo l dir";
			};
			class Turret_02: Turret_01
			{
				proxyIndex=3;
				commanding=3;
				gunnerName="Right Rear Cover";
				gunnerInAction="bushmaster_ffv_rearright";
				animationSourceHatch="HatchGunnerRearRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
			};
		};
	};
	class adfu_bushmaster_pws127mm_ecm_F: adfu_bushmaster_pws127mm_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bushmaster (Armed) ECM";
		model="bma3\bma3_bushmaster\bma3_bushmaster_r400.p3d";
		Icon="\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author="P1NGA";
		animationList[]=
		{
			"show_ecm",
			1,
			"show_shovel",
			0.5,
			"show_fireaxe",
			0.5,
			"show_arm",
			0.5,
			"show_extension",
			0.5,
			"show_winch",
			1,
			"show_cover",
			0.5,
			"show_spare",
			1,
			"show_ant_powered",
			0,
			"show_ant_low_3_1",
			1,
			"show_ant_low_3_2",
			1,
			"show_ant_high_3_1",
			0.5,
			"show_ant_high_3_2",
			0.5,
			"show_ant_low_2_1",
			1,
			"show_ant_low_2_2",
			1,
			"show_ant_high_2_1",
			0.5,
			"show_ant_high_2_2",
			0.5,
			"show_ant_low_1_1",
			1,
			"show_ant_low_1_2",
			1,
			"show_ant_high_1_1",
			0.5,
			"show_ant_high_1_2",
			0.5,
			"show_ammobox_01",
			1,
			"show_ammobox_02",
			1,
			"show_ammobox_03",
			1,
			"show_ammobox_04",
			1,
			"show_jerrycan_01",
			0.5,
			"show_jerrycan_02",
			0.5,
			"show_jerrycan_03",
			0.5,
			"show_jerrycan_04",
			0.5
		};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class bma3_bushmaster_200rnd_762x51_Tracer: 150Rnd_762x51_Box
	{
		scope=1;
		displayName="200 Round 7.62mm Tracer";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count=200;
		type="2*  256";
		tracersEvery=3;
	};
	class 100Rnd_127x99_mag_Tracer_Red;
	class bma3_bushmaster_1000rnd_127x99_Tracer: 100Rnd_127x99_mag_Tracer_Red
	{
		scope=1;
		displayName="1000 Round 12.7mm Tracer";
		displayNameShort="Tracer";
		count=1000;
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class LMG_RCWS;
	class HMG_127;
	class MGun;
	class bma3_r400_rws: HMG_127
	{
		displayName="EOS R400s-Mk2 12.7mm";
		scope=1;
		magazines[]=
		{
			"bma3_bushmaster_1000rnd_127x99_Tracer"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
		};
	};
	class bma3_bushmaster_mag58: LMG_RCWS
	{
		displayName="7.62MM FN GP MAG-58";
		scope=1;
		magazines[]=
		{
			"bma3_bushmaster_200rnd_762x51_Tracer"
		};
		ballisticsComputer=0;
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun_direction";
				directionName="machinegun";
				effectName="MachineGunCloud";
			};
		};
		class manual: MGun
		{
			displayName="7.62 mm";
			reloadTime=0.1;
			dispersion=0.00101;
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
					"\bma3_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin2[]=
				{
					"\bma3_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin3[]=
				{
					"\bma3_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin4[]=
				{
					"\bma3_mag58\sound\mag-58.ogg",
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
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class short: close
		{
			burst=6;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=850;
			midRangeProbab=0.40000001;
			maxRange=1100;
			maxRangeProbab=0.0099999998;
		};
	};
};

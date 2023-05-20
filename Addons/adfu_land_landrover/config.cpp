class DefaultEventhandlers;
class CfgPatches
{
	class ADFU_LandRover_4x4
	{
		units[]=
		{
			"ADFU_land_LandRover_Transport"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		author[]=
		{
			"Australian Defence Force: Uncut"
		};
		authorUrl="http://www.adf-uncut.com.au";
		version="0.4.5";
		versionStr="0.4.5";
		versionAr[]={0,4,5};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class ADFU_land_LandRover_Base: Car_F
	{
		scope=0;
		model="ADFU_land_landrover\LR_Transport";
		Picture="ADFU_land_landrover\data\Picture_lr_CA.paa";
		Icon="ADFU_land_landrover\data\Icon_lr_transport_CA.paa";
		MapSize=6;
		author="$STR_ADFU_AUTHOR";
		displayname="LandRover 4x4 Base";
		hiddenSelections[]=
		{
			"camo1"
		};
		precision=10;
		brakeDistance=12.5;
		acceleration=15;
		fireResistance=5;
		armor=30;
		cost=10000;
		weapons[]=
		{
			"SportCarHorn"
		};
		transportMaxBackpacks=7;
		transportSoldier=7;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.75;
		crewCrashProtection=0.25;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor=2;
				material=-1;
				name="motor";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				passThrough=0;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.5;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
		};
		driverAction="driver_offroad01";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_low01"
		};
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
		normalSpeedForwardCoef=0.89999998;
		turnCoef=2.5;
		terrainCoef=0.80000001;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=4;
		maxSpeed=145;
		fuelCapacity=45;
		wheelCircumference=2.277;
		brakeIdleSpeed=0;
		maxFordingDepth=0.5;
		waterResistance=2;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.224,
				"N",
				0,
				"D1",
				3.3199999,
				"D2",
				2.1300001,
				"D3",
				1.5,
				"D4",
				0.89999998,
				"D5",
				0.63
			};
			TransmissionRatios[]=
			{
				"High",
				6.1399999
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.44999999;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=25;
		transmissionLosses=20;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.15000001,0.41999999},
			{0.18000001,0.75},
			{0.27000001,0.94},
			{0.36000001,1},
			{0.44999999,1},
			{0.63999999,0.98000002},
			{0.81999999,0.88},
			{1,0.79000002}
		};
		maxOmega=575.96002;
		enginePower=136;
		peakTorque=312;
		idleRPM=700;
		redRPM=5500;
		engineLosses=14;
		thrustDelay=1.5;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=30;
				MOI=25;
				dampingRate=1;
				dampingRateDamaged=0.5;
				dampingRateInAir=0.80000001;
				dampingRateDestroyed=5000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				mMaxDroop=0.15000001;
				sprungMass=498;
				springStrength=124380;
				springDamperRate=6296;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,2.3},
					{0.5,2.0999999},
					{1,2}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=4000;
				latStiffY=18;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=4000;
				latStiffY=18;
			};
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_door",
			"db0",
			1
		};
		soundGetOut[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_door",
			"db0",
			1,
			30
		};
		soundEngineOnInt[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_int_start",
			"db0",
			1
		};
		soundEngineOnExt[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_ext_start",
			"db0",
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_int_stop",
			"db0",
			1
		};
		soundEngineOffExt[]=
		{
			"\ADFU_land_landrover\data\sounds\LRover_ext_stop",
			"db0",
			1,
			100
		};
		buildCrash0[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_building_01",
			"db-3",
			1,
			150
		};
		buildCrash1[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_building_02",
			"db-3",
			1,
			150
		};
		buildCrash2[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_building_03",
			"db-3",
			1,
			150
		};
		buildCrash3[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_building_04",
			"db-3",
			1,
			150
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
			"a3\sounds_f\vehicles\armor\noises\tank_wood_01",
			"db-3",
			1,
			150
		};
		WoodCrash1[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_wood_02",
			"db-3",
			1,
			150
		};
		WoodCrash2[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_wood_03",
			"db-3",
			1,
			150
		};
		WoodCrash3[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_wood_04",
			"db-3",
			1,
			150
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
		ArmorCrash0[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_vehicle_01",
			"db-3",
			1,
			150
		};
		ArmorCrash1[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_vehicle_02",
			"db-3",
			1,
			150
		};
		ArmorCrash2[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_vehicle_03",
			"db-3",
			1,
			150
		};
		ArmorCrash3[]=
		{
			"a3\sounds_f\vehicles\armor\noises\tank_vehicle_04",
			"db-3",
			1,
			150
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
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle",
					0.31622776,
					1,
					100
				};
				frequency="0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1",
					0.31622776,
					1,
					200
				};
				frequency="0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2",
					0.35481337,
					1,
					225
				};
				frequency="0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3",
					0.35481337,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4",
					0.39810717,
					1,
					275
				};
				frequency="0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5",
					0.44668359,
					1,
					300
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6",
					0.50118721,
					1,
					300
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7",
					0.56234133,
					1,
					300
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume="engineOn*camPos*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle",
					0.50118721,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1",
					0.56234133,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2",
					0.63095737,
					1,
					275
				};
				frequency="0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3",
					0.70794576,
					1,
					300
				};
				frequency="0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4",
					0.79432821,
					1,
					325
				};
				frequency="0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5",
					0.89125091,
					1,
					350
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6",
					1,
					1,
					375
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7",
					1.1220185,
					1,
					400
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle",
					0.2238721,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1",
					0.25118864,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2",
					0.17782794,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4",
					0.35481337,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5",
					0.39810717,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6",
					0.39810717,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7",
					0.44668359,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle",
					0.31622776,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1",
					0.35481337,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7",
					0.70794576,
					1
				};
				frequency="0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.70794576,
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
					0.70794576,
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
					0.70794576,
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
					0.70794576,
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
					0.70794576,
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
					0.70794576,
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
					0.56234133,
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
					0.15848932,
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
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
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		class RenderTargets
		{
			class RightMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class LeftMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class MiddleMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ADFU_land_landrover\Data\LR_base.rvmat",
				"ADFU_land_landrover\Data\LR_base_damage.rvmat",
				"ADFU_land_landrover\Data\LR_base_destruct.rvmat",
				"ADFU_land_landrover\Data\LR_glass.rvmat",
				"ADFU_land_landrover\Data\LR_glass_damage.rvmat",
				"ADFU_land_landrover\Data\LR_glass_destruct.rvmat",
				"ADFU_land_landrover\Data\LR_Special.rvmat",
				"ADFU_land_landrover\Data\LR_Special_damage.rvmat",
				"ADFU_land_landrover\Data\LR_Special_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust_pos";
				direction="exhaust_dir";
				effect="ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="light_L_pos";
				direction="light_L_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
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
			class LightCarHeadL02: LightCarHeadL01
			{
				position="light_L2_pos";
				direction="light_L2_dir";
				hitpoint="Light_L2";
				selection="Light_L2";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="light_R_pos";
				direction="light_R_dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="light_R2_pos";
				direction="light_R2_dir";
				hitpoint="Light_R2";
				selection="Light_R2";
				FlareSize=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadL02"
			},
			
			{
				"LightCarHeadR01",
				"LightCarHeadR02"
			}
		};
		class AnimationSources
		{
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
		};
	};
	class ADFU_land_LandRover_Transport: ADFU_land_LandRover_Base
	{
		scope=2;
		crew="ADFU_engineer_amp";
		side=1;
		faction="ADFU";
		author="$STR_ADFU_AUTHOR";
		displayname="Landrover 4x4 Transport";
		hiddenSelectionsTextures[]=
		{
			"ADFU_land_landrover\data\lr_base_acr_co.paa"
		};
	};
};

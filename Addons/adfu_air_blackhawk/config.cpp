class CfgPatches
{
	class ADFU_air_blackhawk
	{
		units[]=
		{
			"ADFU_air_blackhawk",
			"ADFU_air_blackhawk_mag58",
			"ADFU_air_blackhawk_mev",
			"ADFU_air_blackhawk_cargo"
		};
		weapons[]=
		{
			"ADFU_air_blackhawk_MAG58",
			"ADFU_air_blackhawk_MAG582"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"adfu_air_chinook"
		};
		magazines[]=
		{
			"ADFU_air_blackhawk_200Rnd_762x51_Tracer"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ADFU_S70A_Pilot="ADFU_S70A_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ADFU_S70A_Pilot: Crew
		{
			file="\ADFU_air_blackhawk\anim\S70A_Pilot.rtm";
			interpolateTo[]=
			{
				"ADFU_KIA_S70A_Pilot",
				1
			};
			leftHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKCurve[]={1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftLegIKCurve[]={1};
			leftLegIKBeg=1;
			leftLegIKEnd=1;
			rightLegIKCurve[]={1};
			rightLegIKBeg=1;
			rightLegIKEnd=1;
		};
		class ADFU_KIA_S70A_Pilot: DefaultDie
		{
			file="\ADFU_air_blackhawk\anim\S70A_KIA_Pilot.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Turrets: Turrets
		{
			class mainTurret;
			class CopilotTurret;
		};
		class HitPoints;
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class Reflectors
		{
			class Right;
		};
	};
	class ADFU_air_blackhawk_BASE: Helicopter_Base_H
	{
		scope=0;
		model="ADFU_air_blackhawk\S70A";
		displayName="S70A-9 Black Hawk";
		editorPreview = "\Addons\EditorPreviews\ADFU_air_blackhawk.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_BASE";
		side=1;
		faction="ADFU";
		vehicleClass="AIR";
		mapSize=16.82;
		driveOnComponent[]=
		{
			"Wheels"
		};
		picture="\A3\air_f_beta\Heli_Transport_01\Data\UI\Heli_Transport_01_base_CA.paa";
		icon="\A3\air_f_beta\Heli_Transport_01\Data\UI\Map_Heli_Transport_01_base_CA.paa";
		accuracy=0.5;
		RAV_Enable=1;
		RAV_center[]={0,-0.89999998,0.5};
		RAV_datCam[]=
		{
			{1.05,5.0999999,-0.63},
			{0,-1,-2},
			{0,2,-6}
		};
		RAV_datFastRopes[]=
		{
			
			{
				{1.05,1.6,-11.9},
				270,
				1,
				1
			},
			
			{
				{-1,1.6,-11.9},
				90,
				1,
				1
			}
		};
		usePreciseGetInAction=1;
		memoryPointsGetInDriver="pos Driver";
		memoryPointsGetInDriverDir="pos Driver dir";
		memoryPointsGetInCargo="pos Cargo";
		memoryPointsGetInCargoDir="pos Cargo dir";
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		GetInAction="ChopperLight_L_In_H";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInHeli_Transport_01Cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverDoor="door_Pilot_Open";
		cargoDoors[]={};
		driverAction="ADFU_S70A_Pilot";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_mantisrear",
			"passenger_mantisrear",
			"passenger_generic01_foldhands"
		};
		driverLeftHandAnimName="stick_collective";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedal_left";
		driverRightLegAnimName="pedal_right";
		castCargoShadow=1;
		transportSoldier=12;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		cargoCanEject=1;
		driverCanEject=0;
		maxSpeed=300;
		maxFordingDepth=0.55000001;
		mainRotorSpeed=1;
		backRotorSpeed=1;
		mainBladeRadius=7.5;
		bodyFrictionCoef=0.89999998;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		extCameraPosition[]={0,3,-23};
		gearRetracting=0;
		armor=100;
		damageResistance=0.0055499999;
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\open_close",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\open_close",
			1,
			1,
			50
		};
		soundEnviron[]=
		{
			"",
			0.031622998,
			1
		};
		soundDammage[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\crash",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_start",
			0.56234097,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_start",
			0.79432797,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_stop",
			0.56234097,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_stop",
			0.79432797,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			0.1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.1,
			1
		};
		occludeSoundsWhenIn=0.56234097;
		obstructSoundsWhenIn=0.316228;
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",
			1,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\dummysound",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\dummysound",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\dummysound",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
					1.4125381,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_rotor_low",
					0.707946,
					1,
					600
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_ext_rotor_high",
					0.79432797,
					1,
					700
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\rotor_swist",
					1,
					1,
					400
				};
				frequency=1;
				volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_engine",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_rotor_low",
					0.50118703,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Transport_01\Heli_Transport_01_int_rotor_high",
					0.63095701,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
					1.4125376,
					1,
					800
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarm
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="(1 - camPos) * ((transmissionDamage factor [0.40, 0.41]) + (motorDamage factor [0.40, 0.41]))";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					1,
					1,
					50
				};
				frequency=1;
				volume="2 * (1-camPos)*((gmeterZ factor[1.1,2]) + (gmeterZ factor[0.9,0]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
						1.4125376,
						1,
						800
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor",
						1,
						1,
						1500
					};
					frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\rotor_swist",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",
						1,
						1
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor",
						0.50118721,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarm
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="(1 - camPos) * ((transmissionDamage factor [0.40, 0.41]) + (motorDamage factor [0.40, 0.41]))";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
						1,
						1,
						50
					};
					frequency=1;
					volume="2 * (1-camPos)*((gmeterZ factor[1.1,2]) + (gmeterZ factor[0.9,0]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[40,80])";
				};
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		maximumLoad=2500;
		memoryPointSupply="main rotor";
		supplyRadius=-1;
		slingLoadMaxCargoMass=6000;
		class MFD
		{
			class Kimi_HUD_1
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.64999998,0.64999998};
					};
					class Velocity_slip
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.84500003};
						pos10[]={0.52999997,0.84500003};
					};
					class VspeedBone
					{
						type="linear";
						source="vspeed";
						sourceScale=1;
						min=-10;
						max=10;
						minPos[]={0.93000001,0.2};
						maxPos[]={0.93000001,0.80000001};
					};
					class RadarAltitudeBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=60;
						minPos[]={0.96499997,0.2};
						maxPos[]={0.96499997,0.80000001};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.5};
						pos10[]={0.77999997,0.77999997};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.15000001,0.15000001};
						clipBR[]={0.85000002,0.85000002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.41999999,0},
										1
									},
									
									{
										"Level0",
										{-0.079999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.41999999,0},
										1
									},
									
									{
										"Level0",
										{0.079999998,0},
										1
									},
									{}
								};
							};
							class LevelM10: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.17,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.22,-0.035},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.27000001,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.22,-0.035},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.17,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.22,0.085000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.27000001,0.035},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.17,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.22,-0.035},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.27000001,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.22,-0.035},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.17,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.22,0.085000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.27000001,0.035},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.17,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.22,-0.035},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.27000001,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.22,-0.035},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.17,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.22,0.085000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.27000001,0.035},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.17,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.22,-0.035},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.27000001,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.22,-0.035},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.17,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.22,0.085000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.27000001,0.035},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.22,0.085000001},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.17,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.22,-0.035},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.22,-0.085000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.27000001,-0.085000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.22,-0.035},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.17,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.22,0.085000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.22,0.035},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.27000001,0.035},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.22,0.085000001},
									1
								};
							};
						};
					};
					class StaticBank
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.47819999,0.25099999},
								1
							},
							
							{
								{0.47729999,0.241},
								1
							},
							{},
							
							{
								{0.45660001,0.2538},
								1
							},
							
							{
								{0.4549,0.2439},
								1
							},
							{},
							
							{
								{0.43529999,0.25850001},
								1
							},
							
							{
								{0.43009999,0.2392},
								1
							},
							{},
							
							{
								{0.4145,0.2651},
								1
							},
							
							{
								{0.4111,0.25569999},
								1
							},
							{},
							
							{
								{0.39430001,0.27340001},
								1
							},
							
							{
								{0.3901,0.26440001},
								1
							},
							{},
							
							{
								{0.375,0.28349999},
								1
							},
							
							{
								{0.36500001,0.26620001},
								1
							},
							{},
							
							{
								{0.32319999,0.32319999},
								1
							},
							
							{
								{0.3091,0.3091},
								1
							},
							{},
							
							{
								{0.28349999,0.375},
								1
							},
							
							{
								{0.26620001,0.36500001},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4782)",
									0.25099999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4773)",
									0.241
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4566)",
									0.2538
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4549)",
									0.2439
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4353)",
									0.25850001
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4301)",
									0.2392
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4145)",
									0.2651
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4111)",
									0.25569999
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3943)",
									0.27340001
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3901)",
									0.26440001
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3750)",
									0.28349999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3650)",
									0.26620001
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3232)",
									0.32319999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3091)",
									0.3091
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.2835)",
									0.375
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.2662)",
									0.36500001
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.5 - 0.25"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.5 - 0.28"
								},
								1
							}
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							}
						};
					};
					class Waterline
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								{0.44999999,0.5},
								1
							},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.52499998},
								1
							},
							
							{
								{0.5,0.5},
								1
							},
							
							{
								{0.50999999,0.52499998},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							
							{
								{0.55000001,0.5},
								1
							}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.2",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.2",
										"0.9-0.04"
									},
									1
								}
							};
						};
						class Slip_ball
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								}
							};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.095"
								},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="A-COL";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.155"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.155"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.195"
								},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							{0.029999999,0.47499999},
							1
						};
						right[]=
						{
							{0.079999998,0.47499999},
							1
						};
						down[]=
						{
							{0.029999999,0.52499998},
							1
						};
					};
					class TorqueNumber
					{
						condition="simulRTD";
						class Torque_number
						{
							type="text";
							align="left";
							scale=1;
							source="rtdRotorTorque";
							sourceScale=318;
							pos[]=
							{
								{0.064999998,0.175},
								1
							};
							right[]=
							{
								{0.115,0.175},
								1
							};
							down[]=
							{
								{0.064999998,0.22499999},
								1
							};
						};
						class Torquetext
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.07,0.175},
								1
							};
							right[]=
							{
								{0.12,0.175},
								1
							};
							down[]=
							{
								{0.07,0.22499999},
								1
							};
						};
					};
					class AltNumber: SpeedNumber
					{
						align="right";
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							{0.82999998,0.47499999},
							1
						};
						right[]=
						{
							{0.88,0.47499999},
							1
						};
						down[]=
						{
							{0.82999998,0.52499998},
							1
						};
					};
					class ASLNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83499998,0.18000001},
							1
						};
						right[]=
						{
							{0.875,0.18000001},
							1
						};
						down[]=
						{
							{0.83499998,0.22},
							1
						};
					};
					class VspeedScalePosta
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								{0.98000002,0.2},
								1
							},
							
							{
								{1,0.2},
								1
							},
							{},
							
							{
								{0.93000001,0.2},
								1
							},
							
							{
								{0.94999999,0.2},
								1
							},
							{},
							
							{
								{0.98000002,0.34999999},
								1
							},
							
							{
								{1,0.34999999},
								1
							},
							{},
							
							{
								{0.93000001,0.34999999},
								1
							},
							
							{
								{0.94999999,0.34999999},
								1
							},
							{},
							
							{
								{0.94,0.38},
								1
							},
							
							{
								{0.94999999,0.38},
								1
							},
							{},
							
							{
								{0.94,0.41},
								1
							},
							
							{
								{0.94999999,0.41},
								1
							},
							{},
							
							{
								{0.94,0.44},
								1
							},
							
							{
								{0.94999999,0.44},
								1
							},
							{},
							
							{
								{0.94,0.47},
								1
							},
							
							{
								{0.94999999,0.47},
								1
							},
							{},
							
							{
								{0.98000002,0.5},
								1
							},
							
							{
								{1,0.5},
								1
							},
							{},
							
							{
								{0.93000001,0.5},
								1
							},
							
							{
								{0.94999999,0.5},
								1
							},
							{},
							
							{
								{0.94,0.52999997},
								1
							},
							
							{
								{0.94999999,0.52999997},
								1
							},
							{},
							
							{
								{0.94,0.56},
								1
							},
							
							{
								{0.94999999,0.56},
								1
							},
							{},
							
							{
								{0.94,0.58999997},
								1
							},
							
							{
								{0.94999999,0.58999997},
								1
							},
							{},
							
							{
								{0.94,0.62},
								1
							},
							
							{
								{0.94999999,0.62},
								1
							},
							{},
							
							{
								{0.98000002,0.64999998},
								1
							},
							
							{
								{1,0.64999998},
								1
							},
							{},
							
							{
								{0.93000001,0.64999998},
								1
							},
							
							{
								{0.94999999,0.64999998},
								1
							},
							{},
							
							{
								{0.99000001,0.68000001},
								1
							},
							
							{
								{0.98000002,0.68000001},
								1
							},
							{},
							
							{
								{0.99000001,0.70999998},
								1
							},
							
							{
								{0.98000002,0.70999998},
								1
							},
							{},
							
							{
								{0.99000001,0.74000001},
								1
							},
							
							{
								{0.98000002,0.74000001},
								1
							},
							{},
							
							{
								{0.99000001,0.76999998},
								1
							},
							
							{
								{0.98000002,0.76999998},
								1
							},
							{},
							
							{
								{0.98000002,0.80000001},
								1
							},
							
							{
								{1,0.80000001},
								1
							},
							{},
							
							{
								{0.93000001,0.80000001},
								1
							},
							
							{
								{0.94999999,0.80000001},
								1
							},
							{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.80000001};
						class radarbanda
						{
							type="line";
							width=17;
							points[]=
							{
								
								{
									"RadarAltitudeBone",
									{0,0},
									1
								},
								
								{
									"RadarAltitudeBone",
									{0,0.60000002},
									1
								}
							};
						};
					};
					class VspeedBand
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,-0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							{}
						};
					};
					class HeadingNumber: SpeedNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.045000002},
							1
						};
						right[]=
						{
							{0.56,0.045000002},
							1
						};
						down[]=
						{
							
							{
								0.5,
								"0.045 + 0.06"
							},
							1
						};
					};
					class Center_box
					{
						type="line";
						width=1.5;
						points[]=
						{
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								
								{
									"0.5",
									"0.128 + 0.03"
								},
								1
							},
							
							{
								{0.5,0.12800001},
								1
							}
						};
					};
					class HeadingScale_LEFT
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[]=
						{
							0.44999999,
							"0.02 + 0.085"
						};
						clipBR[]=
						{
							"0.45 + 0.10",
							1
						};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class Fuel_Text
					{
						type="text";
						source="static";
						text="Fuel";
						align="right";
						scale=1;
						pos[]=
						{
							{0.85000002,0.86000001},
							1
						};
						right[]=
						{
							{0.88999999,0.86000001},
							1
						};
						down[]=
						{
							{0.85000002,0.89999998},
							1
						};
					};
					class Fuel_Number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							{0.92000002,0.86000001},
							1
						};
						right[]=
						{
							{0.95999998,0.86000001},
							1
						};
						down[]=
						{
							{0.92000002,0.89999998},
							1
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.039999999,0.039999999,0.1};
				helmetRight[]={0.079999998,0,0};
				helmetDown[]={0,-0.079999998,0};
			};
			class Kimi_HUD_2
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class ForwardVec1
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25299999,0.25299999};
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class PlaneMovementCrosshair
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							}
						};
					};
					class AC_Centerline
					{
						type="group";
						condition="on";
						class AC_Cross
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.0 + 0.5",
										"0.006 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.0 + 0.5",
										"-0.006 + 0.5"
									},
									1
								}
							};
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.035,0.035,0.1};
				helmetRight[]={0.07,0,0};
				helmetDown[]={0,-0.07,0};
			};
		};
		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
			class Left: Right
			{
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
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
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="marker_red_on";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="marker_green_on";
			};
			class CollisionRed: PositionRed
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="marker_red_blink";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.1;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
			};
		};
		destrType="DestructWreck";
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=1;
				material=51;
				name="hull";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.25;
				material=51;
				name="motor";
				visual="motor";
				passThrough=1;
			};
			class HitFuel
			{
				armor=0.25;
				material=51;
				name="fuel";
				passThrough=1;
			};
			class HitAvionics
			{
				armor=0.15000001;
				material=51;
				name="instruments";
				visual="elektronika";
				passThrough=1;
			};
			class HitVRotor
			{
				armor=0.30000001;
				material=51;
				name="tail rotor";
				visual="tail rotor static";
				passThrough=0.30000001;
			};
			class HitHRotor
			{
				armor=0.2;
				material=51;
				name="main rotor";
				visual="main rotor static";
				passThrough=0.1;
			};
			class HitRGlass
			{
				armor=0.1;
				material=51;
				name="sklo predni P";
				visual="sklo predni P";
				passThrough=0;
			};
			class HitLGlass
			{
				armor=0.1;
				material=51;
				name="sklo predni L";
				visual="sklo predni L";
				passThrough=0;
			};
			class HitGlass1
			{
				armor=2;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
			};
			class HitGlass2
			{
				armor=2;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=0;
			};
			class HitGlass3
			{
				armor=2;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=0;
			};
			class HitGlass4
			{
				armor=2;
				material=-1;
				name="glass4";
				visual="glass4";
				passThrough=0;
			};
		};
		class UserActions
		{
			class CargoDoorLeft_Open
			{
				userActionID=50;
				displayName="$STR_A3_CfgVehicles_UserActions_OpenLdoor0";
				radius=4;
				showIn3D=17;
				priority=3;
				position="door_L";
				onlyForPlayer=0;
				condition="((this doorPhase 'door_L') == 0)";
				statement="this animateDoor ['door_L', 1]";
			};
			class CargoDoorRight_Open: CargoDoorLeft_Open
			{
				userActionID=51;
				displayName="$STR_A3_CfgVehicles_UserActions_OpenRdoor0";
				position="door_R";
				condition="((this doorPhase 'door_R') == 0)";
				statement="this animateDoor ['door_R', 1]";
			};
			class CargoDoorLeft_Close: CargoDoorLeft_Open
			{
				userActionID=53;
				displayName="$STR_A3_CfgVehicles_UserActions_CloseLdoor0";
				condition="((this doorPhase 'door_L') > 0)";
				statement="this animateDoor ['door_L', 0]";
			};
			class CargoDoorRight_Close: CargoDoorLeft_Close
			{
				userActionID=54;
				displayName="$STR_A3_CfgVehicles_UserActions_CloseRdoor0";
				position="door_R";
				condition="((this doorPhase 'door_R') > 0)";
				statement="this animateDoor ['door_R', 0]";
			};
			class door_Pilot_Open
			{
				userActionID=55;
				displayName="Open Pilot Door";
				radius=2.5;
				showIn3D=17;
				priority=3;
				position="pos Driver";
				onlyForPlayer=0;
				condition="((this doorPhase 'door_Pilot_Open') == 0)";
				statement="this animateDoor ['door_Pilot_Open', 1]";
			};
			class door_Pilot_Close: door_Pilot_Open
			{
				userActionID=56;
				displayName="Close Pilot Door";
				condition="((this DoorPhase 'door_Pilot_Open') > 0)";
				statement="this animateDoor ['door_Pilot_Open', 0]";
			};
			class door_CoPilot_Open
			{
				userActionID=57;
				displayName="Open CoPilot Door";
				radius=2.5;
				showIn3D=17;
				priority=3;
				position="pos Codriver";
				onlyForPlayer=0;
				condition="((this DoorPhase 'door_CoPilot_Open') == 0)";
				statement="this animateDoor ['door_CoPilot_Open', 1]";
			};
			class door_CoPilot_Close: door_CoPilot_Open
			{
				displayName="Close CoPilot Door";
				condition="((this DoorPhase 'door_CoPilot_Open') > 0)";
				statement="this animateDoor ['door_CoPilot_Open', 0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class door_Pilot_Open
			{
				source="door";
				animPeriod=1.6;
				initPhase=0;
			};
			class door_CoPilot_Open
			{
				source="door";
				animPeriod=1.6;
				initPhase=0;
			};
			class door_L
			{
				source="door";
				animPeriod=1.6;
				initPhase=0;
			};
			class door_R
			{
				source="door";
				animPeriod=1.6;
				initPhase=0;
			};
			class Holder
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class Proxy
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
		};
		class Armory
		{
			description="$STR_A3_CfgVehicles_Heli_Transport_01_Base_F_Armory0";
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem="2 + 8 + 4";
		incomingMissileDetectionSystem=16;
		enableManualFire=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_adds.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_adds_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_adds_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_base.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_base_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_base_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_board.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_board_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_int_board_destruct.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_minigun_add_damage.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_air_blackhawk\data\labels\labels_110_ca.paa"
		};
		cost=1500000;
		class EventHandlers: Eventhandlers
		{
			init="(_this select 0) execVM ""\ADFU_air_blackhawk\scripts\init_base.sqf"" ";
		};
		class RotorLibHelicopterProperties
		{
			RTDconfig="ADFU_air_blackhawk\RTD_Air_Blackawk.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1100;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=200000;
			maxTailRotorStress=25000;
		};
	};
	class ADFU_air_blackhawk_BASE_MAG58: ADFU_air_blackhawk_BASE
	{
		scope=0;
		model="ADFU_air_blackhawk\S70A_MAG58";
		displayName="S70A-9 Black Hawk";
		editorPreview = "\Addons\EditorPreviews\ADFU_air_blackhawk_mag58.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_BASE_MAG58";
		cargoProxyIndexes[]={2,3,6,7,9,10,11,12};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class AnimationSources: AnimationSources
		{
			class Gun_HRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Gun_VRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Minigun
			{
				source="revolving";
				weapon="ADFU_air_blackhawk_MAG58";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="ADFU_air_blackhawk_MAG58";
			};
			class Minigun2
			{
				source="revolving";
				weapon="ADFU_air_blackhawk_MAG582";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="ADFU_air_blackhawk_MAG582";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
			class MainTurret: mainTurret
			{
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-50;
				maxElev=5;
				initElev="--15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_end_1";
				gunEnd="muzzle_beg_1";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerView";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=1;
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG58"
				};
				magazines[]=
				{
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer"
				};
				commanding=-2;
				primaryGunner=1;
				occludeSoundsWhenIn=0.2;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				proxyIndex=2;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="mainTurret2";
				gun="mainGun2";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				proxyIndex=3;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG582"
				};
				commanding=-3;
				gunBeg="muzzle_end_2";
				gunEnd="muzzle_beg_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="gunnerView_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Cargo Rear Gunner (Left)";
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				enabledByAnimationSource="door_L";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				memoryPointGunnerOptics="";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=0;
				isPersonTurret=1;
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=1;
				maxElev=25;
				minElev=-35;
				maxTurn=28;
				minTurn=5;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Cargo Mid Gunner (Left)";
				gunnerCompartments="Compartment2";
				proxyIndex=8;
				enabledByAnimationSource="door_L";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-95;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName="Cargo Rear Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=4;
				enabledByAnimationSource="door_R";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-28;
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerName="Cargo Mid Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=5;
				enabledByAnimationSource="door_R";
				maxElev=25;
				minElev=-35;
				maxTurn=95;
				minTurn=5;
			};
		};
	};
	class ADFU_air_blackhawk: ADFU_air_blackhawk_BASE
	{
		scope=2;
		model="ADFU_air_blackhawk\S70A";
		displayName="S70 Blackhawk";
		editorPreview = "ADFU_air_blackhawk\data\ADFU_air_blackhawk.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_BASE_F";
		mapSize=16.82;
		crew="ADFU_pilot_dpcu";
		typicalCargo[]=
		{
			"ADFU_crewman_dpcu"
		};
		transportSoldier=8;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cargoProxyIndexes[]={2,3,6,7,9,10,11,12};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class UserActions: UserActions
		{
			class GunnerDoorLeft_Open
			{
				userActionID=58;
				displayName="Open Gunner Doors (Left)";
				radius=3.5;
				showIn3D=17;
				priority=3;
				position="door_gunner_L";
				onlyForPlayer=0;
				condition="((this doorPhase 'door_gunner_L') == 0)";
				statement="this animateDoor ['door_gunner_L', 1]";
			};
			class GunnerDoorRight_Open: GunnerDoorLeft_Open
			{
				userActionID=59;
				displayName="Open Gunner Doors (Right)";
				position="door_gunner_R";
				condition="((this doorPhase 'door_gunner_R') == 0)";
				statement="this animateDoor ['door_gunner_R', 1]";
			};
			class GunnerDoorLeft_Close: GunnerDoorLeft_Open
			{
				userActionID=60;
				displayName="Close Gunner Doors (Left)";
				condition="((this doorPhase 'door_gunner_L') > 0)";
				statement="this animateDoor ['door_gunner_L', 0]";
			};
			class GunnerDoorRight_Close: GunnerDoorLeft_Close
			{
				userActionID=70;
				displayName="Close Gunner Doors (Right)";
				position="door_gunner_R";
				condition="((this doorPhase 'door_gunner_R') > 0)";
				statement="this animateDoor ['door_gunner_R', 0]";
			};
		};
		class AnimationSources: AnimationSources
		{
			class door_gunner_L
			{
				source="door";
				initPhase=1;
				animPeriod=1.6;
			};
			class door_gunner_R
			{
				source="door";
				initPhase=1;
				animPeriod=1.6;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				gunnerName="Gunner (Left)";
				proxyIndex=13;
				maxElev=18;
				minElev=-35;
				maxTurn=32;
				minTurn=-32;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_gunner_L";
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Gunner (Right)";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				proxyIndex=14;
				enabledByAnimationSource="door_gunner_R";
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerName="Cargo Rear Gunner (Left)";
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				enabledByAnimationSource="door_L";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				proxyIndex=1;
				maxElev=25;
				minElev=-35;
				maxTurn=28;
				minTurn=5;
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerName="Cargo Mid Gunner (Left)";
				gunnerCompartments="Compartment2";
				proxyIndex=8;
				enabledByAnimationSource="door_L";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-95;
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerName="Cargo Rear Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=4;
				enabledByAnimationSource="door_R";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-28;
			};
			class CargoTurret_06: CargoTurret_05
			{
				gunnerName="Cargo Mid Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=5;
				enabledByAnimationSource="door_R";
				maxElev=25;
				minElev=-35;
				maxTurn=95;
				minTurn=5;
			};
		};
	};
	class ADFU_air_blackhawk_mag58: ADFU_air_blackhawk_BASE_MAG58
	{
		scope=2;
		model="ADFU_air_blackhawk\S70A_MAG58";
		displayName="S70 Blackhawk MAG-58";
		editorPreview = "ADFU_air_blackhawk\data\ADFU_air_blackhawk_mag58.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_MAG58_F";
		mapSize=16.82;
		crew="ADFU_pilot_dpcu";
		typicalCargo[]=
		{
			"ADFU_crewman_dpcu"
		};
		transportSoldier=8;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cargoProxyIndexes[]={1,2,6,7,9,10,11,12};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		class AnimationSources: AnimationSources
		{
			class Gun_HRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Gun_VRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Minigun
			{
				source="revolving";
				weapon="ADFU_air_blackhawk_MAG58";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="ADFU_air_blackhawk_MAG58";
			};
			class Minigun2
			{
				source="revolving";
				weapon="ADFU_air_blackhawk_MAG582";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="ADFU_air_blackhawk_MAG582";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
			class MainTurret: MainTurret
			{
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-50;
				maxElev=5;
				initElev="--15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_end_1";
				gunEnd="muzzle_beg_1";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerView";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=1;
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG58"
				};
				magazines[]=
				{
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer"
				};
				commanding=-2;
				primaryGunner=1;
				occludeSoundsWhenIn=0.2;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				proxyIndex=2;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="mainTurret2";
				gun="mainGun2";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				proxyIndex=3;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG582"
				};
				commanding=-3;
				gunBeg="muzzle_end_2";
				gunEnd="muzzle_beg_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="gunnerView_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Cargo Rear Gunner (Left)";
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				enabledByAnimationSource="door_L";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				memoryPointGunnerOptics="";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=0;
				isPersonTurret=1;
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=1;
				maxElev=25;
				minElev=-35;
				maxTurn=28;
				minTurn=5;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Cargo Mid Gunner (Left)";
				gunnerCompartments="Compartment2";
				proxyIndex=8;
				enabledByAnimationSource="door_L";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-95;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName="Cargo Rear Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=4;
				enabledByAnimationSource="door_R";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-28;
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerName="Cargo Mid Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=5;
				enabledByAnimationSource="door_R";
				maxElev=25;
				minElev=-35;
				maxTurn=95;
				minTurn=5;
			};
		};
	};
	class ADFU_air_blackhawk_mev: ADFU_air_blackhawk_BASE_MAG58
	{
		scope=2;
		model="ADFU_air_blackhawk\S70A_MEV";
		displayName="S70 Blackhawk Medivac";
		editorPreview = "ADFU_air_blackhawk\data\ADFU_air_blackhawk_mev.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_MEV_F";
		mapSize=16.82;
		attendant=1;
		crew="ADFU_pilot_dpcu";
		cargoAction[]=
		{
			"passenger_injured_medevac_truck02",
			"passenger_injured_medevac_truck01",
			"passenger_injured_medevac_truck02",
			"passenger_mantisrear",
			"passenger_mantisrear"
		};
		typicalCargo[]=
		{
			"ADFU_DPCU_Medic"
		};
		transportSoldier=2;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cargoProxyIndexes[]={1,2};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2"
		};
		class CargoTurret;
		class AnimationSources;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
			class MainTurret: MainTurret
			{
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-50;
				maxElev=5;
				initElev="--15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_end_1";
				gunEnd="muzzle_beg_1";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerView";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerForceOptics=1;
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG58"
				};
				magazines[]=
				{
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer",
					"ADFU_air_blackhawk_200Rnd_762x51_Tracer"
				};
				commanding=-2;
				primaryGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				proxyIndex=2;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="mainTurret2";
				gun="mainGun2";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				proxyIndex=3;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"ADFU_air_blackhawk_MAG582"
				};
				commanding=-3;
				gunBeg="muzzle_end_2";
				gunEnd="muzzle_beg_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="gunnerView_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				gunnerDoor="";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Cargo Rear Gunner (Left)";
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				enabledByAnimationSource="door_L";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				isPersonTurret=1;
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=3;
				maxElev=25;
				minElev=-35;
				maxTurn=28;
				minTurn=5;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Cargo Rear Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=4;
				enabledByAnimationSource="door_R";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-28;
			};
		};
	};
	class ADFU_air_blackhawk_cargo: ADFU_air_blackhawk
	{
		scope=2;
		model="ADFU_air_blackhawk\S70A_CARGO";
		displayName="S70 Blackhawk Cargo";
		editorPreview = "ADFU_air_blackhawk\data\ADFU_air_blackhawk_cargo.jpg";
		author="$STR_ADFU_AUTHOR";
		_generalMacro="ADFU_air_blackhawk_BASE_F";
		mapSize=16.82;
		crew="ADFU_pilot_dpcu";
		typicalCargo[]=
		{
			"ADFU_crewman_dpcu"
		};
		transportSoldier=2;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cargoProxyIndexes[]={2,3};
		cargoCompartments[]=
		{
			"Compartment2",
			"Compartment2"
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="ADFU_S70A_Pilot";
				gunnerInAction="ADFU_S70A_Pilot";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="door_CoPilot_Open";
				gunnerLeftHandAnimName="stick_collective";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedal_left";
				gunnerRightLegAnimName="pedal_right";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Cargo left";
				memoryPointsGetInGunnerDir="pos Cargo left dir";
				gunnerName="Passenger (left door)";
				proxyIndex=8;
				maxElev=45;
				minElev=-45;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				ejectDeadGunner=0;
				playerPosition=0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Cargo left";
				memoryPointsGetInGunnerDir="pos Cargo left dir";
				gunnerName="Passenger (left door)";
				proxyIndex=9;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Cargo right";
				memoryPointsGetInGunnerDir="pos Cargo right dir";
				gunnerName="Passenger (right door)";
				proxyIndex=7;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Cargo right";
				memoryPointsGetInGunnerDir="pos Cargo right dir";
				gunnerName="Passenger (right door)";
				proxyIndex=6;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-95,65};
				};
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerName="Cargo Rear Gunner (Left)";
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				isPersonTurret=1;
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				proxyIndex=1;
				maxElev=25;
				minElev=-35;
				maxTurn=28;
				minTurn=5;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerName="Cargo Rear Gunner (Right)";
				gunnerCompartments="Compartment2";
				proxyIndex=4;
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				maxElev=25;
				minElev=-35;
				maxTurn=-5;
				minTurn=-28;
			};
			class CargoTurret_07: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner left";
				memoryPointsGetInGunnerDir="pos Gunner left dir";
				gunnerName="Gunner (Left)";
				proxyIndex=10;
				maxElev=18;
				minElev=-35;
				maxTurn=32;
				minTurn=-32;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_gunner_L";
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
			};
			class CargoTurret_08: CargoTurret_07
			{
				gunnerName="Gunner (Right)";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos Gunner right";
				memoryPointsGetInGunnerDir="pos Gunner right dir";
				proxyIndex=11;
				enabledByAnimationSource="door_gunner_R";
			};
		};
		class UserActions
		{
			class door_Pilot_Open
			{
				userActionID=55;
				displayName="Open Pilot Door";
				radius=2.5;
				showIn3D=17;
				priority=3;
				position="pos Driver";
				onlyForPlayer=0;
				condition="((this doorPhase 'door_Pilot_Open') == 0)";
				statement="this animateDoor ['door_Pilot_Open', 1]";
			};
			class door_Pilot_Close: door_Pilot_Open
			{
				userActionID=56;
				displayName="Close Pilot Door";
				condition="((this DoorPhase 'door_Pilot_Open') > 0)";
				statement="this animateDoor ['door_Pilot_Open', 0]";
			};
			class door_CoPilot_Open
			{
				userActionID=57;
				displayName="Open CoPilot Door";
				radius=2.5;
				showIn3D=17;
				priority=3;
				position="pos Codriver";
				onlyForPlayer=0;
				condition="((this DoorPhase 'door_CoPilot_Open') == 0)";
				statement="this animateDoor ['door_CoPilot_Open', 1]";
			};
			class door_CoPilot_Close: door_CoPilot_Open
			{
				displayName="Close CoPilot Door";
				condition="((this DoorPhase 'door_CoPilot_Open') > 0)";
				statement="this animateDoor ['door_CoPilot_Open', 0]";
			};
			class GunnerDoorLeft_Open
			{
				userActionID=58;
				displayName="Open Gunner Doors (Left)";
				radius=3.5;
				showIn3D=17;
				priority=3;
				position="door_gunner_L";
				onlyForPlayer=0;
				condition="((this doorPhase 'door_gunner_L') == 0)";
				statement="this animateDoor ['door_gunner_L', 1]";
			};
			class GunnerDoorRight_Open: GunnerDoorLeft_Open
			{
				userActionID=59;
				displayName="Open Gunner Doors (Right)";
				position="door_gunner_R";
				condition="((this doorPhase 'door_gunner_R') == 0)";
				statement="this animateDoor ['door_gunner_R', 1]";
			};
			class GunnerDoorLeft_Close: GunnerDoorLeft_Open
			{
				userActionID=60;
				displayName="Close Gunner Doors (Left)";
				condition="((this doorPhase 'door_gunner_L') > 0)";
				statement="this animateDoor ['door_gunner_L', 0]";
			};
			class GunnerDoorRight_Close: GunnerDoorLeft_Close
			{
				userActionID=70;
				displayName="Close Gunner Doors (Right)";
				position="door_gunner_R";
				condition="((this doorPhase 'door_gunner_R') > 0)";
				statement="this animateDoor ['door_gunner_R', 0]";
			};
		};
	};
};
class cfgWeapons
{
	class LMG_RCWS;
	class MGun;
	class ADFU_air_blackhawk_MAG58: LMG_RCWS
	{
		displayName="MAG-58 Vehicle Mounted";
		scope=1;
		magazines[]=
		{
			"ADFU_air_blackhawk_200Rnd_762x51_Tracer"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_end_1";
				directionName="muzzle_beg_1";
				effectName="MachineGunCloud";
			};
		};
		showAimCursorInternal=1;
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
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin2[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin3[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin4[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
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
	class ADFU_air_blackhawk_MAG582: ADFU_air_blackhawk_MAG58
	{
		scope=1;
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_end_2";
				directionName="muzzle_beg_2";
				effectName="MachineGunCloud";
			};
		};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFU_air_blackhawk_200Rnd_762x51_Tracer: 150Rnd_762x51_Box
	{
		scope=1;
		author="$STR_ADFU_AUTHOR";
		displayName="200 Round 7.62mm Tracer";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count=200;
		type="2*  256";
		tracersEvery=1;
	};
};

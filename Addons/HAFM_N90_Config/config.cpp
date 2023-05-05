class CfgPatches
{
	class HAFM_NH90_Config
	{
		units[]=
		{
			"NH90",
			"NH90Marine",
			"NH90_GR",
			"NH90_GR2",
			"NH90_AAF",
			"NH90Armed_AAF",
			"NH90Armed_GR",
			"NH90Armed_GR2",
			"NH90Armed",
			"HAFM_NH90Wreck"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F"
		};
	};
};
class CfgVehicleClasses
{
	class HAFM_Helis
	{
		displayName="Helicopters";
	};
};
class CfgFactionClasses
{
	class ADFU
	{
		displayName="ADFU";
		priority=8;
		side=2;
		icon="\HAFM_NH90\UI\cfgFactionClasses_gr_ca.paa";
	};
};
class CfgAnimationSourceSounds
{
	class NH90ServoDoorsSound
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"HAFM_NH90\sounds\Heli_NH90_01_door",
				1,
				1,
				80
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class DoorMovementDone
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.98,0.99])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",
				0.35481337,
				1,
				40
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class OpenTheDoor
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsKnob",
				0.35481337,
				1,
				40
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class SlamTheDoor
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.02,0.01])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				40
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class NH90ServoRampSound
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"HAFM_NH90\sounds\Heli_NH90_01_ramp",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class DoorMovementDone1
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.9,0.99])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class DoorMovementDone2
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.05])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class SlamTheDoor
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.02,0.01])";
			sound0[]=
			{
				"A3\Sounds_F\sfx\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class HelicopterWreck;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
		class Eventhandlers;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class NH90: Helicopter_Base_H
	{
		features="Randomization: No      <br />Camo selections: 2 - main body, tail with rotor and gear      <br />Script door sources: CargoRamp_Open, Door_L, Door_R      <br />Script animations: Holder      <br />Executed scripts: None       <br />Firing from vehicles: No      <br />Slingload: Slingloads up to 4000 kg      <br />Cargo proxy indexes: 1 to 14";
		mapSize=16.82;
		author="Aplion";
		_generalMacro="NH90";
		displayName="MRH-90 Taipan";
		model="\HAFM_NH90\NH90.p3d";
		scope=2;
		side=1;
		faction="BLU_F";
		vehicleClass="Air";
		AGM_FastRoping=1;
		AGM_FastRoping_Positions[]=
		{
			{1.47,1.8099999,-0.0099999998}
		};
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		picture="\HAFM_NH90\UI\NH90_CA.paa";
		icon="\HAFM_NH90\UI\Map_NH90_CA.paa";
		accuracy=0.5;
		usePreciseGetInAction=1;
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
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
		driverDoor="";
		cargoDoors[]={};
		driverAction="pilot_Heli_Transport_01";
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedalL";
		driverRightLegAnimName="pedalR";
		castCargoShadow=1;
		transportSoldier=14;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		cargoCanEject=1;
		driverCanEject=1;
		maximumLoad=4200;
		mainRotorSpeed=1;
		backRotorSpeed=1;
		mainBladeRadius=8.5;
		tailBladeRadius=1.8;
		maxFordingDepth=1.5;
		bodyFrictionCoef=1.05;
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Transport_02\RTD_Heli_Transport_02.xml";
			autoHoverCorrection[]={4.6999998,3.8,0};
			defaultCollective=0.66500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=4014;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=185000;
			maxTailRotorStress=30000;
		};
		maxSpeed=200;
		fuelCapacity=1360;
		fuelConsumptionRate=0.126;
		radarType=8;
		slingLoadMaxCargoMass=12000;
		extCameraPosition[]={0,3,-15};
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		armor=40;
		damageResistance=0.0055499999;
		slingLoadMemoryPoint="SlingLoad";
		liftForceCoef=1.6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.3;
				name="zbytek";
				visual="zbytek";
				passThrough=0.2;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitEngine: HitEngine
			{
				armor=1.5;
				name="motor";
				visual="motor";
				passThrough=0.30000001;
			};
			class HitHRotor: HitHRotor
			{
				armor=1;
				material=51;
				name="velka vrtule";
				visual="velka vrtule staticka";
				passThrough=0.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1;
				material=51;
				name="mala vrtule";
				visual="mala vrtule staticka";
				passThrough=0.5;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon="arifle_MXC_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
		supplyRadius=-0.5;
		class MFD
		{
		};
		class Reflectors
		{
			class Light
			{
				color[]={8000,6500,3500};
				ambient[]={80,60,30};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				position="Light";
				direction="Light_dir";
				hitpoint="Light_hitpoint";
				selection="Light";
				useFlare=1;
				flareSize=8;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Light2
			{
				color[]={8000,6500,3500};
				ambient[]={80,60,30};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				position="Light2";
				direction="Light2_dir";
				hitpoint="Light2_hitpoint";
				selection="Light2";
				useFlare=1;
				flareSize=8;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="cerveny pozicni";
				drawLight=1;
				drawLightSize=0.2;
				drawLightCenterSize=0.059999999;
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
				name="zeleny pozicni";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
				drawLightSize=0.2;
			};
			class CollisionRed: PositionRed
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class CollisionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="CollisionLight_white_1_pos";
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
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
		attenuationEffectType="SemiOpenHeliAttenuation";
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
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\open_close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"HAFM_NH90\sounds\Heli_NH90_01_int_start",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"HAFM_NH90\sounds\Heli_NH90_01_ext_start",
			1.9952624,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"HAFM_NH90\sounds\Heli_NH90_01_int_stop",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"HAFM_NH90\sounds\Heli_NH90_01_ext_stop",
			1.9952624,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			1,
			1
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
			2.5118864,
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
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
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
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
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
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
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
		gearUpExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
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
					"HAFM_NH90\sounds\Heli_NH90_01_ext_rotor",
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
					"A3\Sounds_F\dummysound",
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
					"HAFM_NH90\sounds\Heli_NH90_01_int_engine",
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
					"A3\Sounds_F\dummysound",
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
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
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
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
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
						"A3\Sounds_F\dummysound",
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
						"HAFM_NH90\sounds\Heli_NH90_01_ext_rotor",
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
						"A3\Sounds_F\dummysound",
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
						"HAFM_NH90\sounds\Heli_NH90_01_int_engine",
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
						"A3\Sounds_F\dummysound",
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
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
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
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
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
		class UserActions
		{
			class RampLock
			{
				displayName="Lock Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="isNil {this getVariable ""ramplock""} and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};";
				statement="this setVariable [""ramplock"", 1, true]; hint ""Ramp Door Locked"";";
				onlyforplayer=1;
			};
			class RampUnlock
			{
				displayName="Unlock Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="!isNil {this getVariable ""ramplock""} and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};";
				statement="this setVariable [""ramplock"", nil, true]; hint ""Ramp Door Unlocked"";";
				onlyforplayer=1;
			};
			class OpenCargoDoor
			{
				displayName="Open Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="if (isNil {this getVariable ""ramplock""}) then{ this animationPhase ""cargoDoor"" == 0 and (alive this) and player == player;} else { this animationPhase ""cargoDoor"" == 0 and (alive this) and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};};";
				statement="this animate [""cargoDoor"", 1] AND this animate [""AFTDoorPart"", 1];";
				onlyforplayer=1;
			};
			class CloseCargoDoor
			{
				displayName="Close Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="if (isNil {this getVariable ""ramplock""}) then{ this animationPhase ""cargoDoor"" > 0 and (alive this) and player == player;} else { this animationPhase ""cargoDoor"" > 0 and (alive this) and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};};";
				statement="this animate [""cargoDoor"", 0] AND this animate [""AFTDoorPart"", 0];";
				onlyforplayer=1;
			};
			class sideDoors1Open
			{
				displayName="SideDoors Open";
				position="side";
				radius=15;
				showwindow=0;
				condition="this animationPhase ""sideDoors1"" == 0 and (alive this) and player == player;";
				statement="this animate [""sideDoors1"", 1];";
				onlyforplayer=1;
			};
			class sideDoors1Close
			{
				displayName="SideDoors Close";
				position="side";
				radius=15;
				showwindow=0;
				condition="this animationPhase ""sideDoors1"" > 0 and (alive this) and player == player;";
				statement="this animate [""sideDoors1"", 0];";
				onlyforplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class cargoDoor
			{
				source="user";
				animPeriod=4;
				initPhase=0;
				sound="NH90ServoRampSound";
			};
			class AFTDoorPart: cargoDoor
			{
				sound="";
			};
			class sideDoors1
			{
				source="user";
				animPeriod=2;
				initPhase=0;
				sound="NH90ServoDoorsSound";
			};
		};
		driverCompartments="Compartment1";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=1;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				proxyIndex=1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				commanding=-3;
			};
		};
		class Armory
		{
			description="HAFM NH90";
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		LockDetectionSystem="2 + 8 + 4";
		incomingMissileDetectionSystem=16;
		enableManualFire=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"HAFM_NH90\Data\outerHaul.rvmat",
				"HAFM_NH90\destruct\outerHaul_damage.rvmat",
				"HAFM_NH90\destruct\outerHaul_destruct.rvmat",
				"HAFM_NH90\Data\upperTail.rvmat",
				"HAFM_NH90\destruct\upperTail_damage.rvmat",
				"HAFM_NH90\destruct\upperTail_destruct.rvmat",
				"HAFM_NH90\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"HAFM_NH90\Data\innerHaul.rvmat",
				"HAFM_NH90\destruct\innerHaul_damage.rvmat",
				"HAFM_NH90\destruct\innerHaul_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\data\outerHaul_co.paa",
			"HAFM_NH90\data\upperTail_co.paa",
			"HAFM_NH90\data\misc_co.paa",
			"HAFM_NH90\data\doors_co.paa"
		};
		cost=1500000;
		threat[]={0.69999999,0.2,0.5};
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class EventHandlers: Eventhandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="slingCamera";
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
	};
	class NH90Marine: NH90
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_Marine";
		displayName="NH90 Marine";
		model="\HAFM_NH90\NH90marine.p3d";
		scope=2;
		side=1;
		faction="BLU_F";
		vehicleClass="Air";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\marine\marineouterHaul_co.paa",
			"HAFM_NH90\marine\marineupperTail_co.paa",
			"HAFM_NH90\marine\marinemisc_co.paa",
			"HAFM_NH90\marine\marinedoors_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"HAFM_NH90\marine\marineouterhaul.rvmat",
				"HAFM_NH90\destruct\outerHaul_damage.rvmat",
				"HAFM_NH90\destruct\outerHaul_destruct.rvmat",
				"HAFM_NH90\Data\upperTail.rvmat",
				"HAFM_NH90\destruct\upperTail_damage.rvmat",
				"HAFM_NH90\destruct\upperTail_destruct.rvmat",
				"HAFM_NH90\Data\Heli_Transport_01_glass.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_glass_damage.rvmat",
				"HAFM_NH90\Data\innerHaul.rvmat",
				"HAFM_NH90\destruct\innerHaul_damage.rvmat",
				"HAFM_NH90\destruct\innerHaul_destruct.rvmat"
			};
		};
	};
	class NH90_GR: NH90
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_GR";
		scope=2;
		side=2;
		faction="ADFU";
		vehicleClass="HAFM_Helis";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F",
			"I_helicrew_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\gr\GRouterHaul_co.paa",
			"HAFM_NH90\gr\GRupperTail_co.paa",
			"HAFM_NH90\gr\GRmisc_co.paa",
			"HAFM_NH90\gr\GRdoors_co.paa"
		};
	};
	class NH90_GR2: NH90
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_GR2";
		scope=2;
		side=1;
		faction="ADFU";
		vehicleClass="HAFM_Helis";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\gr\GRouterHaul_co.paa",
			"HAFM_NH90\gr\GRupperTail_co.paa",
			"HAFM_NH90\gr\GRmisc_co.paa",
			"HAFM_NH90\gr\GRdoors_co.paa"
		};
	};
	class NH90_AAF: NH90
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_AAF";
		scope=2;
		side=2;
		faction="IND_F";
		vehicleClass="Air";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F",
			"I_helicrew_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\aaf\AAFouterHaul_co.paa",
			"HAFM_NH90\aaf\AAFupperTail_co.paa",
			"HAFM_NH90\aaf\AAFmisc_co.paa",
			"HAFM_NH90\aaf\AAFdoors_co.paa"
		};
	};
	class NH90Armed_AAF: NH90
	{
		author="Aplion";
		model="\HAFM_NH90\NH90Armed.p3d";
		displayName="NH90 Armed";
		_generalMacro="HAFM_NH90_Armed_AAF";
		scope=2;
		side=2;
		faction="IND_F";
		vehicleClass="Air";
		AGM_FastRoping=1;
		AGM_FastRoping_Positions[]=
		{
			{0.60000002,-4,-0.25},
			{-0.60000002,-4,-0.25}
		};
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F",
			"I_helicrew_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\aaf\AAFouterHaul_co.paa",
			"HAFM_NH90\aaf\AAFupperTail_co.paa",
			"HAFM_NH90\aaf\AAFmisc_co.paa",
			"HAFM_NH90\aaf\AAFdoors_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				proxyIndex=1;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				commanding=-1;
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-50;
				maxElev=30;
				initElev=0;
				minTurn="0maxTurn = 140";
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
				selectionFireAnim="zasleh";
				stabilizedInAxes="StabilizedInAxesNone";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				gunnerName="Left Gunner";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerView";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"LMG_Minigun_Transport"
				};
				magazines[]=
				{
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
				proxyIndex=2;
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
					initFov=0.60000002;
					minFov=0.30000001;
					maxFov=0.75;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner1";
				memoryPointsGetInGunnerDir="pos gunner1 dir";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
			};
			class RightDoorGun: MainTurret
			{
				stabilizedInAxes="StabilizedInAxesNone";
				minTurn=-140;
				maxTurn=0;
				initTurn=-90;
				body="Turret_2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				selectionFireAnim="zasleh_1";
				gunnerName="Right Gunner";
				weapons[]=
				{
					"LMG_Minigun_Transport2"
				};
				commanding=-3;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				primaryGunner=0;
				memoryPointGunnerOptics="gunnerView_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				proxyIndex=3;
				turretCanSee="1 + 2 + 4 + 8 + 16";
			};
		};
		class UserActions
		{
			class RampLock
			{
				displayName="Lock Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="isNil {this getVariable ""ramplock""} and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};";
				statement="this setVariable [""ramplock"", 1, true]; hint ""Ramp Door Locked"";";
				onlyforplayer=1;
			};
			class RampUnlock
			{
				displayName="Unlock Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="!isNil {this getVariable ""ramplock""} and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};";
				statement="this setVariable [""ramplock"", nil, true]; hint ""Ramp Door Unlocked"";";
				onlyforplayer=1;
			};
			class OpenCargoDoor
			{
				displayName="Open Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="if (isNil {this getVariable ""ramplock""}) then{ this animationPhase ""cargoDoor"" == 0 and (alive this) and player == player;} else { this animationPhase ""cargoDoor"" == 0 and (alive this) and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};};";
				statement="this animate [""cargoDoor"", 1] AND this animate [""AFTDoorPart"", 1];";
				onlyforplayer=1;
			};
			class CloseCargoDoor
			{
				displayName="Close Ramp";
				position="crewactions";
				radius=15;
				showwindow=0;
				condition="if (isNil {this getVariable ""ramplock""}) then{ this animationPhase ""cargoDoor"" > 0 and (alive this) and player == player;} else { this animationPhase ""cargoDoor"" > 0 and (alive this) and {isPlayer ( driver this ) or isPlayer (this turretUnit [0]);};};";
				statement="this animate [""cargoDoor"", 0] AND this animate [""AFTDoorPart"", 0];";
				onlyforplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class cargoDoor
			{
				source="user";
				animPeriod=4;
				initPhase=0;
				sound="ServoRampSound";
			};
			class AFTDoorPart: cargoDoor
			{
				sound="";
			};
			class sideDoors1
			{
				source="user";
				animPeriod=0;
				initPhase=1;
				sound="ServoRampSound";
			};
			class Gatling_1
			{
				source="revolving";
				weapon="LMG_Minigun_Transport";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="LMG_Minigun_Transport2";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport2";
			};
		};
	};
	class NH90Armed_GR: NH90Armed_AAF
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_Armed_GR";
		scope=2;
		side=2;
		faction="ADFU";
		vehicleClass="HAFM_Helis";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F",
			"I_helicrew_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\gr\GRouterHaul_co.paa",
			"HAFM_NH90\gr\GRupperTail_co.paa",
			"HAFM_NH90\gr\GRmisc_co.paa",
			"HAFM_NH90\gr\GRdoors_co.paa"
		};
	};
	class NH90Armed_GR2: NH90Armed_AAF
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_Armed_GR2";
		scope=2;
		side=1;
		faction="ADFU";
		vehicleClass="HAFM_Helis";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\gr\GRouterHaul_co.paa",
			"HAFM_NH90\gr\GRupperTail_co.paa",
			"HAFM_NH90\gr\GRmisc_co.paa",
			"HAFM_NH90\gr\GRdoors_co.paa"
		};
	};
	class NH90Armed: NH90Armed_AAF
	{
		author="Aplion";
		_generalMacro="HAFM_NH90_Armed";
		scope=2;
		side=1;
		faction="BLU_F";
		vehicleClass="Air";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F",
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"HAFM_NH90\data\outerHaul_co.paa",
			"HAFM_NH90\data\upperTail_co.paa",
			"HAFM_NH90\data\misc_co.paa",
			"HAFM_NH90\data\doors_co.paa"
		};
	};
	class HAFM_NH90Wreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\HAFM_NH90\nh90Wreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
		class Eventhandlers
		{
		};
	};
};

soundGetIn[]={"adfu_air_chinook\data\sounds\getin",db-10,1};
soundGetOut[]={"adfu_air_chinook\data\sounds\getin",db-10,1, 40};
soundEngineOnInt[] = {"adfu_air_chinook\data\sounds\uk_start_int_1", db-20, 0.9};
soundEngineOnExt[] = {"adfu_air_chinook\data\sounds\uk_start_ext_1", db-5, 0.9, 800};
soundEngineOffInt[] =  {"\adfu_air_chinook\data\sounds\uk_stop_int_1", db-20, 0.9};
soundEngineOffExt[] =  {"adfu_air_chinook\data\sounds\uk_stop_ext_2", db-5, 0.9, 800};

soundLocked[] = {"\a3\sounds_f\air\Heli_Attack_02\alarm.wss", db3, 1};
//soundIncommingMissile[] = {"adfu_air_chinook\data\sounds\int-alarm_loop", db-70, 4};
soundIncommingMissile[] = {"adfu_air_chinook\data\sounds\missile", db3, 1};
class Sounds
{
	class Engine
	{
		sound[] = {"adfu_air_chinook\data\sounds\uk_engine_ext_3", db10, 0.8, 1000};
		frequency = "rotorSpeed";
		volume = "camPos*((rotorSpeed-0.72)*4)";
	};
	class RotorLowOut
	{
		sound[] = {"\adfu_air_chinook\data\sounds\uk_rotor_4h_swist", db10, 1, 1200}; //puvodne uk_rotor_4l
		frequency = "rotorSpeed";
		volume = "camPos*(0 max (rotorSpeed-0.1))";
		cone[] = {1.8,3.14, 2.0, 0.9};
	};
	class RotorHighOut
	{
		sound[] = {"\adfu_air_chinook\data\sounds\uk_rotor_4h_swist", db5, 1, 1300};
		frequency = "rotorSpeed";
		volume = "camPos*10*(0 max (rotorThrust-0.9))" ;
		cone[] = {1.8,3.14, 2.0, 0.9};
	};


	class EngineIn
	{
		sound[] = {"\adfu_air_chinook\data\sounds\uk_engine_int_1", db-5, 0.8};
		frequency = "rotorSpeed";
	 	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
	};
	class RotorLowIn
	{
		sound[] = {"adfu_air_chinook\data\sounds\uk_rotor_4l_int", db5, 0.8};
		frequency = "rotorSpeed";
		volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
	};
	class RotorHighIn
	{
		sound[] = {"adfu_air_chinook\data\sounds\uk_rotor_4h_int", db5, 0.8};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*3*(rotorThrust-0.9)" ;
	};
	class TransmissionDamageExt_phase1
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageExt_phase2
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase1
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase2
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class damageAlarmInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
		frequency = 1;
		volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
	};
	class damageAlarmExt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1.0,20};
		frequency = 1;
		volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
	};
	class rotorLowAlarmInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
		frequency = 1;
		volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class rotorLowAlarmExt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
		frequency = 1;
		volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class scrubLandInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
		frequency = 1;
		volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubLandExt
	{
		sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
		frequency = 1;
		volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubBuildingInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
		frequency = 1;
		volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubBuildingExt
	{
		sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
		frequency = 1;
		volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
	};
	class scrubTreeInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
		frequency = 1;
		volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
	};
	class scrubTreeExt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
		frequency = 1;
		volume = "camPos * ((scrubTree) factor [0, 0.01])";
	};
	class RainExt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
		frequency = 1;
		volume = "camPos * (rain - rotorSpeed/2) * 2";
	};
	class RainInt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
		frequency = 1;
		volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
	};
	class SlingLoadDownExt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
		frequency = 1;
		volume = "camPos*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpExt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
		frequency = 1;
		volume = "camPos*(slingLoadActive factor [0,1])";
	};
	class SlingLoadDownInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
		frequency = 1;
		volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
		frequency = 1;
		volume = "(1-camPos)*(slingLoadActive factor [0,1])";
	};
	class WindInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.70794576,1.0,50};
		frequency = 1;
		volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
	};
	class GStress
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2d",1.1220185,1.0,50};
		frequency = 1;
		volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
	};
	class SpeedStress
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1.0,1.0,50};
		frequency = 1;
		volume = "(1-camPos)*(speed factor[40,80])";
	};
};
class SoundsExt
{
	class SoundEvents{};
	class Sounds
	{
		class EngineExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",1.4125376,1.0,800};
			frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor",1.0,1.0,1500};
			frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
			volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			cone[] = {1.6,3.14,1.6,0.95};
		};
		class RotorNoiseExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\rotor_swist",1.0,1,400};
			frequency = 1;
			volume = "camPos * (rotorThrust factor [0.7, 0.9])";
			cone[] = {0.7,1.3,1.0,0};
		};
		class EngineInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",1.0,1.0};
			frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};
		class RotorInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor",0.5011872,1.0};
			frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
			volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
		};
		class TransmissionDamageExt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageExt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class damageAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1.0};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
		};
		class damageAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1.0,20};
			frequency = 1;
			volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
		};
		class rotorLowAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class rotorLowAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1.0,20};
			frequency = 1;
			volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
			frequency = 1;
			volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubLandExt
		{
			sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
			frequency = 1;
			volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
			frequency = 1;
			volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingExt
		{
			sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
			frequency = 1;
			volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
		};
		class scrubTreeInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
			frequency = 1;
			volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
		};
		class scrubTreeExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
			frequency = 1;
			volume = "camPos * ((scrubTree) factor [0, 0.01])";
		};
		class RainExt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
			frequency = 1;
			volume = "camPos * (rain - rotorSpeed/2) * 2";
		};
		class RainInt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
			frequency = 1;
			volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
		};
		class SlingLoadDownExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,1])";
		};
		class SlingLoadDownInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,1])";
		};
		class WindInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.70794576,1.0,50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
		};
		class GStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2d",1.1220185,1.0,50};
			frequency = 1;
			volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
		};
		class SpeedStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1.0,1.0,50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[40,80])";
		};
	};
};

landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",1.0,1.0,100};
landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",1.0,1.0,100};
landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1.0,100};
landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.0,1.0,80};
slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
slingCargoDetach0[] = {"A3\Sounds_F\dummysound",1.0,1.0};
slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.0,1.0,80};
slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,80};
slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,80};
slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1.0,1.0};
rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1.0,300};
rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
tailDamage[] = {"tailDamageInt","tailDamageOut"};
soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
soundLandCrashes[] = {"emptySound",0};
soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10.0,1};
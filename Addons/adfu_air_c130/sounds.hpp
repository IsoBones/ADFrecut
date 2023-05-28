	
	attenuationEffectType = PlaneAttenuation;
	soundGetIn[] = {"\adfu_air_c130\sounds\open",db-10,1};
	soundGetOut[] = {"\adfu_air_c130\sounds\close",db-10,1,40};
	soundWaterCollision1[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",db3,1,500};
	soundWaterCollision2[] = {"\A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",db3,1,500};
	soundWaterCrashes[] =
	{
		soundWaterCollision1,1/2,
		soundWaterCollision2,1/2
	};
	buildCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
	buildCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
	buildCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
	buildCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
	soundBuildingCrash[] =
	{
		buildCrash0,1/4,
		buildCrash1,1/4,
		buildCrash2,1/4,
		buildCrash3,1/4
	};
	WoodCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",db10,1,900};
	WoodCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",db10,1,900};
	WoodCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",db10,1,900};
	WoodCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",db10,1,900};
	soundWoodCrash[] =
	{
		woodCrash0,1/4,
		woodCrash1,1/4,
		woodCrash2,1/4,
		woodCrash3,1/4
	};
	armorCrash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
	armorCrash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
	armorCrash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
	armorCrash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
	soundArmorCrash[] =
	{
		ArmorCrash0,1/4,
		ArmorCrash1,1/4,
		ArmorCrash2,1/4,
		ArmorCrash3,1/4
	};
	Crash0[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",db0,1,900};
	Crash1[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",db0,1,900};
	Crash2[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",db0,1,900};
	Crash3[] = {"\A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",db0,1,900};
	soundCrashes[] =
	{
		Crash0,1/4,
		Crash1,1/4,
		Crash2,1/4,
		Crash3,1/4
	};
	landingSoundInt0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",db0,1,100};
	landingSoundInt1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",db0,1,100};
	landingSoundInt[] =
	{
		landingSoundInt0,1/2,
		landingSoundInt1,1/2
	};
	landingSoundOut0[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",db5,1,100};
	landingSoundOut1[] = {"\A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",db5,1,100};
	landingSoundOut[] =
	{
		landingSoundOut0,1/2,
		landingSoundOut1,1/2
	};
	soundDammage[] = {"",0.562341,1};
	soundEngineOnInt[] = {"\adfu_air_c130\sounds\C192_engine_start_int",db-8,1.0};
	soundEngineOnExt[] = {"\adfu_air_c130\sounds\C192_engine_start_ext",db8,1,700};
	soundEngineOffInt[] = {"\adfu_air_c130\sounds\C192_engine_stop_int",db-8,1.0};
	soundEngineOffExt[] = {"\adfu_air_c130\sounds\C192_engine_stop_ext",db8,1,700};
	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-10,1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",db-10,1.0};
	soundGearUp[] = {"\adfu_air_c130\sounds\gear_up",db-2,1,150};
	soundGearDown[] = {"\adfu_air_c130\sounds\gear_down",db-2,1,150};
	soundFlapsUp[] = {"\adfu_air_c130\sounds\flaps_up",db-4,1,100};
	soundFlapsDown[] = {"\adfu_air_c130\sounds\flaps_down",db-4,1,100};
	class scrubLandInt
	{
		sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
		frequency = 1;
		volume = (scrubLand factor[0.01,0.20]);
	};
	class Sounds
	{
		class EngineMidhExt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_engine_mid_ext",db5,1,1100};
			frequency = 1;
			volume = 0.7 * machcone*camPos*(rpm factor[0.5, 1]);
		};
		class EngineHighExt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_engine_high_ext",db5,1,1100};
			frequency = 1 min (rpm+0.5)*(rpm factor[0.5, 1.1]);
			volume = 0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75]);
		};
		class ForsageExt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_prop_ext",db3,1.2,1100};
			frequency = 1;
			volume = 0.7 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0]);
			cone[] = {1.14,3.92,2.5,0.4};
		};
		class EngineMidhInt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_engine_mid_int",db-2,1,1100};
			frequency = 1 min (rpm+0.25)*(rpm factor[0, 1]);
			volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1]);
		};
		class EngineHighInt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_engine_high_int",db-2,1,1100};
			frequency = 1 min (rpm+0.25)*(rpm factor[0.25, 1.1]);
			volume = 1 * engineOn*(1-camPos)*(rpm factor[0, 1]);
		};
		class ForsageInt
		{
			sound[] = {"\adfu_air_c130\sounds\C192_prop_int",db-7,1.2,1100};
			frequency = 1 min (rpm+0.5)*(rpm factor[0, 1]);
			volume = 1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0]);
			cone[] = {1.14,3.92,2.5,0.4};
		};
		class scrubLandInt
		{
			sound[] = {"\A3\Sounds_F\vehicles\air\noises\wheelsInt",db0,1,100};
			frequency = 1;
			volume = 2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
		};
		class scrubLandExt
		{
			sound[] = {"\A3\Sounds_F\dummysound",db0,1,100};
			frequency = 1;
			volume = camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]));
		};
		class RainExt
		{
			sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_ext",db5,1,100};
			frequency = 1;
			volume = camPos * rain * (speed factor[50, 0]);
		};
		class RainInt
		{
			sound[] = {"\A3\Sounds_F\vehicles\noises\rain1_int",db0,1,100};
			frequency = 1;
			volume = (1-camPos) * rain * (speed factor[50, 0]);
		};
		class WindInt
		{
			sound[] = {"\A3\Sounds_F\vehicles\air\noises\wind_closed",db-5,1,50};
			frequency = 1;
			volume = (1-camPos)*(speed factor[5, 50])*(speed factor[5, 50]);
		};
		class GStress
		{
			sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress2c",db6,1,50};
			frequency = 1;
			volume = engineOn * (1-camPos) * (gmeterZ factor[1, 2.5]);
		};
		class SpeedStress
		{
			sound[] = {"\A3\Sounds_F\vehicles\noises\vehicle_stress3",db-6,1,50};
			frequency = 1;
			volume = (1-camPos)*(speed factor[60,80]);
		};
	};

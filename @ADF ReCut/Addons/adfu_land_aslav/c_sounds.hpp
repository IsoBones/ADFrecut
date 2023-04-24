		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,70};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_start",0.8912509,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_start",0.56234133,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_stop",0.8912509,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_stop",0.56234133,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};

		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_01",0.4466836,1,200};
				frequency = "0.95	+	((rpm/	2100) factor[(100/	2100),(500/	2100)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(10/	2100),(50/	2100)])	*	((rpm/	2100) factor[(550/	2100),(500/	2100)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_02",0.5011872,1,200};
				frequency = "0.8	+	((rpm/	2100) factor[(500/	2100),(730/	2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(450/	2100),(510/	2100)])	*	((rpm/	2100) factor[(730/	2100),(620/	2100)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_03",0.56234133,1,200};
				frequency = "0.8	+	((rpm/	2100) factor[(630/	2100),(1000/	2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(600/	2100),(720/	2100)])	*	((rpm/	2100) factor[(1100/	2100),(840/	2100)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_06",0.63095737,1,250};
				frequency = "0.8	+	((rpm/	2100) factor[(850/	2100),(1300/	2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(800/	2100),(1000/	2100)])	*	((rpm/	2100) factor[(1300/	2100),(1100/	2100)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_07",0.7943282,1,300};
				frequency = "0.8	+	((rpm/	2100) factor[(1100/	2100),(1600/	2100)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(1100/	2100),(1270/	2100)])	*	((rpm/	2100) factor[(1550/	2100),(1380/	2100)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_08",0.8912509,1,300};
				frequency = "0.8	+	((rpm/	2100) factor[(1400/	2100),(2000/	2100)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2100) factor[(1380/	2100),(1500/	2100)])	*	((rpm/	2100) factor[(2000/	2100),(1700/	2100)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_engine_10",1.0,1,300};
				frequency = "0.8	+	((rpm/	2100) factor[(1700/	2100),(2100/	2100)])*0.1";
				volume = "engineOn*camPos*((rpm/	2100) factor[(1600/	2100),(2100/	2100)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_01",0.70794576,1,200};
				frequency = "0.8	+	((rpm/	2100) factor[(100/	2100),(500/	2100)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(10/	2100),(50/	2100)])	*	((rpm/	2100) factor[(550/	2100),(500/	2100)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_02",0.70794576,1,200};
				frequency = "0.8	+	((rpm/	2100) factor[(500/	2100),(730/	2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(450/	2100),(510/	2100)])	*	((rpm/	2100) factor[(730/	2100),(620/	2100)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_03",0.7943282,1,200};
				frequency = "0.8	+	((rpm/	2100) factor[(630/	2100),(1000/	2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(600/	2100),(720/	2100)])	*	((rpm/	2100) factor[(1100/	2100),(840/	2100)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_06",0.8912509,1,250};
				frequency = "0.8	+	((rpm/	2100) factor[(850/	2100),(1300/	2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(800/	2100),(1000/	2100)])	*	((rpm/	2100) factor[(1300/	2100),(1100/	2100)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_07",1.0,1,350};
				frequency = "0.8	+	((rpm/	2100) factor[(1100/	2100),(1600/	2100)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(1100/	2100),(1270/	2100)])	*	((rpm/	2100) factor[(1550/	2100),(1380/	2100)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_08",1.1220185,1,350};
				frequency = "0.8	+	((rpm/	2100) factor[(1400/	2100),(2000/	2100)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(1380/	2100),(1500/	2100)])	*	((rpm/	2100) factor[(2000/	2100),(1700/	2100)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\ext_exhaust_10",1.2589254,1,400};
				frequency = "0.8	+	((rpm/	2100) factor[(1700/	2100),(2100/	2100)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2100) factor[(1600/	2100),(2100/	2100)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_01",0.2818383,1};
				frequency = "0.8	+	((rpm/	2100) factor[(100/	2100),(500/	2100)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(10/	2100),(50/	2100)])	*	((rpm/	2100) factor[(550/	2100),(500/	2100)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_02",0.31622776,1};
				frequency = "0.8	+	((rpm/	2100) factor[(500/	2100),(730/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(450/	2100),(510/	2100)])	*	((rpm/	2100) factor[(730/	2100),(620/	2100)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_03",0.35481337,1};
				frequency = "0.8	+	((rpm/	2100) factor[(630/	2100),(1000/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(600/	2100),(720/	2100)])	*	((rpm/	2100) factor[(1100/	2100),(840/	2100)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_06",0.39810717,1};
				frequency = "0.8	+	((rpm/	2100) factor[(850/	2100),(1300/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(800/	2100),(1000/	2100)])	*	((rpm/	2100) factor[(1300/	2100),(1100/	2100)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_07",0.4466836,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1100/	2100),(1600/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(1100/	2100),(1270/	2100)])	*	((rpm/	2100) factor[(1550/	2100),(1380/	2100)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_08",0.5011872,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1400/	2100),(2000/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2100) factor[(1380/	2100),(1500/	2100)])	*	((rpm/	2100) factor[(2000/	2100),(1700/	2100)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_engine_10",0.56234133,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1700/	2100),(2100/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2100) factor[(1600/	2100),(2100/	2100)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_01",0.35481337,1};
				frequency = "0.8	+	((rpm/	2100) factor[(100/	2100),(500/	2100)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(10/	2100),(50/	2100)])	*	((rpm/	2100) factor[(550/	2100),(500/	2100)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_02",0.39810717,1};
				frequency = "0.8	+	((rpm/	2100) factor[(500/	2100),(730/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(450/	2100),(510/	2100)])	*	((rpm/	2100) factor[(730/	2100),(620/	2100)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_03",0.4466836,1};
				frequency = "0.8	+	((rpm/	2100) factor[(630/	2100),(1000/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(600/	2100),(720/	2100)])	*	((rpm/	2100) factor[(1100/	2100),(840/	2100)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_06",0.4466836,1};
				frequency = "0.8	+	((rpm/	2100) factor[(850/	2100),(1300/	2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(800/	2100),(1000/	2100)])	*	((rpm/	2100) factor[(1300/	2100),(1100/	2100)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_07",0.5011872,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1100/	2100),(1600/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(1100/	2100),(1270/	2100)])	*	((rpm/	2100) factor[(1550/	2100),(1380/	2100)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_08",0.5011872,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1400/	2100),(2000/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2100) factor[(1380/	2100),(1500/	2100)])	*	((rpm/	2100) factor[(2000/	2100),(1700/	2100)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC2\int_exhaust_10",0.70794576,1};
				frequency = "0.8	+	((rpm/	2100) factor[(1700/	2100),(2100/	2100)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2100) factor[(1600/	2100),(2100/	2100)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.7943282,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.7943282,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.2589254,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.5011872,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.5011872,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.5011872,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.5011872,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.19952624,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
		};
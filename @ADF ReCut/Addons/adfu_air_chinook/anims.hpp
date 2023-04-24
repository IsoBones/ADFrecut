class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1 = "CH47_Cargo_EP1";
		CH47_Cargo01_EP1 = "CH47_Cargo01_EP1";
		CH47_Cargo02_EP1 = "CH47_Cargo02_EP1";
		CH47_Cargo03_EP1 = "CH47_Cargo03_EP1";
		CH47_Gunner_EP1 = "CH47_Gunner_EP1";
		CH47_Gunner01_EP1 = "CH47_Gunner01_EP1";
		CH47_Pilot_EP1 = "CH47_Pilot_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class CH47_Cargo_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo";
			connectTo[] = {"CH47_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\adfu_air_chinook\Data\Anim\CH47_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo01";
			connectTo[] = {"CH47_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class CH47_Cargo02_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"CH47_Cargo02_EP1",0.1,"CH47_Cargo02_V1_EP1",0.1,"CH47_Cargo02_V2_EP1",0.1,"CH47_Cargo02_V3_EP1",0.1,"CH47_Cargo02_V4_EP1",0.1,"CH47_Cargo02_V5_EP1",0.1};
			equivalentTo = "CH47_Cargo02_EP1";
			variantsAI[] = {"CH47_Cargo02_EP1",0.5,"CH47_Cargo02_V1_EP1",0.12,"CH47_Cargo02_V2_EP1",0.11,"CH47_Cargo02_V3_EP1",0.1,"CH47_Cargo02_V4_EP1",0.09,"CH47_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class CH47_Cargo02_V1_EP1: CH47_Cargo02_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02_V1.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V2_EP1: CH47_Cargo02_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02_V2.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V3_EP1: CH47_Cargo02_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02_V3.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V4_EP1: CH47_Cargo02_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02_V4.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V5_EP1: CH47_Cargo02_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo02_V5.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"CH47_Cargo03_EP1",0.1,"CH47_Cargo03_V1_EP1",0.1,"CH47_Cargo03_V2_EP1",0.1,"CH47_Cargo03_V3_EP1",0.1,"CH47_Cargo03_V4_EP1",0.1,"CH47_Cargo03_V5_EP1",0.1};
			equivalentTo = "CH47_Cargo03_EP1";
			variantsAI[] = {"CH47_Cargo03_EP1",0.5,"CH47_Cargo03_V1_EP1",0.12,"CH47_Cargo03_V2_EP1",0.11,"CH47_Cargo03_V3_EP1",0.1,"CH47_Cargo03_V4_EP1",0.09,"CH47_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class CH47_Cargo03_V1_EP1: CH47_Cargo03_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03_V1.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V2_EP1: CH47_Cargo03_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03_V2.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V3_EP1: CH47_Cargo03_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03_V3.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V4_EP1: CH47_Cargo03_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03_V4.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V5_EP1: CH47_Cargo03_EP1
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Cargo03_V5.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};
		class CH47_Pilot_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Pilot";
			connectTo[] = {"CH47_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\adfu_air_chinook\Data\Anim\CH47_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CH47_Gunner_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Gunner02";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",1};
			speed = 1e+010;
		};
		class CH47_Gunner01_EP1: Crew
		{
			file = "\adfu_air_chinook\Data\Anim\CH47_Gunner";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\adfu_air_chinook\Data\Anim\CH47_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
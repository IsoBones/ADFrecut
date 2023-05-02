		
		class AnimationSources: AnimationSources 
		{
			class HitReserveWheel {
				source = "Hit";
				hitpoint = "HitReserveWheel";
				raw = 1;
			};
			class proxy {
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class show_ecm {
				displayName = "ECM Jammers";
				source = "Proxy";
				initPhase = 0;
				mass = -50;
			};
			class show_shovel: show_ecm{
				displayName = "Show Shovel";
				source = "Proxy";
				initPhase = 0;
			};
			class show_fireaxe: show_ecm{
				displayName = "Show Fire-axe";
				source = "Proxy";
				initPhase = 0;
			};
			class show_arm: show_ecm{
				displayName = "Show Lifting Arm";
				source = "Proxy";
				initPhase = 0;
			};
			class show_extension: show_ecm{
				displayName = "Show Lifting Extension";
				source = "Proxy";
				initPhase = 0;
			};
			class show_winch: show_ecm {
				displayName = "Left Side Winch";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_cover",0};
			};
			class show_cover: show_ecm {
				displayName = "Left Side Generator";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_winch",0};
			};
			class show_ant_low_3_1: show_ecm {
				displayName = "Left Rear Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_3_1",0};
			};
			class show_ant_low_3_2: show_ant_low_3_1 {
				displayName = "Right Rear Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_3_2",0};
			};
			class show_ant_high_3_1: show_ant_low_3_1 {
				displayName = "Left Rear Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_3_1",0};
			};
			class show_ant_high_3_2: show_ant_high_3_1 {
				displayName = "Right Rear Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_3_2",0};
			};
			//
			class show_ant_low_2_1: show_ecm {
				displayName = "Left Mid Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_2_1",0};
			};
			class show_ant_low_2_2: show_ant_low_2_1 {
				displayName = "Right Mid Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_2_2",0};
			};
			class show_ant_high_2_1: show_ant_low_2_1 {
				displayName = "Left Mid Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_2_1",0};
			};
			class show_ant_high_2_2: show_ant_high_2_1 {
				displayName = "Right Mid Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_2_2",0};
			};
			//
			class show_ant_powered: show_ecm {
				displayName = "Show Retransmission Antenna";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_1_1",0,"show_ant_high_1_1",0};
			};
			class show_ant_low_1_1: show_ecm {
				displayName = "Left Front Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_1_1",0};
			};
			class show_ant_low_1_2: show_ant_low_1_1 {
				displayName = "Right Front Antenna (Short)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_high_1_2",0};
			};
			class show_ant_high_1_1: show_ant_low_1_1 {
				displayName = "Left Front Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_1_1",0};
			};
			class show_ant_high_1_2: show_ant_high_1_1 {
				displayName = "Right Front Antenna (High)";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ant_low_1_2",0};
			};
			//
			class show_ammobox_01: show_ecm {
				displayName = "Show Ammo-box 1";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_jerrycan_01",0};
			};
			class show_ammobox_02: show_ecm {
				displayName = "Show Ammo-box 2";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_jerrycan_02",0};
			};
			class show_ammobox_03: show_ecm {
				displayName = "Show Ammo-box 3";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_jerrycan_03",0};
			};
			class show_ammobox_04: show_ecm {
				displayName = "Show Ammo-box 4";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_jerrycan_04",0};
			};
			class show_jerrycan_01: show_ecm {
				displayName = "Show Jerry-can 1";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ammobox_01",0};
			};
			class show_jerrycan_02: show_ecm {
				displayName = "Show Jerry-can 2";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ammobox_02",0};
			};
			class show_jerrycan_03: show_ecm {
				displayName = "Show Jerry-can 3";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ammobox_03",0};
			};
			class show_jerrycan_04: show_ecm {
				displayName = "Show Jerry-can 4";
				forceAnimatePhase = 1;
				forceAnimate[] = {"show_ammobox_04",0};
			};
			
			class deploy_wire_cutters: show_ecm {
				displayName = "Deploy Wire Cutters";
				initPhase = 0;
				mass = 0;
			};
		};
		
		class UserActions
		{
			class wire_cutters_deploy {
				userActionID = 50;
				displayName = "Deploy Wire Cutters";
				radius = 20.0000;
				showWindow = 0;
				priority = 0;
				position = "Center_Point";
				onlyForPlayer = 0;
				condition = "(this animationPhase 'deploy_wire_cutters') <= 0.5 AND (alive this) AND (player in [driver this])";
				statement = "this animate ['deploy_wire_cutters',1];";
			};
			class wire_cutters_undeploy: wire_cutters_deploy {
				userActionID = 51;
				displayName = "Un-Deploy Wire Cutters";
				condition = "(this animationPhase 'deploy_wire_cutters') > 0.5 AND (alive this) AND (player in [driver this])";
				statement = "this animate ['deploy_wire_cutters',0];";
			};
		};
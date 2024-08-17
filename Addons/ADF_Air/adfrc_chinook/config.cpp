class CfgPatches
{
	class adfrc_chinook
	{
		addonRootClass = "ADF_Air";
		units[]=
		{
			"adfrc_chinook"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"ADF_Core"
		};
		magazines[]=
		{
			"ADFRC_chinook_4000Rnd_762x51",
			"ADFRC_chinook_2000Rnd_762x51"
		};
		ammo[]=
		{
			"ADFRC_chinook_762x51_Ball",
			"ADFRC_chinook_762x51_3RndBurst"
		};
		weapons[]=
		{
			"ADFRC_PHOENIX_CMFlareLauncher",
			"ADFRC_chinook_M134",
			"ADFRC_chinook_M134_2"
		};
	};
};
/* Definitions & Inheritance */
#include "\ADF_Core\basicDefines_A3.hpp"
class DefaultEventhandlers;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1="CH47_Cargo_EP1";
		CH47_Cargo01_EP1="CH47_Cargo01_EP1";
		CH47_Cargo02_EP1="CH47_Cargo02_EP1";
		CH47_Cargo03_EP1="CH47_Cargo03_EP1";
		CH47_Gunner_EP1="CH47_Gunner_EP1";
		CH47_Gunner01_EP1="CH47_Gunner01_EP1";
		CH47_Pilot_EP1="CH47_Pilot_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class CH47_Cargo_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo";
			connectTo[]=
			{
				"CH47_KIA_Cargo01_EP1",
				1
			};
			speed=1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_KIA_Cargo01";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo01";
			connectTo[]=
			{
				"CH47_KIA_Cargo01_EP1",
				1
			};
			speed=1e+010;
		};
		class CH47_Cargo02_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02";
			interpolateTo[]=
			{
				"CH47_KIA_Cargo01_EP1",
				0.1
			};
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1,
				"CH47_Cargo02_V1_EP1",
				0.1,
				"CH47_Cargo02_V2_EP1",
				0.1,
				"CH47_Cargo02_V3_EP1",
				0.1,
				"CH47_Cargo02_V4_EP1",
				0.1,
				"CH47_Cargo02_V5_EP1",
				0.1
			};
			equivalentTo="CH47_Cargo02_EP1";
			variantsAI[]=
			{
				"CH47_Cargo02_EP1",
				0.5,
				"CH47_Cargo02_V1_EP1",
				0.12,
				"CH47_Cargo02_V2_EP1",
				0.11,
				"CH47_Cargo02_V3_EP1",
				0.1,
				"CH47_Cargo02_V4_EP1",
				0.090000004,
				"CH47_Cargo02_V5_EP1",
				0.079999998
			};
			variantAfter[]={5,10,20};
			speed=1e+010;
		};
		class CH47_Cargo02_V1_EP1: CH47_Cargo02_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02_V1.rtm";
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1
			};
			speed=0.53571397;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo02_V2_EP1: CH47_Cargo02_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02_V2.rtm";
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1
			};
			speed=0.625;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo02_V3_EP1: CH47_Cargo02_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02_V3.rtm";
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1
			};
			speed=0.625;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo02_V4_EP1: CH47_Cargo02_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02_V4.rtm";
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1
			};
			speed=0.32967001;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo02_V5_EP1: CH47_Cargo02_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo02_V5.rtm";
			connectTo[]=
			{
				"CH47_Cargo02_EP1",
				0.1
			};
			speed=0.33333299;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03";
			interpolateTo[]=
			{
				"CH47_KIA_Cargo01_EP1",
				0.1
			};
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1,
				"CH47_Cargo03_V1_EP1",
				0.1,
				"CH47_Cargo03_V2_EP1",
				0.1,
				"CH47_Cargo03_V3_EP1",
				0.1,
				"CH47_Cargo03_V4_EP1",
				0.1,
				"CH47_Cargo03_V5_EP1",
				0.1
			};
			equivalentTo="CH47_Cargo03_EP1";
			variantsAI[]=
			{
				"CH47_Cargo03_EP1",
				0.5,
				"CH47_Cargo03_V1_EP1",
				0.12,
				"CH47_Cargo03_V2_EP1",
				0.11,
				"CH47_Cargo03_V3_EP1",
				0.1,
				"CH47_Cargo03_V4_EP1",
				0.090000004,
				"CH47_Cargo03_V5_EP1",
				0.079999998
			};
			variantAfter[]={5,10,20};
			speed=1e+010;
		};
		class CH47_Cargo03_V1_EP1: CH47_Cargo03_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03_V1.rtm";
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1
			};
			speed=0.33333299;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo03_V2_EP1: CH47_Cargo03_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03_V2.rtm";
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1
			};
			speed=0.625;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo03_V3_EP1: CH47_Cargo03_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03_V3.rtm";
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1
			};
			speed=0.41095901;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo03_V4_EP1: CH47_Cargo03_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03_V4.rtm";
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1
			};
			speed=0.53571397;
			variantAfter[]={5,5,5};
		};
		class CH47_Cargo03_V5_EP1: CH47_Cargo03_EP1
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Cargo03_V5.rtm";
			connectTo[]=
			{
				"CH47_Cargo03_EP1",
				0.1
			};
			speed=0.32967001;
			variantAfter[]={5,5,5};
		};
		class CH47_Pilot_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Pilot";
			connectTo[]=
			{
				"CH47_KIA_Pilot_EP1",
				1
			};
			speed=1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_KIA_Pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class CH47_Gunner_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Gunner02";
			connectTo[]=
			{
				"CH47_KIA_Gunner01_EP1",
				1
			};
			speed=1e+010;
		};
		class CH47_Gunner01_EP1: Crew
		{
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_Gunner";
			connectTo[]=
			{
				"CH47_KIA_Gunner01_EP1",
				1
			};
			speed=1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ADF_Air\adfrc_chinook\data\Anim\CH47_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
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
		class HitPoints;
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
	class ADFRC_chinook_base: Helicopter_Base_H
	{
		scope=0;
		author="$STR_ADF_AUTHOR";
		displayName="";
		side=1;
		faction = "ADF";
		accuracy=0.5;
		mainRotorSpeed=1;
		backRotorSpeed=1;
		armor=30;
		damageResistance=0.001;
		disableSoundAttenuation=1;
		destrType="DestructWreck";
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		cargoAction[]=
		{
			"CH47_Cargo_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1",
			"CH47_Cargo01_EP1",
			"CH47_Cargo03_EP1",
			"CH47_Cargo02_EP1"
		};
		transportSoldier=24;
		transportMaxBackpacks=10;
		driveOnComponent[]=
		{
			"Wheels"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		LockDetectionSystem=2;
		IncommingMisslieDetectionSystem=16;
		radarType=4;
		enableManualFire=0;
		threat[]={0.60000002,0.1,0};
		maxFordingDepth=1.25;
		waterResistance=2;
		gearRetracting=0;
		slingLoadMaxCargoMass=10000;
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
				passThrough=0.30000001;
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
				position="Light_L";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
			class Left: Right
			{
				position="Light_R";
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
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={1,1,1};
				name="marker_white_on";
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
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ADF_Air\adfrc_chinook\data\ch47_1.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_1_damage.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_1_destruct.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2_damage.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2_destruct.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_1_int.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_1_int.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_1_int_destruct.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2_int.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2_int.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_2_int_destruct.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo_in.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo_in_damage.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo_in_damage.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo_damage.rvmat",
				"ADF_Air\adfrc_chinook\data\ch47_sklo_damage.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		irScanRangeMin=100;
		irScanRangeMax=1000;
		irScanToEyeFactor=2;
		numberPhysicalWheels=4;
	};
	class ADFRC_chinook: ADFRC_chinook_base
	{
		scope=2;
		side=1;
		author="$STR_ADF_AUTHOR";
		faction = "ADF";
		model="ADF_Air\adfrc_chinook\CH_47F";
		displayname="CH-47F Chinook";
		editorPreview="\ADF_Air\adfrc_chinook\preview\adfrc_chinook.jpg";
		accuracy=1000;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADF_Air\adfrc_chinook\data\ch47_ext_1_co.paa",
			"ADF_Air\adfrc_chinook\data\ch47_ext_2_co.paa",
			"ADF_Air\adfrc_chinook\data\ch47f_nalepky_ca.paa"
		};
		soundGetIn[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\getin",
			"db-10",
			1
		};
		soundGetOut[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\getin",
			"db-10",
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\uk_start_int_1",
			"db-20",
			0.89999998
		};
		soundEngineOnExt[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\uk_start_ext_1",
			"db-5",
			0.89999998,
			800
		};
		soundEngineOffInt[]=
		{
			"\ADF_Air\adfrc_chinook\data\sounds\uk_stop_int_1",
			"db-20",
			0.89999998
		};
		soundEngineOffExt[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\uk_stop_ext_2",
			"db-5",
			0.89999998,
			800
		};
		soundLocked[]=
		{
			"\a3\sounds_f\air\Heli_Attack_02\alarm.wss",
			"db3",
			1
		};
		soundIncommingMissile[]=
		{
			"ADF_Air\adfrc_chinook\data\sounds\missile",
			"db3",
			1
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"ADF_Air\adfrc_chinook\data\sounds\uk_engine_ext_3",
					"db10",
					0.80000001,
					1000
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"\ADF_Air\adfrc_chinook\data\sounds\uk_rotor_4h_swist",
					"db10",
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"\ADF_Air\adfrc_chinook\data\sounds\uk_rotor_4h_swist",
					"db5",
					1,
					1300
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.8,3.1400001,2,0.89999998};
			};
			class EngineIn
			{
				sound[]=
				{
					"\ADF_Air\adfrc_chinook\data\sounds\uk_engine_int_1",
					"db-5",
					0.80000001
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"ADF_Air\adfrc_chinook\data\sounds\uk_rotor_4l_int",
					"db5",
					0.80000001
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"ADF_Air\adfrc_chinook\data\sounds\uk_rotor_4h_int",
					"db5",
					0.80000001
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
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
		weapons[]=
		{
			"ADFRC_PHOENIX_CMFlareLauncher"
		};
		magazines[]=
		{
			"320Rnd_CMFlare_Chaff_Magazine",
			"320Rnd_CMFlare_Chaff_Magazine",
			"320Rnd_CMFlare_Chaff_Magazine",
			"320Rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2",
			"flare_launcher3",
			"flare_launcher4"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir",
			"flare_launcher3_dir",
			"flare_launcher4_dir"
		};
		supplyRadius=5;
		maxSpeed=315;
		picture="\ADF_Air\adfrc_chinook\data\Picture_ch47f_CA.paa";
		icon="\ADF_Air\adfrc_chinook\data\Icon_ch47f_CA.paa";
		mapSize=24;
		crew="ADFRC_Pilot_dpcu";
		typicalCargo[]=
		{
			"ADFRC_Pilot_dpcu",
			"ADFRC_Pilot_dpcu"
		};
		driverAction="CH47_Pilot_EP1";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				minElev=-50;
				maxElev=30;
				initElev=-30;
				minTurn=-3;
				maxTurn=173;
				initTurn=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				animationSourceHatch="";
				stabilizedInAxes="StabilizedInAxesNone";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]=
				{
					"ADFRC_chinook_M134"
				};
				magazines[]=
				{
					"ADFRC_chinook_2000Rnd_762x51"
				};
				gunnerName="Left Gunner";
				gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="CH47_Gunner_EP1";
				gunnerInAction="CH47_Gunner_EP1";
				commanding=-2;
				primaryGunner=0;
				proxyIndex=2;
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
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
			};
			class RightDoorGun: MainTurret
			{
				body="Turret2";
				gun="Gun_2";
				minElev=-60;
				maxElev=30;
				initElev=-30;
				minTurn=-173;
				maxTurn=3;
				initTurn=0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="zasleh_1";
				proxyIndex=3;
				gunnerName="Right Gunner";
				commanding=-3;
				weapons[]=
				{
					"ADFRC_chinook_M134_2"
				};
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				primaryGunner=0;
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
			};
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="CH47_Pilot_EP1";
				gunnerInAction="CH47_Pilot_EP1";
				memoryPointsGetInGunner="pos Codriver";
				memoryPointsGetInGunnerDir="pos Codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment1";
				commanding=-3;
				isCopilot=1;
			};
		};
		class UserActions
		{
			class OpenRamp
			{
				displayName="Open Cargo Ramp";
				position="pos_pilot";
				onlyforplayer=1;
				radius=6;
				showwindow=0;
				condition="(this animationPhase ""ramp"" == 0) AND Alive(this)";
				statement="this animate [""ramp"",1];";
			};
			class CloseRamp: OpenRamp
			{
				displayName="Close Cargo Ramp";
				condition="(this animationPhase ""ramp"" == 1) AND Alive(this)";
				statement="this animate [""ramp"",0];";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source="revolving";
				weapon="ADFRC_chinook_M134";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="ADFRC_chinook_M134_2";
			};
			class Gatling_flash
			{
				source="ammorandom";
				weapon="ADFRC_chinook_M134";
			};
			class Gatling_flash2
			{
				source="ammorandom";
				weapon="ADFRC_chinook_M134_2";
			};
			class ramp
			{
				source="user";
				sound="ServoRampSound";
				animPeriod=1.6;
				initPhase=0;
			};
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class ADFRC_chinook_762x51_Ball: BulletBase
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		model="\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.0009324;
	};
	class ADFRC_chinook_762x51_3RndBurst: ADFRC_chinook_762x51_Ball
	{
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=25;
		audibleFire=22;
		visibleFireTime=4;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class ADFRC_chinook_4000Rnd_762x51: VehicleMagazine
	{
		scope=2;
		ammo="ADFRC_chinook_762x51_3RndBurst";
		count=4000;
		maxLeadSpeed=200;
		tracersEvery=5;
		nameSound="mgun";
	};
	class ADFRC_chinook_2000Rnd_762x51: ADFRC_chinook_4000Rnd_762x51
	{
		count=2000;
	};
	class 300Rnd_CMFlare_Chaff_Magazine;
	class 320Rnd_CMFlare_Chaff_Magazine: 300Rnd_CMFlare_Chaff_Magazine
	{
		count=320;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Burst;
class CfgWeapons
{
	class LMG_Minigun_Transport;
	class ADFRC_chinook_M134: LMG_Minigun_Transport
	{
		author="$STR_ADF_AUTHOR";
		scope=2;
		displayName="M134 Minigun";
		magazines[]=
		{
			"ADFRC_chinook_2000Rnd_762x51",
			"ADFRC_chinook_4000Rnd_762x51"
		};
	};
	class ADFRC_chinook_M134_2: ADFRC_chinook_M134
	{
	};
	class CMFlareLauncher;
	class ADFRC_PHOENIX_CMFlareLauncher: CMFlareLauncher
	{
		displayName="Countermeasures";
		magazines[]=
		{
			"60Rnd_CMFlareMagazine",
			"120Rnd_CMFlareMagazine",
			"240Rnd_CMFlareMagazine",
			"60Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"320Rnd_CMFlare_Chaff_Magazine"
		};
		magazineReloadTime=10;
		modes[]=
		{
			"Single",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5",
			"Burst6",
			"AIBurst"
		};
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		class Single: Mode_SemiAuto
		{
			reloadTime=0.125;
			autoFire=0;
			displayName="A-4F/-";
			burst=1;
			multiplier=4;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\HMG\HMG_grenade",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime=0.125;
			autoFire=1;
			displayName="B-40F/1.25S";
			burst=10;
			multiplier=4;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\HMG\HMG_grenade",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime=0.25;
			autoFire=1;
			displayName="C-40F/2.5S";
			burst=10;
			multiplier=4;
		};
		class Burst3: Burst1
		{
			reloadTime=0.5;
			autoFire=1;
			displayName="D-40F/5S";
			burst=10;
			multiplier=4;
		};
		class Burst4: Burst1
		{
			reloadTime=0.125;
			autoFire=1;
			displayName="E-80F/2.5S";
			burst=20;
			multiplier=4;
		};
		class Burst5: Burst1
		{
			reloadTime=0.25;
			autoFire=1;
			displayName="F-80F/5S";
			burst=20;
			multiplier=4;
		};
		class Burst6: Burst1
		{
			reloadTime=0.5;
			autoFire=1;
			displayName="G-80F/10S";
			burst=20;
			multiplier=4;
		};
	};
};

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
		simulation = "particles";
		type = "ExhaustSmokeHEMTTRefract";
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car 
	{
		//class ViewCargo;
		//class ViewOptics;
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
	class bma3_bushmaster_base_F: Car_F
	{
		scope = 1;
		_generalMacro = "BMA3_Bushmaster_base_F";
		displayName = "BMA3_Bushmaster_base_F";
		vehicleClass = "Car";
		picture="\bma3\bma3_bushmaster_data\ui\bushmaster_picture_ca.paa";
		author = "P1NGA";
		side = 1;
		size = 10;
		accuracy = 0.25;
		
		/// memory points where do tracks of the wheel appear
		memoryPointTrackFLL = "TrackFLL"; 
		memoryPointTrackFLR = "TrackFLR"; 
		memoryPointTrackBLL = "TrackBLL"; 
		memoryPointTrackBLR = "TrackBLR"; 
		memoryPointTrackFRL = "TrackFRL"; 
		memoryPointTrackFRR = "TrackFRR"; 
		memoryPointTrackBRL = "TrackBRL"; 
		memoryPointTrackBRR = "TrackBRR"; 	
		
		dustFrontLeftPos = "wheel_1_1_bound";
		dustFrontRightPos = "wheel_2_1_bound";
		dustBackLeftPos = "wheel_1_2_bound";
		dustBackRightPos = "wheel_2_2_bound";		
		
		armor = 350;
		armorStructural = 400;
		damageResistance = 0.00719;
		crewVulnerable = 0;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9999;
		threat[] = {0.8,0.6,0.3};
		
		driverAction = "bushmaster_driver";
		driverInAction = "bushmaster_driver";
		driverLeftHandAnimName = "driveWheel";
		driverRightHandAnimName = "driveWheel";
		viewDriverInExternal = 1;
		viewGunnerInexternal = 1;
		forceHideDriver = 1;
		driverForceOptics = 0;
		driverOpticsModel = "";
		
		memoryPointDriverOptics = "driverview";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		
		crew = "B_crew_F";
		cargoIsCoDriver[] = {0,0,0,0,0}; 		/// the cargo don't utilize some special memory points to get in
		cargoProxyIndexes[] = {4,5,6,7,8};		/// what indexes does regular cargo sit on
		getInProxyOrder[] = {4,5,6,7,8,1,2,3};
		
		cargoAction[] = {"passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		memoryPointsGetInCargo[] = {"pos cargo","pos cargo","pos cargo","pos cargo","pos cargo","pos cargo","pos cargo","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir"};
		
		slingLoadCargoMemoryPoints[] = {"slingload_point_01","slingload_point_02","slingload_point_03","slingload_point_04"};
		
		transportSoldier = 5;
		hideProxyInCombat = 1;	
		
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1.00;
		viewCargoShadowAmb = 1.00;
		
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = 	{
											"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
											"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
											"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
											"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
										};
		
		class textureSources
		{
			class adf_001
			{
				displayName = "Australian Army 001";
				author = "P1NGA";
				factions[] = {};
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
				 };
			};
			class adf_002:adf_001
			{
				displayName = "Australian Army 002";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_02.paa"
				 };
			};
			class adf_003:adf_001
			{
				displayName = "Australian Army 003";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_03.paa"
				 };
			};
			class adf_004:adf_001
			{
				displayName = "Australian Army 004";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_04.paa"
				 };
			};
			class adf_005:adf_001
			{
				displayName = "Australian Army 005";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_05.paa"
				 };
			};
			class adf_006:adf_001
			{
				displayName = "Australian Army 006";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_06.paa"
				 };
			};
			class adf_007:adf_001
			{
				displayName = "Australian Army 007";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_07.paa"
				 };
			};
			class adf_008:adf_001
			{
				displayName = "Australian Army 008";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_08.paa"
				 };
			};
			class adf_009:adf_001
			{
				displayName = "Australian Army 009";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_09.paa"
				 };
			};
			class adf_010:adf_001
			{
				displayName = "Australian Army 010";
				author = "P1NGA";
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_army_10.paa"
				 };
			};
			class aaf_001
			{
				displayName = "Australian Air Force 001";
				author = "P1NGA";
				factions[] = {};
				textures[] = 
				{
					"bma3\bma3_bushmaster_data\camo1\camo1_co.paa",
					"bma3\bma3_bushmaster_data\camo2\camo2_co.paa",
					"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
					"bma3\bma3_bushmaster_data\labels\labels_airforce_01.paa"
				 };
			};
		};
		
		#include "CfgSounds.hpp"
		#include "CfgHitPoints.hpp"
		#include "CfgPhysx.hpp"
		#include "CfgPip.hpp"
		#include "CfgAnimationsources.hpp"
		#include "CfgReflectors.hpp"
		#include "CfgExhausts.hpp"		
		
		class EventHandlers: EventHandlers 
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class bma3_bushmaster_unarmed_F: bma3_bushmaster_base_F
	{
		scope = 2;
		scopeCurator=2;
		displayName = "Bushmaster Transport";
		model = "bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon = "\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed.paa";
		author = "P1NGA";
	
		animationList[] = 
		{
			"show_ecm", 0.0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1.0,
			"show_cover", 0.5,
			"show_spare", 1.0,
			"show_ant_powered", 0.0,
			"show_ant_low_3_1", 1.0,
			"show_ant_low_3_2", 1.0,
			"show_ant_high_3_1", 0.5,
			"show_ant_high_3_2", 0.5,
			"show_ant_low_2_1", 1.0,
			"show_ant_low_2_2", 1.0,
			"show_ant_high_2_1", 0.5,
			"show_ant_high_2_2", 0.5,
			"show_ant_low_1_1", 1.0,
			"show_ant_low_1_2", 1.0,
			"show_ant_high_1_1", 0.5,
			"show_ant_high_1_2", 0.5,
			"show_ammobox_01", 1.0,
			"show_ammobox_02", 1.0,
			"show_ammobox_03", 1.0,
			"show_ammobox_04", 1.0,
			"show_jerrycan_01", 0.5,
			"show_jerrycan_02", 0.5,
			"show_jerrycan_03", 0.5,
			"show_jerrycan_04", 0.5
		};
		
		textureList[] = 
		{
			"adf_001", 1.0,
			"adf_002", 1.0,
			"adf_003", 1.0,
			"adf_004", 1.0,
			"adf_005", 1.0,
			"adf_006", 1.0,
			"adf_007", 1.0,
			"adf_008", 1.0,
			"adf_009", 1.0,
			"adf_010", 1.0
		};
				
		class Turrets: Turrets
		{
			class Turret_01: CargoTurret
			{
				LODTurnedOut = 1;
				isPersonTurret = 1;
				precisegetinout = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerCompartments = "Compartment1";
				
				maxElev = 45;
				minElev = -45;
				maxTurn = 75;
				minTurn = -75;
				initTurn = 0;
				
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerAction = "vehicle_turnout_1";
				gunnerInAction = "bushmaster_ffv_front";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				
				proxyIndex = 1;
				commanding = 1;
				gunnerName = "Front Cover";
				animationSourceHatch= "HatchGunner";
			};
			class Turret_02: Turret_01
			{
				proxyIndex = 2;
				commanding = 2;
				gunnerName = "Left Rear Cover";
				gunnerInAction = "bushmaster_ffv_rearleft";
				animationSourceHatch= "HatchGunnerRearLeft";
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
				
			};
			class Turret_03: Turret_01
			{
				proxyIndex = 3;
				commanding = 3;
				gunnerName = "Right Rear Cover";
				gunnerInAction = "bushmaster_ffv_rearright";
				animationSourceHatch= "HatchGunnerRearRight";
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
		};
	};
	class bma3_bushmaster_unarmed_ecm_F: bma3_bushmaster_unarmed_F
	{
		scope = 2;
		displayName = "Bushmaster Transport ECM";
		model = "bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon = "\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_ecm.paa";
		author = "P1NGA";
		
		animationList[] = 
		{
			"show_ecm", 1.0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1.0,
			"show_cover", 0.5,
			"show_spare", 1.0,
			"show_ant_powered", 0.0,
			"show_ant_low_3_1", 1.0,
			"show_ant_low_3_2", 1.0,
			"show_ant_high_3_1", 0.5,
			"show_ant_high_3_2", 0.5,
			"show_ant_low_2_1", 1.0,
			"show_ant_low_2_2", 1.0,
			"show_ant_high_2_1", 0.5,
			"show_ant_high_2_2", 0.5,
			"show_ant_low_1_1", 1.0,
			"show_ant_low_1_2", 1.0,
			"show_ant_high_1_1", 0.5,
			"show_ant_high_1_2", 0.5,
			"show_ammobox_01", 1.0,
			"show_ammobox_02", 1.0,
			"show_ammobox_03", 1.0,
			"show_ammobox_04", 1.0,
			"show_jerrycan_01", 0.5,
			"show_jerrycan_02", 0.5,
			"show_jerrycan_03", 0.5,
			"show_jerrycan_04", 0.5
		};
	};
	
	class bma3_bushmaster_unarmed_command_F: bma3_bushmaster_unarmed_F
	{
		scope = 2;
		scopeCurator=2;
		displayName = "Bushmaster Transport Command";
		model = "bma3\bma3_bushmaster\bma3_bushmaster_unarmed.p3d";
		Icon = "\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author = "P1NGA";
		
		animationList[] = 
		{
			"show_ecm", 0.0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1.0,
			"show_cover", 0.5,
			"show_spare", 1.0,
			"show_ant_powered", 1.0,
			"show_ant_low_3_1", 1.0,
			"show_ant_low_3_2", 1.0,
			"show_ant_high_3_1", 0.5,
			"show_ant_high_3_2", 0.5,
			"show_ant_low_2_1", 1.0,
			"show_ant_low_2_2", 1.0,
			"show_ant_high_2_1", 0.5,
			"show_ant_high_2_2", 0.5,
			"show_ant_low_1_1", 0.0,
			"show_ant_low_1_2", 1.0,
			"show_ant_high_1_1", 0.0,
			"show_ant_high_1_2", 0.5,
			"show_ammobox_01", 1.0,
			"show_ammobox_02", 1.0,
			"show_ammobox_03", 1.0,
			"show_ammobox_04", 1.0,
			"show_jerrycan_01", 0.5,
			"show_jerrycan_02", 0.5,
			"show_jerrycan_03", 0.5,
			"show_jerrycan_04", 0.5
		};
	};
	
	class bma3_bushmaster_pws127mm_F: bma3_bushmaster_unarmed_F
	{
		scope = 2;
		scopeCurator=2;
		displayName = "Bushmaster R400 PWS 12.7mm";
		model = "bma3\bma3_bushmaster\bma3_bushmaster_r400.p3d";
		Icon = "\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author = "P1NGA";
		
		animationList[] = 
		{
			"show_ecm", 0.0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1.0,
			"show_cover", 0.5,
			"show_spare", 1.0,
			"show_ant_powered", 0.0,
			"show_ant_low_3_1", 1.0,
			"show_ant_low_3_2", 1.0,
			"show_ant_high_3_1", 0.5,
			"show_ant_high_3_2", 0.5,
			"show_ant_low_2_1", 1.0,
			"show_ant_low_2_2", 1.0,
			"show_ant_high_2_1", 0.5,
			"show_ant_high_2_2", 0.5,
			"show_ant_low_1_1", 1.0,
			"show_ant_low_1_2", 1.0,
			"show_ant_high_1_1", 0.5,
			"show_ant_high_1_2", 0.5,
			"show_ammobox_01", 1.0,
			"show_ammobox_02", 1.0,
			"show_ammobox_03", 1.0,
			"show_ammobox_04", 1.0,
			"show_jerrycan_01", 0.5,
			"show_jerrycan_02", 0.5,
			"show_jerrycan_03", 0.5,
			"show_jerrycan_04", 0.5
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 1;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"BMA3_r400_rws"};
				magazines[] = {"BMA3_bushmaster_1000rnd_127x99_Tracer", "BMA3_bushmaster_1000rnd_127x99_Tracer", "BMA3_bushmaster_1000rnd_127x99_Tracer"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				gunnerAction = "bushmaster_gunner";
				gunnerInAction = "bushmaster_gunner";
				forceHideGunner = 1;
				gunnerForceOptics= 0;
				hasGunner = 1;
				InGunnerMayFire = 1;
				lockWhenDriverOut = 0;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun= "usti hlavne";
				primaryGunner = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				usePip = 1;
				minTurn = -360;
				maxTurn = 360;
				minElev = -13;
				maxElev = 40;
				class ViewOptics: RCWSOptics{};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.5;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
					};
				};
				gunnerDoor = "";
			};
			class Turret_01: CargoTurret
			{
				LODTurnedOut = 1;
				isPersonTurret = 1;
				precisegetinout = 0;
				gunnerCompartments = "Compartment1";
				
				maxElev = 45;
				minElev = -45;
				maxTurn = 75;
				minTurn = -75;
				
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerAction = "vehicle_turnout_1";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				
				proxyIndex = 2;
				commanding = 2;
				gunnerName = "Left Rear Cover";
				gunnerInAction = "bushmaster_ffv_rearleft";
				animationSourceHatch= "HatchGunnerRearLeft";
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
			};
			class Turret_02: Turret_01
			{
				proxyIndex = 3;
				commanding = 3;
				gunnerName = "Right Rear Cover";
				gunnerInAction = "bushmaster_ffv_rearright";
				animationSourceHatch= "HatchGunnerRearRight";
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
		};		
	};
	
	class bma3_bushmaster_pws127mm_ecm_F: bma3_bushmaster_pws127mm_F
	{
		scope = 2;
		scopeCurator=2;
		displayName = "Bushmaster R400 PWS 12.7mm + ECM";
		model = "bma3\bma3_bushmaster\bma3_bushmaster_r400.p3d";
		Icon = "\bma3\bma3_bushmaster_data\ui\bushmaster_map_unarmed_command.paa";
		author = "P1NGA";
		
		animationList[] = 
		{
			"show_ecm", 1.0,
			"show_shovel", 0.5,
			"show_fireaxe", 0.5,
			"show_arm", 0.5,
			"show_extension", 0.5,
			"show_winch", 1.0,
			"show_cover", 0.5,
			"show_spare", 1.0,
			"show_ant_powered", 0.0,
			"show_ant_low_3_1", 1.0,
			"show_ant_low_3_2", 1.0,
			"show_ant_high_3_1", 0.5,
			"show_ant_high_3_2", 0.5,
			"show_ant_low_2_1", 1.0,
			"show_ant_low_2_2", 1.0,
			"show_ant_high_2_1", 0.5,
			"show_ant_high_2_2", 0.5,
			"show_ant_low_1_1", 1.0,
			"show_ant_low_1_2", 1.0,
			"show_ant_high_1_1", 0.5,
			"show_ant_high_1_2", 0.5,
			"show_ammobox_01", 1.0,
			"show_ammobox_02", 1.0,
			"show_ammobox_03", 1.0,
			"show_ammobox_04", 1.0,
			"show_jerrycan_01", 0.5,
			"show_jerrycan_02", 0.5,
			"show_jerrycan_03", 0.5,
			"show_jerrycan_04", 0.5
		};
	};
};


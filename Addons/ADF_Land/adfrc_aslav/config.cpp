
class CfgPatches
{
	class ADFRC_ASLAV
	{
		addonRootClass = "ADF_Land";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Data_F_AoW_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"ADF_Core"
		};
		units[] = 
		{
			"ADFRC_ASLAV_base_F",
			"ADFRC_ASLAV"
		};
		weapons[]=
		{
			"ADFRC_aslav_coax",
			"ADFRC_aslav_mag58",
			"ADFRC_aslav_M242"
		};
		magazines[]=
		{
			"ADFRC_aslav_1000Rnd_762x51_Tracer",
			"ADFRC_aslav_200rnd_762x51_Tracer",
			"ADFRC_aslav_360RND_25MM_HE",
			"ADFRC_aslav_360RND_25MM_AP"
		};
		ammo[]=
		{
			"ADFRC_aslav_25mm_HE",
			"ADFRC_aslav_25mm_AP"
		};
	};
};
#include "c_ammo.hpp"
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class complexGearbox;
		class MFD;
		class ViewOptics;
		class ViewPilot;
		class Damage;
		class Exhausts;
		class NVGMarkers;
		class Reflectors;
		class Markerlights;
		class RenderTargets;
		class compartmentsLights;
		class VehicleTransport;
		class EventHandlers;

		class HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitSLAT_Left_1;
			class HitSLAT_Left_2;
			class HitSLAT_Left_3;
			class HitSLAT_Right_1;
			class HitSLAT_Right_2;
			class HitSLAT_Right_3;
			class HitSLAT_top_back;
			class HitSLAT_top_left;
			class HitSLAT_top_right;
			class HitSLAT_back;
			class HitSLAT_front;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLMWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRMWheel;
			class HitRBWheel;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner: ViewGunner {};
						class ViewOptics: ViewOptics {};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						class HitPoints
						{
							class HitComTurret;
						};
					};
				};
				class ViewOptics: RCWSOptics {};
				class ViewGunner: ViewGunner {};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class L4;
			class R1;
			class R2;
			class R3;
			class R4;
		};
	};
	
	class ADFRC_ASLAV_base_F: APC_Wheeled_01_base_F
	{
		scope = 1;
		scopeCurator = 1;
		side= 1;
		displayName ="ASLAV";
		author ="ADF Re-Cut";
		faction ="ADF";
		vehicleClass ="Armoured";
		_generalMacro ="ADFRC_ASLAV_base_F";
		model = "ADF_Land\adfrc_aslav\ADFRC_ASLAV_25";
		mapSize =9;
		//driverCanSee="4+8+2+32+16";
		//driverCanSee = "1 + 2 + 4 + 8 + 32";
		//gunnerCanSee="4+2+8+32+16";
		//gunnerCanSee = "1 + 2 + 4 + 8 + 32";
		//enableManualFire=0;
		//enableManualFire = 1;
		LODTurnedIn = -1;
		LODTurnedOut = 1;
		animationSourceHatch = "hatchDriver";
		viewDriverInExternal = 0;
		tf_RadioType = "TFAR_rt1523g";
		memoryPointTrackFLL="stopa PLP";
		memoryPointTrackFLR="stopa PLL";
		memoryPointTrackBLL="stopa ZLP";
		memoryPointTrackBLR="stopa ZLL";
		memoryPointTrackFRL="stopa PPP";
		memoryPointTrackFRR="stopa PPL";
		memoryPointTrackBRL="stopa ZPP";
		memoryPointTrackBRR="stopa ZPP";
		memoryPointDriverOptics="driverview";
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		dustBackLeftPos="wheel_1_4_bound";
		dustBackRightPos="wheel_2_4_bound";
		driverLeftHandAnimName="driveWheel";
		driverRightHandAnimName="driveWheel";
		LODDriverTurnedOut=1201;
		LODDriverTurnedin=1100;
		selectionFireAnim="";
		transportSoldier=6;
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=100;
		unitInfoType = "RscUnitInfoTank";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		driverOpticsModel = "\ADF_Land\adfrc_aslav\Optics_Driver";
		
		commanderCanSee = 31;
		gunnerCanSee = 30;
		driverCanSee = 31;
		forceHideDriver = 0;
		weapons[] = {"TruckHorn3"};
		numberPhysicalWheels = 8;
		wheelCircumference = 3.277;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 300;
		hiddenSelections[]=
		{
			camo1,
			camo2,
			camo3,
			camo4,
			labels
		};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture1_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture2_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture3_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture4_co.paa",
			"\ADF_Land\adfrc_aslav\data\labels\labels_01.paa"
		};
		textureList[] =
		{
			Worn,1,
			Arid,0,
			Jungle,0,
			Desert,0
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody2.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody2_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavbody2_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_green.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_green_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_green_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_red.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_red_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_glass_red_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_0.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_0_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_0_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_1.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_1_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_1_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_2.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_2_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lav_int_2_destruct.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavalfa.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavalfa_damage.rvmat",
				"ADF_Land\adfrc_aslav\Data\A2data\lavalfa_destruct.rvmat"
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1.2;
				material = -1;
				name = "zbytek";
				visual = "zbytek";
				minimalHit = 0.2;
				passThrough = 0;
				explosionShielding = 0.007;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_1_1_steering";
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_1_4_steering";
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_1_3_steering";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_1_2_steering";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_2_4_steering";
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_2_3_steering";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough=0;
				name = "wheel_2_2_steering";
			};
		};
		driverAction="driver_apcwheeled2_out";
		driverInAction="ASLAV_DriverView";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic02b",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic01"
		};
		typicalCargo[] = {"ADFRC_teamLeader_dpcu","ADFRC_rifleman_dpcu","ADFRC_grenadier_dpcu","ADFRC_medic_dpcu","ADFRC_rifleman_dpcu","ADFRC_rifleman_dpcu"};
		soundEngineOnInt[] = {"\ADF_Land\adfrc_aslav\sound\DD6V53T\engine_on.ogg", 0.794328, 1};
		soundEngineOffInt[] = {"\ADF_Land\adfrc_aslav\sound\DD6V53T\engine_off.ogg", 0.794328, 1};
		soundEngineOnExt[] = {"\ADF_Land\adfrc_aslav\sound\DD6V53T\engine_on.ogg", 1, 1, 100};
		soundEngineOffExt[] = {"\ADF_Land\adfrc_aslav\sound\DD6V53T\engine_off.ogg", 1, 1, 100};
		engineStartSpeed = 1;
		class Sounds
		{
			soundSetsInt[] = {"DD6V53T_Turbo_EXT_SoundSet","DD6V53T_EngineBrake_EXT_SoundSet","DD6V53T_Engine_RPM0_INT_SoundSet","DD6V53T_Engine_RPM1_INT_SoundSet","DD6V53T_Engine_RPM2_INT_SoundSet","DD6V53T_Engine_RPM3_INT_SoundSet","DD6V53T_Engine_RPM4_INT_SoundSet","APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet", "APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet", "APC_Wheeled_01_Rattling_INT_SoundSet", "APC_Wheeled_01_Stress_INT_SoundSet", "APC_Wheeled_01_Rain_INT_SoundSet", "APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet", "APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet", "APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet", "APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet", "APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet", "APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"};
			soundSetsExt[] = {"DD6V53T_Turbo_EXT_SoundSet","DD6V53T_EngineBrake_EXT_SoundSet","DD6V53T_Engine_RPM0_EXT_SoundSet","DD6V53T_Engine_RPM1_EXT_SoundSet","DD6V53T_Engine_RPM2_EXT_SoundSet","DD6V53T_Engine_RPM3_EXT_SoundSet","DD6V53T_Engine_RPM4_EXT_SoundSet","APC_Wheeled_01_Rattling_EXT_SoundSet", "APC_Wheeled_01_Stress_EXT_SoundSet", "APC_Wheeled_01_Rain_EXT_SoundSet", "APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet", "APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet", "APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet", "APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet", "APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet", "APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"};
		};
		class AnimationSources
		{
			class proxy
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class waterSkid
			{
				source="door";
				initPhase=0;
				animPeriod=3;
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class 20mm_muzzle_rot
			{
				source="ammorandom";
				weapon="ADFRC_aslav_M242";
			};
			class 20mm_muzzle_hide
			{
				source="reload";
				weapon="ADFRC_aslav_M242";
			};
			class 20mm_recoil
			{
				source="reload";
				weapon="ADFRC_aslav_M242";
			};
			class coax_muzzle_rot
			{
				source="ammorandom";
				weapon="ADFRC_land_coax";
			};
			class coax_muzzle_hide
			{
				source="reload";
				weapon="ADFRC_land_coax";
			};/*
			class MAG58_reloadMagazine
			{
				source="reloadMagazine";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};
			class MAG58_isEmpty
			{
				source="isEmpty";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};
			class MAG58_reload
			{
				source="reload";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};
			class MAG58_revolving
			{
				source="revolving";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};
			class MAG58_muzzle_rot
			{
				source="ammorandom";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};
			class MAG58_muzzle_hide
			{
				source="reload";
				weapon="ADFRC_land_coax_mounted";//ADFRC_mag58_vehicle
			};*/
			class slat_armor
			{
				DisplayName="Slat Armour";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class slat_armor2
			{
				DisplayName="Slat Armour Turret";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class net_hull
			{
				DisplayName="Hull Camouflage (Shaggy Dog)";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class net_turret
			{
				DisplayName="Turret Camouflage (Shaggy Dog)";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class net_roll_hull
			{
				DisplayName="Stowed Hull Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tools
			{
				DisplayName="Tools";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tow_bar
			{
				DisplayName="Tow Bar";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class duke
			{
				DisplayName="AN/VLQ-12 Duke";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class hull_jerry
			{
				DisplayName="Hull Jerry";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class water_jerry
			{
				DisplayName="Water Jerry";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class stretcher
			{
				DisplayName="Stretcher";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tow_cable
			{
				DisplayName="Front Tow Cable";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class tow_shackles
			{
				DisplayName="Recovery Shackles";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class net_roll_turret
			{
				DisplayName="Stowed Turret Camo Net";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class rack_gear_right
			{
				DisplayName="Turret Field Gear Right";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class rack_gear_rear
			{
				DisplayName="Turret Field Gear Rear (1)";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class rack_gear_left
			{
				DisplayName="Turret Field Gear Left";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class turret_jerrys
			{
				DisplayName="Turret Jerry Cans";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFRC";
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
		};
		class Attributes
		{
			class PlatoonMarkings
			{
				//--- Mandatory properties
				displayName = "Vehicle Callsigns";
				tooltip = "The vehicle callsign shown on the sides and back of the vehicle";
				property = "ADFRC_PlatoonMarkings"; //Unique config property name saved in SQM
				control = "Combo"; //UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes

				//Expression called when applying the attribute in Eden and at the scenario start
				//The expression is called twice - first for data validation, and second for actual saving
				//Entity is passed as _this, value is passed as _value
				//%s is replaced by attribute config name. It can be used only once in the expression
				//In MP scenario, the expression is called only on server.
				expression = "_this setVariable ['%s', _value, true]; if (_value isEqualTo 0) exitWith {Nil}; if (_value < 10) then {_this setobjecttextureGlobal [4, format ['\adf_land\adfrc_aslav\data\labels\labels_0%1.paa', _value]]} else {_this setobjecttextureGlobal [4, format ['\adf_land\adfrc_aslav\data\labels\labels_%1.paa', _value]]};";

				//Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
				//Entity (unit, group, marker, comment etc.) is passed as _this
				//Returned value is the default value
				//Used when no value is returned, or when it is of other type than NUMBER, STRING or ARRAY
				//Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
				defaultValue = 0;
				
				class Values 
				{
					class One {
						name = "Bullryder | 7B";
						tooltip = "Select this callsign";
						value = 1;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_01.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_01.paa";
					};
					class Two: One {
						name = "Cerebral | 3A";
						value = 2;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_02.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_02.paa";
					};
					class Three: One {
						name = "Circle Work | 5A";
						value = 3;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_03.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_03.paa";
					};
					class Four: One {
						name = "Bollocks | 11-A";
						value = 4;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_04.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_04.paa";
					};
					class Five: One {
						name = "Comalgo | 2C";
						value = 5;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_05.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_05.paa";
					};
					class Six: One {
						name = "Sandgroper | 15C";
						value = 6;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_06.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_06.paa";
					};
					class Seven: One {
						name = "Courage | 12C";
						value = 7;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_07.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_07.paa";
					};
					class Eight: One {
						name = "Atomic | 13A";
						value = 8;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_08.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_08.paa";
					};
					class Nine: One {
						name = "Cannibal | 33B";
						value = 9;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_09.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_09.paa";
					};
					class Ten: One {
						name = "Bourbon | 23B";
						value = 10;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_10.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_10.paa";
					};
					class Eleven: One {
						name = "Cant Help Ya | 21A";
						value = 11;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_11.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_11.paa";
					};
					class Twelve: One {
						name = "ANZAC | 11A";
						value = 12;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_12.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_12.paa";
					};
					class Thirteen: One {
						name = "Angry Bird | 9A";
						value = 13;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_13.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_13.paa";
					};
					class Fourteen: One {
						name = "Atlas | 13B";
						value = 14;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_14.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_14.paa";
					};
					class Fifteen: One {
						name = "Achilles | 22C";
						value = 15;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_15.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_15.paa";
					};
					class Sixteen: One {
						name = "Boomer | 31A";
						value = 16;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_16.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_16.paa";
					};
					/* Seventeen: One {
						name = "Cerebral | 1";
						value = 17;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_17.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_17.paa";
					};
					class Eighteen: One {
						name = "Circle Work | 8";
						value = 18;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_18.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_18.paa";
					};
					class Nineteen: One {
						name = "Bollocks | 5";
						value = 19;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_19.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_19.paa";
					};
					class Twenty: One {
						name = "Hammer time | 31";
						value = 20;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_20.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_20.paa";
					};*/
					class TwentyOne: One {
						name = "NONE";
						tooltip = "No callsign marking will be displayed.";
						value = 21;
						picture = "\adf_land\adfrc_aslav\data\labels\labels_21.paa";
						pictureRight = "\adf_land\adfrc_aslav\data\labels\labels_21.paa";
					};
					class Zero: One {
						name = "Random";
						tooltip = "Choose the markings randomly.";
						value = 0;
					};
				};

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "number"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "object"; // Condition for attribute to appear (see the table below)
				typeName = "NUMBER"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\ADF_Land\adfrc_aslav\script\init.sqf""; if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		class MFD
		{
			class ASLAV_Commander_Screen
			{
				topLeft = "acs_tl";
				topRight = "acs_tr";
				bottomLeft = "acs_bl";
				bottomright = "acs_br";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1,1,1};
				alpha = 0.5;
				enableParallax = 0;
				turret[] = {0,0};
				font = "EtelkaMonospaceProBold";
				class material
				{
					ambient[] = {1,1,1,1};
					diffuse[] = {1,1,1,1};
					emissive[] = {1000,1000,1000,1};
				};
				class Bones{};
				class Draw
				{
					class Lased_Range
					{
						type = "text";
						source = "laserDist";
						sourceScale = 1;
						sourceLength = 4;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] = {{0.75,0.28},1};
						right[] = {{0.775,0.28},1};
						down[] = {{0.75,0.317},1};
					};
					class VisionMode_Text
					{
						type = "text";
						source = "static";
						text = "WFOV";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] = {{0.75,0.65},1};
						right[] = {{0.775,0.65},1};
						down[] = {{0.75,0.687},1};
					};
					class VisionMode_String
					{
						type = "text";
						source = "visionMode";
						sourceScale = 1;
						sourceLength = 3;
						scale = 1;
						align = "center";
						refreshRate = 0.1;
						pos[] = {{0.825,0.65},1};
						right[] = {{0.85,0.65},1};
						down[] = {{0.825,0.687},1};
					};
				};
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		class Reflectors
		{
			class Headlight_Left
			{
				position = "Headlight_Left_pos";
				direction = "Headlight_Left_dir";
				hitpoint = "Headlight_Left";
				selection = "Light_l";
				innerAngle = 60;
				outerAngle = 160;
				color[] = {1,0.75,0.525};
				ambient[] = {1,0.75,0.525};
				intensity = 80;
				size = 1;
				coneFadeCoef = 10;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 80;
				};
			};
			class Headlight_Right: Headlight_Left
			{
				position = "Headlight_Right_pos";
				direction = "Headlight_Right_dir";
				hitpoint = "Headlight_Right";
				selection = "Light_r";
			};
			class Light_Rear
			{
				selection="Light_Rear";
				color[]={1,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				hitpoint="";
				size=0;
			};
			/*class Light_brake -------- To be fixed later
			{
				selection="Light_brake";
				color[]={1,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				hitpoint="";
				size=0;
			};
			class Light_Reverse
			{
				selection="Light_Reverse";
				color[]={0,0,0};
				ambient[]={0,0,0};
				position="";
				direction="";
				hitpoint="";
				size=0;
			};
			class High_Beam_Left: Headlight_Left
			{
				position = "High_Beam_Left_pos";
				direction = "High_Beam_Left_dir";
				hitpoint = "High_Beam_Left";
				selection = "High_Beam_Left";
				innerAngle = 45;
				outerAngle = 80;
				color[] = {5,3.75,2.625};
				ambient[] = {5,3.75,2.625};
				flareSize = 1.5;
				class Attenuation: Attenuation
				{
					hardLimitStart = 80;
					hardLimitEnd = 120;
				};
			};
			class High_Beam_Right: High_Beam_Left
			{
				position = "High_Beam_Right_pos";
				direction = "High_Beam_Right_dir";
				hitpoint = "High_Beam_Right";
				selection = "High_Beam_Right";
				flareSize = 1.5;
			};*/
		};
		aggregateReflectors[] = {{"Headlight_Left","Headlight_Right"},{"High_Beam_Left","High_Beam_Right"}};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		gunnerCompartments = "Compartment1";
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = {0, 0, 0};
					ambient[] = {1, 0, 0};
					intensity = 5;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 1;
						linear = 1;
						quadratic = 1;
						hardLimitStart = 0;
						hardLimitEnd = 1;
					};
					point = "light_interior1";
				};
				class Light2: Light1
				{
					point = "light_interior2";
				};
				class Light3: Light2
				{
					point = "light_interior3";
				};
				class Light4: Light2
				{
					point = "light_interior4";
				};
				class Light5: Light2
				{
					point = "light_interior5";
				};
				class Light6: Light2
				{
					point = "light_interior6";
				};
				class Light7: Light2
				{
					point = "light_interior7";
				};
			};
		};
		class Markerlights
		{
		};
		class RenderTargets
		{
			class commanderCamera
			{
				rendertarget = "rendertarget0";
				
				class commanderScreen
				{
					fov = 0.305731;
					pointDirection = "commanderoptics_dir";
					pointPosition = "commanderoprics";
					renderQuality = 2;
					renderVisionMode = 2;
					turret = [0,0];
				};	
				BBoxes[]	= { "acs_bl", "acs_br", "acs_tl", "acs_tr" };
			};
		};
		class UserActions
		{
			class extend_waterSkid
			{
				userActionID=50;
				displayName="Extend Trim Vane";
				radius=3;
				showIn3D=17;
				priority=3;
				position="driverview";
				onlyForPlayer=0;
				condition="((this DoorPhase 'waterSkid') == 0) AND Alive (this) and driver this == player";
				statement="this animateDoor ['waterSkid', 1]; playSound3D [""ADF_Land\adfrc_aslav\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""waterBlade_axis"")), 5, 1, 25]; ";
			};
			class collapse_waterSkid: extend_waterSkid
			{
				userActionID=51;
				displayName="Retract Trim Vane";
				condition="((this DoorPhase 'waterSkid') > 0) AND Alive (this) and driver this == player";
				statement="this animateDoor [""waterSkid"", 0]; playSound3D [""ADF_Land\adfrc_aslav\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""waterBlade_axis"")), 5, 1, 25]; ";
			};
		};
		class Wheels: Wheels
		{
			class L1: L1
			{
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				steering = 1;
				width = "0.2";
				mass = 150;
				MOI = 60;
				dampingRate = 1;
				dampingRateDamaged = 0.1;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 13500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1600;
				springStrength = 80000;
				springDamperRate = 15000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L2
			{
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 1;
				maxBrakeTorque = 13500;
			};
			class L3: L3
			{
				boneName = "wheel_1_3_damper";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxBrakeTorque = 13500;
			};
			class L4: L4
			{
				boneName = "wheel_1_4_damper";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxBrakeTorque = 13500;
			};
			class R1: R1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				maxBrakeTorque = 13500;
			};
			class R2: R2
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 1;
				maxBrakeTorque = 13500;
			};
			class R3: R3
			{
				boneName = "wheel_2_3_damper";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxBrakeTorque = 13500;
			};
			class R4: R4
			{
				boneName = "wheel_2_4_damper";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxBrakeTorque = 13500;
			};
		};
		class Turrets: Turrets
		{
			class MAG58_Turret: MainTurret
			{ 
				weapons[] = {"ADFRC_aslav_mag58"};
				magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F"};
				gunnerLeftHandAnimName = "MAG58_handleL";//MAG58_handleL
				gunnerRightHandAnimName = "MAG58_handleR";//MAG58_handleR
				gunnerLeftLegAnimName = "MAG58_FootL";
				gunnerRightLegAnimName = "MAG58_FootR";
				body = "MAG58_Turret";
				gun = "MAG58_Gun";
				animationSourceBody = "MAG58_Turret";
				animationSourceGun = "MAG58_Gun";
				gunnerName = "MAG58";
				gunnerAction = "lav25_commander_turnout_mg";
				gunnerCompartments = "Compartment3";
				gunBeg = "MAG58_muzzleStart";
				gunEnd = "MAG58_muzzleEnd";
				memoryPointGunnerOptics = "MAG58_out";
				memoryPointGunnerOutOptics = "MAG58_eye";
				muzzlePos = "MAG58_muzzleStart";
				muzzleEnd = "MAG58_muzzleEnd";
				proxyType = "CPcommander";
				proxyIndex = 2;
				memoryPointGun[] = {"MAG58_muzzleStart"};
				selectionFireAnim = "MAG58_muzzleFlash";
				minElev = -20;
				maxElev = 40;
				initElev = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				minOutElev = 0;
				maxOutElev = 0;
				minOutTurn = 0;
				maxOutTurn = 0;
				initOutElev = 0;
				initOutTurn = 0;
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				optics = 0;
				hasGunner = 0;
				viewGunnerInExternal = 1;
				animationSourceHatch = "";
				hideProxyInCombat = 0;
				gunnerOpticsEffect[] = {""};
				stabilizedInAxes = 3;
				ispersonturret = 0;
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				InGunnerMayFire = 0;
				outGunnerMayFire = 1;
				enabledByAnimationSource = ""; 
				gunnerOutOpticsShowCursor = 0;
				gunnerOutFireAlsoInInternalCamera = 0;
				gunnerOpticsShowCursor = 0;
				gunnerOutForceOptics = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_Offroad_01";
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 0;
				dontCreateAI = 1;
				gunnerType = "";
				class Turrets {};
				class ViewGunner
				{
					continuous = 0;
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 1.25;
					
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxFOV = 0;
					speedZoomMaxSpeed = 1e+010;
					visionMode[] = {"Normal"};
				};
				class ViewOptics
				{
					continuous = 0;
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 1.25;
					
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxFOV = 0;
					speedZoomMaxSpeed = 1e+010;
					visionMode[] = {"Normal"};
				};
				class OpticsIn
				{
					class Wide
					{
						gunnerOpticsEffect[] = {};
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						initAngleX = 5;
						minAngleX = -75;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -150;
						maxAngleY = 150;
						initFov = 0.75;
						minFov = 0.25;
						maxFov = 1.25;
						maxMoveX = 0;
						maxMoveY = 0;
						maxMoveZ = 0;
						minMoveX = 0;
						minMoveY = 0;
						minMoveZ = 0;
						thermalMode[] = {2,3};
						visionMode[] = {"Normal","NVG"};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_m_F.p3d";
						initFov = "(150 * 0.05625 / 120)";
						minFov = "(150 * 0.05625 / 120)";
						maxFov = "(150 * 0.05625 / 120)";
					};
					class Narrow: Medium
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_01_n_F.p3d";
						initFov = "(60 * 0.05625 / 120)";
						minFov = "(60 * 0.05625 / 120)";
						maxFov = "(60 * 0.05625 / 120)";
					};
				};
			};
			class mainturret: MainTurret //20MM_Turret
			{
				weapons[] = {"ADFRC_aslav_M242","ADFRC_aslav_coax","HE","AP"};
				magazines[]= {"ADFRC_ASLAV_360RND_25MM_HE","ADFRC_ASLAV_360RND_25MM_AP","ADFRC_ASLAV_1000Rnd_762x51_Tracer","ADFRC_ASLAV_1000Rnd_762x51_Tracer"};
				soundServo[]= {"ADF_Land\adfrc_aslav\sound\adfrc_aslav_turret_move","db23",1,10};
				minElev = -10;
				maxElev = 50;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				maxHorizontalRotSpeed = "((360/10)/45)";
				maxVerticalRotSpeed = 0.4;
				gunnerAction = "commander_apcwheeled2_out_settlein";
				gunnerInAction = "apcwheeled3_slot1_in";
				personTurretAction = "vehicle_turnout_1";
				animationSourceHatch = "hatchGunner";
				isPersonTurret = 1;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerCompartments = "Compartment1";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				hideWeaponsGunner = 1;
				lockWhenDriverOut = 1;
				//discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000,5100,5200,5300,5400,5500,5600,5700,5800,5900,6000,6100,6200,6300,6400,6500,6600,6700,6800,6900,7000,7100,7200,7300,7400,7500,7600,7700,7800,7900,8000,8100,8200,8300,8400,8500,8600,8700,8800,8900,9000,9100,9200,9300,9400,9500,9600,9700,9800,9900,10000};
				//discreteDistanceInitIndex = 3;
				//ispersonturret = 1;
				//minOutElev = -70;
				//maxOutElev = 40;
				//initOutElev = 0;
				//minOutTurn = -90;
				//maxOutTurn = 90;
				//initOutTurn = 0;
				//proxyType = "CPGunner";
				//proxyIndex = 1;
				ace_fcs_enabled = 0;
				ace_fcs_minDistance = 200;
				ace_fcs_maxDistance = 2000;
				ace_fcs_distanceInterval = 5;
				//gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				memoryPointGun[] = {"usti hlavne2"};
				//memoryPointGun[] = {"usti hlavne3"};
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				particlesdir = "muzzle_1";
				particlespos = "chamber_1";
				//missileBeg = "muzzle_1";
				//missileEnd = "chamber_1";
				//body = "mainTurret";
				//gun = "mainGun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				//animationSourceBody = "MainTurret";
				//animationSourceGun = "MainGun";
				gunnerForceOptics = 1;
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics = "gunnerviewOut";
				viewGunnerInExternal = 0;
				commanding = 2;
				primaryGunner = 1;
				//outGunnerMayFire = 0;
				//startEngine = 1;
				//primaryGunner = 1;
				//stabilizedInAxes = 3;
				selectionFireAnim="zasleh,zasleh2";
				/*
				commanding=2;
				primaryObserver=0;
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="gunnerview";
				*/class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.5;
					maxFov = 1;
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide 
					{
						visionMode[] = {"Normal","TI"};
						thermalMode[] = {2,3};
					};
					class Medium: Medium 
					{
						visionMode[] = {"Normal","TI"};
						thermalMode[] = {2,3};
					};
					class Narrow: Narrow 
					{
						visionMode[] = {"Normal","TI"};
						thermalMode[] = {2,3};
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "otocvez";
						visual = "otocvez";
						passThrough = 1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointGunnerOptics="CommanderOptics";
						memoryPointGunnerOutOptics = "commanderviewout";
						gunnerCompartments = "Compartment1";
						animationSourceHatch = "hatchCommander";
						personTurretAction = "vehicle_turnout_1";
						isPersonTurret = 1;
						minElev = -10;
						maxElev = 10;
						initElev = 0;
						minTurn = -25;
						maxTurn = 25;
						initTurn = 0;
						hideWeaponsGunner = 0;
						commanding = 3;
						primaryGunner = 0;
						primaryObserver = 1;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						turretInfoType = "RscOptics_APC_Wheeled_03_gunner";
						gunnerAction = "commander_apctracked3_out";
						gunnerInAction = "commander_apctracked3_out";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerForceOptics = 0;
						LODTurnedIn = 1000;
						LODTurnedOut = 1;
						LODOpticsIn = 1;
						LODOpticsOut = 1;
						gunnerDoor = "";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.4;
							minFov = 0.5;
							maxFov = 1;
						};
						class OpticsIn: Optics_Gunner_MBT_03
						{
							class Wide: Wide 
							{
								visionMode[] = {"Normal","TI"};
								thermalMode[] = {2,3};
							};
							class Medium: Medium
							{
								visionMode[] = {"Normal","TI"};
								thermalMode[] = {2,3};
							};
							class Narrow: Narrow
							{
								visionMode[] = {"Normal","TI"};
								thermalMode[] = {2,3};
							};
						};
						startEngine = 0;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 0;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						showCrewAim = 0;
						allowTabLock = 0;
					};
				};
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 8;
		ace_refuel_fuelCapacity = 269;
		ace_cookoff_probability = 0.5;
		ace_cookoff_cookoffSelections[] = {"hatch_gunner","hatch_commander"};
		ace_vehicle_damage_hullDetonationProb = 0.2;
		ace_vehicle_damage_turretDetonationProb = 0.2;
		ace_vehicle_damage_engineDetonationProb = 0.0;
		ace_vehicle_damage_hullFireProb = 0.7;
		ace_vehicle_damage_turretFireProb = 0.7;
		ace_vehicle_damage_engineFireProb = 0.7;
		ace_vehicle_damage_detonationDuringFireProb = 0.5;
		ace_vehicle_damage_canHaveFireRing = 1;
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Alpha";
				shortName = "Set-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Bravo";
				shortName = "Set-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		frontBias = 0;
		rearBias = 0;
		centreBias = 0;
		frontRearSplit = 0.5;
		differentialType = "all_limited";
		idleRpm = 600;
		maxOmega = 600;
		minOmega = __EVAL((800 * 2 * PI) / 60);
		engineMOI = 1;
		redRpm = 7000;
		maxSpeed = 2000;// 100
		enginePower = 974;// DD6V53T
		peakTorque = 756;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-10.094,"N",0,"D1",8.05,"D2",5.562,"D3",4.856,"D4",3.456,"D5",2.623,"D6",1.678};//
			TransmissionRatios[] = {"High",5.5};
			AmphibiousRatios[] = {"R1", -10, "N", 0, "D1", 30};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.5;
			gearUpMinCoef = 0.9;
			gearDownMinCoef = 0.15;
			transmissionDelay = 2;
		};
		latency = 0.5;
		switchTime = 0.25;
		changeGearType = "effective";
		changeGearMinEffectivity[] = {0.85, 0.15, 0.85, 0.85, 0.85, 0.85, 0.85, 0.85};
		changeGearOmegaRatios[] = 
		{             
			__EVAL(7000/7000), __EVAL(1000/7000),   // R1
			__EVAL(1000/7000), 0,                   // N
			__EVAL(3800/7000), __EVAL(1000/7000),   // D1
			__EVAL(4000/7000), __EVAL(1200/7000),   // D2
			__EVAL(4200/7000), __EVAL(1400/7000),   // D3
			__EVAL(4400/7000), __EVAL(1600/7000),   // D4
			__EVAL(4500/7000), __EVAL(1800/7000),    // D5
			__EVAL(5000/7000), __EVAL(2000/7000)
		};
		destrType="DestructWreck";
		class textureSources
		{
			class Worn
			{
				author = "ADFRC_Quiggs";
				displayName = "Standard";
				factions[] = {"ADF"};
				textures[] = {"ADF_Land\adfrc_aslav\data\ASLAV-25\texture1_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\texture2_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\texture3_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\texture4_co.paa"};
			};
			class Arid 
			{
				author = "ADFRC_Quiggs";
				displayName = "Arid";
				factions[] = {"ADF"};
				textures[] = {"ADF_Land\adfrc_aslav\data\ASLAV-25\arid\texture1_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\arid\texture2_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\arid\texture3_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\arid\texture4_co.paa"};
			};
			class Jungle 
			{
				author = "ADFRC_Quiggs";
				displayName = "Jungle";
				factions[] = {"ADF"};
				textures[] = {"ADF_Land\adfrc_aslav\data\ASLAV-25\jungle\texture1_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\jungle\texture2_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\jungle\texture3_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\jungle\texture4_co.paa"};
			};
			class Desert 
			{
				author = "ADFRC_Quiggs";
				displayName = "Desert";
				factions[] = {"ADF"};
				textures[] = {"ADF_Land\adfrc_aslav\data\ASLAV-25\desert\texture1_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\desert\texture2_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\desert\texture3_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\desert\texture4_co.paa"};
			};
			class UN 
			{
				author = "ADFRC_Quiggs";
				displayName = "UN Peacekeeping";
				factions[] = {"ADF"};
				textures[] = {"ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture1_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture2_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture3_co.paa","\ADF_Land\adfrc_aslav\data\ASLAV-25\worn\texture4_co.paa"};
			};
		};
	};	
	class ADFRC_ASLAV: ADFRC_ASLAV_base_F
	{
		scope= 2;
		scopeCurator= 2;
		side= 1;
		displayName ="ASLAV-25";
		vehicleClass="Armoured";
		author="$STR_ADF_AUTHOR";
		faction ="ADF";
		//editorPreview = "\ADF_Land\adfrc_aslav\data\ADFRC_aslav.jpg"; FIX THIS LATER
		model = "\ADF_Land\adfrc_aslav\ADFRC_ASLAV_25";
		picture = "\ADF_Land\adfrc_aslav\data\UI\Picture_aslav_CA.paa";
		Icon = "\ADF_Land\adfrc_aslav\data\UI\Icon_aslav_CA.paa";
		crew = "ADFRC_crewman_dpcu";
		textureList[] = {Worn,1};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture1_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture2_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture3_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture4_co.paa"
		};
		animationList[]=
		{
			"net_roll_hull", 0.5,
			"tools", 1,
			"tow_bar", 0.15,
			"hull_jerry", 1,
			"water_jerry", 0.1,
			"stretcher", 0.1,
			"tow_cable", 0.3,
			"tow_shackles", 0.8,
			"net_roll_turret", 0.5,
			"rack_gear_right", 0.5,
			"rack_gear_rear", 0.5,
			"rack_gear_left", 0.5,
			"turret_jerrys", 0.3
		};	
	};
	class ADFRC_ASLAV_UN: ADFRC_ASLAV_base_F
	{
		scope= 2;
		scopeCurator= 2;
		side= 1;
		displayName ="ASLAV-25 (UN Peacekeeping)";
		vehicleClass="Armoured";
		author="$STR_ADF_AUTHOR";
		faction ="ADF";
		//editorPreview = "\ADF_Land\adfrc_aslav\data\ADFRC_aslav.jpg"; FIX THIS LATER
		model = "\ADF_Land\adfrc_aslav\ADFRC_ASLAV_25";
		picture = "\ADF_Land\adfrc_aslav\data\UI\Picture_aslav_CA.paa";
		Icon = "\ADF_Land\adfrc_aslav\data\UI\Icon_aslav_CA.paa";
		crew = "ADFRC_crewman_dpcu";
		textureList[] = {UN,1};
		hiddenSelectionsTextures[]=
		{
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture1_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture2_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\UN\texture3_co.paa",
			"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture4_co.paa"
		};
		animationList[]=
		{
			"net_roll_hull", 0,
			"tools", 1,
			"tow_bar", 0.5,
			"hull_jerry", 1,
			"water_jerry", 1,
			"stretcher", 1,
			"tow_cable", 0.3,
			"tow_shackles", 1,
			"net_roll_turret", 0,
			"rack_gear_right", 0.5,
			"rack_gear_rear", 0.5,
			"rack_gear_left", 0.5,
			"turret_jerrys", 0.8
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
};
class CfgSoundShaders
{
	class Engine_Base_RPM0_EXT_SoundShader;
	class Engine_Base_RPM1_EXT_SoundShader;
	class Engine_Base_RPM2_EXT_SoundShader;
	class Engine_Base_RPM3_EXT_SoundShader;
	class Engine_Base_RPM4_EXT_SoundShader;
	class Engine_Base_RPM0_INT_SoundShader;
	class Engine_Base_RPM1_INT_SoundShader;
	class Engine_Base_RPM2_INT_SoundShader;
	class Engine_Base_RPM3_INT_SoundShader;
	class Engine_Base_RPM4_INT_SoundShader;
	class DD6V53T_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\Idle.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - 0))";
		volume = "engineOn * 1 * 0.5 * (rpm factor [0 *850, (0 *850 + 1 *(850-0 *850))]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2, 0])";
		range = "2*210";
	};
	class DD6V53T_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\1000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (2000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[0, (2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2])";
		range = "2*215";
	};
	class DD6V53T_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\2000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (3000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2])";
		range = "2*220";
	};
	class DD6V53T_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\3000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (4000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
		range = "2*225";
	};
	class DD6V53T_Engine_RPM4_EXT_SoundShader: Engine_Base_RPM4_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\4000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (5500 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 0.5 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
		range = "2*230";
	};
	class DD6V53T_EngineBrake_EXT_SoundShader: Engine_Base_RPM4_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\engine_brake_ext.ogg", 1}};
		frequency = "(rpm interpolate [1000,3000,0,1])";
		volume = "(rpm interpolate [1000,3000,0,1])*(thrust interpolate [0,1,1,0])*engineOn*CustomSoundController32 *(speed interpolate [2.7,5.5,0,1])";//
		range = "2*230";
	};
	class DD6V53T_Turbo_EXT_SoundShader: Engine_Base_RPM4_EXT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\turbo_idle.ogg", 1}};
		frequency = "(rpm interpolate [500,9000,0,4])";
		volume = "engineOn*(rpm interpolate [100,7000,0.2,0.2])";
		range = "2*230";
	};
	class DD6V53T_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\Idle.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - 0))";
		volume = "engineOn * 1 * 1.2 * (rpm factor [0 *850, (0 *850 + 1 *(850-0 *850))]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2, 0])";
		range = 10;
	};
	class DD6V53T_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\1000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (2000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 1.2 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[0, (2000 - 850)/(5500 - 850) - (((2000 - 850)/(5500 - 850) - 0) - (1 * ((2000 - 850)/(5500 - 850) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2])";
		range = 10;
	};
	class DD6V53T_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\2000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (3000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 1.2 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(2000 - 850)/(5500 - 850) + (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) - (((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850)) - (1 * ((3000 - 850)/(5500 - 850) - (2000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2])";
		range = 10;
	};
	class DD6V53T_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\3000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (4000 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 1.2 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(3000 - 850)/(5500 - 850) + (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) - (((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850)) - (1 * ((4000 - 850)/(5500 - 850) - (3000 - 850)/(5500 - 850))))/2]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor [(5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
		range = 10;
	};
	class DD6V53T_Engine_RPM4_INT_SoundShader: Engine_Base_RPM4_INT_SoundShader
	{
		samples[] = {{"\ADF_Land\adfrc_aslav\sound\DD6V53T\4000.ogg", 1}};
		frequency = "1 * (1 + 1 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) - (5500 - 850)/(5500 - 850)))";
		volume = "engineOn * 1 * 1.2 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 45]) + 1  * (rpm factor [850,	5500])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [850,	5500])) factor[(4000 - 850)/(5500 - 850) + (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2, (5500 - 850)/(5500 - 850) - (((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850)) - (1 * ((5500 - 850)/(5500 - 850) - (4000 - 850)/(5500 - 850))))/2])";
		range = 10;
	};
};
class CfgSoundSets
{
	class Engine_Base_RPM0_EXT_SoundSet;
	class Engine_Base_RPM0_INT_SoundSet;
	class DD6V53T_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_EngineBrake_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_EngineBrake_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Turbo_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Turbo_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM0_INT_SoundShader"};
		sound3DProcessingType = "VehicleINT_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM1_INT_SoundShader"};
		sound3DProcessingType = "VehicleINT_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM2_INT_SoundShader"};
		sound3DProcessingType = "VehicleINT_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM3_INT_SoundShader"};
		sound3DProcessingType = "VehicleINT_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
	class DD6V53T_Engine_RPM4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DD6V53T_Engine_RPM4_INT_SoundShader"};
		sound3DProcessingType = "VehicleINT_3DProcessingType";
		posOffset[] = {0, 0, 0};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ASLAV_Driver="ASLAV_Driver";
		ASLAV_DriverView="ASLAV_DriverView";
		ASLAV_Driver_Turnout="ASLAV_Driver_Turnout";
		ASLAV_Commander_Gun="ASLAV_Commander_Gun";
		ASLAV_Commander="ASLAV_Commander";
		ASLAV_Commander_Turnout="ASLAV_Commander_Turnout";
		ASLAV_Gunner="ASLAV_Gunner";
		ASLAV_Gunner_Turnout="ASLAV_Gunner_Turnout";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_ASLAV_Driver: DefaultDie
		{
			actions="DeadActions";
			file="ADF_Land\adfrc_aslav\data\Anim\ASLAV_DriverView_KIA.rtm";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class KIA_ASLAV_Commander_Gun: DefaultDie
		{
			actions="DeadActions";
			file="ADF_Land\adfrc_aslav\data\Anim\kia_aslav_commander.rtm";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]= {"Unconscious",0.1};
		};
		class KIA_ASLAV_Gunner: KIA_ASLAV_Commander_Gun
		{
			file="ADF_Land\adfrc_aslav\data\Anim\kia_aslav_gunner.rtm";
		};
		class KIA_ASLAV_Commander_Gunner: KIA_ASLAV_Commander_Gun
		{
			file="ADF_Land\adfrc_aslav\data\Anim\KIA_aslav_commander_Gunner.rtm";
		};
		class ASLAV_Driver: Crew
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_driver.rtm";
			interpolateTo[]= {"KIA_ASLAV_Driver",1};
		};
		class ASLAV_DriverView: ASLAV_Driver
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\ASLAV_DriverView.rtm";
		};
		class ASLAV_Driver_Turnout: ASLAV_Driver
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\ASLAV_DriverView.rtm";
		};
		class ASLAV_Commander_Gun: Crew
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_commander_gun.rtm";
			interpolateTo[]= {"KIA_ASLAV_Commander_Gun",1};
		};
		class ASLAV_Commander: ASLAV_Commander_Gun
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_commander.rtm";
		};
		class aslav_commander_Gunner: ASLAV_Commander_Gun
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\lav25_commander_turnout_mg.rtm";
		};
		class ASLAV_Commander_Turnout: ASLAV_Commander_Gun
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_commander_turnout.rtm";
		};
		class ASLAV_Gunner: Crew
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_gunner.rtm";
			interpolateTo[]= {"KIA_ASLAV_Gunner",1};
		};
		class ASLAV_Gunner_Turnout: ASLAV_Gunner
		{
			file="\ADF_Land\adfrc_aslav\data\Anim\aslav_gunner_turnout.rtm";
		};
	};
};

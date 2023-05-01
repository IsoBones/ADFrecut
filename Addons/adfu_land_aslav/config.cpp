class DefaultEventhandlers;
class CfgPatches
{
	class adfu_land_aslav
	{
		units[]=
		{
			"ADFU_land_aslav",
			"ADFU_land_aslav_mag58",
			"ADFU_land_aslav_base_F",
			"ADFU_land_aslav_up",
			"ADFU_land_aslav_mag58_up"
		};
		weapons[]=
		{
			"ADFU_land_aslav_coax",
			"ADFU_land_aslav_mag58",
			"ADFU_land_aslav_M242"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		magazines[]=
		{
			"ADFU_land_aslav_1000Rnd_762x51_Tracer",
			"ADFU_land_aslav_200rnd_762x51_Tracer",
			"ADFU_land_aslav_360RND_25MM_HE",
			"ADFU_land_aslav_360RND_25MM_AP"
		};
		ammo[]=
		{
			"ADFU_land_aslav_25mm_HE",
			"ADFU_land_aslav_25mm_AP"
		};
	};
};
#include "c_ammo.hpp"
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ASLAV_Driver_View="ASLAV_Driver";
		ASLAV_Commander_MGun="ASLAV_Commander_Gun";
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
			file="adfu_land_aslav\data\Anim\ASLAV_DriverView_KIA.rtm";
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
		class ASLAV_Driver: Crew
		{
			file="\adfu_land_aslav\data\Anim\ASLAV_DriverView.rtm";
			interpolateTo[]=
			{
				"KIA_ASLAV_Driver",
				1
			};
		};
		class KIA_ASLAV_Commander_Gun: DefaultDie
		{
			actions="DeadActions";
			file="adfu_land_aslav\data\Anim\kia_aslav_commander.rtm";
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
		class ASLAV_Commander_Gun: Crew
		{
			file="\adfu_land_aslav\data\Anim\aslav_commander_gun.rtm";
			interpolateTo[]=
			{
				"KIA_ASLAV_Commander_Gun",
				1
			};
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewCargo;
		class HeadLimits;
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
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class ADFU_land_aslav_base_F: Wheeled_APC_F
	{
		scope=1;
		author="ADF Re-Cut";
		_generalMacro="ADFU_land_aslav_base_F";
		accuracy=0.25;
		displayName="ASLAV";
		attenuationEffectType="TankAttenuation";
		radarType=8;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		enableManualFire=0;
		alphaTracks=0.5;
		memoryPointTrackFLL="stopa PLP";
		memoryPointTrackFLR="stopa PLL";
		memoryPointTrackBLL="stopa ZLP";
		memoryPointTrackBLR="stopa ZLL";
		memoryPointTrackFRL="stopa PPP";
		memoryPointTrackFRR="stopa PPL";
		memoryPointTrackBRL="stopa ZPP";
		memoryPointTrackBRR="stopa ZPP";
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		dustBackLeftPos="wheel_1_4_bound";
		dustBackRightPos="wheel_2_4_bound";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"adfu_land_aslav\Data\lav_glass_green.rvmat",
				"adfu_land_aslav\Data\lav_glass_green_damage.rvmat",
				"adfu_land_aslav\Data\lav_glass_green_destruct.rvmat",
				"adfu_land_aslav\Data\lav_glass_red.rvmat",
				"adfu_land_aslav\Data\lav_glass_red_damage.rvmat",
				"adfu_land_aslav\Data\lav_glass_red_destruct.rvmat",
				"adfu_land_aslav\Data\lav_int_0.rvmat",
				"adfu_land_aslav\Data\lav_int_0_damage.rvmat",
				"adfu_land_aslav\Data\lav_int_0_destruct.rvmat",
				"adfu_land_aslav\Data\lav_int_1.rvmat",
				"adfu_land_aslav\Data\lav_int_1_damage.rvmat",
				"adfu_land_aslav\Data\lav_int_1_destruct.rvmat",
				"adfu_land_aslav\Data\lav_int_2.rvmat",
				"adfu_land_aslav\Data\lav_int_2_damage.rvmat",
				"adfu_land_aslav\Data\lav_int_2_destruct.rvmat",
				"adfu_land_aslav\Data\lavalfa.rvmat",
				"adfu_land_aslav\Data\lavalfa_damage.rvmat",
				"adfu_land_aslav\Data\lavalfa_destruct.rvmat",
				"adfu_land_aslav\Data\body1\lavbody.rvmat",
				"adfu_land_aslav\Data\body1\lavbody_damage.rvmat",
				"adfu_land_aslav\Data\body1\lavbody_destruct.rvmat",
				"adfu_land_aslav\Data\body2\lavbody2.rvmat",
				"adfu_land_aslav\Data\body2\lavbody2_damage.rvmat",
				"adfu_land_aslav\Data\body2\lavbody2_destruct.rvmat"
			};
		};
		#include "c_sounds.hpp"
		#include "c_physX.hpp"
		armor=350;
		armorStructural=6;
		armorLights=0.1;
		damageResistance=0.0071899998;
		cost=1000000;
		driverAction="driver_apcwheeled2_out";
		driverInAction="ASLAV_Driver_View";
		driverLeftHandAnimName="driveWheel";
		driverRightHandAnimName="driveWheel";
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
		hideWeaponsCargo=1;
		driverForceOptics=0;
		driverOpticsModel="";
		memoryPointDriverOptics="driverview";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		viewdriverinexternal=0;
		LODTurnedOut=1;
		enableGPS=1;
		enableRadio=1;
		enableWatch=1;
		class ViewPilot: ViewPilot
		{
			LODTurnedOut=1;
			visionMode[]=
			{
				"Normal"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				armor=1;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=1;
				radius=0.33000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1;
				radius=0.25;
			};
			class HitFuel: HitFuel
			{
				armor=2;
				material=-1;
				name="palivo";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=2;
				radius=0.25;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.5;
				minimalHit=0.02;
				explosionShielding=4;
				radius=0.25;
			};
		};
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		smokeLauncherGrenadeCount=14;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=210;
		class Turrets: Turrets
		{
			LODTurnedOut=1;
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LODTurnedOut=1;
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"",
							"db25",
							1,
							50
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						gunnerAction="apcwheeled3_slot1_out";
						gunnerInAction="apcwheeled3_slot1_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
						class ViewGunner: ViewGunner
						{
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.31;
							minFov=0.034000002;
							maxFov=0.31;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_03
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_APC_Wheeled_03_commander";
						startEngine=0;
						class HitPoints
						{
							class HitTurret
							{
								armor=0.2;
								material=-1;
								name="vezVelitele";
								visual="vez";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.40000001;
								radius=0.2;
							};
							class HitGun
							{
								armor=0.2;
								material=-1;
								name="zbranVelitele";
								visual="";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.40000001;
								radius=0.2;
							};
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
					};
				};
				LODTurnedOut=1;
				body="mainTurret";
				gun="mainGun";
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				startEngine=1;
				weapons[]=
				{
					"ADFU_land_aslav_M242",
					"ADFU_land_aslav_coax"
				};
				magazines[]=
				{
					"ADFU_land_aslav_360RND_25MM_HE",
					"ADFU_land_aslav_360RND_25MM_AP",
					"ADFU_land_aslav_1000Rnd_762x51_Tracer",
					"ADFU_land_aslav_1000Rnd_762x51_Tracer"
				};
				selectionFireAnim="zasleh_1";
				soundServo[]=
				{
					"adfu_land_aslav\sound\turret",
					"db23",
					1,
					50
				};
				commanding=2;
				primaryGunner=1;
				primaryObserver=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				gunnerAction="apcwheeled3_slot1_out";
				gunnerInAction="apcwheeled3_slot1_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				forceHideGunner=0;
				viewGunnerInExternal=0;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_03
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_APC_Wheeled_03_gunner";
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0.2;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.30000001;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.15000001;
					};
				};
			};
		};
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
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
		engineStartSpeed=5;
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
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="lightLeft_pos";
				direction="lightLeft_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="lightRight_pos";
				direction="lightRight_dir";
				hitpoint="Light_R";
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
		selectionFireAnim="";
		class RenderTargets
		{
		};
		transportSoldier=8;
		class UserActions
		{
			class extend_waterSkid
			{
				userActionID=50;
				displayName="Extend Water Skid";
				radius=3;
				showIn3D=17;
				priority=3;
				position="driverview";
				onlyForPlayer=0;
				condition="((this DoorPhase 'waterSkid') == 0) AND Alive (this) and driver this == player";
				statement="this animateDoor ['waterSkid', 1]; playSound3D [""adfu_land_aslav\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""waterBlade_axis"")), 5, 1, 25]; ";
			};
			class collapse_waterSkid: extend_waterSkid
			{
				userActionID=51;
				displayName="Retract Water Skid";
				condition="((this DoorPhase 'waterSkid') > 0) AND Alive (this) and driver this == player";
				statement="this animateDoor [""waterSkid"", 0]; playSound3D [""adfu_land_aslav\sound\skid_extend.ogg"", this, false,(this modelToWorld (this selectionPosition ""waterBlade_axis"")), 5, 1, 25]; ";
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot
			{
				source="ammorandom";
				weapon="ADFU_land_aslav_M242";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="ADFU_land_aslav_M242";
			};
			class recoil_source
			{
				source="reload";
				weapon="ADFU_land_aslav_M242";
			};
		};
	};
	class ADFU_land_aslav: ADFU_land_aslav_base_F
	{
		scope=2;
		accuracy=0.30000001;
		side=1;
		faction="ADFU";
		vehicleClass="Armored";
		displayName="ASLAV";
		model="adfu_land_aslav\ASLAV.p3d";
		mapSize=9;
		picture="\adfu_land_aslav\data\UI\Picture_aslav_CA.paa";
		Icon="\adfu_land_aslav\data\UI\Icon_aslav_CA.paa";
		author="$STR_ADFU_AUTHOR";
		crew="adfu_crewman_dpcu";
		typicalCargo[]=
		{
			"adfu_teamLeader_dpcu",
			"adfu_rifleman_dpcu",
			"adfu_grenadier_dpcu",
			"adfu_medic_dpcu",
			"adfu_rifleman_dpcu",
			"adfu_rifleman_dpcu"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\adfu_land_aslav\data\body1\lavbody_co.paa",
			"\adfu_land_aslav\data\body2\lavbody2_co.paa",
			"\adfu_land_aslav\data\labels\labels_01.paa"
		};
		class AnimationSources: AnimationSources
		{
			class proxy
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class slat_armor
			{
				DisplayName="Slat Armour";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFU";
			};
			class slat_armor2
			{
				DisplayName="Slat Armour Turret";
				source="user";
				animPeriod=0;
				initPhase=0;
				author="ADFU";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\adfu_land_aslav\script\init.sqf""";
		};
	};
	class ADFU_land_aslav_mag58: ADFU_land_aslav
	{
		scope=2;
		displayName="ASLAV + MAG-58";
		model="adfu_land_aslav\ASLAV_MAG58.p3d";
		author="$STR_ADFU_AUTHOR";
		class Turrets: Turrets
		{
			LODTurnedOut=1;
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LODTurnedOut=1;
						proxyType="CPCommander";
						proxyIndex=1;
						gunnerName="$STR_POSITION_COMMANDER";
						primaryGunner=0;
						primaryObserver=1;
						gunnerOpticsShowCursor=0;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						animationSourceHatch="hatchCommander";
						gunnerLeftHandAnimName="OtocHlavenVelitele";
						gunnerRightHandAnimName="OtocHlavenVelitele";
						soundServo[]=
						{
							"",
							"db-50",
							1
						};
						startEngine=0;
						commanding=10;
						viewGunnerInExternal=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsColor[]={0,0,0,1};
						gunnerOutForceOptics=0;
						gunnerOutOpticsShowCursor=0;
						memoryPointGunnerOutOptics="CommanderViewOut";
						memoryPointGunnerOptics="commanderview";
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						memoryPointGun="gun_muzzle";
						selectionFireAnim="zasleh_2";
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX="+30";
							initAngleY=0;
							minAngleY=-100;
							maxAngleY="+100";
							initFov=0.30000001;
							minFov=0.015;
							maxFov=0.30000001;
						};
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX="+85";
							initAngleY=0;
							minAngleY=-150;
							maxAngleY="+150";
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
						gunnerAction="gunner_standup01";
						gunnerInAction="apcwheeled3_slot1_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						inGunnerMayFire=0;
						outGunnerMayFire=1;
						stabilizedInAxes=3;
						weapons[]=
						{
							"ADFU_land_aslav_mag58",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"ADFU_land_aslav_200Rnd_762x51_Tracer",
							"SmokeLauncherMag"
						};
						minElev=-15;
						maxElev=35;
						initElev=0;
						minTurn=-60;
						maxTurn=60;
						initTurn=0;
						gunnerOutOpticsModel="\A3\weapons_f\empty";
						gunBeg="gun_muzzle";
						gunEnd="gun_chamber";
						body="ObsTurret";
						gun="ObsGun";
					};
				};
			};
		};
	};
};
class CfgGroups
{
	class West
	{
		name="BLUFOR";
		side=1;
		class ADF
		{
			name="ADF";
			class Mechanized
			{
				name="Mechanized";
				class adfu_Mechanized_ASLAV_Rifle
				{
					faction="ADFU";
					name="ASLAV + Rifle Squad";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="ADFU_land_aslav_mag58";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="adfu_teamleader_dpcu";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="adfu_lightgunner_dpcu";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="adfu_teamleader_dpcu";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="adfu_medic_dpcu";
						rank="PRIVATE";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="adfu_lightgunner_dpcu";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="adfu_marksman_dpcu";
						rank="CORPORAL";
						position[]={-15,-10,0};
					};
				};
				class adfu_Mechanized_ASLAV_AT
				{
					faction="ADFU";
					name="ASLAV + AT Squad";
					side=1;
					class Unit0
					{
						side=1;
						vehicle="ADFU_land_aslav";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="adfu_riflemanAT_dpcu";
						rank="SERGEANT";
						position[]={5,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="adfu_lightgunner_dpcu";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="adfu_teamleader_dpcu";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit4
					{
						side=1;
						vehicle="adfu_medic_dpcu";
						rank="PRIVATE";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="adfu_riflemanAT_dpcu";
						rank="PRIVATE";
						position[]={15,-10,0};
					};
					class Unit6
					{
						side=1;
						vehicle="adfu_marksman_dpcu";
						rank="CORPORAL";
						position[]={-15,-10,0};
					};
				};
			};
		};
	};
};

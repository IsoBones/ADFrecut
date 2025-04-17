class CfgPatches
{
	class adfrc_magazines
	{
		units[]={};
		magazines[]=
		{
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug_TR",
			"ADFRC_30Rnd_aug_TY",
			"ADFRC_30Rnd_aug_TG",
			"ADFRC_30Rnd_aug_IR",
			"ADFRC_30Rnd_aug_mixed",
			"ADFRC_30Rnd_STANAG",
			"ADFRC_30Rnd_STANAG_TR",
			"ADFRC_30Rnd_STANAG_TG",
			"ADFRC_30Rnd_STANAG_TY",
			"ADFRC_30Rnd_STANAG_IR",
			"ADFRC_30Rnd_STANAG_mixed",
			"ADFRC_30Rnd_PMAG",
			"ADFRC_30Rnd_PMAG_TR",
			"ADFRC_30Rnd_PMAG_TG",
			"ADFRC_30Rnd_PMAG_TY",
			"ADFRC_30Rnd_PMAG_IR",
			"ADFRC_30Rnd_PMAG_mixed",
			"ADFRC_100Rnd_556_Belt",
			"ADFRC_100Rnd_556_Belt_TR",
			"ADFRC_100Rnd_556_Belt_TR5",
			"ADFRC_200Rnd_556_Belt",
			"ADFRC_200Rnd_556_Belt_TR",
			"ADFRC_200Rnd_556_Belt_TR5",
			"ADFRC_50Rnd_762_Belt",
			"ADFRC_50Rnd_762_Belt_TR",
			"ADFRC_50Rnd_762_Belt_TR5",
			"ADFRC_100Rnd_762_Belt",
			"ADFRC_100Rnd_762_Belt_TR",
			"ADFRC_100_Rnd_762_Belt_TR5",
			"ADFRC_150Rnd_762_Belt",
			"ADFRC_150Rnd_762_Belt_TR",
			"ADFRC_150Rnd_762_Belt_TR5",
			"ADFRC_10Rnd_9x19_Mag",
			"ADFRC_15rnd_9MM_BALL_G19",
			"ADFRC_15rnd_9MM_FRANGE_G19"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		weapons[]={};
		ammo[]=
		{
			"B_556x45_F1_Ball",
			"B_556x45_F1_Ball_TracerR",
			"B_556x45_F1_Ball_TracerG",
			"B_556x45_F1_Ball_TracerY",
			"B_556x45_F1_Ball_TracerIR",
			"ADFRC_9x19_BASE",
			"ADFRC_9x19_124_FMJ",
			"ADFRC_9x19_98_FRANG"
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
	class B_556x45_F1_Ball: B_556x45_Ball
	{
		hit=10.073716;
		typicalSpeed=955.24323;
		airFriction=-0.0011487255;
		caliber=0.755;
		deflecting=18;
		visibleFire=3;
		audibleFire=5.5;
	};
	class B_556x45_F1_Ball_TracerR: B_556x45_F1_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class B_556x45_F1_Ball_TracerG: B_556x45_F1_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly=0;
	};
	class B_556x45_F1_Ball_TracerY: B_556x45_F1_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly=0;
	};
	class B_556x45_F1_Ball_TracerIR: B_556x45_F1_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		nvgOnly=1;
	};
	class B_9x21_Ball;

	class ADFRC_9x19_BASE: B_9x21_Ball
	{
		hit = 3;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 1;
		typicalSpeed = 300;
		caliber = 1.2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		airLock = 1;
		nvgOnly = 1;
		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		airFriction=-0.00211064;
        ACE_caliber=9.042;
        ACE_bulletLength=15.494;
        ACE_bulletMass=7.452;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.140};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={380, 390, 420, 435};
        ACE_barrelLengths[]={93.5, 101.6, 127.0, 228.6};
	};
	
class ADFRC_9x19_124_FMJ: ADFRC_9x19_BASE
	{
		hit = 4;
		airFriction=-0.00251064;
        ACE_bulletLength=16.494;
        ACE_bulletMass=8.03506;
        ACE_ballisticCoefficients[]={0.145};
        ACE_muzzleVelocities[]={350, 370, 405, 415};
        ACE_barrelLengths[]={93.5, 101.6, 127.0, 228.6};
	};
	
class ADFRC_9x19_98_FRANG: ADFRC_9x19_BASE
	{
		hit = 3;
		airFriction=-0.00411064;
        ACE_bulletLength=14.494;
        ACE_bulletMass=6.3502932;
        ACE_ballisticCoefficients[]={0.23};
        ACE_muzzleVelocities[]={395, 430, 445, 510};
        ACE_barrelLengths[]={93.5, 101.6, 127.0, 228.6};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Yellow;
	class ADFRC_30Rnd_aug: CA_Magazine
	{
		scope=2;
		displayName="30Rnd Steyr Magazine";
		author="$STR_ADFRC_AUTHOR";
		modelSpecial = "\ADF_Weapons\adfrc_ef88\MagProxies\Mag_556x45_AUG_30Rnd.p3d";
			modelSpecialIsProxy = 1;
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_ca.paa";
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_30Rnd_aug_TR: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Red Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFRC_30Rnd_aug_TY: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Yellow Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_ty_ca.paa";
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
	};
	class ADFRC_30Rnd_aug_TG: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Green Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tg_ca.paa";
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
	};
	class ADFRC_30Rnd_aug_IR: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr IR Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tir_ca.paa";
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
	};
	class ADFRC_30Rnd_aug_mixed: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Tracer Mixed";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	class ADFRC_30Rnd_aug_ef88: CA_Magazine
	{
		scope=2;
		displayName="30Rnd EF88 Magazine";
		author="$STR_ADFRC_AUTHOR";
		modelSpecial = "\ADF_Weapons\adfrc_ef88\MagProxies\Mag_556x45_AUG_30Rnd.p3d";
		modelSpecialIsProxy = 1;
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_ca.paa";
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	class ADFRC_30Rnd_aug_TR_ef88: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd EF88 Red Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	class ADFRC_30Rnd_aug_TY_ef88: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd EF88 Yellow Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_ty_ca.paa";
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	class ADFRC_30Rnd_aug_TG_ef88: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd EF88 Green Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tg_ca.paa";
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	class ADFRC_30Rnd_aug_IR_ef88: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd EF88 IR Tracer";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tir_ca.paa";
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	class ADFRC_30Rnd_aug_mixed_ef88: ADFRC_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd EF88 Tracer Mixed";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\ADF_Weapons\adfrc_ef88\textures\ADFRC_EF88_CO.paa"};
	};
	
	
	
	class ADFRC_30Rnd_STANAG: 30Rnd_556x45_Stanag
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Magazine";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_30Rnd_STANAG_TR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Red";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_STANAG_TG: 30Rnd_556x45_Stanag_Tracer_Green
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Green";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_green_ca.paa";
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_STANAG_TY: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Yellow";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_yellow_CA.paa";
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_STANAG_IR: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer IR";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_yellow_CA.paa";
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_STANAG_mixed: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Mixed";
		author="$STR_ADFRC_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_PMAG: 30Rnd_556x45_Stanag
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Magazine";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_30Rnd_PMAG_TR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Tracer Red";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_PMAG_TG: 30Rnd_556x45_Stanag_Tracer_Green
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Tracer Green";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_PMAG_TY: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Tracer Yellow";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_PMAG_IR: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Tracer IR";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_30Rnd_PMAG_mixed: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd PMAG F1A1 Tracer Mixed";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\PMAG30.p3d";
		modelSpecialIsProxy = 1;
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFRC_100Rnd_556_Belt: CA_Magazine
	{
		scope=2;
		displayName="100 Round 5.56 Belt";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_556x200_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\556_mg\Belt.p3d";
		modelSpecialIsProxy = 1;
		count=100;
		ammo="B_556x45_F1_Ball";
		mass=22;
		initSpeed=820;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 100<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_100Rnd_556_Belt_TR: ADFRC_100Rnd_556_Belt
	{
		scope=2;
		displayName="100 Round 5.56 Tracer (Red)";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFRC_100Rnd_556_Belt_TR5: ADFRC_100Rnd_556_Belt
	{
		scope=2;
		displayName="100 Round 5.56 Tracer 1:5 (Red)";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	class ADFRC_200Rnd_556_Belt: CA_Magazine
	{
		scope=2;
		displayName="200 Round 5.56 Belt";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_556x200_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_magazines\556_mg\Belt.p3d";
		modelSpecialIsProxy = 1;
		count=200;
		ammo="B_556x45_F1_Ball";
		mass=40;
		initSpeed=820;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 200<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_200Rnd_556_Belt_TR: ADFRC_200Rnd_556_Belt
	{
		scope=2;
		displayName="200 Round 5.56 Tracer (Red)";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFRC_200Rnd_556_Belt_TR5: ADFRC_200Rnd_556_Belt
	{
		scope=2;
		displayName="200 Round 5.56 Tracer 1:5 (Red)";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	
	class ADFRC_200Rnd_556_Minimi: CA_Magazine
	{
		scope=2;
		displayName="200 Round 5.56 Minimi";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_556x200_ca.paa";
		modelSpecial = "ADF_Weapons\adfrc_minimi\Magazine\200RD.p3d";
		modelSpecialIsProxy = 1;
		count=200;
		ammo="B_556x45_F1_Ball";
		mass=40;
		initSpeed=820;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 200<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFRC_200Rnd_556_Minimi_TR: ADFRC_200Rnd_556_Minimi
	{
		scope=2;
		displayName="200 Round 5.56 Tracer (Red) Minimi";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFRC_200Rnd_556_Minimi_TR5: ADFRC_200Rnd_556_Minimi
	{
		scope=2;
		displayName="200 Round 5.56 Tracer 1:5 (Red) Minimi";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	
	
	class ADFRC_50Rnd_762_Belt: CA_Magazine
	{
		scope=2;
		displayName="50Round 7.62mm Belt";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_762x50_ca.paa";
		count=50;
		ammo="B_762x51_Ball";
		mass=28;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 50<br/>Cartridge: Thales F4 Ball";
	};
	class ADFRC_50Rnd_762_Belt_TR: ADFRC_50Rnd_762_Belt
	{
		scope=2;
		displayName="50Round 7.62mm Tracer Red";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFRC_50Rnd_762_Belt_TR5: ADFRC_50Rnd_762_Belt
	{
		scope=2;
		displayName="50Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFRC_AUTHOR";
		tracersEvery=5;
	};
	class ADFRC_100Rnd_762_Belt: ADFRC_50Rnd_762_Belt
	{
		scope=2;
		displayName="100Round 7.62mm Belt";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_762x100_ca.paa";
		author="$STR_ADFRC_AUTHOR";
		count=100;
		mass=45;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 100<br/>Cartridge: Thales F4 Ball";
	};
	class ADFRC_100Rnd_762_Belt_TR: ADFRC_100Rnd_762_Belt
	{
		scope=2;
		displayName="100Round 7.62mm Tracer Red";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFRC_100_Rnd_762_Belt_TR5: ADFRC_100Rnd_762_Belt_TR
	{
		scope=2;
		displayName="100Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFRC_AUTHOR";
		tracersEvery=5;
	};
	class ADFRC_150Rnd_762_Belt: ADFRC_100Rnd_762_Belt
	{
		scope=2;
		displayName="150Round 7.62mm Box";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_762x150_ca.paa";
		author="$STR_ADFRC_AUTHOR";
		count=150;
		mass=55;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 150<br/>Cartridge: Thales F4 Ball";
	};
	class ADFRC_150Rnd_762_Belt_TR: ADFRC_150Rnd_762_Belt
	{
		scope=2;
		displayName="150Round 7.62mm Tracer Red";
		author="$STR_ADFRC_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFRC_150Rnd_762_Belt_TR5: ADFRC_150Rnd_762_Belt_TR
	{
		scope=2;
		displayName="150Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFRC_AUTHOR";
		tracersEvery=5;
	};
	class ADFRC_10Rnd_9x19_Mag: 16Rnd_9x21_Mag  ////REDACTED
	{
		scope= 1;
		scopeArsenal= 1;
		displayName= "10 Round 9x19 Browning";
		displayNameShort= "13 Rnd 9mm";
		descriptionShort="Calibre: 9x19 mm<br/>Rounds: 13<br/>Used in: Browning High Power MKII";
		count= 13;
		type= 256;
	};
	
#include "G19_Magazines.hpp"
#include "F9_Magazines.hpp"
#include "BHP_Magazines.hpp"
#include "USP_Magazines.hpp"


	class ADFRC_100Rnd_762_Maximi: ADFRC_50Rnd_762_Belt
	{
		scope=2;
		displayName="100Round 7.62mm Maximi Box";
		picture="\ADF_Weapons\adfrc_magazines\UI\gear_762x100_ca.paa";
		author="Brucey";
		count=100;
		mass=45;
		initSpeed=820;
		modelSpecial = "ADF_Weapons\adfrc_maximi\magazines\100rd.p3d";
		modelSpecialIsProxy = 1;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 100<br/>Cartridge: Thales F4 Ball";
	};
	class ADFRC_100Rnd_762_Maximi_TR: ADFRC_100Rnd_762_Maximi
	{
		scope=2;
		displayName="100Round 7.62mm Maximi Box Tracer Red";
		author="Brucey";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFRC_100Rnd_762_Maximi_TR5: ADFRC_100Rnd_762_Maximi
	{
		scope=2;
		displayName="100Round 7.62mm Maximi BoxTracer 1:5 Red";
		author="Brucey";
		tracersEvery=5;
	};
};

class CfgMagazineWells
{
	class CBA_9x19_Glock_Cpct
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_15rnd_9MM_BALL_G19",
			"ADFRC_15rnd_9MM_FRANGE_G19"
		};
	};
	
	class CBA_9x19_P320
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_17rnd_9MM_BALL_F9",
			"ADFRC_17rnd_9MM_FRANGE_F9"
		};
	};
	
	class CBA_9x19_USP
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_15rnd_9MM_BALL_USP",
			"ADFRC_15rnd_9MM_FRANGE_USP"
		};
	};
	
	class CBA_9x19_HiPower
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_13Rnd_9x19_Mag",
			"ADFRC_13Rnd_9x19_FRANGE_Mag",
			"ADFRC_10Rnd_9x19_Mag"
		};
	};
	
	class CBA_556x45_STANAG
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_30Rnd_STANAG",
			"ADFRC_30Rnd_STANAG_TR",
			"ADFRC_30Rnd_STANAG_TG",
			"ADFRC_30Rnd_STANAG_TY",
			"ADFRC_30Rnd_STANAG_IR",
			"ADFRC_30Rnd_STANAG_mixed",
			"ADFRC_30Rnd_PMAG",
			"ADFRC_30Rnd_PMAG_TR",
			"ADFRC_30Rnd_PMAG_TG",
			"ADFRC_30Rnd_PMAG_TY",
			"ADFRC_30Rnd_PMAG_IR",
			"ADFRC_30Rnd_PMAG_mixed"
		};
	};
	
	class CBA_556x45_STEYR
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_30Rnd_aug",
			"ADFRC_30Rnd_aug_TR",
			"ADFRC_30Rnd_aug_TY",
			"ADFRC_30Rnd_aug_TG",
			"ADFRC_30Rnd_aug_IR",
			"ADFRC_30Rnd_aug_mixed",
			"ADFRC_30Rnd_aug_ef88",
			"ADFRC_30Rnd_aug_TR_ef88",
			"ADFRC_30Rnd_aug_TY_ef88",
			"ADFRC_30Rnd_aug_TG_ef88",
			"ADFRC_30Rnd_aug_IR_ef88",
			"ADFRC_30Rnd_aug_Mixed_ef88"
		};
	};
	
	
	
	class CBA_762x51_MINIMI
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_100Rnd_762_Maximi",
			"ADFRC_100Rnd_762_Maximi_TR",
			"ADFRC_100Rnd_762_Maximi_TR5"
		};
	};
	
	class CBA_556x45_MINIMI
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_100Rnd_556_Belt",
			"ADFRC_100Rnd_556_Belt_TR",
			"ADFRC_100Rnd_556_Belt_TR5",
			"ADFRC_200Rnd_556_Belt",
			"ADFRC_200Rnd_556_Belt_TR",
			"ADFRC_200Rnd_556_Belt_TR5"
		};
	};
};
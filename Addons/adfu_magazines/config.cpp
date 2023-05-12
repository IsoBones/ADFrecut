class CfgPatches
{
	class ADFU_magazines
	{
		units[]={};
		magazines[]=
		{
			"ADFU_30Rnd_aug",
			"ADFU_30Rnd_aug_TR",
			"ADFU_30Rnd_aug_TY",
			"ADFU_30Rnd_aug_TG",
			"ADFU_30Rnd_aug_IR",
			"ADFU_30Rnd_aug_mixed",
			"ADFU_30Rnd_STANAG",
			"ADFU_30Rnd_STANAG_TR",
			"ADFU_30Rnd_STANAG_TG",
			"ADFU_30Rnd_STANAG_TY",
			"ADFU_30Rnd_STANAG_IR",
			"ADFU_30Rnd_STANAG_mixed",
			"ADFU_100Rnd_556_Belt",
			"ADFU_100Rnd_556_Belt_TR",
			"ADFU_100Rnd_556_Belt_TR5",
			"ADFU_200Rnd_556_Belt",
			"ADFU_200Rnd_556_Belt_TR",
			"ADFU_200Rnd_556_Belt_TR5",
			"ADFU_50Rnd_762_Belt",
			"ADFU_50Rnd_762_Belt_TR",
			"ADFU_50Rnd_762_Belt_TR5",
			"ADFU_100Rnd_762_Belt",
			"ADFU_100Rnd_762_Belt_TR",
			"ADFU_100_Rnd_762_Belt_TR5",
			"ADFU_150Rnd_762_Belt",
			"ADFU_150Rnd_762_Belt_TR",
			"ADFU_150Rnd_762_Belt_TR5",
			"ADFRC_10Rnd_9x19_Mag"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author[]=
		{
			"ADF Re-Cut | ADF-UNCUT"
		};
		weapons[]={};
		ammo[]=
		{
			"B_556x45_F1_Ball",
			"B_556x45_F1_Ball_TracerR",
			"B_556x45_F1_Ball_TracerG",
			"B_556x45_F1_Ball_TracerY",
			"B_556x45_F1_Ball_TracerIR"
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
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Yellow;
	class ADFU_30Rnd_aug: CA_Magazine
	{
		scope=2;
		displayName="30Rnd Steyr Magazine";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_magazines\AUG_MAGAZINE";
		picture="\ADFU_magazines\UI\gear_aug_mag_ca.paa";
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFU_30Rnd_aug_TR: ADFU_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Red Tracer";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFU_30Rnd_aug_TY: ADFU_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Yellow Tracer";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_aug_mag_ty_ca.paa";
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
	};
	class ADFU_30Rnd_aug_TG: ADFU_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Green Tracer";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_aug_mag_tg_ca.paa";
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
	};
	class ADFU_30Rnd_aug_IR: ADFU_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr IR Tracer";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_aug_mag_tir_ca.paa";
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
	};
	class ADFU_30Rnd_aug_mixed: ADFU_30Rnd_aug
	{
		scope=2;
		displayName="30Rnd Steyr Tracer Mixed";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_aug_mag_tr_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	class ADFU_30Rnd_STANAG: 30Rnd_556x45_Stanag
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Magazine";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="B_556x45_F1_Ball";
		count=30;
		initSpeed=950.36639;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFU_30Rnd_STANAG_TR: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Red";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFU_30Rnd_STANAG_TG: 30Rnd_556x45_Stanag_Tracer_Green
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Green";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_green_ca.paa";
		ammo="B_556x45_F1_Ball_TracerG";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFU_30Rnd_STANAG_TY: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Yellow";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_yellow_CA.paa";
		ammo="B_556x45_F1_Ball_TracerY";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFU_30Rnd_STANAG_IR: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer IR";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_yellow_CA.paa";
		ammo="B_556x45_F1_Ball_TracerIR";
		tracersEvery=1;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFU_30Rnd_STANAG_mixed: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		displayName="5.56mm 30Rnd F1A1 Tracer Mixed";
		author="$STR_ADFU_AUTHOR";
		picture="\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 30<br/>Cartridge: Thales F1A1 Ball";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class ADFU_100Rnd_556_Belt: CA_Magazine
	{
		scope=2;
		displayName="100 Round 5.56 Belt";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_556x200_ca.paa";
		count=100;
		ammo="B_556x45_F1_Ball";
		mass=22;
		initSpeed=820;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 100<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFU_100Rnd_556_Belt_TR: ADFU_100Rnd_556_Belt
	{
		scope=2;
		displayName="100 Round 5.56 Tracer (Red)";
		author="$STR_ADFU_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFU_100Rnd_556_Belt_TR5: ADFU_100Rnd_556_Belt
	{
		scope=2;
		displayName="100 Round 5.56 Tracer 1:5 (Red)";
		author="$STR_ADFU_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	class ADFU_200Rnd_556_Belt: CA_Magazine
	{
		scope=2;
		displayName="200 Round 5.56 Belt";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_556x200_ca.paa";
		count=200;
		ammo="B_556x45_F1_Ball";
		mass=40;
		initSpeed=820;
		descriptionShort="Calibre: 5.56x45 mm NATO<br/>Rounds: 200<br/>Cartridge: Thales F1A1 Ball";
	};
	class ADFU_200Rnd_556_Belt_TR: ADFU_200Rnd_556_Belt
	{
		scope=2;
		displayName="200 Round 5.56 Tracer (Red)";
		author="$STR_ADFU_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=1;
	};
	class ADFU_200Rnd_556_Belt_TR5: ADFU_200Rnd_556_Belt
	{
		scope=2;
		displayName="200 Round 5.56 Tracer 1:5 (Red)";
		author="$STR_ADFU_AUTHOR";
		ammo="B_556x45_F1_Ball_TracerR";
		tracersEvery=5;
	};
	class ADFU_50Rnd_762_Belt: CA_Magazine
	{
		scope=2;
		displayName="50Round 7.62mm Belt";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_magazines\UI\gear_762x50_ca.paa";
		count=50;
		ammo="B_762x51_Ball";
		mass=28;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 50<br/>Cartridge: Thales F4 Ball";
	};
	class ADFU_50Rnd_762_Belt_TR: ADFU_50Rnd_762_Belt
	{
		scope=2;
		displayName="50Round 7.62mm Tracer Red";
		author="$STR_ADFU_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFU_50Rnd_762_Belt_TR5: ADFU_50Rnd_762_Belt
	{
		scope=2;
		displayName="50Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFU_AUTHOR";
		tracersEvery=5;
	};
	class ADFU_100Rnd_762_Belt: ADFU_50Rnd_762_Belt
	{
		scope=2;
		displayName="100Round 7.62mm Belt";
		picture="\ADFU_magazines\UI\gear_762x100_ca.paa";
		author="$STR_ADFU_AUTHOR";
		count=100;
		mass=45;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 100<br/>Cartridge: Thales F4 Ball";
	};
	class ADFU_100Rnd_762_Belt_TR: ADFU_100Rnd_762_Belt
	{
		scope=2;
		displayName="100Round 7.62mm Tracer Red";
		author="$STR_ADFU_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFU_100_Rnd_762_Belt_TR5: ADFU_100Rnd_762_Belt_TR
	{
		scope=2;
		displayName="100Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFU_AUTHOR";
		tracersEvery=5;
	};
	class ADFU_150Rnd_762_Belt: ADFU_100Rnd_762_Belt
	{
		scope=2;
		displayName="150Round 7.62mm Box";
		picture="\ADFU_magazines\UI\gear_762x150_ca.paa";
		author="$STR_ADFU_AUTHOR";
		count=150;
		mass=55;
		initSpeed=820;
		descriptionShort="Calibre: 7.62x51 mm NATO<br/>Rounds: 150<br/>Cartridge: Thales F4 Ball";
	};
	class ADFU_150Rnd_762_Belt_TR: ADFU_150Rnd_762_Belt
	{
		scope=2;
		displayName="150Round 7.62mm Tracer Red";
		author="$STR_ADFU_AUTHOR";
		ammo="B_762x51_Tracer_Red";
		tracersEvery=1;
	};
	class ADFU_150Rnd_762_Belt_TR5: ADFU_150Rnd_762_Belt_TR
	{
		scope=2;
		displayName="150Round 7.62mm Tracer 1:5 Red";
		author="$STR_ADFU_AUTHOR";
		tracersEvery=5;
	};
	class ADFRC_10Rnd_9x19_Mag: 16Rnd_9x21_Mag
	{
		scope= 2;
		scopeArsenal= 2;
		displayName= "10 Round 9x19 Browning";
		displayNameShort= "10 Rnd 9mm";
		descriptionShort="Calibre: 9x19 mm<br/>Rounds: 10<br/>Used in: Browning High Power MKII";
		count= 10;
		type= 256;
	};
};

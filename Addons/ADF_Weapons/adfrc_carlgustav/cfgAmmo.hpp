class cfgAmmo
{
	/*extern*/ class ShellBase;
	/*extern*/ class RocketBase;
	/*extern*/ class SubmunitionBase;
	/*extern*/ class BulletBase;

	class ADFRC_Gustav_HEAT_JET: BulletBase
	{
		author = "$STR_ADFU_AUTHOR";
		explosive=1;
		hit=950;
		indirectHit=20;
		indirectHitRange=5;
		airFriction=-0.009;
		deflecting=5;
		caliber=50;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		timeToLive=3;
		typicalSpeed=1000;

		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			default_mat="ImpactEffectsGroundSabot";
		};
	};

	class ADFRC_RR_Ammo_Base: RocketBase
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		model = "\A3\weapons_f\ammo\shell";
		hit = 350;
		indirectHit = 50;
		indirectHitRange = 20;
		cost = 200;
		airFriction = 0.075000;
		sideAirFriction = 0.075000;
		maxSpeed = 265;
		initTime = 0;
		thrustTime = 0.00000;
		thrust = 0.000000;
		fuseDistance = 10;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "";
		effectsMissile = "ArtilleryTrails";
		simulationStep = 0.020000;
		airLock = 0;
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		whistleDist = 50;

		class CamShakeExplode {
			power = "(82*0.2)";
			duration = "((round (82^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((18 + 82^0.5)*8)";
		};
		class CamShakeHit {
			power = 82;
			duration = "((round (82^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire {
			power = "((82^0.25*2))";//"(82^0.25)";
			duration = "((round (82^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((82^0.5)*8)";
		};
		class CamShakePlayerFire {
			power = 0.010000;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};

	class ADFRC_Shell_84mm_adm_401: ADFRC_RR_Ammo_Base
	{
		// Area Defence Munition
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_adm_401_fly";
		mass = 40;
	};
	class ADFRC_Shell_84mm_asm_509: ADFRC_RR_Ammo_Base
	{
		// Anti Structure Munition
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_asm_509_fly";
		mass = 55;

		hit=900;
		inndirectHit=200;
		indirectHitRange=10;
	};
	class ADFRC_Shell_84mm_he_441d: ADFRC_RR_Ammo_Base
	{
		// High Explosive
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_he_441d_fly";
		mass = 40;

		hit=20;
		inndirectHit=50;
		indirectHitRange=20;
	};
	class ADFRC_Shell_84mm_heat_551c: ADFRC_RR_Ammo_Base
	{
		// Anti Tank - 400mm Penetration
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_heat_551c_fly";
		mass = 45;

		AIS_Penetrator=1; // Enabled
		AIS_Penetrator_HEAT=1;
		AIS_Penetrator_Ammo="AIS_HEAT_JET_Heavy";

		hit=650;
		indirectHit=11;
		indirectHitRange=2;

		maxSpeed = 350;
		thrustTime = 2.0;
		thrust = 150;
		effectsMissileInit = "";
		effectsMissile = "Missile0";
	};
	class ADFRC_Shell_84mm_heat_751: ADFRC_RR_Ammo_Base
	{
		// Anti-Tank 500+mm Penetration
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_heat_751_fly";
		mass = 65;

		hit=700;
		indirectHit=20;
		indirectHitRange=5;

		AIS_Penetrator=1; // Enabled
		AIS_Penetrator_HEAT=1;
		AIS_Penetrator_Ammo="ADFRC_Gustav_HEAT_JET";
	};
	class ADFRC_Shell_84mm_hedp_502: ADFRC_RR_Ammo_Base
	{
		// High Explosive Dual Purpose
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_hedp_502_fly";
		mass = 40;

		AIS_Penetrator=1; // Enabled
		AIS_Penetrator_HEAT=0;
		AIS_Penetrator_Ammo="AIS_HEAT_JET_Light";

		hit=250;
		indirectHit=30;
		indirectHitRange=20;
	};
	class ADFRC_Shell_84mm_illum_545c: ADFRC_RR_Ammo_Base
	{
		// Illum Round
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_illum_545c_fly";
		mass = 30;
	};
	class ADFRC_Shell_84mm_mt_756: ADFRC_RR_Ammo_Base
	{
		// Multi Target
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_mt_756_fly";
		mass = 40;
	};
	class ADFRC_Shell_84mm_smk_469c: ADFRC_RR_Ammo_Base
	{
		// Smoke
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		model = "\ADFRC_carlgustav\ammo\84mm_smk_469c_fly";
		mass = 35;

		hit=60;
		indirectHit=20;
		indirectHitRange=5;
	};
};

class cfgMagazines
{
	class CA_LauncherMagazine;
	class ADFRC_magazine_84mm_base: CA_LauncherMagazine
	{
		scope = 1;
		author = "$STR_ADFU_AUTHOR";
		modelSpecial = "\ADFRC_carlgustav\carlgustav";

		initSpeed = 255;
		count = 1;
		type = "6 * 256";
		mass = 40;
	};
/* 	class ADFRC_magazine_84mm_ADM_401: ADFRC_magazine_84mm_base
	{
		// Area Defence Munition - Submunition Should Deploy Mines Above Target Area
		scope = 2;
		displayName = "84mm ADM 401";
		picture = "\ADFRC_carlgustav\ui\84mm_ADM_401_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_ADM_401";
		modelSpecial = "\ADFRC_carlgustav\carlgustav";

		initSpeed = 255;
		descriptionShort = "Area Defence Munition";
		ammo = "ADFRC_Shell_84mm_adm_401";
		count = 1;
		type = "6 * 256";
		mass = 40;
	}; */
	class ADFRC_magazine_84mm_asm_509: ADFRC_magazine_84mm_base
	{
		// Anti Structure Munition - Should Do High Damage To Buildings and People Inside, But Not Much To Armour / Vehicles
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName="84mm ASM 509";
		descriptionShort="ASM 509";
		displaynameshort="Anti-Structure";
		picture = "\ADFRC_carlgustav\ui\84mm_asm_509_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_asm_509";
		ammo = "ADFRC_Shell_84mm_asm_509";
		mass = 70;
	};
	class ADFRC_magazine_84mm_he_441d: ADFRC_magazine_84mm_base
	{
		// Should Kill Infantry, But Not Do Much Damage To Structures Or Vehicles
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName="84mm HE 441D";
		descriptionShort="High Explosive Munition";
		displaynameshort="HE 441D";
		picture = "\ADFRC_carlgustav\ui\84mm_he_441d_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_he_441d";
		ammo = "ADFRC_Shell_84mm_he_441d";
		mass = 45;
	};
	class ADFRC_magazine_84mm_heat_551c: ADFRC_magazine_84mm_base
	{
		// Should Destroy Light Vehicles, Explode MRAP, Disable Tanks. Lighter Than 751
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName="84mm HEAT 551C";
		descriptionShort="High Explosive Anti-Tank Munition";
		displaynameshort="HEAT 551C";
		picture = "\ADFRC_carlgustav\ui\84mm_heat_551c_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_heat_551c";
		ammo = "ADFRC_Shell_84mm_heat_551c";
		mass = 55;
	};
	class ADFRC_magazine_84mm_heat_751: ADFRC_magazine_84mm_base
	{
		// Should Destroy Any Tank Up Armoured Tank, But Has Extra Weight
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName="84mm HEAT 751";
		descriptionShort="High Explosive Anti-Tank. Tandem Warhead";
		displaynameshort="HEAT 751";
		picture = "\ADFRC_carlgustav\ui\84mm_heat_751_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_heat_751";
		ammo = "ADFRC_Shell_84mm_heat_751";
		mass = 70;
	};
	class ADFRC_magazine_84mm_hedp_502: ADFRC_magazine_84mm_base
	{
		// Should Kill Infantry, and Destroy Civilian Vehicles, but not much else
		scope = 2;
		author = "$STR_ADFU_AUTHOR";
		displayName="84mm HEDP 502";
		descriptionShort="High Explosive Dual Purpose Munition";
		displaynameshort="HEDP 502";
		picture = "\ADFRC_carlgustav\ui\84mm_hedp_502_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_hedp_502";
		ammo = "ADFRC_Shell_84mm_hedp_502";
		mass = 40;
	};
/* 	class ADFRC_magazine_84mm_illum_545c: ADFRC_magazine_84mm_base
	{
		// Illumination Round
		scope = 2;
		displayName="84mm Illum 545C";
		descriptionShort="Illumination Round, White";
		picture = "\ADFRC_carlgustav\ui\84mm_illum_545c_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_illum_545c";
		ammo = "ADFRC_Shell_84mm_illum_545c";
		mass = 30;
	}; */
/* 	class ADFRC_magazine_84mm_mt_756: ADFRC_magazine_84mm_base
	{
		// Multi Target - Submunition should become multiple smaller warheads in a cone
		scope = 2;
		displayName="84mm MT 756";
		descriptionShort="Multi Target Munition. Tandem Warhead";
		picture = "\ADFRC_carlgustav\ui\84mm_mt_756_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_mt_756";
		ammo = "ADFRC_Shell_84mm_mt_756";
		mass = 45;
	}; */
/* 	class ADFRC_magazine_84mm_smk_469c: ADFRC_magazine_84mm_base
	{
		// Smoke Round
		scope = 2;
		displayName="84mm SMK 469C";
		descriptionShort="White Smoke Munition";
		picture = "\ADFRC_carlgustav\ui\84mm_smk_469c_ca.paa";
		model = "\ADFRC_carlgustav\ammo\84mm_smk_469c";
		ammo = "ADFRC_Shell_84mm_smk_469c";
		mass = 30;
	}; */
};
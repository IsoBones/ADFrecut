class CfgAmmo {
		class B_127x33_Ball;
		//// 50 CAL
		
	class ADFRC_50_750_AMAX	: B_127x33_Ball {
			hit = 60;
			typicalSpeed = 500;
			airFriction = -0.00086;
			caliber = 2.6;
			deflecting = 21;
			visibleFire = 8;
			audibleFire = 120;
			cost = 15;
			indirecthit = 0;
			indirecthitrange = 0;
			sound[] = {"\a3\sounds_f\weapons\GM6Lynx\gm6_st_1c.wss", 10, 1};
			aiAmmoUsageFlags = "64 + 128 + 256";
			maxspeed = 900;
			timeToLive = 10;
			ACE_caliber = 12.7;
			ACE_bulletLength = 65;
			ACE_bulletMass = 48.599175;
			ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
			ACE_ballisticCoefficients[] = { 1.050};
			ACE_velocityBoundaries[] = {};
			ACE_muzzleVelocityVariationSD=0.4;
			ACE_standardAtmosphere = "ICAO";
			ACE_dragModel = 1;
			ACE_transonicStabilityCoef=1;
			ACE_barrelLengths[] = {508,736.6};
			ACE_muzzleVelocities[] = {807,860};
			cartridge = "\A3\Weapons_F\Ammo\cartridge_127";
			MSS_cartridge = "\A3\Weapons_F\Ammo\cartridge_127";
			airlock = 1;
			class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
				{
					power = 0.1;
					duration = 1;
					frequency = 20;
					distance = 10;
				};
		class CamShakePlayerFire
				{
					power = 0.002;
					duration = 0.1;
					frequency = 20;
					distance = 1;
				};
		};
		
	class ADFRC_50_F1_Ball	: ADFRC_50_750_AMAX {
			hit = 53;
			typicalSpeed = 500;
			airFriction = -0.00086;
			cost = 15;
			maxspeed = 896;
			ACE_bulletMass = 42.8321;
			ACE_bulletLength = 58.42;
			ACE_ballisticCoefficients[] = { 0.640};
			ACE_muzzleVelocityVariationSD=5;
			ACE_dragModel = 1;
			ACE_barrelLengths[] = {508,736.6};
			ACE_muzzleVelocities[] = {858,896};
		};
		
	class ADFRC_50_M1022_LR	: ADFRC_50_750_AMAX {
			hit = 58;
			typicalSpeed = 500;
			airFriction = -0.00089;
			cost = 15;
			maxspeed = 896;
			ACE_bulletMass = 42.1193;
			ACE_bulletLength = 58.42;
			ACE_muzzleVelocityVariationSD=1;
			ACE_ballisticCoefficients[] = { 0.640};
			ACE_dragModel = 1;
			ACE_barrelLengths[] = {508,736.6};
			ACE_muzzleVelocities[] = {789,886};
		};
		
	class ADFRC_50_Mk211Mod0_RAUFOSS	: ADFRC_50_750_AMAX {
			hit = 150;
			typicalSpeed = 500;
			airFriction = -0.00089;
			cost = 35;
			maxspeed = 896;
			ACE_bulletMass = 42.7673;
			ACE_bulletLength = 58.42;
			ACE_ballisticCoefficients[] = { 0.650};
			ACE_dragModel = 1;
			ACE_barrelLengths[] = {508,736.6};
			ACE_muzzleVelocities[] = {765,850};
			indirectHit = 2;
			aiAmmoUsageFlags = "64 + 128 + 256 + 512";
			indirectHitRange = 3;
			explosive = 0.3;
			Minrange = 10;
			deflecting = 3;
			dangerRadiusBulletClose = 2;
			dangerRadiusHit = 60;
			suppressionRadiusBulletClose = 12;
			suppressionRadiusHit = 100;
			fuseDistance = 1;
			explosioneffects = "ExploAmmoExplosion";
			CraterEffects = "ExploAmmoCrater";
			soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
			soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
			soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
			multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
			soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
			class CamShakeExplode
				{
					power = 3;
					duration = 1;
					frequency = 20;
					distance = 15.8178;
				};
			class CamShakeHit
				{
					power = 40;
					duration = 0.4;
					frequency = 20;
					distance = 1;
				};
		};
		
///EOF
};
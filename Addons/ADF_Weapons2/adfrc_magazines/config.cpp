class CfgPatches
{
	class adfrc_magazines
	{
		units[]={};
		magazines[]=
		{
			"ADFRC_20RD_HK417_F4","ADFRC_20RD_HK417_M"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		weapons[]={};
		ammo[]=
		{
			"ADFRC_762x51_F4","ADFRC_762x51_Match"

		};
	};
};
class CfgAmmo
{
	class B_762x51_Ball;
	class ADFRC_762x51_F4: B_762x51_Ball
	{
        ACE_caliber=7.62x51;
        ACE_bulletLength=26.46;
        ACE_bulletMass=9.5254398;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.450};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={513,795,815,835,850,886,900,903};
        ACE_barrelLengths[]={254,406,457,508,559,609,660,711};
	};
	
	class ADFRC_762x51_Match	: B_762x51_Ball {
			typicalSpeed = 450;
			airFriction=-0.00084311;
			ACE_caliber = 7.62;
			ACE_bulletLength = 32;
			ACE_bulletMass = 11.3398;
			ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
			ACE_ballisticCoefficients[] = { 0.243};
			ACE_velocityBoundaries[] = {};
			ACE_muzzleVelocityVariationSD=0.4;
			ACE_standardAtmosphere = "ICAO";
			ACE_transonicStabilityCoef=1;
			ACE_dragModel = 7;
			ACE_muzzleVelocities[] = {600,790,810,821,835};
			ACE_barrelLengths[] = {387,508,660.4,685.8,762};
		};
};
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class ADFRC_20RD_HK417_F4: 20Rnd_762x51_Mag
	{
		scope=2;
		displayName="7.62mm 20Rnd HK417 F4 Ball Magazine";
		author="$STR_ADFRC_AUTHOR";
		picture="\ADF_Weapons\adfrc_magazines\UI\adfrc_pmag_ca.paa";
		modelSpecial = "ADF_Weapons2\adfrc_magazines\417\417.p3d";
		modelSpecialIsProxy = 1;
		ammo="ADFRC_762x51_F4";
		count=20;
		tracersEvery=0;
		descriptionShort="Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Cartridge: Thales F4 Ball";
	};
	class ADFRC_20RD_HK417_M: ADFRC_20RD_HK417_F4
	{
		displayName="7.62mm 20Rnd HK417 F4 Match Magazine";
		ammo="ADFRC_762x51_Match";
		descriptionShort="Calibre: 7.62x51mm NATO<br/>Rounds: 20<br/>Cartridge: Mk316 Match";
	};
};

class CfgMagazineWells
{
	class CBA_762x51_HK417
	{
		// Magazines listed by mod
		// It is possible to add new arrays to class but for now inheritance (i.e. STANAG_556x45_New: STANAG_556x45 {};) is not supported 
		ADFRC_Magazines[] =
		{
			"ADFRC_20RD_HK417_F4",
			"ADFRC_20RD_HK417_M"
		};
	};
	
};
class CfgPatches
{
	class ADFU_weapon_f1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author= $STR_ADFU_AUTHOR;
		version="0.5.0";
		versionStr="0.5.0";
		versionAr[]={0,5,0};
		magazines[]=
		{
			"ADFU_f1_grenade",
			"ADFU_f3_practice"
		};
		ammo[]=
		{
			"ADFU_f1_grenade_a",
			"ADFU_f3_practice_a"
		};
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		muzzles[]+=
		{
			"ADFU_f1_muzzle",
			"ADFU_f3_muzzle"
		};
		class ADFU_f1_muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"ADFU_f1_grenade"
			};
		};
		class ADFU_f3_muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"ADFU_f3_practice"
			};
		};
	};
};
class CfgAmmo
{
	class GrenadeHand;
	class SmokeShell;
	class ADFU_f1_grenade_a: GrenadeHand
	{
		model="\ADFU_weapon_f1\f1_grenade_item";
		soundHit1[]=
		{
			"ADFU_weapon_f1\sound\f1_grenade",
			5.1622782,
			1,
			1400
		};
		soundHit2[]=
		{
			"ADFU_weapon_f1\sound\f1_grenade",
			5.4622779,
			1,
			1400
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
	};
	class ADFU_f3_practice_a: SmokeShell
	{
		typicalspeed=20;
		model="\ADFU_weapon_f1\f3_grenade";
		explosive=0;
		deflecting=60;
		explosionTime=2;
		timeToLive=5;
		fuseDistance=5;
		effectsSmoke="SmokeShellWhiteSmall";
	};
};
class CfgMagazines
{
	class HandGrenade;
	class ADFU_f1_grenade: HandGrenade
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		displayName="$STR_ADFU_weapon_F1_NAME";
		picture="\ADFU_weapon_f1\ui\gear_f1_grenade_ca.paa";
		model="\ADFU_weapon_f1\f1_grenade_item";
		ammo="ADFU_f1_grenade_a";
		descriptionShort="$STR_ADFU_weapon_F1_DESC";
		displayNameShort="$STR_ADFU_weapon_F1_SHORT";
	};
	class ADFU_f3_practice: ADFU_f1_grenade
	{
		scope=2;
		displayName="$STR_ADFU_weapon_F3_NAME";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_f1\ui\gear_f3_grenade_ca.paa";
		model="\ADFU_weapon_f1\f3_grenade_item";
		ammo="ADFU_f3_practice_a";
		descriptionShort="$STR_ADFU_weapon_F3_DESC";
		displayNameShort="$STR_ADFU_weapon_F3_SHORT";
	};
};

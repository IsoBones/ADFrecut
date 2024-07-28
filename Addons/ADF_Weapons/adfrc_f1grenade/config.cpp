#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class ADFRC_F1_Grenade
	{
        units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F"};
		author= $STR_ADFU_AUTHOR;
		version="0.5.0";
		versionStr="0.5.0";
		versionAr[]={0,5,0};
		magazines[]= {"ADFRC_F1_G_Mag"};
		ammo[]= {"ADFRC_F1_Ammo"};
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		muzzles[]+={"ADFRC_F1_Muzzle"};
		class ADFRC_F1_Muzzle: ThrowMuzzle
		{
			magazines[]={"ADFRC_F1_Grenade"};
			magazineReloadTime=3;
			cartridgePos="nabojnicestart";
			cartridgeVel="nabojniceend";
		};
	};
};
class CfgMagazines
{
	class HandGrenade;
	class ADFRC_F1_Grenade: HandGrenade
	{
		scope=2;
		author="$STR_ADRC_AUTHOR";
		displayName="F1 Fragmentation Grenade";
		picture="\ADF_Weapons\ADFRC_F1Grenade\UI\AFDRC_F1_Image.paa";
		model="\ADF_Weapons\ADFRC_F1Grenade\ADFRC_F1_Grenade.p3d";
		ammo="ADFRC_F1_Ammo";
		descriptionShort="";
		displayNameShort="";
		initSpeed=15;
	};
};

class CfgAmmo
{
	class GrenadeHand;
	class ADFRC_F1_Ammo: GrenadeHand
	{
		cartridge = "\ADF_Weapons\ADFRC_F1Grenade\ADFRC_F1_G_spoon.p3d";
        model = "\ADF_Weapons\ADFRC_F1Grenade\ADFRC_F1_Grenade.p3d";
		aiAmmoUsageFlags = 64; //Tells the AI how to use this Ammo 64 = Offenve against infantry
        allowAgainstInfantry = True;
        coefGravity = 1.0; //Multiplier for gravity influence
        cost = 35; //ai cost to use evaluation
        craterEffects = GrenadeCrater;
        deflecting = 15;
        deflectionSlowDown=0.9;
        explosionEffects = GrenadeExplosion;
        explosionEffectsRadius = 5;
        explosionTime = 5; //time until grenade detenates when thrown
        explosive = 1;
        shootDistraction = 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		hit = 20; //damage on hit
        indirectHitRange = 7.5; //indirect hit radius
        indirectHit = 10; //damage on indirect hit
        typicalspeed = 30;
		shadow = 1;
        //soundHit1[]= {"ADFU_weapon_f1\sound\f1_grenade", 5.1622782, 1, 1400};
		//soundHit2[]= {"ADFU_weapon_f1\sound\f1_grenade", 5.4622779, 1, 1400};
		//multiSoundHit[]= {"soundHit1", 0.5, "soundHit2", 0.5 };
	};
};
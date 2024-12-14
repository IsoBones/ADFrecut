class CfgMovesBasic
{
	class Default;
	class StandBase;
	class DefaultDie;
	class HealBase: Default
	{
		disableWeapons = 1;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		canPullTrigger = 0;
		duty = 0.2;
		limitGunMovement = 0;
		aiming = "empty";
		aimingBody = "empty";
		actions = "HealActionBase";
		looped = 0;
	};

 	class ManActions
 	{
		ADFRC_GestureRechamberM2010		= "ADFRC_GestureReloadM2010";
		MPP_Slow_Reload[] = {"MPP_Slow_Reload","Gesture"};
		MPP_Fast_Reload[] = {"MPP_Fast_Reload","Gesture"};
 	};

	class Actions
	{
		class NoActions : ManActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010", "Gesture" };
		};
	};
};
#define ANIMATION_DURATION_S(duration)  __EVAL(1/duration)

class CfgGesturesMale
{
	class ManActions{};
	class Actions;
	class BlendAnims;
	class Default;
	class States
	{
		class GestureReloadBase;
		class ADFRC_GestureRechamberM2010_Prone : Default
		{
			file = "\ADF_Weapons\core\Anims\Gestures\rechamber_m2010_prone.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
			enableOptics = 1;
		};

		class ADFRC_GestureRechamberM2010 : Default
		{
			enableOptics = 1;
			file = "\ADF_Weapons\core\Anims\Gestures\rechamber_m2010_standing.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			disableWeapons = 0;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
		};

		class ADFRC_GestureRechamberM2010_Context : ADFRC_GestureRechamberM2010
		{
			mask = "handsWeapon_context";
		};
		
		class MPP_Fast_Reload: default
		{
			speed = -2;
			file = "ADF_Weapons\core\Anims\Gestures\MPP_Fast_Reload.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolationRestart = 2;
			enableOptics = 1;
			weaponIK = 1;
			looped = 0;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.1,0,0.916,0,0.951,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			canReload = 0;
			mask = "handsWeapon";
			headBobStrength = -0.3;
			headBobMode = 1;
		};

		class MPP_Slow_Reload: default
		{
			speed = -3.25;
			file = "ADF_Weapons\core\Anims\Gestures\MPP_Slow_Reload.rtm";
			disableWeapons = 0;
			interpolationRestart = 2;
			enableOptics = 0;
			weaponIK = 1;
			looped = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0};
			rightHandIKEnd = 0;
			canReload = 0;
			mask = "handsWeapon";
			headBobStrength = -1;
			headBobMode = 1;
		};

	};
};
class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadAUG = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUG,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGContext,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadAUG[] =
			{
				GestureReloadAUGProne,
				Gesture
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class GestureReloadAUG: GestureReloadBase
		{
			file = "\ADF_Weapons\adfrc_ef88\reloads\GestureReloadAUG.rtm";
			speed = 0.18;
            mask = handsWeapon;
            headBobStrength = 0.22;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGProne: GestureReloadAUG
		{
			file = "\ADF_Weapons\adfrc_ef88\reloads\GestureReloadAUGProne.rtm";
			leftHandIKCurve[] =
			{
				0,true,
				0.036,false,
				0.836,false,
				0.873,true
			};
		};
		class GestureReloadAUGContext: GestureReloadAUG
		{
			mask = handsWeapon_context;
		};
		class GestureReloadAUGContextAnimDrive: GestureReloadAUG
		{
			mask = handsWeapon_contextAnimDrive;
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ADFU_GestureReloadMinimi = "ADFU_GestureReloadMinimi";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ADFU_GestureReloadMinimi[] = {"ADFU_GestureReloadMinimi","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			ADFU_GestureReloadMinimi[] = {"ADFU_GestureReloadMinimi_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ADFU_GestureReloadMinimi[] = {"ADFU_GestureReloadMinimi_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ADFU_GestureReloadMinimi[] = {"ADFU_GestureReloadMinimi_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ADFU_GestureReloadMinimi[] = {"ADFU_GestureReloadMinimi_Context","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class ADFU_GestureReloadMinimi: Default
		{
			file = "ADFU_weapon_minimi\anim\reload_minimi_standing.rtm";
			looped = 0;
			speed = 0.09090909;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.3,1,0.34,0,0.945,0,0.98,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.0455,0,0.3,0,0.334,1};
			rightHandIKEnd = 1;
		};
		class ADFU_GestureReloadMinimi_Context: ADFU_GestureReloadMinimi
		{
			mask = "handsWeapon_context";
		};
		class ADFU_GestureReloadMinimi_Prone: Default
		{
			file = "ADFU_weapon_minimi\anim\reload_minimi_prone.rtm";
			looped = 0;
			speed = 0.09090909;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0.3,1,0.34,0,0.945,0,0.98,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.0455,0,0.3,0,0.334,1};
			rightHandIKEnd = 1;
		};
	};
};
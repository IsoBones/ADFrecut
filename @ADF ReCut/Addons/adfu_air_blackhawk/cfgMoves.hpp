class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ADFU_S70A_Pilot="ADFU_S70A_Pilot";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ADFU_S70A_Pilot: Crew
		{
			file = \ADFU_air_blackhawk\anim\S70A_Pilot.rtm;
			interpolateTo[] = {"ADFU_KIA_S70A_Pilot",1};

			leftHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKCurve[] = {1};
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;

			leftLegIKCurve[] = {1};
			leftLegIKBeg = 1;
			leftLegIKEnd = 1;
			rightLegIKCurve[] = {1};
			rightLegIKBeg = 1;
			rightLegIKEnd = 1;
		};
		class ADFU_KIA_S70A_Pilot: DefaultDie
		{
			file = \ADFU_air_blackhawk\anim\S70A_KIA_Pilot.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
	};
};
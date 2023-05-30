class SmokeLauncher;
class CMFlareLauncher: SmokeLauncher
{
    class Single;
    class Burst;
    class AIBurst;
};
class CfgWeapons
{
	class CMFlareLauncher_Quadruples: CMFlareLauncher
	{
		class Single: Single
		{
			multiplier = 4;
		};
		class Burst: Burst
		{
			multiplier = 4;
			reloadTime = 0.25;
			burst = 4;
		};
		class AIBurst: AIBurst
		{
			multiplier = 4;
			reloadTime = 0.25;
			burst = 2;
			burstRangeMax = 6;
		};
	};
};
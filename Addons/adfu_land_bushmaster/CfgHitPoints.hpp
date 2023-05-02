	class HitPoints: HitPoints
	{
		class HitLFWheel: HitLFWheel
		{
			name = "wheel_1_1_steering";
			armor = 0.6;
			explosionShielding = 1;
			passThrough = 0.0;
			radius = 0.25;
		};
		class HitLF2Wheel: HitLF2Wheel
		{
			name = "wheel_1_2_steering";
			armor = 0.6;
			explosionShielding = 1;
			radius = 0.25;
		};
		class HitRFWheel: HitRFWheel
		{
			name = "wheel_2_1_steering";
			armor = 0.6;
			explosionShielding = 1;
			radius = 0.25;
		};
		class HitRF2Wheel: HitRF2Wheel
		{
			name = "wheel_2_2_steering";
			armor = 0.6;
			explosionShielding = 1;
			radius = 0.25;
		};
		class HitFuel: HitLFWheel
		{
			armor = 0.6;
			name = "fuel";
			visual = "";
			passThrough = 0.0;
			explosionShielding = 0.2;
			radius = 0.10;
		};
		class HitEngine: HitFuel
		{
			armor = 0.8;
			name = "motor";
			radius = 0.15;
		};
		class HitBody: HitFuel
		{
			armor = 1.0;
			name = "body";
			radius = 0.25;
		};
	};
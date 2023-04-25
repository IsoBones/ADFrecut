class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",3.43,"D2",2.01,"D3",1.42,"D4",1,"D5",0.83,"D6",0.59};
			TransmissionRatios[] = {"High",7.75};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carX";
		maxSpeed = 100;
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.4;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35.0;
		enginePower = 400;
		maxOmega = 475;
		peakTorque = 1200.0;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.163077,0.277015},{0.231154,0.614065},{0.306154,0.932247},{0.358846,1},{0.615,1},{0.973846,0.795026},{1.28192,0.227273}};
		changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
		switchTime = 0.1;
		latency = 1.4;
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 150;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 12000;//45000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1125;
				maxDroop = 0.1125;
				sprungMass = 1650;
				springStrength = 82500;
				springDamperRate = 23334.5;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		fuelCapacity=45;
		wheelCircumference=3.277;
		canFloat=1;
		maxFordingDepth=1.2;
		waterLeakiness=10;
		waterResistance=5;
		waterAngularDampingCoef=5;
		waterPPInVehicle=0;
		waterResistanceCoef=0.2;
		normalSpeedForwardCoef=0.51999998;
		slowSpeedForwardCoef=0.3
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		idleRpm=280;
		redRpm=3900;
		terrainCoef=3;
		turnCoef=2.6500001;
		engineShiftY=0.5;
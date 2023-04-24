		//----- General Parameters -----//
		normalSpeedForwardCoef=0.9;
		turnCoef=2.5;
		terrainCoef=0.8;
		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef=4;

		maxSpeed=145;
		fuelCapacity=45;
		wheelCircumference=2.277;

		brakeIdleSpeed=0.0;
		maxFordingDepth=0.5;
		waterResistance=2;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-5.224,"N",0,"D1",3.32,"D2",2.13,"D3",1.5,"D4",0.90,"D5",0.63};
			TransmissionRatios[]={"High",6.14};
			//GearboxRatios[]={"R1",-5.224,"N",0,"D1",6,"D2",3.2,"D3",1.9,"D4",1.25,"D5",0.85};
			//TransmissionRatios[]={"High",5.825};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime=0.45;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=25;
		transmissionLosses = 20;

		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;

		//----- Engine Parameters -----//
		torqueCurve[] = {
			{0.15 , 0.42},
			{0.18 , 0.75},
			{0.27 , 0.94},
			{0.36 , 1},
			{0.45 , 1},
			{0.64 , 0.98},
			{0.82 , 0.88},
			{1 , 0.79}
		};

		maxOmega = 575.96;
		enginePower = 136;
		peakTorque = 312;
		idleRPM = 700;
		redRPM = 5500;


		engineLosses = 14;
		thrustDelay=1.5;
		engineBrakeCoef = 0.3;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		class Wheels
		{
			class LF
			{
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// General parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: Name of the bone, used for wheel and suspension animations.
				// <Type>: string
				// <Default>: ""
				boneName = "wheel_1_1_damper";

				// <Description>: If true, wheel is steerable, false - wheel is fixed.
				// <Type>: bool
				// <Default>: (required)
				steering = true;

				// <Description>: Defines if wheel is on the right or left side of the vehicle
				// <Type>: string
				// <Default>: "right"
				side = "left";

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Wheel PX parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: Center of the wheel (axis)
				// <Type>: memory point
				// <Default>: (required)
				center   = "wheel_1_1_axis";

				// <Description>: Point on the outside rim of the tire, used to calculate radius of the wheel (distance between center and boundary).
				// <Type>: memory point
				// <Default>: (required)
				boundary = "wheel_1_1_bound";

				// <Description>: This is the weight in kg of wheel including both rim and tyre.
				// <Type>: float
				// <Default>: 10.0
				mass = 30;

				// <Description>: This is the wheel's moment of inertia about the rolling axis. Smaller values result in more slips in aggresive driving
				// while larger hamper the gain of speed. Good base to start with is this formula:
				// MOI = 0.5 * Mass * Radius * Radius
				// Some tweaking is needed after the computation, but it is still better than nothing.
				// <Type>: float
				// <Default>: 0.5 * WheelMass * WheelRadius * WheelRadius
				MOI = 25;

				dampingRate = 1;
				dampingRateDamaged = 0.5;
				dampingRateInAir = 0.8;
				dampingRateDestroyed = 5000;

				// <Description>: This is the value of the torque applied to the wheel when the brakes are maximally applied. Higher torques will lock the wheel
				// quicker when braking, while lower torques will take longer to lock the wheel.
				// A value of around 1500 is a good starting point for a vanilla wheel but a google search will reveal typical braking torques. One difficulty is
				// that these are often expressed by manufacturers as braking horsepower or in "pounds inches". The values required here are in "Newton metres".
				// <Type>: float
				// <Default>: 2500
				maxBrakeTorque = 2000;

				// <Description>: This is the same as the max brake torque except for the handbrake rather than the brake. Typically, for a 4-wheeled car,
				// the handbrake is stronger than the brake and is only applied to the rear wheels. A value of 4000 for the rear wheels is a good starting point,
				// while a value of 0 is necessary for the front wheels to make sure they do not react to the handbrake.
				// <Type>: float
				// <Default>: 2*maxBrakeTorque
				maxHandBrakeTorque = 0;

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Wheel simulation parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: This is the direction of the suspension in the downward direction in the rest configuration of the vehicle. A vector that
				// points straight downwards is a good starting point.
				// <Type>: Array[3]
				// <Default>: {0, -1, 0}
				suspTravelDirection[] = {0, -1, 0};

				// <Description>: This is the application point of the suspension force.
				// <Type>: memory point
				// <Default>: center
				suspForceAppPointOffset = "wheel_1_1_axis";

				// <Description>: This is almost the same as the suspension force app point except for the lateral and longitudinal forces that develop on the tire.
				// A good starting point is to duplicate the suspension force application point.
				// <Type>: memory point
				// <Default>: suspForceAppPointOffset
				tireForceAppPointOffset = "wheel_1_1_axis";

				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Suspension parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: These values describe the maximum compression and elongation in metres that the spring can support.
				// <Type>: float
				// <Default>: 0.15
				maxCompression = 0.1;
				mMaxDroop = 0.15;

				sprungMass = 498;
				springStrength = 124380;
				springDamperRate = 6296;


				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Tire parameters
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

				// <Description>: Increasing this value will result in the tire attempting to generate more longitudinal force when the tire is slipping.
				// Typically, increasing longitudinal stiffness will help the car accelerate and brake. The total tire force available is limited by the
				// load on the tire so be aware that increases in this value might have no effect or even come at the expense of reduced lateral force.
				// <Type>: float
				// <Default>: 10000
				longitudinalStiffnessPerUnitGravity = 100000;

				// <Description>: These values together describe the lateral stiffness per unit lateral slip (in radians) of the tire.
				// <Type>: float, float
				// <Default>: 25, 180
				latStiffX = 2.5;
				latStiffY = 18;

				// <Description>: These six values describe a graph of friction as a function of longitudinal slip.
				// A good starting point for this is a flat graph of friction vs slip with these values:
				// frictionVsSlipGraph[0][0]=0.0
				// frictionVsSlipGraph[0][1]=1.0
				// frictionVsSlipGraph[1][0]=0.5
				// frictionVsSlipGraph[1][1]=1.0
				// frictionVsSlipGraph[2][0]=1.0
				// frictionVsSlipGraph[2][1]=1.0
				// <Type>: Array[3][2]
				// <Default>: {{0, 1}, {0.5, 1}, {1,1}}
				frictionVsSlipGraph[] = {{ 0,2.3 },{ 0.5,2.1 },{ 1,2.0 }};
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = false;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				//springStrength = 5000;
				//springDamperRate = 1262;
				maxHandBrakeTorque = 4000;
				latStiffY = 18;
			};
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = true;
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = false;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				//springStrength = 5000;
				//springDamperRate = 1262;
				maxHandBrakeTorque = 4000;
				latStiffY = 18;
			};
		};
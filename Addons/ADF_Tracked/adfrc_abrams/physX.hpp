/// PhysX part
simulation			= tankX;
enginePower			= 1120;
maxOmega 			= 314.16;
peakTorque 			= 6779;
torqueCurve[] = {
{0.14 , 1},
{0.29 , 0.91},
{0.43 , 0.82},
{0.57 , 0.74},
{0.71 , 0.66},
{0.86 , 0.59},
{1 , 0.52}
};


thrustDelay			= 0.5;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
//clutchStrength 		= 185.0;
clutchStrength 		= 100;
fuelCapacity		= 1900;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
//switchTime 			= 0.41;
latency 			= 0.1;
tankTurnForce		= 75000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Gearbox and transmission
idleRpm = 1000; // RPM at which the engine idles.
redRpm = 4000; // RPM at which the engine redlines.

engineLosses = 10; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

class complexGearbox {
	GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.3,"D2",3.5,"D3",2.6,"D4",1.95,"D5",1.5,"D6",1.125,"D7",0.85};
	TransmissionRatios[] = {"High",11.8};
	gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
	moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0.1;
	gearUpMaxCoef = 0.95; //coef for changing up in automatic or semi-automatic gearboxes with full throttle (0.95 by default before redRPM on actual gear)
	gearDownMaxCoef = 0.85; //coef for changing down in automatic or semi-automatic gearboxes with full throttle (0.85 by default before redRPM on lower gear)
	gearUpMinCoef = 0.75; //coef for changing up in automatic or semi-automatic gearboxes with no throttle (0.65 by default before redRPM on actual gear)
	gearDownMinCoef = 0.65; //coef for changing down in automatic or semi-automatic gearboxes with no throttle (0.55 by default before redRPM on lower gear)
};
/// end of gearbox
changeGearMinEffectivity[] = {0.95,0.15,0.99,0.99,0.99,0.99,0.9,0.9,0.55};

class Wheels {
	class L2 {
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		weight = 150;
		mass = 150;
		MOI = 20;
		latStiffX = 25;
		latStiffY = 280;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 40000;
		sprungMass = 4000.0;
		springStrength = 324000;
		springDamperRate = 36000;
		dampingRate = 1250;
		dampingRateInAir = 3010;
		dampingRateDamaged = 10.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.18;
		maxCompression = 0.18;
		wheelCircumference=1.5;

	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "wheel_podkolol6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	class L8: L2 {
		boneName = "wheel_podkolol7";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		boneName = "wheel_podkolol9";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 {
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	class R8: R2 {
		boneName = "wheel_podkolop7";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX
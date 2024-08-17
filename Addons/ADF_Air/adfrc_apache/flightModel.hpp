/* General settings */ 
    altFullForce = 3000;
    altNoForce = 6000;
    maxSpeed = 293;
    
/* Main rotor settings */
    mainBladeCenter = rotor_center;
    mainBladeRadius = 7.315;
    
/* Tail rotor settings */ 
    tailBladeCenter = rotor_02_center;
    tailBladeRadius = 1.395;
    
/* Force coefficients */
    liftForceCoef = 1.0;
    bodyFrictionCoef = 1.1;
    cyclicAsideForceCoef = 1.2;
    cyclicForwardForceCoef = 1.0;
    backRotorForceCoef = 1.0;
    
/* Rotor speeds */
    mainRotorSpeed = 1;
    backRotorSpeed = 3;

/* Additional settings */
    thrustCoef[] = {1.2, 1.1, 1.0};
    maxMainRotorStress = 180000;
    maxTailRotorStress = 35000;
    maxHorizontalStabilizerLeftStress = 100000;
    maxHorizontalStabilizerRightStress = 100000;
    maxVerticalStabilizerStress = 100000;
    stressDamagePerSec = 0.0033333332;
    retreatBladeStallWarningSpeed = 79.536;
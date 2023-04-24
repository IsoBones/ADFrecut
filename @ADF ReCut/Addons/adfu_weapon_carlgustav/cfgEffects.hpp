class CfgCloudlets
{
	class Default;
	class GustavCircleSmoke: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.25;
		moveVelocity[] = {"directionX * 2.2","directionY * 2.2","directionZ * 2.2"};
		rotationVelocity = 1;
		weight = 0.1285;
		volume = 0.1;
		rubbing = 0.8;
		size[] = {0.15,0.3,0.5};
		sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[] = {{ 0.8,0.8,0.8,0.4 },{ 0.8,0.8,0.8,0.3 },{ 0.8,0.8,0.8,0.05 },{ 0.8,0.8,0.8,0.01 }};
		colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.05;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.15,0.15,0.001};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GustavCircleFire: Default
	{
		interval = "0.01 * humidity + 0.005";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.125 * humidity","0.122 * humidity","0.123 * humidity","0.120 * humidity"};
		color[] = {{ 0.7,0.7,0.7,0.5 },{ 0.7,0.7,0.7,0.6 },{ 0.8,0.8,0.8,0.45 },{ 0.8,0.8,0.8,0.3 },{ 0.9,0.9,0.9,0.18 },{ 0.9,0.9,0.9,0.08 },{ 1,1,1,0 }};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {2.5,3,2.5};
		MoveVelocityVar[] = {1,2,1};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class GustavFloorDust: Default
	{
		interval = 0.01;
		circleRadius = 1.5;
		circleVelocity[] = {0.05,0.05,-0.05};
		particleShape = "\A3\data_f\missileSmoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 7.5;
		moveVelocity[] = {0,0,0.05};
		rotationVelocity = 0.5;
		weight = 10.65;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {1,1};
		color[] = {{0.1, 0.1, 0.1, 0.3}, {0.2, 0.2, 0.18, 0.25}, {0.1, 0.09, 0.09, 0.02}}; 
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.0;
		randomDirectionIntensity = 0.0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.25,0.25,0.00};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeedCoef = 1;
		position[] = {0,0,0};
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 0;
	};
};

class Gustav_Backblast
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.12;
		qualityLevel = -1;
	};
	class MortarFired1
	{
		simulation = "particles";
		type = "MortarFired1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.075;
		qualityLevel = -1;
	};
	class CannonFired2
	{
		simulation = "particles";
		type = "CannonFired2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.04;
	};
	class CannonFired3
	{
		simulation = "particles";
		type = "CannonFired3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.8;
		qualityLevel = -1;
	};
	class CannonFired3Med
	{
		simulation = "particles";
		type = "CannonFired3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		qualityLevel = -1;
	};
	class CannonFiredDust1
	{
		simulation = "particles";
		type = "CircleDustTankBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class CannonFiredDust2
	{
		simulation = "particles";
		type = "CircleDustTankSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class Gustav_ForwardBlast
{
	class GustavFloor
	{
		simulation = "particles";
		type = "GustavFloorDust";
		position[] = {0,0,-0.5};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		qualityLevel = -1;
	};
	
	circle_xx(00,0.2, 0.0);
	circle_xx(02,0.1732,0.1);
	circle_xx(04,0.1,0.1732);
	circle_xx(06,0,0.2);
	circle_xx(08,-0.1,0.1732);
	circle_xx(10,-0.1732,0.1);
	circle_xx(12,-0.2,0);
	circle_xx(14,-0.1732,-0.1);
	circle_xx(16,-0.1,-0.1732);
	circle_xx(18,0,-0.2);
	circle_xx(20,0.1,-0.1732);
	circle_xx(22,0.1732,-0.1);
	
	circle2_xx(01,0.1932,0.0518);
	circle2_xx(03,0.1414,0.1414);
	circle2_xx(05,0.0518,0.1932);
	circle2_xx(07,-0.0518,0.1932);
	circle2_xx(09,-0.1414,0.1414);
	circle2_xx(11,-0.1932,0.0518);
	circle2_xx(13,-0.1932,-0.0518);
	circle2_xx(15,-0.1414,-0.1414);
	circle2_xx(17,-0.0518,-0.1932);
	circle2_xx(19,0.0518,-0.1932);
	circle2_xx(21,0.1414,-0.1414);
	circle2_xx(23,0.1932,-0.0518);
};
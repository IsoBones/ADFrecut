		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};				
			};
			class Right: Left
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Rear: Left
			{
				selection = "Light_Rear";
				color[] = {0,0,0};
				ambient[] = {0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				size = 0;
				innerAngle = 0;
				outerAngle = 0;
				coneFadeCoef = 0;
				intensity = 0;
				useFlare = 0;
				dayLight = 0;
				flareSize = 0.0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};	
			};
		};
		aggregateReflectors[] = {{"Left"},{"Right"}};
		
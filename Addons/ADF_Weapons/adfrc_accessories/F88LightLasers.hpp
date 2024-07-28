class ADFRC_F88SA1_laser: ItemCore
	{
		scope=2;
		displayName="Laser Pointer (f88sa1)";
		picture="\ADF_Weapons\adfrc_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LASER_f88sa1\LASER_f88sa1";
		descriptionShort="Ring Mounted accessories";
		author="$STR_ADF_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_dir";
				irLaserEnd="laser";
				irdistance=750;
			};
			class FlashLight
			{
			};
		};
	};
	class ADFRC_F88SA1_light: ItemCore
	{
		scope=2;
		displayName="Flash-Light (f88sa1)";
		picture="\ADF_Weapons\adfrc_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LIGHT_f88sa1\LIGHT_f88sa1";
		descriptionShort="Ring Mounted accessories";
		author="$STR_ADF_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			RMBhint="Ring Mount Flash-light";
			mass=4;
			class FlashLight
			{
				color[]={0.75,0.89999998,0.89999998,0.89999998};
				ambient[]={0.1,0.1,0.1,1};
				position="flash_dir";
				direction="flash";
				innerAngle=50;
				outerAngle=80;
				scale[]={0};
				brightness=0.44999999;
				size=1;
				coneFadeCoef=7;
				intensity=115;
				useFlare=1;
				dayLight=1;
				FlareSize=0.64999998;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=1;
					quadratic=75;
				};
			};
		};
	};
	class ADFRC_f88sa2_light: ADFRC_F88SA1_light
	{
		scope=2;
		displayName="Flash-Light (F88SA2)";
		picture="\ADF_Weapons\adfrc_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LIGHT_F88SA2\LIGHT_F88SA2";
		author="$STR_ADF_AUTHOR";
	};
	class ADFRC_f88sa2_light_tan: ADFRC_f88sa2_light
	{
		scope=2;
		displayName="Flash-light Tan (F88SA2)";
		picture="\ADF_Weapons\adfrc_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LIGHT_F88SA2\LIGHT_TAN_F88SA2";
		author="$STR_ADF_AUTHOR";
	};
	class ADFRC_f88sa2_laser: ItemCore
	{
		scope=2;
		displayName="Laser Pointer (F88SA2)";
		picture="\ADF_Weapons\adfrc_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LASER_F88SA2\LASER_F88SA2";
		author="$STR_ADF_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_dir";
				irLaserEnd="laser";
				irdistance=750;
			};
			class FlashLight
			{
			};
		};
	};
	class ADFRC_f88sa2_laser_tan: ADFRC_f88sa2_laser
	{
		scope=2;
		displayName="ADF Laser Pointer (Tan)";
		picture="\ADF_Weapons\adfrc_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\LASER_F88SA2\LASER_TAN_F88SA2";
		author="$STR_ADF_AUTHOR";
	};
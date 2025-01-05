class ADFRC_SOCOM_556 : muzzle_snds_M
 	{
 		scope = 2;
		displayName="Surefire SOCOM556-RC";
		author = "Brucey";
 		picture="\ADF_Weapons\adfrc_accessories\SUREFIRE_RC\ui\socom_ca.paa";
 		model = "\ADF_Weapons\adfrc_accessories\SUREFIRE_RC\ADFRC_SOCOM";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "0.9f";
			artilleryDispersionCoef = "1.0f";
			fireLightCoef = "0.1f";
			recoilCoef = "0.9f";
			recoilProneCoef = "0.85f";
			minRangeCoef = "1.0f";
			minRangeProbabCoef = "1.0f";
			midRangeCoef = "1.0f";
			midRangeProbabCoef = "1.0f";
			maxRangeCoef = "1.0f";
			maxRangeProbabCoef = "1.0f";
		};
		
 			class AmmoCoef
 			{
 				hit=1;
 				visibleFire=0.15;
 				audibleFire=0.25;
 				visibleFireTime=0.5;
 				audibleFireTime=1.0;
 				cost = 1.0;
 				typicalSpeed= 1.1;
 				airFriction = 1.0;      
 			}; 
 
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	
 		};
 	};
	
class ADFRC_WARCOMP_556 : muzzle_snds_M
 	{
 		scope = 2;
		displayName="Surefire Warcomp";
		author = "Brucey";
 		picture="\ADF_Weapons\adfrc_accessories\SUREFIRE_RC\ui\Warcomp_ca.paa";
 		model = "\ADF_Weapons\adfrc_accessories\SUREFIRE_RC\ADFRC_WARCOMP";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			
			class MagazineCoef
			{
				initSpeed = 1.1;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "0.9f";
			artilleryDispersionCoef = "1.0f";
			fireLightCoef = "0.1f";
			recoilCoef = "0.9f";
			recoilProneCoef = "0.85f";
			minRangeCoef = "1.0f";
			minRangeProbabCoef = "1.0f";
			midRangeCoef = "1.0f";
			midRangeProbabCoef = "1.0f";
			maxRangeCoef = "1.0f";
			maxRangeProbabCoef = "1.0f";
		};
		
 			class AmmoCoef
 			{
 				hit=1;
 				visibleFire=0.15;
 				audibleFire=0.25;
 				visibleFireTime=0.5;
 				audibleFireTime=1.0;
 				cost = 1.0;
 				typicalSpeed= 1.1;
 				airFriction = 1.0;      
 			}; 
 
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash	
 		};
 	};
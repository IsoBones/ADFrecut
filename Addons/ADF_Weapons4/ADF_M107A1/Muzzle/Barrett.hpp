class adfrc_BARRETT_QDL : ItemCore
 	{
 		scope = 2;
		displayName="Barrett QDL Suppressor";
		author = "Brucey";
 		picture="\adf_weapons4\adf_m107a1\Muzzle\data\ui\Gear_adfrc_Barrett_QDL_B.paa";
 		model = "\adf_weapons4\adf_m107a1\Muzzle\adfrc_Barrett_50_Sup_QDL";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			
			class MagazineCoef
			{
				initSpeed = 1;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "0.8f";
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
 				hit=1.05;
 				visibleFire=0.3;
 				audibleFire=0.8;
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
class adfrc_BARRETT_QDL_Brake : ItemCore
 	{
 		scope = 2;
		displayName="Barrett QDL Brake";
		author = "Brucey";
 		picture="\adf_weapons4\adf_m107a1\Muzzle\data\ui\Gear_adfrc_Barrett_QDL.paa";
 		model = "\adf_weapons4\adf_m107a1\Muzzle\adfrc_Barrett_50_brake_QDL";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			
			class MagazineCoef
			{
				initSpeed = 1;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "1.0f";
			artilleryDispersionCoef = "1.0f";
			fireLightCoef = "1.4f";
			recoilCoef = "0.77f";
			recoilProneCoef = "0.77f";
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
 				visibleFire=1.2;
 				audibleFire=1.4;
 				visibleFireTime=0.5;
 				audibleFireTime=1.0;
 				cost = 1.0;
 				typicalSpeed= 1;
 				airFriction = 1.0;      
 			};  
 
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh3";  // class in cfgWeapons with model of muzzle flash	
 		};
 	};

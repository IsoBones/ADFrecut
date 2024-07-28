class ADFRC_Ryder9 : ItemCore
 	{
 		scope = 2;
		displayName="Surefire Ryder 9-Ti2";
		author = "Brucey";
 		picture="\ADF_Weapons\adfrc_accessories\Ryder9\ui\ADFRC_Ryder9_CA.paa";
 		model = "\ADF_Weapons\adfrc_accessories\Ryder9\ADFRC_Ryder9_Ti2";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			mass = 6.29375;
			class MagazineCoef
			{
				initSpeed = 1;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "1.2f";
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
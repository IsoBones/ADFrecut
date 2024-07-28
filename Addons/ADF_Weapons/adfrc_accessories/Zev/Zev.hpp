class ADFRC_Zev: ItemCore
 	{
 		scope = 2;
		displayName="Zev V2 Pro Compensator";
		author = "Brucey";
 		picture="\ADF_Weapons\adfrc_accessories\Zev\ui\ADFRC_Zev_UI.paa";
 		model = "\ADF_Weapons\adfrc_accessories\Zev\ADFRC_Zev";	
		
 		
 		class ItemInfo: InventoryMuzzleItem_Base_F
 		{	
 			
			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
			mass = 1.0625;
			class MagazineCoef
			{
				initSpeed = 0.8;
			};
 
 			class MuzzleCoef
		{
			dispersionCoef = "1.0f";
			artilleryDispersionCoef = "1.0f";
			fireLightCoef = "1.5f";
			recoilCoef = "0.6f";
			recoilProneCoef = "0.4";
			minRangeCoef = "1.0f";
			minRangeProbabCoef = "1.0f";
			midRangeCoef = "1.0f";
			midRangeProbabCoef = "1.0f";
			maxRangeCoef = "1.0f";
			maxRangeProbabCoef = "1.0f";
		};
		
 			class AmmoCoef
 			{
 				hit=1.0;
 				visibleFire=0.3;
 				audibleFire=0.8;
 				visibleFireTime=0.5;
 				audibleFireTime=1.0;
 				cost = 1.0;
 				typicalSpeed= 1.0;
 				airFriction = 1.0;      
 			};
 
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh3";  // class in cfgWeapons with model of muzzle flash	
 		};
 	};
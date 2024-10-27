	class ADFRC_Atlas_BT10: ItemCore
	{
		scope 				= 2;																	/// available in Arsenal
		displayName			= "ATLAS BT10";													/// name of item in Inventory (and Arsenal)
		picture				= "\ADF_Weapons\adfrc_accessories\ATLAS\data\ui\Gear_ADFRC_Atlas.paa";			/// icon in Inventory
		model 				= "\ADF_Weapons\adfrc_accessories\ATLAS\ADFRC_atlas_black.p3d";						/// path to model
		class ItemInfo: InventoryUnderItem_Base_F
        {
			hasBipod		= true;			/// bipod obviously has a bipod
			mass			= 8;			/// what is the mass of the object
			soundBipodDown[] 	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",db-3, 1, 20};	/// what sound should be played during unfolding
			soundBipodUp[] 		= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",db-3, 1, 20};		/// what sound should be played during folding			
        };
		inertia = 0.2;						/// how much does the bipod add to inertia of the weapon
	};	
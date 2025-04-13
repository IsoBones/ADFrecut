class CfgPatches
{
	class ADF_EF88
	{
		units[] = {};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core"};
		fileName = "ADF_EF88.pbo";
	};
};
#include "basicDefines_A3.hpp"

class ItemCore;
class InventoryUnderItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryItem_Base_F;
class InventoryOpticsItem_Base_F;
class InventoryFlashLightItem_Base_F;
class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;
//////////////////////////////////class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {};
class asdg_UnderSlot;
class Mode_FullAuto;
class asdg_SlotInfo;
class recoil_default;
class Mode_SemiAuto;
class compatibleItems;


#include "cfgMoves.hpp"
#include "cfgSoundSets.hpp"
#include "cfgSoundShaders.hpp"

class cfgweapons{
#include "EF88.hpp"
//	INHERITENCE ADJUSTMENTS FROM OLD TO NEW
//	BASE CLASSES
	class arifle_AUG_base_F: ADFRC_EF88_Base{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
	};
	class arifle_AUG_GL_base_F: ADFRC_EF88GL_Base{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
	};
	class arifle_AUG_C_base_F: ADFRC_EF88_Base{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	//	OLD TAN -> NEW CAMO
	class arifle_AUG_F: ADFRC_EF88_Camo{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	class arifle_AUG_GL_F: ADFRC_EF88_SL40_Camo{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	class arifle_AUG_C_F: ADFRC_EF88C_Camo{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	//	OLD BLACK -> NEW BLACK
	class arifle_AUG_black_F: ADFRC_EF88_Black{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	class arifle_AUG_GL_black_F: ADFRC_EF88_SL40_Black{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
	class arifle_AUG_C_black_F: ADFRC_EF88C_Black{
		scope = protected;
		scopeArsenal = protected;
		scopeCurator = protected;
		
	};
};
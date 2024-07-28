class CfgPatches
{
	class ADF_M4A5
	{
		units[] = {};
		weapons[] = {"ADFRC_M4A5_Troy_556_14"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core"};
		fileName = "ADF_M4A5.pbo";
	};
};

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
class cfgweapons{
#include "M4A5.hpp"
};
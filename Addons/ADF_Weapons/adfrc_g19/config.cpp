class CfgPatches
{
	class ADF_G19
	{
		units[] = {};
		weapons[] = {"ADFRC_G19_Base","ADFRC_G19_G5_MOS_9"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core"};
		fileName = "ADF_G19.pbo";
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
class asdg_OpticRail;
class asdg_MuzzleSlot;
class asdg_SlotInfo;
class asdg_PistolOpticMount;
class asdg_MuzzleSlot_9mm;
class asdg_PistolUnderRail;
class recoil_default;
class Mode_SemiAuto;
class compatibleItems;
class cfgweapons{
#include "G19.hpp"
};
class CfgPatches
{
	class ADFRC_F9
	{
		units[] = {};
		weapons[] = {"ADFRC_F9","ADFRC_F9_SWS"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core","ADF_G19","ADFRC_Weapons_Tags"};
		fileName = "ADF_F9_SWS.pbo";
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
class ADFRC_G19_Base;
#include "F9.hpp"
};
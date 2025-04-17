class CfgPatches
{
	class ADF_SR98
	{
		units[] = {};
		weapons[] = {"ADFRC_SR98"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core", "adfrc_magazines", "adfrc_accessories","adfrc_weapons"};
		fileName = "ADF_SR98.pbo";
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
class 10Rnd_762x51_Mag;
//////////////////////////////////class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_UnderSlot_AI_Bipod;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {};
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class Mode_FullAuto;
class asdg_SlotInfo;
class recoil_default;
class Mode_SemiAuto;
class compatibleItems;
class CfgMagazines
{
#include "Magazines.hpp"
};

class CfgMagazineWells
{
#include "MagWells.hpp"
};

class cfgweapons{
    class Rifle;
    class Rifle_Base_F: Rifle {
	class Eventhandlers;
	};
#include "SR98.hpp"
};
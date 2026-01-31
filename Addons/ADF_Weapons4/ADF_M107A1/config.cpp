class CfgPatches
{
	class ADF_M107A1
	{
		units[] = {};
		weapons[] = {"ADFRC_M107A1_50_29_FDE"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core", "adfrc_accessories", "ADF_Weapons","ADF_Weapons2","ADF_Weapons3"};
		fileName = "ADF_M107A1.pbo";
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
class 5Rnd_127x108_Mag;
//////////////////////////////////class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_MuzzleSlot_50;
class asdg_OpticRail1913;
class asdg_UnderSlot_AI_Bipod;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class Mode_FullAuto;
class asdg_SlotInfo;
class recoil_default;
class Mode_SemiAuto;
class compatibleItems;


#include "CfgRecoils.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
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
#include "M107A1.hpp"
#include "Muzzle\Barrett.hpp"
};
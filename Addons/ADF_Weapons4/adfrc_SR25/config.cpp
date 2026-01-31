class CfgPatches
{
 class MSS_SR25
 {
	requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","cba_jr","cba_optics","cba_common","cba_events","MSS_Core"};
	units[] = {};
	weapons[] = {""};
	magazines[] = {""};
	version="0.3";
	author="Brucey";
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
//////////////////////////////////
class asdg_SlotInfo;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot;
class asdg_UnderSlot;
class Rifle_Base_F;
class 10Rnd_762_Mag;

class asdg_MuzzleSlot_762: asdg_MuzzleSlot { // for 9mm Pistol universal mount suppressors
class compatibleItems {
};
};

class recoil_default;
class Mode_SemiAuto;
/*
class CfgMagazines
{
#include "M10\Magazines.hpp"
};

class CfgMagazineWells
{
#include "MagWells.hpp"
};
*/

class CfgWeapons
{
#include "SR25\SR25.hpp"
};
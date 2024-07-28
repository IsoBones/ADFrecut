class CfgPatches
{
	class adfrc_accessories
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core"};
	};
};
class ItemInfo;
class SlotInfo;
class PointerSlot;

#include "Muzzle_Acc_JR.HPP"
#include "Rail_Acc_JR.HPP"

class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryUnderItem_Base_F;
	
	class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Pistol_Base_F;
	class Zasleh2: ItemCore
	{
		scope = 2;
		model = "A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class Zasleh3: ItemCore
	{
		scope = 2;
		model = "A3\weapons_f\data\zasleh3_proxy.p3d";
	};
	
	
	////MUZZLE DEVICES
	class muzzle_snds_M;
	#include "SUREFIRE_RC\SOCOM_RC.HPP"
	#include "Ryder9\Ryder9.HPP"
	#include "Zev\Zev.HPP"
	#include "F88_Silencer\F88_Silencer.HPP"
	
	////WEAPON LIGHTS
	#include "F88LightLasers.HPP"
	#include "X400\X400.HPP"
	
	////Bipods/Grips
	#include "Grip_pod\Grippod.HPP"
	
	
};

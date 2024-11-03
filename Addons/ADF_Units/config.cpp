class CfgPatches{
	class ADF_Units{
		name="ADF_Units";
		author="ADFRC Team";
		requiredAddons[]={
			"A3_Data_F",
			"ADF_Core",
			"ADF_Gear"
		};
		units[]={};
		weapons[]={};
		//fileName = "ADF_Units.pbo";
	};
};

class CfgVehicles{
	#include "Modern/RAR/Infantry.hpp"
	#include "Modern/RAR/Recce.hpp"
	#include "Modern/CDO/Infantry.hpp"
	#include "Modern/CDO/TAG.hpp"
	#include "Modern/CD/Infantry.hpp"
	#include "Modern/CD/Divers.hpp"
	#include "Modern/SASR/Infantry.hpp"
	#include "Modern/SASR/TAG.hpp"
	#include "Modern/Backpacks.hpp"
};

class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
	#include "Modern/RAR/Groups.hpp"
};
};
class CfgPatches{
	class ADF_Units{
		name="ADF_Units";
		author=$STR_ADF_AUTHOR;
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
	#include "ADF_Modern.hpp"
};
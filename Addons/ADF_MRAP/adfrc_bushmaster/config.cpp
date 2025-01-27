class CfgPatches {
	class ADFRC_Bushmaster {
		author           = "ADFRC - Quiggs & Index";
		name             = "Bushmaster";

		requiredVersion  = 1.60;

		requiredAddons[] = { "A3_Data_F_Decade_Loadorder" };
		units[]          = { "ADFRC_F_GWOT_Bushmaster_Unarmed_F", "ADFRC_F_GWOT_Bushmaster_RWS_M2_F" };
		weapons[]        = { };
	};
};

class RCWSOptics;

#include <CfgEffects.hpp>
#include <CfgMoves.hpp>
#include <CfgVehicles.hpp>
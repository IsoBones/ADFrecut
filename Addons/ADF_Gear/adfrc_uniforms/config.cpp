class CfgPatches {
	class ADFRC_Gear_Uniforms {
		requiredVersion  = 0.1;

		requiredAddons[] = { "A3_Weapons_F", "A3_Characters_F_BLUFOR", "ADF_Core" };
		units[]          = {  };
		weapons[]        = { "ADFRC_Uniform_AMCU", "ADFRC_Uniform_AMCU_Rolled", "ADFRC_Uniform_AMCU_Tee" };
	};
};

#include <CfgVehicles.hpp>
#include <CfgWeapons.hpp>
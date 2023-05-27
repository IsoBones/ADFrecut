/* AAF */
class I_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = "ADF Re-Cut";
	// editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "C-130 (Infantry)";
	radarTargetSize = 2;
	side = WEST;
	faction = ADFU;
	crew = I_pilot_F;
	typicalCargo[] = {I_pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_blue_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_blue_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
class I_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = "ADF Re-Cut";
	// editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Plane_Transport_01_vehicle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "C-130 (Vehicle)";
	radarTargetSize = 2;
	side = WEST;
	faction = ADFU;
	crew = I_pilot_F;
	typicalCargo[] = {I_pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_blue_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_blue_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
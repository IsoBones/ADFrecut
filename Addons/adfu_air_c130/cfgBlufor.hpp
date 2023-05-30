/* ADF */
class adfu_air_c130_inf: Plane_Transport_01_infantry_base_F
{
	author = "ADF Re-Cut";
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_infantry_F.jpg";
	scope = 2;
	scopeCurator = 2;
	displayName = "C-130 Hercules 37 Sqn (Infantry)";
	radarTargetSize = 1.8;
	side = TWest;
	faction = ADFU;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_au_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_au_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
class adfu_air_c130_vic: Plane_Transport_01_vehicle_base_F
{
	author = "ADF Re-Cut";
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_vehicle_F.jpg";
	scope = 2;
	scopeCurator = 2;
	displayName = "C-130 Hercules 37 Sqn (Vehicle)";
	radarTargetSize = 2;
	side = TWest;
	faction = ADFU;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_au_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_au_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
/* DPCU */
class adfu_air_c130_inf_auscam: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\data\CfgVehicles\Atlas_B_A_Plane_Transport_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "C-130 Hercules 36 Sqn (Infantry)";
	radarTargetSize = 1.8;
	side = TWest;
	faction = ADFU;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_aucamo_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_aucamo_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
class adfu_air_c130_vic_auscam: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\data\CfgVehicles\Atlas_B_A_Plane_Transport_01_vehicle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "C-130 Hercules 36 Sqn (Vehicle)";
	radarTargetSize = 2;
	side = TWest;
	faction = ADFU;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\adfu_air_c130\data\Plane_Transport_01_body_aucamo_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_wings_aucamo_CO.paa",
		"\adfu_air_c130\data\Plane_Transport_01_interior_CO.paa"
	};
};
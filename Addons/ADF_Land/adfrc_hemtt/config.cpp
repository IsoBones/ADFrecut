class CfgPatches
{
	class adfrc_hemtt
	{
		units[]=
		{
			"ADFRC_hemtt_cargo"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F_Enoch",
			"A3_Soft_F_Gamma",
			"ADFRC_uniform_dpcu",
			"ADF_Core"
			
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_Truck_01_cargo_F;
	class ADFRC_hemtt_cargo: B_Truck_01_cargo_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\B_Truck_01_cargo_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Cargo";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ammo_co.paa","\ADF_Land\adfrc_hemtt\data\Truck_01_cargo_CO.paa"};
	};
	class B_Truck_01_ammo_F;
	class ADFRC_hemtt_ammo: B_Truck_01_ammo_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Truck_01_ammo_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Ammo";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\Truck_01_ammo_CO.paa"};
	};
	class B_Truck_01_fuel_F;
	class ADFRC_hemtt_fuel: B_Truck_01_fuel_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Truck_01_fuel_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Fuel";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_Fuel_CO.paa"};
	};
	class B_Truck_01_covered_F;
	class ADFRC_hemtt_transport: B_Truck_01_covered_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Truck_01_covered_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Transport";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\Truck_01_cargo_co.paa","\ADF_Land\adfrc_hemtt\data\Truck_01_cover_CO.paa"};
	};
	class B_Truck_01_mover_F;
	class ADFRC_hemtt_mover: B_Truck_01_mover_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Truck_01_mover_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Prime Mover";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_mprimer_CO.paa"};
	};
	class B_Truck_01_flatbed_F;
	class ADFRC_hemtt_flatbed: B_Truck_01_flatbed_F
	{
		author = "ADFRC Quiggs";
		editorPreview = "\A3\EditorPreviews_F_enoch\Data\CfgVehicles\B_Truck_01_flatbed_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "HEMTT Flatbed";
		crew = "ADFRC_cavalryman_dpcu";
		typicalCargo[] = {"ADFRC_cavalryman_dpcu"};
		side = 1;
		faction = "ADF";
		textureList[] = {};
		hiddenSelections[]= {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[]= {"\ADF_Land\adfrc_hemtt\data\truck_01_ext_01_co.paa","\ADF_Land\adfrc_hemtt\data\truck_01_ext_02_co.paa","\ADF_Land\adfrc_hemtt\data\Truck_01_ammo_CO.paa"};
	};
};
/* ADF */
class adfu_air_apache: Heli_Attack_03_base_F
{
    author = ADF Re-Cut;
	displayName = "AH-64E Apache Guardian"
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_03_F.jpg";
	scope = 2;
	scopeCurator = 2;
	side = TWest;
	faction = ADFU;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
    textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
    {
        "\adfu_air_apache\Data\Heli_Attack_03_body_CO.paa",
        "\adfu_air_apache\Data\Heli_Attack_03_details_CO.paa",
        "\adfu_air_apache\Data\Heli_Attack_03_adds_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                1200Rnd_Gatling_30mm_Heli_Attack_03_F,
                Laserbatteries
            };
        };
    };

    /* Inventory */
	class TransportMagazines
	{
	};
	class TransportWeapons
	{
	};
};
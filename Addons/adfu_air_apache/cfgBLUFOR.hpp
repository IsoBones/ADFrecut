/* ADF */
class adfu_air_apache: Heli_Attack_03_base_F
{
    author = "ADF Re-Cut";
	displayName = "AH-64E Apache Guardian";
	editorPreview = "adfu_air_apache\preview\adfu_air_apache.jpg";
	scope = 2;
	scopeCurator = 2;
	side = TWest;
	faction = ADFU;
	crew = ADFU_pilot_dpcu;
	typicalCargo[] = {ADFU_pilot_dpcu};
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
                "ADFU_1200Rnd_Chaingun_30mm",
                "Laserbatteries"
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
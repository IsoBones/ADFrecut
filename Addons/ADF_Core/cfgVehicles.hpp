class CfgVehicles
{	class B_Soldier_base_F;
    class ADFRC_Soldier_base_F: B_Soldier_base_F
    {
		scope=1;
		author="$STR_ADF_AUTHOR";
		identityTypes[]= 
		{
            "LanguageENG_F",
            "Head_NATO",
            "NoGlasses"
        };
		side=1;
		faction="ADFRC_F_MD";
		vehicleClass="";
    };
	class adfrc_OPFOR_Soldier_base_F: B_Soldier_base_F
	{
		scope=2;
		author="$STR_ADF_AUTHOR";
		_generalMacro="ADFOPFOR_Soldier_base_F";
		side=0;
		faction="ADF_OPFOR";
	};
	class FLAG_NATO_F;
	class FLAG_UNCUT_F: FLAG_NATO_F
	{
		scope=1;
		displayName="Flag (Uncut)";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adfuncut_flag_co.paa'";
		};
	};
	class FLAG_adfrc_F: FLAG_NATO_F
	{
		scope=2;
		displayName="Flag (Australia)";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adf_flag_co.paa'";
		};
	};
	class FLAG_CSAT_F;
	class FLAG_ADFOPFOR_F: FLAG_CSAT_F
	{
		scope=2;
		displayName="Flag (Australia OPFOR)";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adfopfor_flag_co.paa'";
		};
	};
	class Reflector_Base_F;

      class ADFRC_White_Int_Light : Reflector_Base_F
    {
        author = "$STR_ADFRC_AUTHOR";
        scope = 1;

        class MarkerLights
        {
            class Light_1
            {
                color[] = { 1, 1, 1 };
                ambient[] = { 1.6, 1.6, 1.6 };
                intensity = 600;
                name = "Light_1_pos";
                blinking = 0;
                useFlare = 0;
                flareSize = 0.5;
                flareMaxDistance = 1500;
                activeLight = 1;
                dayLight = 0;
                drawLight = 0;
                irLight = 0;

                class Attenuation
                {
                    start = 0;
                    constant = 0;
                    linear = 10;
                    quadratic = 60;
                    hardLimitStart = 3;
                    hardLimitEnd = 3;
                };
            };
        };
    };

    class ADFRC_Red_Int_Light : ADFRC_White_Int_Light
    {
        author = "$STR_ADFRC_AUTHOR";

        class MarkerLights : MarkerLights
        {
            class Light_1 : Light_1
            {
                color[] = { 1, 0, 0 };
                ambient[] = { 1.6, 0, 0 };
            };
        };
    };
};

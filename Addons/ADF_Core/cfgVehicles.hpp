class CfgVehicles
{	
	//class SoldierWB;
    class B_Soldier_base_F;
	class ADFRC_Soldier_base_F: B_Soldier_base_F{
		displayName="Soldier Base";
		//_generalMacro="ADFRC_Soldier_base_F";
		author="$STR_ADF_AUTHOR";
		scope=1;
		scopeCurator=0;
		nakedUniform="U_BasicBody";
		side=1;
		faction="ADF";
		vehicleClass="Men";
		genericNames="NATOMen";
		identityTypes[]={
            "LanguageENG_F",
            "Head_NATO",
            "NoGlasses"
        };
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
		scope=2;
		displayName="$STR_adfrc_MARKER_UNCUT";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adfuncut_flag_co.paa'";
		};
	};
	class FLAG_adfrc_F: FLAG_NATO_F
	{
		scope=2;
		displayName="$STR_adfrc_MARKER_ADF";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adf_flag_co.paa'";
		};
	};
	class FLAG_CSAT_F;
	class FLAG_ADFOPFOR_F: FLAG_CSAT_F
	{
		scope=2;
		displayName="$STR_adfrc_MARKER_ADFOPFOR";
		class eventHandlers
		{
			init="(_this select 0) setFlagTexture '\ADF_Core\data\adfopfor_flag_co.paa'";
		};
	};
};

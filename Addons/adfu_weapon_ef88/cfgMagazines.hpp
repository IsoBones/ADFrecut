class CfgMagazines
{
	// Arma 3
	class CA_Magazine;
    class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_AUG_Mag_F: 30Rnd_556x45_Stanag
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Reload Tracer (Red) Mag";
        descriptionShort = "Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: EF88" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_F1*/;
		modelSpecial = "\adfu_weapon_ef88\MagProxies\Mag_556x45_AUG_30Rnd.p3d";
		ammo = B_556x45_Ball_Tracer_Red;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\data\AUG_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_F: 30Rnd_556x45_AUG_Mag_F
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Tracer (Red) Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer - Red<br />Rounds: 30<br />Used in: EF88" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_Tracer_F1*/;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_556x45_AUG_Mag_Green_F: 30Rnd_556x45_AUG_Mag_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Reload Tracer (Green) Mag";
		ammo = B_556x45_Ball_Tracer_Green;
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_Green_F: 30Rnd_556x45_AUG_Mag_Green_F
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Tracer (Green) Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracer - Green<br />Rounds: 30<br />Used in: EF88" /*$STR_A3_A_CfgMagazines_30Rnd_556x45_AUG_Mag_Tracer_Green_F1*/;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
};
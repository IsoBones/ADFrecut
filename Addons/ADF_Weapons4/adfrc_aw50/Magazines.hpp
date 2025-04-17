	
			class ADFRC_Mag_5rd_AW50_BallF1 : 5Rnd_127x108_Mag{
			ammo = "B_127x99_Ball";
			modelSpecial = "\ADF_Weapons4\adfrc_aw50\Magazine\ADFRC_AW50_Mag.p3d";
			modelSpecialIsProxy = 1;
			count = 5;
			descriptionshort = "Caliber: .50 Cal <br />Rounds: 5<br />Used in: AW50F";
			displayname = "AW50 Mag 5rnd .50 F1 Ball";
			initspeed = 825;
			lastroundstracer = 0;
			picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
			scope = 2;
			tracersevery = 0;
			mass = 30;
			displaynameshort = "F1 Ball";
			author = "Brucey";
		};
		
			class ADFRC_Mag_5rd_AW50_Tracer : ADFRC_Mag_5rd_AW50_BallF1{
			ammo = "B_127x99_Ball_Tracer_Red";
			displayname = "AW50 Mag 5rnd .50 F1 Tracer";
			initspeed = 825;
			tracersevery = 1;
			displaynameshort = "F1 Tracer";
		};	
		
			class ADFRC_Mag_5rd_AW50_AP : ADFRC_Mag_5rd_AW50_BallF1{
			ammo = "B_127x108_APDS";
			displayname = "AW50 Mag 5rnd .50 AP";
			initspeed = 893;
			displaynameshort = "AP";
		};
		
			class ADFRC_Mag_5rd_AW50_API : ADFRC_Mag_5rd_AW50_BallF1{
			ammo = "B_127x108_APDS";
			displayname = "AW50 Mag 5rnd .50 API";
			initspeed = 893;
			scope = 1;
			displaynameshort = "API";
		};
		
			class ADFRC_Mag_5rd_AW50_MP : ADFRC_Mag_5rd_AW50_BallF1{
			ammo = "B_127x99_Ball";
			displayname = "AW50 Mag 5rnd .50 Multi-Purpose";
			initspeed = 825;
			scope = 1;
			displaynameshort = "MP";
		};
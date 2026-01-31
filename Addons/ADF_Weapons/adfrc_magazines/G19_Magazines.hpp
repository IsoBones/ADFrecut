class ADFRC_15rnd_9MM_BALL_G19 : 16Rnd_9x21_Mag {
			ammo = "ADFRC_9x19_124_FMJ";
			count = 15;
			descriptionshort = "Caliber: 9MM <br />Rounds: 15<br />Used in: G19";
			modelSpecial = "ADF_Weapons\adfrc_g19\Magazine\G19_Mag.p3d";
			modelSpecialIsProxy = 1;
			displayname = "Glock 19 15rd 9mm NATO Ball";
			lastroundstracer = 0;
			picture = "ADF_Weapons\adfrc_g19\data\ui\Gear_ADFRC_G19_Mag.paa";
			scope = 2;
			tracersevery = 0;
			mass = 3.75;
			displaynameshort = "FMJ";
			author = "Brucey";
		};
		
class ADFRC_15rnd_9MM_FRANGE_G19 : ADFRC_15rnd_9MM_BALL_G19 {
			ammo = "ADFRC_9x19_98_FRANG";
			displayname = "Glock 19 15rd 9mm FRANGABLE (Training)";
			mass = 3.75;
			displaynameshort = "FRANG";
		};
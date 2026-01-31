class ADFRC_15rnd_9MM_BALL_USP : 16Rnd_9x21_Mag {
			ammo = "ADFRC_9x19_124_FMJ";
			count = 15;
			descriptionshort = "Caliber: 9MM <br />Rounds: 15<br />Used in: USP";
			modelSpecial = "ADF_Weapons\adfrc_USP\Magazine\USP_Mag.p3d";
			modelSpecialIsProxy = 1;
			displayname = "HK USP 15rd 9mm NATO Ball";
			lastroundstracer = 0;
			picture = "ADF_Weapons\adfrc_g19\data\ui\Gear_ADFRC_G19_Mag.paa";
			scope = 2;
			tracersevery = 0;
			mass = 4.1;
			displaynameshort = "FMJ";
			author = "Brucey";
		};
		
class ADFRC_15rnd_9MM_FRANGE_USP : ADFRC_15rnd_9MM_BALL_USP {
			ammo = "ADFRC_9x19_98_FRANG";
			displayname = "HK USP 15rd 9mm FRANGABLE (Training)";
			mass = 4;
			displaynameshort = "FRANG";
		};
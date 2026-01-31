		//308
					///Ball
		class MSS_10rnd_762_FMJ_AXSR : MSS_10rnd_338NM_SMK_AXSR{
			ammo = "B_762x51_Ball";
			modelSpecial = "MSS\MSS_AI\AXSR\Magazine\MSS_AXSR_Mag_300NM.p3d";
			modelSpecialIsProxy = 1;
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_CO.paa"};
			count = 10;
			descriptionshort = "Caliber: .308 <br />Rounds: 10<br />Used in: AX_SR, AX_Mk3";
			displayname = "AX-SR Magazine 10rnd BLK 7.62x51 Ball";
			initspeed = 792;
			lastroundstracer = 0;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			scope = 2;
			tracersevery = 0;
			mass = 14;
			displaynameshort = "Ball";
			author = "Brucey";
		};
		
		class MSS_10rnd_762_FMJ_AXSR_FDE : MSS_10rnd_762_FMJ_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE 7.62x51 Ball";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
		
		//300NM
		        ///M1163
		class MSS_10rnd_300NM_M1163_AXSR : MSS_10rnd_338NM_SMK_AXSR{
			ammo = "MSS_300NM_M1163";
			modelSpecial = "MSS\MSS_AI\AXSR\Magazine\MSS_AXSR_Mag_300NM.p3d";
			modelSpecialIsProxy = 1;
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_CO.paa"};
			count = 10;
			descriptionshort = "Caliber: .300NM <br />Rounds: 10<br />Used in: AX_SR, AX_Mk3";
			displayname = "AX-SR Magazine 10rnd BLK .300NM M1163";
			initspeed = 944;
			lastroundstracer = 0;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			scope = 2;
			tracersevery = 0;
			mass = 14;
			displaynameshort = "M1163";
			author = "Brucey";
		};
		
		class MSS_10rnd_300NM_M1163_AXSR_FDE : MSS_10rnd_300NM_M1163_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .300NM M1163";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
		
		//338LM
		class MSS_10rnd_338LM_Lap_300_AXSR : MSS_10rnd_338NM_SMK_AXSR{
			ammo = "MSS_338LM_LAP_300GR";
			modelSpecial = "MSS\MSS_AI\AXSR\Magazine\MSS_AXSR_Mag_300NM.p3d";
			modelSpecialIsProxy = 1;
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_CO.paa"};
			count = 10;
			descriptionshort = "Caliber: .338LM <br />Rounds: 10<br />Used in: AX_SR, AX_Mk3";
			displayname = "AX-SR Magazine 10rnd BLK .338LM 300gr Scenar-L";
			initspeed = 820;
			lastroundstracer = 0;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			scope = 2;
			tracersevery = 0;
			mass = 14;
			displaynameshort = "300gr Scenar-L";
			author = "Brucey";
		};
		
		class MSS_10rnd_338LM_Lap_300_AXSR_FDE : MSS_10rnd_338LM_Lap_300_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .338LM 300gr Scenar-L";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
		
							///250gr
		class MSS_10rnd_338LM_Lap_250_AXSR : MSS_10rnd_338LM_Lap_300_AXSR{
			ammo = "MSS_338LM_LAP_250GR";
			displayname = "AX-SR Magazine 10rnd BLK .338LM 250gr Scenar-L";
			initspeed = 905;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			displaynameshort = "250gr Scenar-L";
		};
		
		class MSS_10rnd_338LM_Lap_250_AXSR_FDE : MSS_10rnd_338LM_Lap_250_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .338LM 250gr Scenar-L";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
		
							///AP529 
		class MSS_10rnd_338LM_AP529_AXSR : MSS_10rnd_338LM_Lap_300_AXSR{
			ammo = "MSS_338LM_TAC_AP529";
			displayname = "AX-SR Magazine 10rnd BLK .338LM TAC AP529";
			initspeed = 830;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			displaynameshort = "AP529";
		};
		
		class MSS_10rnd_338LM_AP529_AXSR_FDE : MSS_10rnd_338LM_AP529_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .338LM TAC AP529";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
						///API526 
		class MSS_10rnd_338LM_API526_AXSR : MSS_10rnd_338LM_Lap_300_AXSR{
			ammo = "MSS_338LM_TAC_API526";
			displayname = "AX-SR Magazine 10rnd BLK .338LM TAC API526";
			initspeed = 895;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			displaynameshort = "API526";
		};
		
		class MSS_10rnd_338LM_API526_AXSR_FDE : MSS_10rnd_338LM_API526_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .338LM TAC API526";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
		
						///AP485 
		class MSS_10rnd_338LM_AP485_AXSR : MSS_10rnd_338LM_Lap_300_AXSR{
			ammo = "MSS_338LM_TAC_AP485";
			displayname = "AX-SR Magazine 10rnd BLK .338LM TAC AP485";
			initspeed = 905;
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_Black_CA.paa";
			displaynameshort = "AP485";
		};
		
		class MSS_10rnd_338LM_AP485_AXSR_FDE : MSS_10rnd_338LM_AP485_AXSR{
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] = {"MSS\MSS_AI\AXSR\Textures\MSS_AXSR_Magazine_DE_CO"};
			displayname = "AX-SR Magazine 10rnd FDE .338LM TAC AP485";
			picture = "\MSS\MSS_AI\AXSR\Data\UI\Gear_MSS_AXSR_Mag_FDE_CA.paa";
		};
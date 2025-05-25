class ADFRC_G_MD_RAR
  {
    name="ADF RAR (Modern Era)";
    
    class Infantry {
        name="Infantry (RAR)";
    ///Standard Section
        class ADFRC_G_MD_RAR_Section
        {
			name="Section";
			faction="ADFRC_F_MD";
			side=1;
			class Unit0 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
			};
			class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
			class Unit2 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_LMG";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_LMG";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_LATGunner";
				rank="PRIVATE";
				position[]={0,-30,0};
			};
			class Unit7 {
				side=1;
				vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
				rank="PRIVATE";
				position[]={0,-35,0};
			};
        };
    ///Standard Combat First Aider
        class ADFRC_G_MD_RAR_Section_CFA
        {
			name="Section (CFA)";
			faction="ADFRC_F_MD";
			side=1;
			class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
			class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
			class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
			class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
			class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
			class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
			class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="CORPORAL";
            position[]={0,-30,0};
          };
			class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
	///Standard Marksman
        class ADFRC_G_MD_RAR_Section_DMR
        {
          name="Section (DMR)";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
			class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
			class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
			class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
			class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Marksman";
            rank="CORPORAL";
            position[]={0,-30,0};
          };
			class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };		
    
    
///Standard GSMG
        class ADFRC_G_MD_RAR_Section_GSMG
        {
          name="Section (GSMG)";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
      class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
      class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
      class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
      class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_GSMG";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
      class Unit8
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_GSMGAsst";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };	
    
    
///Standard GSMG
        class ADFRC_G_MD_RAR_Section_MMG
        {
          name="Section (MMG)";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
      class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
      class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
      class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
      class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MMG";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
      class Unit8
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MMGAsst";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };	
    
    
  ///Bricks
        class ADFRC_G_MD_RAR_Brick_GG
        {
          name="Brick (Gun Group)";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
      class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LMG";
            rank="PRIVATE";
            position[]={0,-10,0};
          }; 
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };	
    
      class ADFRC_G_MD_RAR_Brick_AG
        {
          name="Brick (Assault Group)";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="CORPORAL";
            position[]={0,0,0};
          };
      class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
      class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_LATGunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };			
    
    
    ///Specialist Teams
        class ADFRC_G_MD_RAR_Team_Engineer
        {
          name="Engineer Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Engineer";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Engineer";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Mine";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };	
        
    
    
        class ADFRC_G_MD_RAR_Team_GSMG
        {
          name="GSMG Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_GSMGAsst";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_GSMG";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_GSMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };	
        
    
    
    ///Specialist Teams
        class ADFRC_G_MD_RAR_Team_HAT
        {
          name="HAT Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_HATAsst";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_HATGunner";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
        };	
    
    ///Specialist Teams
        class ADFRC_G_MD_RAR_Team_MAT
        {
          name="MAT Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MATAsst";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MATGunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MATGunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
      class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MATAsst";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };	
    
    
    ///Specialist Teams
        class ADFRC_G_MD_RAR_Team_CFA
        {
          name="CFA Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };	
    
    ///Specialist Teams
        class ADFRC_G_MD_RAR_Team_PlatoonHQ
        {
          name="Platoon HQ";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Officer";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Officer";
            rank="LIEUTENANT";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_SectionComm";
            rank="SERGEANT";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Signaller";
            rank="CORPORAL";
            position[]={0,-15,0};
          };
        };	
    
    ///Sentry Teams
        class ADFRC_G_MD_RAR_Sentry
        {
          name="Sentries";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Sidearm";
            rank="CORPORAL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };	
    
    
    ///RECON Section
        class ADFRC_G_MD_RAR_Recon_Section
        {
          name="Recon Section";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_LSW";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_LSW";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
      class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_F";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
      class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_F";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
      class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_F";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
      class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_CFA";
            rank="CORPORAL";
            position[]={0,-35,0};
          };
        };
    
///RECON Team
        class ADFRC_G_MD_RAR_Recon_Team
        {
          name="Recon Team";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_F";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_LSW";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
      class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_CFA";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
    };
  
  
///RECON Sentry
        class ADFRC_G_MD_RAR_Recon_Sentry
        {
          name="Recon Sentries";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Recon_F";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
        };
      
    };
    class Motorized {
      name = "Motorized Infantry";
    class Motorized_Team_RAR {
			name = "Motorized Team - Bushmaster";
			faction = "ADFRC_F_MD";
			side = 1;
			icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
			class Unit2 {
				side = 1;
				vehicle = "adfrc_bushmaster_unarmed_F";
				rank = "SERGEANT";
				position[] = {0, 0, 0};
			};
			class Unit0 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_BrickComm";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_F";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
				rank = "PRIVATE";
				position[] = {6, -5, 0};
			};
			class Unit4 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_MMG";
				rank = "PRIVATE";
				position[] = {-2, -5, 0};
			};
			class Unit5 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_F";
				rank = "PRIVATE";
				position[] = {-4, -5, 0};
			};
			class Unit6 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_CFA";
				rank = "PRIVATE";
				position[] = {-6, -5, 0};
			};
		};
	class Motorized_Team_Armed_RAR {
			name = "Motorized Team - Bushmaster (Armed)";
			faction = "ADFRC_F_MD";
			side = 1;
			icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
			class Unit2 {
				side = 1;
				vehicle = "adfrc_bushmaster_pws127mm_F";
				rank = "SERGEANT";
				position[] = {0, 0, 0};
			};
			class Unit0 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_BrickComm";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_F";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
				rank = "PRIVATE";
				position[] = {6, -5, 0};
			};
			class Unit4 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_MMG";
				rank = "PRIVATE";
				position[] = {-2, -5, 0};
			};
			class Unit5 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_F";
				rank = "PRIVATE";
				position[] = {-4, -5, 0};
			};
			class Unit6 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_Soldier_CFA";
				rank = "PRIVATE";
				position[] = {-6, -5, 0};
			};
		};
	class Motorized_Squad_RAR {
		name = "Motorized Section - Bushmaster";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
		class Unit2 {
			side = 1;
			vehicle = "adfrc_bushmaster_unarmed_F";
			rank = "CORPORAL";
			position[] = {0, 0, 0};
		};
		class Unit0 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_SectionComm";
			rank = "LIEUTENANT";
			position[] = {2, -5, 0};
		};
		class Unit1 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
			rank = "PRIVATE";
			position[] = {4, -5, 0};
		};
		class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LMG";
			rank = "PRIVATE";
			position[] = {2, -8, 0};
		};
		class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Sidearm";
			rank = "PRIVATE";
			position[] = {4, -8, 0};
		};
		class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_BrickComm";
			rank = "CORPORAL";
			position[] = {-2, -5, 0};
		};
		class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LATGunner";
			rank = "PRIVATE";
			position[] = {-2, -8, 0};
		};
		class Unit7 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LMG";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
		};
		class Unit8 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
			rank = "PRIVATE";
			position[] = {-4, -8, 0};
		};
		
	};
	class Motorized_Squad_Armed_RAR {
		name = "Motorized Section - Bushmaster (Armed)";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
		class Unit2 {
			side = 1;
			vehicle = "adfrc_bushmaster_pws127mm_F";
			rank = "SERGEANT";
			position[] = {0, 0, 0};
		};
		class Unit0 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_SectionComm";
			rank = "LIEUTENANT";
			position[] = {2, -5, 0};
		};
		class Unit1 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
			rank = "PRIVATE";
			position[] = {4, -5, 0};
		};
		class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LMG";
			rank = "PRIVATE";
			position[] = {2, -8, 0};
		};
		class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Sidearm";
			rank = "PRIVATE";
			position[] = {4, -8, 0};
		};
		class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_BrickComm";
			rank = "CORPORAL";
			position[] = {-2, -5, 0};
		};
		class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LATGunner";
			rank = "PRIVATE";
			position[] = {-2, -8, 0};
		};
		class Unit7 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_LMG";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
		};
		class Unit8 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_Soldier_Grenadier";
			rank = "PRIVATE";
			position[] = {-4, -8, 0};
		};
	};
	};
    class Mechanized {
      name = "Mechanized Infantry";
    class Mechanized_Team_RAR {
		name = "Mechanized Team - ASLAV-25";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "ADFRC_ASLAV";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
    class Mechanized_Team_Boxer_APC_RAR {
		name = "Mechanized Team - Boxer APC";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "adfrc_boxer_apc";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
    class Mechanized_Team_CRV_I_RAR {
		name = "Mechanized Team - Boxer CRV Block 1";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "adfrc_boxer_crv_late";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
	class Mechanized_Team_CRV_II_RAR {
		name = "Mechanized Team - Boxer CRV Block 2";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "adfrc_boxer_crv_b2";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
	class Mechanized_Team_ASLAVPC_RAR {
		name = "Mechanized Team - ASLAV-PC";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "ADFRC_ASLAV_PC";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
	class Mechanized_Team_ASLAVMAG_RAR {
		name = "Mechanized Team - ASLAV-PC (MAG58)";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "ADFRC_ASLAV_PC_MAG58";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
	class Mechanized_Team_ASLAVRWS_RAR {
		name = "Mechanized Team - ASLAV-PC (RWS)";
		faction = "ADFRC_F_MD";
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
		class Unit0 {
          side = 1;
          vehicle = "ADFRC_ASLAV_PC_RWS";
          rank = "SERGEANT";
          position[] = {0, 0, 0};
		};
		class Unit1 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={2,-10,0};
         };
        class Unit2 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_CFA";
            rank="PRIVATE";
            position[]={4,-15,0};
         };
		class Unit3 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-2,-10,0};
         }; 
		class Unit4 {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="PRIVATE";
            position[]={-4,-15,0};
         };
    };
   };
    class Armored {
      name = "Armor";
      class Armored_Team_Abrams {
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
		name = "Armored Section - Abrams";
        faction = "ADFRC_F_MD";
        side = 1;

        class Unit0 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {10, -10, 0};
        };
      };
	  class Armored_Platoon_Abrams {
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
		name = "Armored Platoon - Abrams";
        faction = "ADFRC_F_MD";
        side = 1;

        class Unit0 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {0, 0, 0};
        };
        class Unit1 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {10, -10, 0};
        };
        class Unit2 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {-10, -10, 0};
        };
		class Unit3 {
            side = 1;
            vehicle = "adfrc_m1a1aim_md";
            rank = "SERGEANT";
            position[] = {-15, -15, 0};
        };
      };
    };
	class Support {
	  name = "Support Infantry";
	  
	  ///Specialist Teams
		class ADFRC_G_MD_RAR_Team_Engineer
        {
          name="Team (Engineer)";
          faction="ADFRC_F_MD";
          side=1;
		  icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Engineer";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Engineer";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Mine";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };
        class ADFRC_G_MD_RAR_Team_MMG
        {
          name="MMG Team";
          faction="ADFRC_F_MD";
          side=1;
		  icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_BrickComm";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_F";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MMG";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_MMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };
	};
	class SpecOps {
	name = "Special Forces (Commandos)";
	///Standard Section
        class ADFRC_G_MD_CDO_Patrol
        {
          name="Patrol";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		  class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Breacher";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
		  class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
		///Standard Combat First Aider
        class ADFRC_G_MD_CDO_Patrol_CFA
        {
          name="Patrol (CFA)";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		  class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CFA";
            rank="CORPORAL";
            position[]={0,-30,0};
          };
		  class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
		///Standard Marksman
       /* class ADFRC_G_MD_CDO_Section_DMR
        {
          name="Section (DMR)";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		  class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_Soldier_Marksman";
            rank="CORPORAL";
            position[]={0,-30,0};
          };
		  class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };		
		*/
		///Standard GSMG
        class ADFRC_G_MD_CDO_Patrol_MMG
        {
          name="Patrol (MMG)";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		  class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_MMG";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
		  class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_MMG";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
		  class Unit8
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };
		///Bricks
        class ADFRC_G_MD_CDO_Team
        {
          name="Team";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CFA";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
		  class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-10,0};
          }; 
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
		class ADFRC_G_MD_CDO_Team_CQB
        {
          name="Team (CQB)";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,0,0};
          };
		  class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CFA";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
		  class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Breacher";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CQB";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
		///Specialist Teams
        class ADFRC_G_MD_CDO_Team_Engineer
        {
          name="Team (Engineer)";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_EOD";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_EOD";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Breacher";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };
        class ADFRC_G_MD_CDO_Team_MMG
        {
          name="MMG Team";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_MMG";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_MMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };
		///Specialist Teams
        class ADFRC_G_MD_CDO_Team_CFA
        {
          name="CFA Team";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CFA";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_CFA";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
		///Sentry Teams
        class ADFRC_G_MD_CDO_Sentry
        {
          name="Sentries";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light_Tee";
            rank="CORPORAL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
		///RECON Section
        class ADFRC_G_MD_CDO_Recon_Section
        {
          name="Recon Section";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		  class Unit4
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
		  class Unit7
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="CORPORAL";
            position[]={0,-35,0};
          };
        };
		///RECON Team
        class ADFRC_G_MD_CDO_Recon_Team
        {
          name="Recon Team";
		  icon = "\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa";
          faction="ADFRC_F_MD";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Scout";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Light";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
		};
	};
};
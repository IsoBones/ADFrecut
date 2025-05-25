class ADFRC_G_MD_CDO
    {
    name="ADF Commando (Modern Era)";

    class Infantry
    {
        name="Infantry (Commando)";
		///Standard Section
        class ADFRC_G_MD_CDO_Patrol
        {
          name="Patrol";
          faction="ADFRC_F_MD";
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
            vehicle="ADFRC_MD_AMCU_CDO_Grenadier";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
		  class Unit5
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
		  class Unit6
          {
            side=1;
            vehicle="ADFRC_MD_AMCU_CDO_Marksman";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
		  icon = "\ADF_Core\insignia\edenicons\2CDO_icon.paa";
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
	class Motorized {
      name = "Motorized Infantry";
    class Motorized_Team_CDO {
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
				vehicle = "ADFRC_MD_AMCU_CDO_TL";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_F";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
				rank = "PRIVATE";
				position[] = {6, -5, 0};
			};
			class Unit4 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_MMG";
				rank = "PRIVATE";
				position[] = {-2, -5, 0};
			};
			class Unit5 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_F";
				rank = "PRIVATE";
				position[] = {-4, -5, 0};
			};
			class Unit6 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_CFA";
				rank = "PRIVATE";
				position[] = {-6, -5, 0};
			};
		};
	class Motorized_Team_Armed_CDO {
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
				vehicle = "ADFRC_MD_AMCU_CDO_TL";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_F";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
				rank = "PRIVATE";
				position[] = {6, -5, 0};
			};
			class Unit4 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_MMG";
				rank = "PRIVATE";
				position[] = {-2, -5, 0};
			};
			class Unit5 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_F";
				rank = "PRIVATE";
				position[] = {-4, -5, 0};
			};
			class Unit6 {
				side = 1;
				vehicle = "ADFRC_MD_AMCU_CDO_CFA";
				rank = "PRIVATE";
				position[] = {-6, -5, 0};
			};
		};
	class Motorized_Squad_CDO {
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
			vehicle = "ADFRC_MD_AMCU_CDO_PatrolCom";
			rank = "LIEUTENANT";
			position[] = {2, -5, 0};
		};
		class Unit1 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
			rank = "PRIVATE";
			position[] = {4, -5, 0};
		};
		class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_MMG";
			rank = "PRIVATE";
			position[] = {2, -8, 0};
		};
		class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Breacher";
			rank = "PRIVATE";
			position[] = {4, -8, 0};
		};
		class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_TL";
			rank = "CORPORAL";
			position[] = {-2, -5, 0};
		};
		class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_EOD";
			rank = "PRIVATE";
			position[] = {-2, -8, 0};
		};
		class Unit7 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_MMG";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
		};
		class Unit8 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
			rank = "PRIVATE";
			position[] = {-4, -8, 0};
		};
		
	};
	class Motorized_Squad_Armed_CDO {
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
			vehicle = "ADFRC_MD_AMCU_CDO_PatrolCom";
			rank = "LIEUTENANT";
			position[] = {2, -5, 0};
		};
		class Unit1 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
			rank = "PRIVATE";
			position[] = {4, -5, 0};
		};
		class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_MMG";
			rank = "PRIVATE";
			position[] = {2, -8, 0};
		};
		class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Breacher";
			rank = "PRIVATE";
			position[] = {4, -8, 0};
		};
		class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_TL";
			rank = "CORPORAL";
			position[] = {-2, -5, 0};
		};
		class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_EOD";
			rank = "PRIVATE";
			position[] = {-2, -8, 0};
		};
		class Unit7 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_MMG";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
		};
		class Unit8 {
			side = 1;
			vehicle = "ADFRC_MD_AMCU_CDO_Grenadier";
			rank = "PRIVATE";
			position[] = {-4, -8, 0};
		};
	};
	};
};
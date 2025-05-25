class ADFRC_G_MD_SASR
{
	name="ADF SASR (Modern Era)";
	class Infantry {
		name="Infantry (SASR)";
	
			///Standard Section
			class ADFRC_G_MD_SASR_Patrol
			{
			name="Patrol";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_PatrolCom";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Breacher";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="PRIVATE";
				position[]={0,-30,0};
			};
			class Unit7
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-35,0};
			};
			};
			
			///Standard Combat First Aider
			class ADFRC_G_MD_SASR_Section_CFA
			{
			name="Section (CFA)";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_PatrolCom";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="CORPORAL";
				position[]={0,-30,0};
			};
			class Unit7
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-35,0};
			};
			};
			
			///Standard Marksman
		/* class ADFRC_G_MD_SASR_Section_DMR
			{
			name="Section (DMR)";
			faction="ADFRC_F_MD";
			side=1;
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_PatrolCom";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4
			{
				side=1;
				vehicle="ADFRC_MD_MC_Soldier_Grenadier";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5
			{
				side=1;
				vehicle="ADFRC_MD_MC_Soldier_Grenadier";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6
			{
				side=1;
				vehicle="ADFRC_MD_MC_Soldier_Marksman";
				rank="CORPORAL";
				position[]={0,-30,0};
			};
			class Unit7
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-35,0};
			};
			};		
			*/
			
			///Standard MMG
			class ADFRC_G_MD_SASR_Section_MMG
			{
			name="Section (MMG)";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_PatrolCom";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_MMG";
				rank="PRIVATE";
				position[]={0,-30,0};
			};
			class Unit7
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_MMG";
				rank="PRIVATE";
				position[]={0,-35,0};
			};
			class Unit8
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-40,0};
			};
			};	
			
			///Bricks
			class ADFRC_G_MD_SASR_Team
			{
			name="Team";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-10,0};
			}; 
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-15,0};
			};
			};	
			
			class ADFRC_G_MD_SASR_Team_CQB
			{
			name="Team (CQB)";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Breacher";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CQB";
				rank="PRIVATE";
				position[]={0,-15,0};
			};
			};				
			
			///Specialist Teams
			class ADFRC_G_MD_SASR_Team_CFA
			{
			name="CFA Team";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={0,-15,0};
			};
			};	
			
			///Sentry Teams
			class ADFRC_G_MD_SASR_Sentry
			{
			name="Sentry";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light_Tee";
				rank="CORPORAL";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light";
				rank="PRIVATE";
				position[]={0,-5,0};
			};
			};	
			
			///RECON Section
			class ADFRC_G_MD_SASR_Recon_Section
			{
			name="Recon Section";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_PatrolCom";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
			class Unit4
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light";
				rank="PRIVATE";
				position[]={0,-20,0};
			};
			class Unit5
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light";
				rank="PRIVATE";
				position[]={0,-25,0};
			};
			class Unit6
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="PRIVATE";
				position[]={0,-30,0};
			};
			class Unit7
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="CORPORAL";
				position[]={0,-35,0};
			};
			};
			
			///RECON Team
			class ADFRC_G_MD_SASR_Recon_Team
			{
			name="Recon Team";
			faction="ADFRC_F_MD";
			side=1;
			icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
			class Unit0
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={0,-0,0};
			};
			class Unit1
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Scout";
				rank="CORPORAL";
				position[]={0,-5,0};
			};
			class Unit2
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light";
				rank="PRIVATE";
				position[]={0,-10,0};
			};
			class Unit3
			{
				side=1;
				vehicle="ADFRC_MD_MC_SASR_Light";
				rank="PRIVATE";
				position[]={0,-15,0};
			}; 
		};
	};
	class Motorized {
		name = "Motorized Infantry";
		class Motorized_Team_SASR {
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
				vehicle = "ADFRC_MD_MC_SASR_TL";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_MC_SASR_CQB";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_Grenadier";
			rank = "PRIVATE";
			position[] = {6, -5, 0};
			};
			class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_MMG";
			rank = "PRIVATE";
			position[] = {-2, -5, 0};
			};
			class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_F";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
			};
			class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_CFA";
			rank = "PRIVATE";
			position[] = {-6, -5, 0};
			};
		};
		class Motorized_Team_Armed_SASR {
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
				vehicle = "ADFRC_MD_MC_SASR_TL";
				rank = "SERGEANT";
				position[] = {2, -5, 0};
			};
			class Unit1 {
				side = 1;
				vehicle = "ADFRC_MD_MC_SASR_CQB";
				rank = "CORPORAL";
				position[] = {4, -5, 0};
			};
			class Unit3 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_Grenadier";
			rank = "PRIVATE";
			position[] = {6, -5, 0};
			};
			class Unit4 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_MMG";
			rank = "PRIVATE";
			position[] = {-2, -5, 0};
			};
			class Unit5 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_F";
			rank = "PRIVATE";
			position[] = {-4, -5, 0};
			};
			class Unit6 {
			side = 1;
			vehicle = "ADFRC_MD_MC_SASR_CFA";
			rank = "PRIVATE";
			position[] = {-6, -5, 0};
			};
		};
	};
	class Mechanized {
		name = "Mechanized Infantry";
		class Mechanized_Team_SASR {
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
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={2,-10,0};
			};
			class Unit2 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={4,-15,0};
			};
			class Unit3 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-2,-10,0};
			}; 
			class Unit4 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-4,-15,0};
			};
		};
		class Mechanized_Team_Boxer_APC_SASR {
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
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={2,-10,0};
			};
			class Unit2 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={4,-15,0};
			};
			class Unit3 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-2,-10,0};
			}; 
			class Unit4 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-4,-15,0};
			};
		};
		class Mechanized_Team_CRV_SASR {
			name = "Mechanized Team - Boxer CRV";
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
				vehicle="ADFRC_MD_MC_SASR_TL";
				rank="SERGEANT";
				position[]={2,-10,0};
			};
			class Unit2 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_CFA";
				rank="PRIVATE";
				position[]={4,-15,0};
			};
			class Unit3 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-2,-10,0};
			}; 
			class Unit4 {
				side=1;
				vehicle="ADFRC_MD_MC_SASR_F";
				rank="PRIVATE";
				position[]={-4,-15,0};
			};
		};
	};
	class Support {
	  name = "Support Infantry";
	  
	  ///Specialist Teams
        class ADFRC_G_MD_SASR_Team_Engineer
        {
          name="Team (Engineer)";
          faction="ADFRC_F_MD";
          side=1;
		  icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_PatrolCom";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_EOD";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_EOD";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_Breacher";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };	
        class ADFRC_G_MD_SASR_Team_MMG
        {
          name="MMG Team";
          faction="ADFRC_F_MD";
          side=1;
		  icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
          class Unit0
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_TL";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_F";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_MMG";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
		  class Unit3
          {
            side=1;
            vehicle="ADFRC_MD_MC_SASR_MMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          }; 
        };
	};
};
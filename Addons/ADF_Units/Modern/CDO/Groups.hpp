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
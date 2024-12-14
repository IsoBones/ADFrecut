class ADFRC_F9 : ADFRC_G19_Base
	{
		author = "Brucey";
		ACE_barrelTwist = 250;
		ACE_barrelLength = 99;
		ACE_overheating_mrbs = 3500; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
		magazines[] = {
			"ADFRC_17rnd_9MM_BALL_F9"
		};
		magazineWell[] = {"CBA_9x19_P320"};
		model = "ADF_Weapons\ADFRC_F9\ADFRC_F9";
		descriptionShort = "Sig Sauer <br/> P320 X-Carry Pro <br/>Caliber: 9MM";
		inertia = 0.75;
		scope=2;
		scopeWeapon=2;
		scopeArsenal = 2;
		picture = "ADF_Weapons\ADFRC_F9\data\ui\Gear_ADFRC_P320_F_ca";
		UiPicture = "ADF_Weapons\ADFRC_F9\data\ui\Gear_ADFRC_P320_F_Preview_ca";
		displayName = "F9 SWS 9MM (P320 X-Carry Pro)";
		discretedistance[] = { 25 };
		discretedistanceinitindex = 1;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		
		
			   
		reloadAction = "MPP_Slow_Reload";
		reloadSound[] = {"ADF_Weapons\core\animsounds\MPP_Slow_Reload.ogg",1,1,30};
		reloadMagazineSound[] = {"ADF_Weapons\core\animsounds\MPP_Slow_Reload.ogg",2,1,30};
		
		class WeaponSlotsInfo {
			mass = 16.875;
			allowedSlots[] = {901};
            class CowsSlot : asdg_PistolOpticMount //Top / optic slot
            {
	iconPinpoint="center";
	iconPosition[] = {0.615,0.238};
	iconScale  = 0.07;
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
};
            class PointerSlot : asdg_PistolUnderRail //side slot
            {
	iconPinpoint="center";
	iconPosition[] = {0.41,0.512};
	iconScale  = 0.25;
	iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
};
		 
		class Library
		{
			libTextDesc = "F9 SWS";
		};
	};
};

class ADFRC_F9_SWS: ADFRC_F9
{
	author = "Brucey";
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = ADFRC_F9_Romeo2;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = ADFRC_F9_FOXTROT2;
		};
	};
};
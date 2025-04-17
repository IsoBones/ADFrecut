class CfgSoundShaders	{

///ANTI MATERIAL
//M107A1	
	
		class ADFRC_M107A1_Closure_SoundShader
	{
		samples[] = {{ "ADF_Weapons4\ADF_M107A1\AM\AM_Closure", 1 }}; // you can use wav/wss/ogg, ogg will have a small delay before playback (not too good for weapons/explosions)
		volume = 0.5;
		range = 5;
	};
	class ADFRC_M107A1_closeShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Close_1", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Close_2", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Close_3", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Close_4", 1 }
		};
		volume = 2.5;
		range = 350;
		rangeCurve = "closeShotCurve";
	};
	class ADFRC_M107A1_midShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_1", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_2", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_3", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_4", 1 }
		};
		volume = 6;
		range = 1000;
		rangeCurve[] = { {300,0}, {400,1}, {800,0.7}, {1000,0} };
	};
	class ADFRC_M107A1_distShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Far_1", 1 }
		};
		volume = 10;
		range = 4000;
		rangeCurve[] = { {800,0}, {1000,1}, {1500,0.8}, {4000,0} };
	};
////SUPRESSED
	class ADFRC_M107A1_silencerShot_closeShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AMS_Close_1", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AMS_Close_2", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AMS_Close_3", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AMS_Close_4", 1 }
		};
		volume = 2;
		range = 350;
		rangeCurve = "closeShotCurve";
	};
	class ADFRC_M107A1_silencerShot_midShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_1", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_2", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_3", 1 }
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Mid_4", 1 }
		};
		volume = 2;
		range = 1000;
		rangeCurve[] = { {300,0}, {400,1}, {800,0.7}, {1000,0} };
	};
	class ADFRC_M107A1_silencerShot_distShot_SoundShader
	{
		samples[] = {
		{ "ADF_Weapons4\ADF_M107A1\AM\AM_Far_1", 1 }
		};
		volume = 1;
		range = 4000;
		rangeCurve[] = { {800,0}, {1000,1}, {1500,0.8}, {4000,0} };
	};
	
	
//EOF	
};
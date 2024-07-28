class CfgSoundShaders
{
	// AUR 90 5.56 mm
	class AUG_Closure_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_closure_01",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_closure_02",1}
		};
		range = 5;
		volume = db-1;
	};
	class AUG_closeShot_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_closeShot_01",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_closeShot_02",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_closeShot_02",3}
		};
		volume = db1;
		range = 50;
		rangeCurve = closeShotCurve;
	};
	class AUG_midShot_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_midShot_01",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_midShot_02",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_midShot_03",1}
		};
		volume = db-2;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class AUG_distShot_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_distShot_01",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_distShot_02",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_distShot_03",1}
		};
		volume = db0;
		range = 1800;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
	  };
	};
	class AUG_tailDistant_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailDistant",1}
		};
		volume = db0;
		range = 2000;
		rangeCurve[] =
		{
			{0,0},
			{600,0.7},
			{2000,1}
		};
		limitation = 1;
	};
	class AUG_tailForest_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_tailHouses_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 1500;
		rangeCurve[] =
		{
			{0,1},
			{250,0.3},
			{1500,0}
		};
		limitation = true;
	};
	class AUG_tailInterior_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailInterior",1}
		};
		volume = interior;
		range = 350;
		rangeCurve[] =
		{
			{0,1},
			{50,0.4},
			{100,0.2},
			{350,0}
		};
		limitation = true;
	};
	class AUG_tailMeadows_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_tailTrees_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_tailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 2000;
		rangeCurve[] =
		{
			{0,1},
			{2000,0}
		};
		limitation = true;
	};
	class AUG_silencerShot_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerShot_01",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerShot_02",1},
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerShot_03",1}
		};
		volume = db0;
		range = 150;
		rangeCurve = closeShotCurve;
	};
	class AUG_silencerTailForest_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerTailForest",1}
		};
		volume = (1-interior/1.4)*forest/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
	class AUG_silencerTailHouses_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerTailHouses",1}
		};
		volume = (1-interior/1.4)*houses/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0}
		};
		limitation = true;
	};
	class AUG_silencerTailInterior_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerTailInterior",1}
		};
		volume = interior;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{50,0.3},
			{150,0}
		};
		limitation = true;
	};
	class AUG_silencerTailMeadows_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerTailMeadows",1}
		};
		volume = (1-interior/1.4)*(meadows/2 max sea/2)/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},{150,0.3}
		};
		limitation = true;
	};
	class AUG_silencerTailTrees_SoundShader
	{
		samples[] =
		{
			{"\ADF_Weapons\adfrc_ef88\Data\Sounds\AUG_silencerTailTrees",1}
		};
		volume = (1-interior/1.4)*trees/3;
		range = 150;
		rangeCurve[] =
		{
			{0,1},
			{150,0.3}
		};
		limitation = true;
	};
};
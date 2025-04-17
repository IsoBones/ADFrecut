class Rifle_Shot_Base_SoundSet;
class Rifle_silencerShot_Base_SoundSet;

class CfgSoundSets
{
///M107A1
	
class ADFRC_M107A1_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"ADFRC_M107A1_Closure_SoundShader","ADFRC_M107A1_closeShot_SoundShader","ADFRC_M107A1_midShot_SoundShader","ADFRC_M107A1_distShot_SoundShader"};
		volumeFactor = 5;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	
class ADFRC_M107A1_Suppressed_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"ADFRC_M107A1_Closure_SoundShader","ADFRC_M107A1_silencerShot_closeShot_SoundShader","ADFRC_M107A1_silencerShot_midShot_SoundShader","ADFRC_M107A1_silencerShot_distShot_SoundShader"};
		volumeFactor = 7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
///EOF
};
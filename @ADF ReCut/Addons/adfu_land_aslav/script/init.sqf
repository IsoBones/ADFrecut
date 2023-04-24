/*
	File: init_base.sqf
	Author: ADF-Uncut

	Description:
	Random Vehicle Names
	
	01 Send Me To Takistan
	02 Adrenaline Rush
	03 Bullryder
	04 Achilles
	05 Agamemnon
	06 Angry Birds
	07 Shebrolet
	08 ANZAC Spirit
	09 Dilligaf
	10 Cant Help Ya
	11 Courage
	12 Vandal
	13 Tiny Teddy
	14 The Sandgroper
	15 Comalgo
	16 Recon Redneck
	17 Cerebral
	18 Circle Work
	19 Bollocks
	20 Hammer Time

	Returns:
	Nothing
*/
if (local _this) then
{
	_baseTextures = [
						"\adfu_land_aslav\data\body1\lavbody_co.paa",
						"\adfu_land_aslav\data\body1\lavbody_2_co.paa",
						"\adfu_land_aslav\data\body1\lavbody_3_co.paa"
					];
	_addTextures =	[
						"\adfu_land_aslav\data\labels\labels_01.paa",
						"\adfu_land_aslav\data\labels\labels_02.paa",
						"\adfu_land_aslav\data\labels\labels_03.paa",
						"\adfu_land_aslav\data\labels\labels_04.paa",
						"\adfu_land_aslav\data\labels\labels_05.paa",
						"\adfu_land_aslav\data\labels\labels_06.paa",
						"\adfu_land_aslav\data\labels\labels_07.paa",
						"\adfu_land_aslav\data\labels\labels_08.paa",
						"\adfu_land_aslav\data\labels\labels_09.paa",
						"\adfu_land_aslav\data\labels\labels_10.paa",
						"\adfu_land_aslav\data\labels\labels_11.paa",
						"\adfu_land_aslav\data\labels\labels_12.paa",
						"\adfu_land_aslav\data\labels\labels_13.paa",
						"\adfu_land_aslav\data\labels\labels_14.paa",
						"\adfu_land_aslav\data\labels\labels_15.paa",
						"\adfu_land_aslav\data\labels\labels_16.paa",
						"\adfu_land_aslav\data\labels\labels_17.paa",
						"\adfu_land_aslav\data\labels\labels_18.paa",
						"\adfu_land_aslav\data\labels\labels_19.paa",
						"\adfu_land_aslav\data\labels\labels_20.paa"
					];

	_texture = _baseTextures call BIS_fnc_selectRandom;
	_addTexture = _addTextures call BIS_fnc_selectRandom;
	
	_this setObjectTexture[0,_texture];
	_this setObjectTexture[2,_addTexture];
};
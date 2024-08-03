/*
	File: init_base.sqf
	Author: ADF-Uncut

	Description:
	Random Vehicle Names, but only if we don't have an override from the server.
	
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
//Check if we don't have a server set override:
_markingSet = _this getVariable ["PlatoonMarkings", 0];
if ((_markingSet isEqualTo 0) and (local _this)) then
{
	_baseTextures = [
						"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture1_co.paa",
						"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture2_co.paa",
						"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture3_co.paa",
						"\ADF_Land\adfrc_aslav\data\ASLAV-25\texture4_co.paa"
					];
	_addTextures =	[
						"\ADF_Land\adfrc_aslav\data\labels\labels_01.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_02.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_03.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_04.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_05.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_06.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_07.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_08.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_09.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_10.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_11.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_12.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_13.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_14.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_15.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_16.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_17.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_18.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_19.paa",
						"\ADF_Land\adfrc_aslav\data\labels\labels_20.paa"
					];

	//_texture = _baseTextures call BIS_fnc_selectRandom;
	_addTexture = _addTextures call BIS_fnc_selectRandom;
	
	//_this setObjectTexture[4,_texture];
	_this setObjectTexture[4,_addTexture];
};
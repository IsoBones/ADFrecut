/*
	File: init_base.sqf
	Author: ADF-Uncut

	Description:
	Random Heli Numbers and Names
	Setup Medevac Texture
	Ensures Pilot Doors Are Closed, Random Side Door Position, addActions for opening side doors from cargo.

	101		A15-101		Boomerang
	102		A15-102		Avenger
	103		A15-103		Ocelot
	104		A15-104		Saturn
	105		A15-105		Warden
	106		A15-106		Vanquish
	107		A15-107		Falcon
	108		A15-108		Sundance
	109		A15-109		Assassin
	110		A15-110		Wombat
	111		A15-111		Bushranger
	112		A15-112 	Spectre
	113		A15-113		Spartan
	114		A15-114		Sawbone
	115		A15-115		Angel
	116		A15-116		Peacemaker
	117		A15-117		Noble

	201		A25-201		Sabre
	202		A25-202		Vengeance
	203		A25-203		Kobra
	204		A25-204		Yowie
	205		A25-205		Fox Pigeon
	206		A25-206		Splash
	207		A25-207		Vampyre
	208		A25-208		Skyhawk
	209 	A25-209		Mustang
	210		A25-210		Quantum
	211		A25-211		Dropbear
	212		A25-212 	Pegasus
	213		A25-213		Excalibur
	214		A25-214		Phoenix
	215		A25-215		Dragoon
	216		A25-216		Triage
	217		A25-217		Remedy
	218		A25-218		Rightous
	219		A25-219		Lawman

	Returns:
	Nothing
*/
if (local _this) then
{
	_arrayMarkings =
	[
		"\adf_air\adfrc_blackhawk\data\labels\labels_101_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_102_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_103_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_104_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_105_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_106_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_107_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_108_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_109_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_110_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_111_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_112_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_113_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_201_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_202_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_203_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_204_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_205_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_206_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_207_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_208_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_209_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_210_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_211_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_212_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_214_ca.paa",
		"\adf_air\adfrc_blackhawk\data\labels\labels_215_ca.paa"
	];

	_heliCamo =  _arrayMarkings call BIS_fnc_selectRandom;
	_this setObjectTexture [4, _heliCamo];

	// Ensure Pilot Doors Are Closed
	_this animateDoor ['door_CoPilot_Open', 0];
	_this animateDoor ['door_Pilot_Open', 0];
};

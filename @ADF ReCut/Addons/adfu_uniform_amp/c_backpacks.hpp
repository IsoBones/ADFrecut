	class B_assaultpack_Base;
	class B_Carryall_Base;
	class B_Kitbag_Base;

// ASSAULTPACKS - BASE AND MEDIC
	class ADFU_assaultpack_black: B_assaultpack_Base
	{
		scope = public;
		displayName = "ADF AssaultPack [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Black.paa"};
		maximumLoad = 220;
		class TransportItems{};
		class TransportMagazines{};
	};
	class ADFU_assaultpack_green: ADFU_assaultpack_black
	{
		scope = public;
		displayName = "ADF AssaultPack [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Green.paa"};
	};
	class ADFU_assaultpack_tan: ADFU_assaultpack_black
	{
		scope = public;
		displayName = "ADF AssaultPack [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Tan.paa"};
	};
	class ADFU_assaultpack_amp: ADFU_assaultpack_black
	{
		scope = public;
		displayName = "ADF AssaultPack [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Cam.paa"};
	};
	class ADFU_assaultpack_black_medic: B_assaultpack_Base
	{
		scope = public;
		displayName = "ADF AssaultPack Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Black-M.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class ADFU_assaultpack_green_medic: ADFU_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF AssaultPack Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Green-M.paa"};
	};
	class ADFU_assaultpack_tan_medic: ADFU_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF AssaultPack Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Tan-M.paa"};
	};
	class ADFU_assaultpack_amp_medic: ADFU_assaultpack_black_medic
	{
		scope = public;
		displayName = "ADF AssaultPack Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\AssaultPack-Cam-M.paa"};
	};


// KITBAGS - BASE AND MEDIC
	class ADFU_kitbag_black: B_Kitbag_Base
	{
		scope = public;
		displayName = "ADF Kitbag [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Black.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class ADFU_kitbag_green: ADFU_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Green.paa"};
	};
	class ADFU_kitbag_tan: ADFU_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Tan.paa"};
	};
	class ADFU_kitbag_amp: ADFU_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Cam.paa"};
	};
	class ADFU_kitbag_black_medic: ADFU_kitbag_black
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Black-M.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class ADFU_kitbag_green_medic: ADFU_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Green-M.paa"};
	};
	class ADFU_kitbag_tan_medic: ADFU_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Tan-M.paa"};
	};
	class ADFU_kitbag_amp_medic: ADFU_kitbag_black_medic
	{
		scope = public;
		displayName = "ADF Kitbag Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\KitBag-Cam-M.paa"};
	};

// CARRYALL BACKAPCKS
	class ADFU_carryall_black: B_Carryall_Base
	{
		scope = public;
		displayName = "ADF Carryall [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Black.paa"};
		class TransportItems{};
		class TransportMagazines{};
	};
	class ADFU_carryall_green: ADFU_carryall_black
	{
		scope = public;
		displayName = "ADF Carryall [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Green.paa"};
	};
	class ADFU_carryall_tan: ADFU_carryall_black
	{
		scope = public;
		displayName = "ADF Carryall [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Tan.paa"};
	};

	class ADFU_carryall_amp: ADFU_carryall_black
	{
		scope = public;
		displayName = "ADF Carryall [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Cam.paa"};
	};
	class ADFU_carryall_black_medic: ADFU_carryall_black
	{
		scope = public;
		displayName = "ADF Carryall Medic [Black]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Black-M.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 15; };
			class _xx_Medikit { name = "Medikit"; count = 1; };
		};
		class TransportMagazines{};
	};
	class ADFU_carryall_green_medic: ADFU_carryall_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [Green]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Green-M.paa"};
	};
	class ADFU_carryall_tan_medic: ADFU_carryall_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [Tan]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Tan-M.paa"};
	};
	class ADFU_carryall_amp_medic: ADFU_carryall_black_medic
	{
		scope = public;
		displayName = "ADF Carryall Medic [AMP]";
		hiddenSelectionsTextures[] = {"\ADFU_uniform_amp\Backpacks\CarryAll-Cam-M.paa"};
	};
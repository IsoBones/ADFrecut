class CfgPatches
{
	class ADFU_weaponswitch
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CBA_XEH"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ADFU_weaponswitch
		{
			list[]=
			{
				"ADFU_weaponswitch"
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class ADFU_weaponswitch
	{
		clientInit="call ('\ADFU_weaponswitch\script\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};

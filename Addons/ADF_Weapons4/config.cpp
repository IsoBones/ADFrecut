///WEAPONS FOR LR UPDATE
///To be packed & released on only on dev branch prior to the release of Long Range update. 
class CfgPatches
{
	class ADF_Weapons4
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core","ADF_Weapons","ADF_Weapons2"};
		fileName = "ADF_Weapons4.pbo";
	};
};


class CfgMovesBasic
{
    class DefaultDie;

    class ManActions
	{
        adfrc_GestureReloadLRAP="adfrc_GestureReloadLRAP"; // Would reccommend changing the naming convention, just so nothing overlaps
        adfrc_GestureRechamberLRAP="adfrc_GestureRechamberLRAP";
		adfrc_GestureReloadM107="adfrc_GestureReloadM107"; // Would reccommend changing the naming convention, just so nothing overlaps
    };

    class Actions
	{
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions: ManActions
		{
            adfrc_GestureReloadLRAP[]=
			{
				"adfrc_GestureReloadLRAP",
				"Gesture"
			};
            adfrc_GestureRechamberLRAP[]=
			{
				"adfrc_GestureRechamberLRAP",
				"Gesture"
			};
			adfrc_GestureReloadM107[]=
			{
				"adfrc_GestureReloadM107",
				"Gesture"
			};
        };
        class RifleProneActions: RifleBaseStandActions
		{
            adfrc_GestureReloadLRAP[]=
			{
				"adfrc_GestureReloadLRAP_Prone",
				"Gesture"
			};
            adfrc_GestureRechamberLRAP[]=
			{
				"adfrc_GestureRechamberLRAP_Prone",
				"Gesture"
			};
			adfrc_GestureReloadM107[]=
			{
				"adfrc_GestureReloadM107_Prone",
				"Gesture"
			};
        };
		
		
        class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
            adfrc_GestureReloadLRAP[]=
			{
				"adfrc_GestureReloadLRAP_Context",
				"Gesture"
			};
            adfrc_GestureRechamberLRAP[]=
			{
				"adfrc_GestureRechamberLRAP_Context",
				"Gesture"
			};
			adfrc_GestureReloadM107[]=
			{
				"adfrc_GestureReloadM107_Context",
				"Gesture"
			};
        };
        class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
            adfrc_GestureReloadLRAP[]=
			{
				"adfrc_GestureReloadLRAP_Context",
				"Gesture"
			};
            adfrc_GestureRechamberLRAP[]=
			{
				"adfrc_GestureRechamberLRAP_Context",
				"Gesture"
			};
			adfrc_GestureReloadM107[]=
			{
				"adfrc_GestureReloadM107_Context",
				"Gesture"
			};
            class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
                adfrc_GestureReloadLRAP[]=
				{
					"adfrc_GestureReloadLRAP_Context",
					"Gesture"
				};
                adfrc_GestureRechamberLRAP[]=
				{
					"adfrc_GestureRechamberLRAP_Context",
					"Gesture"
				};
				adfrc_GestureReloadM107[]=
				{
					"adfrc_GestureReloadM107_Context",
					"Gesture"
				};
            };
        };
    };
};

	
class CfgGesturesMale
{
	class Default;

	class States
	{
		class GestureReloadBase;
		class adfrc_GestureReloadLRAP: GestureReloadBase
		{
			file="\adf_weapons4\anims\LRAP\GestureReloadLRAP.rtm";
			speed=0.20;
			rightHandIKCurve[]=
			{
				0.60, 1,
				0.65, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.70, 0,
				0.75, 1,
				1, 1
			};
		};
		class adfrc_GestureReloadLRAP_Prone: GestureReloadBase
		{
			file="\adf_weapons4\anims\LRAP\GestureReloadLRAP_Prone.rtm";
			speed=0.20;
			rightHandIKCurve[]=
			{
				0.60, 1,
				0.65, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.70, 0,
				0.75, 1,
				1, 1
			};
		};
		class adfrc_GestureReloadLRAP_Context: adfrc_GestureReloadLRAP
		{
			mask="handsWeapon_context";
		};
		class adfrc_GestureRechamberLRAP: GestureReloadBase
		{
			file="\adf_weapons4\anims\LRAP\GestureRechamberLRAP.rtm";
			speed=0.62;
			//speed=0.55;
			enableOptics=1;
			rightHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				1, 1
			};
		};
		class adfrc_GestureRechamberLRAP_Prone: GestureReloadBase
		{
			file="\adf_weapons4\anims\LRAP\GestureRechamberLRAP_Prone.rtm";
			speed=0.62;
			enableOptics=1;
			rightHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				1, 1
			};
		};
		class adfrc_GestureRechamberLRAP_Context: adfrc_GestureRechamberLRAP
		{
			mask="handsWeapon_context";
		};
		
		class adfrc_GestureReloadM107: GestureReloadBase
		{
			file="adf_weapons4\anims\M107\GestureReloadM107.rtm";
			speed=-6;
			rightHandIKCurve[]=
			{
				0.65, 1,
				0.70, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.65, 0,
				0.70, 1,
				1, 1
			};
		};
		class adfrc_GestureReloadM107_Prone: GestureReloadBase
		{
			file="adf_weapons4\anims\M107\GestureReloadM107_Prone.rtm";
			speed=-6;
			rightHandIKCurve[]=
			{
				0.65, 1,
				0.70, 0,
				0.95, 0,
				1, 1
			};
			leftHandIKCurve[]=
			{
				0, 1,
				0.05, 0,
				0.65, 0,
				0.70, 1,
				1, 1
			};
		};
		class adfrc_GestureReloadM107_Context: adfrc_GestureReloadM107
		{
			mask="handsWeapon_context";
		};
	};
};

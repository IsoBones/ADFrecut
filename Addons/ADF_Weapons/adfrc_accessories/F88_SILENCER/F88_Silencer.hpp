class ADFRC_f88_muzzle_snds: muzzle_snds_M
	{
		scope=2;
		displayName="ASE Utra Suppressor (Black)";
		picture="\ADF_Weapons\adfrc_accessories\F88_SILENCER\UI\silencer_ca.paa";
		model="\ADF_Weapons\adfrc_accessories\F88_SILENCER\F88_SILENCER_M";
		descriptionShort="145mm ASE CQBS-BL";
		author="$STR_ADF_AUTHOR";
		class ItemInfo: ItemInfo
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.25;
				audibleFire=0.2;
				visibleFireTime=0.44999999;
				audibleFireTime=0.44999999;
				cost=1;
				typicalSpeed=1.1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="0.9f";
				recoilProneCoef="0.9f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="zaslehDir";
				effectname="CaselessAmmoCloud";
				positionname="zaslehPoint";
			};
		};
	};
	class ADFRC_f88_muzzle_snds_tan: ADFRC_f88_muzzle_snds
	{
		scope=2;
		displayName="ASE Utra Suppressor (Sand)";
		model="\ADF_Weapons\adfrc_accessories\F88_SILENCER\F88_SILENCER_M_AMP";
		author="$STR_ADF_AUTHOR";
	};
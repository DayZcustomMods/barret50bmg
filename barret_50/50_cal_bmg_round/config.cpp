class CfgPatches
{
	class FF_ammo
	{
		units[]={"bullet_50","ammo_50"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
		magazines[]=
		{
			"bullet_50"
		};
		ammo[]=
		{
			"ammo_50",
		};
	};
};
class cfgAmmoTypes
{
	class bullet_50
	{
		name="bullet_50";
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class Bullet_Base;
	class bullet_50: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762";
		round="FxRound_bullet_50";
		spawnPileType="ammo_50";
		hit=12.1;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=1000;
		typicalSpeed=1100;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		weight=0.012;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=5;
		class DamageApplied
        {
            type="Projectile";
            dispersion=0;
            bleedThreshold=1;
            class Health
            {
                damage=600;
            };
            class Blood
            {
                damage=600;
            };
            class Shock
            {
                damage=300;
            };
        };
	};
};
class CfgVehicles
{
	class FxRound;
	class FxCartridge;
	class FxRound_bullet_50: FxCartridge
	{
		model="custom_models\barret_50\50_cal_bmg_round\bullet_50.p3d";
	};
	class Box_Base;
	class AmmoBox_50_BMG_20Rnd: Box_Base
	{
		scope=2;
		displayName="50 BMG Ammo Box";
		descriptionShort="20 Round 50 BMG Ammo Box";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[]={1,1};
		rotationFlags=17;
		weight=40;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"custom_models\barret_50\50_cal_bmg_round\data\50_AmmoBox_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\ammunition\data\45cal_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\45cal_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class ammo_50
			{
				value=20;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class ammo_50: Ammunition_Base
	{
		scope=2;
		displayName="50 BMG Ammo";
		descriptionShort="50 BMG Ammo GET SOME!";
		model="custom_models\barret_50\50_cal_bmg_round\ammo_50.p3d";
		iconCartridge=3;
		itemSize[]={2,1};
        weight=9;
        count=20;
		ammo="bullet_50";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"custom_models\barret_50\50_cal_bmg_round\data\bullet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"custom_models\barret_50\50_cal_bmg_round\data\bullet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"custom_models\barret_50\50_cal_bmg_round\data\bullet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"custom_models\barret_50\50_cal_bmg_round\data\bullet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"custom_models\barret_50\50_cal_bmg_round\data\bullet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

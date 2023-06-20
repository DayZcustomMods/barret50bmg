#define _ARMA_

class CfgPatches
{
	class barret50
	{
		units[] = {};
		weapons[] = {"barret50"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
	};
};
class CfgMods
{
	class barret50
	{
		dir = "barret50";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "barret50";
		credits = "";
		author = "";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"custom_models\barret_50\scripts\4_World"};
			};
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class SVD_Base;
	class barret50_Base: SVD_Base
	{
		scope = 0;
		displayName = "Barret 50";
		descriptionShort = "The Barrett M82 is a bolt-action rifle chambered in .50 BMG";
		model = "custom_models\barret_50\barret50.p3d";
		weight = 11000;
		absorbency = 0;
		initSpeedMultiplier = 1.47;
		itemSize[] = {8,3};
		repairableWithKits[] = {1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0,0,0,0,0};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic","HuntingOptic","MosinScope"};
		attachments[] = {"weaponOpticsHunting"};
		WeaponLength = 1.4;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"ammo_50"};
		magazines[] = {"Mag_barret50"};
		magazineSwitchTime = 1;
		ejectType = 1;
		recoilModifier[] = {3.0,3.0,1.6};
		swayModifier[] = {2.3,2.5,1.0};
		simpleHiddenSelections[] = {};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadSVD";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"barret50_Shot_SoundSet","barret50_Shot_SoundSet","barret50_Shot_SoundSet"};
			soundSetShotExt[] = {{"barret50_Suppressed_Shot_SoundSet","barret50_Suppressed_Shot_SoundSet","barret50_Suppressed_Shot_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 1.4;
			reloadAction = "ReloadSVD";
			shotAction = "Reloadcz527Shot";
			dispersion = 0.0011396;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"custom_models\barret_50\data\barret.rvmat"}},{0.7,{"custom_models\barret_50\data\barret.rvmat"}},{0.5,{"custom_models\barret_50\data\barret_damage.rvmat"}},{0.3,{"custom_models\barret_50\data\barret_damage.rvmat"}},{0.0,{"custom_models\barret_50\data\barret_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class barret50: barret50_Base
	{
		scope = 2;
		displayName = "M82 Barret";
		hiddenSelectionsTextures[] = {"custom_models\barret_50\data\Barret_co.paa"};
		hiddenSelectionsMaterials[] = {"custom_models\barret_50\data\barret.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_barret50: Magazine_Base
	{
		scope = 0;
		displayName = "Barret 50 Magazine";
		descriptionShort = "This magazine can hold up to 10 Rounds of .50 for the M82 Barret sniper rifle";
		model = "custom_models\barret_50\M82_Mag.p3d";
		weight = 250;
		itemSize[] = {1,1};
		mass = 10;
		count = 10;
		ammo = "bullet_50";
		ammoItems[] = {"ammo_50"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"custom_models\barret_50\data\barret.rvmat"}},{0.7,{"custom_models\barret_50\data\barret.rvmat"}},{0.5,{"custom_models\barret_50\data\barret_damage.rvmat"}},{0.3,{"custom_models\barret_50\data\barret_damage.rvmat"}},{0.0,{"custom_models\barret_50\data\barret_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class barret50_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_Close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class barret50_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_Mid",1}};
		volume = 0.5;
		range = 1000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class barret50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_Far",1}};
		volume = 0.2;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class barret50_Suppressed_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_SD_CloseS",1}};
		volume = 0.2;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class barret50_Suppressed_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_SD_FarS",1}};
		volume = 0.1;
		range = 100;
		rangeCurve[] = {{0,0.2},{50,1},{100,0},{200,0}};
	};
	class barret50_Suppressed_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"custom_models\barret_50\sounds\M82_SD_FarS",1}};
		volume = 0.1;
		range = 200;
		rangeCurve[] = {{0,0.2},{50,1},{100,0},{200,0}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class barret50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"barret50_Shot_SoundShader","barret50_midShot_SoundShader","barret50_distShot_SoundShader"};
	};
	class barret50_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"barret50_Suppressed_Shot_SoundShader","barret50_Suppressed_midshot_SoundShader","barret50_Suppressed_distShot_SoundShader"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyM82_Mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "custom_models\barret_50\M82_Mag.p3d";
	};
};

class CfgPatches{
	class core_config_main{
		units[]={
			#include "cfgpatches\vehicles.hpp"
			#include "cfgpatches\vehicles_backgear.hpp"
			#include "cfgpatches\vehicles_storage.hpp"
			#include "cfgpatches\vehicles_explosives.hpp"
		};
		weapons[]={
			#include "cfgpatches\weapons.hpp"
			#include "cfgpatches\weapons_equipment.hpp"
			#include "cfgpatches\weapons_headgear.hpp"
			#include "cfgpatches\weapons_uniforms.hpp"
			#include "cfgpatches\weapons_vests.hpp"
		};
		requiredVersion=0.1;
		requiredAddons[]={
			"core_patch_vanilla",
			"core_patch_gm",
			"core_patch_sog",
			"core_patch_ace",
			"core_patch_cba3",
			
			"A3_Dubbing_Radio_F",
			"A3_Dubbing_Radio_F_EXP",
			"A3_Dubbing_Radio_F_Enoch",
			"A3_Data_F_Enoch_Loadorder",
			
			"ace_common",
			"tfar_core",
			"tfar_static_radios",
			"tfar_backpacks",
			"tfar_handhelds"
		};
	};
};

////// Faction and Editor Classes //////
class CfgFactionClasses{
	class ORD_Faction_Empty_Vehicles{
		displayName = "[Base] Empty Vehicles";
	};
};
class CfgEditorCategories{
	class ORD_EdCat_Communication{
		displayName = "Communication";
	};
	class ORD_EdCat_Mines_Explosives{
		displayName = "Mines and Explosives";
	};
	class ORD_EdCat_Vehicles{
		displayName = "[Base] Empty Vehicles";
	};
};
class CfgEditorSubcategories{
	// Other
	class ORD_EdSubCat_MissionItems{
		displayName = "Mission Items";
	};
	class ORD_EdSubCat_Money{
		displayName = "Money";
	};
	class ORD_EdSubCat_Equipment{
		displayName = "Equipment";
	};
	class ORD_EdSubCat_Headgear{
		displayName = "Headgear";
	};
	class ORD_EdSubCat_Objects{
		displayName = "Objects";
	};
	class ORD_EdSubCat_Mines{
		displayName = "Mines";
	};
	class ORD_EdSubCat_Explosives{
		displayName = "Explosives";
	};
	class ORD_EdSubCat_Storage_Empty{
		displayName = "Storage (Empty)";
	};
	
	// Vehicles
	class ORD_EdSubCat_Wheeled{
		displayName = "Wheeled";
	};
	class ORD_EdSubCat_Tracked{
		displayName = "Tracked";
	};
	class ORD_EdSubCat_Helicopter{
		displayName = "Helicopters";
	};
	class ORD_EdSubCat_Aircraft{
		displayName = "Aircraft";
	};
	class ORD_EdSubCat_CSW{
		displayName = "Crew Served Weapons";
	};
	class ORD_EdSubCat_Static{
		displayName = "Statics";
	};
};
class CfgVehicleClasses{
	// Other
	class ORD_VehClass_Communication{
		displayName="Communication";
	};
	class ORD_VehClass_Storage_Empty{
		displayName="Storage (Empty)";
	};
	class ORD_VehClass_Storage_Support{
		displayName="Storage (Support)";
	};
	class ORD_VehClass_Mines{
		displayName="Mines";
	};
	class ORD_VehClass_Explosives{
		displayName="Explosives";
	};
	
	// Vehicles
	class ORD_VehClass_Tracked{
		displayName = "Tracked";
	};
	class ORD_VehClass_Wheeled{
		displayName = "Wheeled";
	};
	class ORD_VehClass_Helicopter{
		displayName = "Helicopter";
	};
	class ORD_VehClass_Naval{
		displayName = "Naval";
	};
	class ORD_VehClass_CSW{
		displayName = "Crew Served Weapons";
	};
	class ORD_VehClass_Static{
		displayName = "Static";
	};
	class ORD_VehClass_Aircraft{
		displayName = "Aircraft";
	};
	class ORD_VehClass_Unmanned{
		displayName = "Unmanned";
	};
};

////// Config //////
class CfgRecoils{
	// Base
	class recoil_default;
	class recoil_empty;
	class ord_recoil_base_pistol: recoil_default{
		muzzleOuter[] = {0.2,1,0.2,0.3};
		kickBack[] = {0.03,0.06};
		temporary = 0.03;
	};
	class ord_recoil_base_smg: recoil_default{
		muzzleOuter[] = {0.1,0.4,0.2,0.3};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
	class ord_recoil_base_rifle: recoil_default{
		muzzleOuter[] = {0.5,2,0.5,0.5};
		kickBack[] = {0.03,0.08};
		temporary = 0.015;
	};
	class ord_recoil_base_lmg: recoil_default{
		muzzleOuter[] = {0.4,0.6,0.6,0.2};
		kickBack[] = {0.03,0.06};
		temporary = 0.005;
	};
	class ord_recoil_base_launcher: recoil_default{
		muzzleOuter[] = {0.2,0.4,0.3,0.2};
		kickBack[] = {0.08,0.1};
		temporary = 0.2;
	};
	
	// Generic
	class ord_recoil_rifle_heavy: ord_recoil_base_rifle{
		kickBack[] = {0.044,0.077};
		muzzleInner[] = {0,0,0.11,0.11};
		muzzleOuter[] = {0.44,1.65,0.66,0.44};
		permanent = 0.11;
		temporary = 0.011;
	};
	
	// 9x19mm
	class ord_recoil_9x19mm_fn_hp: ord_recoil_base_pistol{
		muzzleOuter[] = {0.2,1.1,0.2,0.3};
		kickBack[] = {0.05,0.07};
		temporary = 0.02;
		permanent = 0.03;
	};
	class ord_recoil_9x19mm_fm_fmk3: ord_recoil_base_smg{
		muzzleOuter[] = {0.2,0.2,0.3,0.15};
		kickBack[] = {0.022,0.031};
		temporary = 0.012;
		permanent = 0.045;
	};
	class ord_recoil_9x19mm_fm_fmk3_fold: ord_recoil_base_smg{
		muzzleOuter[] = {0.4,0.4,0.6,0.3};
		kickBack[] = {0.044,0.062};
		temporary = 0.012;
		permanent = 0.1;
	};
	class ord_recoil_9x19mm_fm_pam: ord_recoil_base_smg{
		muzzleOuter[] = {0.2,0.4,0.4,0.2};
		kickBack[] = {0.01,0.04};
		temporary = 0.015;
		permanent = 0.045;
	};
	class ord_recoil_9x19mm_iwi_uzi: ord_recoil_base_smg{
		muzzleOuter[] = {0.2,0.4,0.4,0.15};
		kickBack[] = {0.03,0.04};
		temporary = 0.015;
		permanent = 0.045;
	};
	class ord_recoil_9x19mm_sterling_l2a3: ord_recoil_base_smg{
		muzzleOuter[] = {0.1,0.4,0.3,0.2};
		kickBack[] = {0.03,0.06};
		temporary = 0.02;
		permanent = 0.045;
	};
	
	// 7.62x51mm NATO
	class ord_recoil_762x51mm_bm59: ord_recoil_base_rifle{
		muzzleOuter[] = {0.35,1.35,0.5,0.4};
		kickBack[] = {0.023,0.035};
		temporary = 0.015;
		permanent = 0.075;
	};
	class ord_recoil_762x51mm_fn_fal_50_00: ord_recoil_base_rifle{
		muzzleOuter[] = {0.2,0.5,0.25,0.3};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.05,0.06};
		temporary = 0.035;
		permanent = 0.08;
	};
	class ord_recoil_762x51mm_fn_fal_50_63: ord_recoil_base_rifle{
		muzzleOuter[] = {0.225,0.55,0.275,0.33};
		muzzleInner[] = {0,0,0.11,0.11};
		kickBack[] = {0.055,0.066};
		temporary = 0.0358;
		permanent = 0.088;
	};
	class ord_recoil_762x51mm_fn_mag: ord_recoil_base_lmg{
		muzzleOuter[] = {0.4,0.5,0.6,0.2};
		kickBack[] = {0.03,0.045};
		temporary = 0.01;
	};
	class ord_recoil_762x51mm_m14: ord_recoil_base_rifle{
		muzzleOuter[] = {0.35,1.35,0.5,0.4};
		kickBack[] = {0.023,0.035};
		temporary = 0.015;
		permanent = 0.075;
	};
	
	// 11.43x23mm / .45 ACP
	class ord_recoil_45acp_m1911: ord_recoil_base_pistol{
		muzzleOuter[] = {0.3,1.5,0.3,0.4};
		kickBack[] = {0.02,0.04};
		temporary = 0.03;
		permanent = 0.05;
	};
	
	// Launchers
	class ord_recoil_72mm_9k32: ord_recoil_base_launcher{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		kickBack[] = {0.1,0.12};
		temporary = 0.15;
	};
	class ord_recoil_88_9mm_m20: ord_recoil_base_launcher{
		muzzleOuter[] = {0.2,0.4,0.3,0.2};
		kickBack[] = {0.08,0.1};
		temporary = 0.2;
	};
	class ord_recoil_90mm_m67: ord_recoil_base_launcher{
		muzzleOuter[] = {0.2,0.4,0.3,0.2};
		kickBack[] = {0.08,0.1};
		temporary = 0.2;
	};
	
	// Other
	class ord_recoil_riflegrenade{
		kickBack[] = {0.2,0.24};
		muzzleOuter[] = {7,6,0.2,0.2};
		permanent = 0.5;
		temporary = 0.025;
	};
	class ord_recoil_mortar_light{
		kickBack[] = {0.3,0.34};
		permanent = 0.5;
		muzzleOuter[] = {7,6,0.2,0.2};
		temporary = 0.025;
	};
	class ord_recoil_mortar_light_prone{
		muzzleOuter[] = {0.2,0.3,0.25,0.12};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.08,0.1};
		temporary = 0.1;
		permanent = 0.1;
	};
};
class CfgAmmo{
	// Base
	class GrenadeCore;
	class Grenade;
	class BulletBase;
	class FlareBase;
	class SmokeShell;
	class GrenadeBase;
	class MissileBase;
	class RocketBase;
	class ShellBase;
	class ammo_Penetrator_Base;
	class MineBase;
	class BoundingMineBase;
	class PipeBombBase;
	class DirectionalBombBase;
	class SubmunitionBase;
	class Bo_GBU12_LGB;
	class SmokeLauncherAmmo;
	
	// Orden Classes
	class ord_ammo_base_bullet: BulletBase{
		timeToLive = 10;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		
		ace_damageType = "bullet";
		
		vn_sounddefault1[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_1.ogg",10,1,100};
		vn_sounddefault2[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_2.ogg",10,1,100};
		vn_sounddefault3[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_3.ogg",10,1,100};
		vn_sounddefault4[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_4.ogg",10,1,100};
		vn_sounddefault5[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_5.ogg",10,1,100};
		vn_sounddefault6[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_6.ogg",10,1,100};
		vn_sounddefault7[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_7.ogg",10,1,100};
		vn_sounddefault8[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_8.ogg",10,1,100};
		vn_sounddefault9[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_9.ogg",10,1,100};
		vn_sounddefault10[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_10.ogg",10,1,100};
		vn_sounddefault11[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_11.ogg",10,1,100};
		vn_sounddefault12[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_12.ogg",10,1,100};
		vn_sounddefault13[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_13.ogg",10,1,100};
		vn_sounddefault14[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_14.ogg",10,1,100};
		vn_sounddefault15[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_15.ogg",10,1,100};
		vn_sounddefault16[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_16.ogg",10,1,100};
		vn_sounddefault17[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_17.ogg",10,1,100};
		vn_sounddefault18[] = {"vn\sounds_f_vietnam\sfx\bullethits\basic_18.ogg",10,1,100};
		vn_soundgroundsoft1[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_01.ogg",10,1,100};
		vn_soundgroundsoft2[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_02.ogg",10,1,100};
		vn_soundgroundsoft3[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_03.ogg",10,1,100};
		vn_soundgroundsoft4[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_04.ogg",10,1,100};
		vn_soundgroundsoft5[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_05.ogg",10,1,100};
		vn_soundgroundsoft6[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_06.ogg",10,1,100};
		vn_soundgroundsoft7[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_07.ogg",10,1,100};
		vn_soundgroundsoft8[] = {"vn\sounds_f_vietnam\sfx\bullethits\soft_ground_08.ogg",10,1,100};
		vn_soundgroundhard1[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_01.ogg",10,1,100};
		vn_soundgroundhard2[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_02.ogg",10,1,100};
		vn_soundgroundhard3[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_03.ogg",10,1,100};
		vn_soundgroundhard4[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_04.ogg",10,1,100};
		vn_soundgroundhard5[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_05.ogg",10,1,100};
		vn_soundgroundhard6[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_06.ogg",10,1,100};
		vn_soundgroundhard7[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_07.ogg",10,1,100};
		vn_soundgroundhard8[] = {"vn\sounds_f_vietnam\sfx\bullethits\hard_ground_08.ogg",10,1,100};
		vn_soundglass1[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_01.ogg",10,1,100};
		vn_soundglass2[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_02.ogg",10,1,100};
		vn_soundglass3[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_03.ogg",10,1,100};
		vn_soundglass4[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_04.ogg",10,1,100};
		vn_soundglass5[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_05.ogg",10,1,100};
		vn_soundglass6[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_06.ogg",10,1,100};
		vn_soundglass7[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_07.ogg",10,1,100};
		vn_soundglass8[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_08.ogg",10,1,100};
		vn_soundglassarmored1[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_01.ogg",10,1,100};
		vn_soundglassarmored2[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_02.ogg",10,1,100};
		vn_soundglassarmored3[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_03.ogg",10,1,100};
		vn_soundglassarmored4[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_04.ogg",10,1,100};
		vn_soundglassarmored5[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_05.ogg",10,1,100};
		vn_soundglassarmored6[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_06.ogg",10,1,100};
		vn_soundglassarmored7[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_07.ogg",10,1,100};
		vn_soundglassarmored8[] = {"vn\sounds_f_vietnam\sfx\bullethits\glass_arm_08.ogg",10,1,100};
		vn_soundmetal1[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_01.ogg",10,1,100};
		vn_soundmetal2[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_02.ogg",10,1,100};
		vn_soundmetal3[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_03.ogg",10,1,100};
		vn_soundmetal4[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_04.ogg",10,1,100};
		vn_soundmetal5[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_05.ogg",10,1,100};
		vn_soundmetal6[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_06.ogg",10,1,100};
		vn_soundmetal7[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_07.ogg",10,1,100};
		vn_soundmetal8[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_08.ogg",10,1,100};
		vn_soundvehicleplate1[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_01.ogg",10,1,100};
		vn_soundvehicleplate2[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_02.ogg",10,1,100};
		vn_soundvehicleplate3[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_03.ogg",10,1,100};
		vn_soundvehicleplate4[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_04.ogg",10,1,100};
		vn_soundvehicleplate5[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_05.ogg",10,1,100};
		vn_soundvehicleplate6[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_06.ogg",10,1,100};
		vn_soundvehicleplate7[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_07.ogg",10,1,100};
		vn_soundvehicleplate8[] = {"vn\sounds_f_vietnam\sfx\bullethits\metal_plate_08.ogg",10,1,100};
		vn_soundwood1[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_01.ogg",10,1,100};
		vn_soundwood2[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_02.ogg",10,1,100};
		vn_soundwood3[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_03.ogg",10,1,100};
		vn_soundwood4[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_04.ogg",10,1,100};
		vn_soundwood5[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_05.ogg",10,1,100};
		vn_soundwood6[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_06.ogg",10,1,100};
		vn_soundwood7[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_07.ogg",10,1,100};
		vn_soundwood8[] = {"vn\sounds_f_vietnam\sfx\bullethits\wood_08.ogg",10,1,100};
		vn_soundhitbody1[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_01.ogg",5,1,100};
		vn_soundhitbody2[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_02.ogg",5,1,100};
		vn_soundhitbody3[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_03.ogg",5,1,100};
		vn_soundhitbody4[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_04.ogg",5,1,100};
		vn_soundhitbody5[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_05.ogg",5,1,100};
		vn_soundhitbody6[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_06.ogg",5,1,100};
		vn_soundhitbody7[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_07.ogg",5,1,100};
		vn_soundhitbody8[] = {"vn\sounds_f_vietnam\sfx\bullethits\body_08.ogg",5,1,100};
		vn_soundhitbuilding1[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_01.ogg",10,1,100};
		vn_soundhitbuilding2[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_02.ogg",10,1,100};
		vn_soundhitbuilding3[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_03.ogg",10,1,100};
		vn_soundhitbuilding4[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_04.ogg",10,1,100};
		vn_soundhitbuilding5[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_05.ogg",10,1,100};
		vn_soundhitbuilding6[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_06.ogg",10,1,100};
		vn_soundhitbuilding7[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_07.ogg",10,1,100};
		vn_soundhitbuilding8[] = {"vn\sounds_f_vietnam\sfx\bullethits\building_08.ogg",10,1,100};
		vn_soundhitfoliage1[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_01.ogg",1,1,30};
		vn_soundhitfoliage2[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_02.ogg",1,1,30};
		vn_soundhitfoliage3[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_03.ogg",1,1,30};
		vn_soundhitfoliage4[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_04.ogg",1,1,30};
		vn_soundhitfoliage5[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_05.ogg",1,1,30};
		vn_soundhitfoliage6[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_06.ogg",1,1,30};
		vn_soundhitfoliage7[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_07.ogg",1,1,30};
		vn_soundhitfoliage8[] = {"vn\sounds_f_vietnam\sfx\bullethits\foliage_08.ogg",1,1,30};
		vn_soundplastic1[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_01.ogg",10,1,100};
		vn_soundplastic2[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_02.ogg",10,1,100};
		vn_soundplastic3[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_03.ogg",10,1,100};
		vn_soundplastic4[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_04.ogg",10,1,100};
		vn_soundplastic5[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_05.ogg",10,1,100};
		vn_soundplastic6[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_06.ogg",10,1,100};
		vn_soundplastic7[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_07.ogg",10,1,100};
		vn_soundplastic8[] = {"vn\sounds_f_vietnam\sfx\bullethits\plastic_08.ogg",10,1,100};
		vn_soundconcrete1[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_01.ogg",10,1,100};
		vn_soundconcrete2[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_02.ogg",10,1,100};
		vn_soundconcrete3[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_03.ogg",10,1,100};
		vn_soundconcrete4[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_04.ogg",10,1,100};
		vn_soundconcrete5[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_05.ogg",10,1,100};
		vn_soundconcrete6[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_06.ogg",10,1,100};
		vn_soundconcrete7[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_07.ogg",10,1,100};
		vn_soundconcrete8[] = {"vn\sounds_f_vietnam\sfx\bullethits\concrete_08.ogg",10,1,100};
		vn_soundtire1[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_01.ogg",10,1,100};
		vn_soundtire2[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_02.ogg",10,1,100};
		vn_soundtire3[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_03.ogg",10,1,100};
		vn_soundtire4[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_04.ogg",10,1,100};
		vn_soundtire5[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_05.ogg",10,1,100};
		vn_soundtire6[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_06.ogg",10,1,100};
		vn_soundtire7[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_07.ogg",10,1,100};
		vn_soundtire8[] = {"vn\sounds_f_vietnam\sfx\bullethits\tire_08.ogg",10,1,100};
		vn_soundrubber1[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_01",5,1,100};
		vn_soundrubber2[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_02",5,1,100};
		vn_soundrubber3[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_03",5,1,100};
		vn_soundrubber4[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_04",5,1,100};
		vn_soundrubber5[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_05",5,1,100};
		vn_soundrubber6[] = {"vn\sounds_f_vietnam\sfx\bullethits\rubber_06",5,1,100};
		vn_soundwater1[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_01.ogg",10,1,100};
		vn_soundwater2[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_02.ogg",10,1,100};
		vn_soundwater3[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_03.ogg",10,1,100};
		vn_soundwater4[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_04.ogg",10,1,100};
		vn_soundwater5[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_05.ogg",10,1,100};
		vn_soundwater6[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_06.ogg",10,1,100};
		vn_soundwater7[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_07.ogg",10,1,100};
		vn_soundwater8[] = {"vn\sounds_f_vietnam\sfx\bullethits\water_08.ogg",10,1,100};
		vn_soundmetalint1[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_01.ogg",10,1,100};
		vn_soundmetalint2[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_02.ogg",10,1,100};
		vn_soundmetalint3[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_03.ogg",10,1,100};
		vn_soundmetalint4[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_04.ogg",10,1,100};
		vn_soundmetalint5[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_05.ogg",10,1,100};
		vn_soundmetalint6[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_06.ogg",10,1,100};
		vn_soundvehicleplateint1[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_01.ogg",10,1,100};
		vn_soundvehicleplateint2[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_02.ogg",10,1,100};
		vn_soundvehicleplateint3[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_03.ogg",10,1,100};
		vn_soundvehicleplateint4[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_04.ogg",10,1,100};
		vn_soundvehicleplateint5[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_05.ogg",10,1,100};
		vn_soundvehicleplateint6[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_06.ogg",10,1,100};
		vn_soundvehicleplateint7[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_07.ogg",10,1,100};
		vn_soundvehicleplateint8[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_08.ogg",10,1,100};
		vn_soundvehicleplateint9[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_09.ogg",10,1,100};
		vn_soundvehicleplateint10[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_10.ogg",10,1,100};
		vn_soundvehicleplateint11[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_11.ogg",10,1,100};
		vn_soundvehicleplateint12[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_12.ogg",10,1,100};
		vn_soundvehicleplateint13[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_13.ogg",10,1,100};
		vn_soundvehicleplateint14[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_14.ogg",10,1,100};
		vn_soundvehicleplateint15[] = {"vn\sounds_f_vietnam\sfx\bullethits\int_metal_plate_15.ogg",10,1,100};
		
		hitArmorInt[] = {
			"vn_soundvehicleplateint1",0.025,
			"vn_soundvehicleplateint2",0.025,
			"vn_soundvehicleplateint3",0.025,
			"vn_soundvehicleplateint4",0.025,
			"vn_soundvehicleplateint5",0.025,
			"vn_soundvehicleplateint6",0.025,
			"vn_soundvehicleplateint7",0.025,
			"vn_soundvehicleplateint8",0.025,
			"vn_soundvehicleplateint9",0.025,
			"vn_soundvehicleplateint10",0.025,
			"vn_soundvehicleplateint11",0.025,
			"vn_soundvehicleplateint12",0.025,
			"vn_soundvehicleplateint13",0.025,
			"vn_soundvehicleplateint14",0.025,
			"vn_soundvehicleplateint15",0.025
		};
		hitMetalInt[] = {
			"vn_soundmetalint1",0.075,
			"vn_soundmetalint2",0.075,
			"vn_soundmetalint3",0.075,
			"vn_soundmetalint4",0.075,
			"vn_soundmetalint5",0.075,
			"vn_soundmetalint6",0.075
		};
		hitGroundSoft[] = {
			"vn_soundgroundsoft1",0.075,
			"vn_soundgroundsoft2",0.075,
			"vn_soundgroundsoft3",0.075,
			"vn_soundgroundsoft4",0.075,
			"vn_soundgroundsoft5",0.075,
			"vn_soundgroundsoft6",0.075,
			"vn_soundgroundsoft7",0.075,
			"vn_soundgroundsoft8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitGroundHard[] = {
			"vn_soundgroundhard1",0.075,
			"vn_soundgroundhard2",0.075,
			"vn_soundgroundhard3",0.075,
			"vn_soundgroundhard4",0.075,
			"vn_soundgroundhard5",0.075,
			"vn_soundgroundhard6",0.075,
			"vn_soundgroundhard7",0.075,
			"vn_soundgroundhard8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitMan[] = {
			"vn_soundhitbody1",0.075,
			"vn_soundhitbody2",0.075,
			"vn_soundhitbody3",0.075,
			"vn_soundhitbody4",0.075,
			"vn_soundhitbody5",0.075,
			"vn_soundhitbody6",0.075,
			"vn_soundhitbody7",0.075,
			"vn_soundhitbody8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitArmor[] = {
			"vn_soundvehicleplate1",0.075,
			"vn_soundvehicleplate2",0.075,
			"vn_soundvehicleplate3",0.075,
			"vn_soundvehicleplate4",0.075,
			"vn_soundvehicleplate5",0.075,
			"vn_soundvehicleplate6",0.075,
			"vn_soundvehicleplate7",0.075,
			"vn_soundvehicleplate8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitBuilding[] = {
			"vn_soundhitbuilding1",0.075,
			"vn_soundhitbuilding2",0.075,
			"vn_soundhitbuilding3",0.075,
			"vn_soundhitbuilding4",0.075,
			"vn_soundhitbuilding5",0.075,
			"vn_soundhitbuilding6",0.075,
			"vn_soundhitbuilding7",0.075,
			"vn_soundhitbuilding8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitFoliage[] = {
			"vn_soundhitfoliage1",0.075,
			"vn_soundhitfoliage2",0.075,
			"vn_soundhitfoliage3",0.075,
			"vn_soundhitfoliage4",0.075,
			"vn_soundhitfoliage5",0.075,
			"vn_soundhitfoliage6",0.075,
			"vn_soundhitfoliage7",0.075,
			"vn_soundhitfoliage8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitWood[] = {
			"vn_soundwood1",0.075,
			"vn_soundwood2",0.075,
			"vn_soundwood3",0.075,
			"vn_soundwood4",0.075,
			"vn_soundwood5",0.075,
			"vn_soundwood6",0.075,
			"vn_soundwood7",0.075,
			"vn_soundwood8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitGlass[] = {
			"vn_soundglass1",0.075,
			"vn_soundglass2",0.075,
			"vn_soundglass3",0.075,
			"vn_soundglass4",0.075,
			"vn_soundglass5",0.075,
			"vn_soundglass6",0.075,
			"vn_soundglass7",0.075,
			"vn_soundglass8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitGlassArmored[] = {
			"vn_soundglassarmored1",0.075,
			"vn_soundglassarmored2",0.075,
			"vn_soundglassarmored3",0.075,
			"vn_soundglassarmored4",0.075,
			"vn_soundglassarmored5",0.075,
			"vn_soundglassarmored6",0.075,
			"vn_soundglassarmored7",0.075,
			"vn_soundglassarmored8",0.075,
			"vn_sounddefault1",0.025,
			"vn_sounddefault2",0.025,
			"vn_sounddefault3",0.025,
			"vn_sounddefault4",0.025,
			"vn_sounddefault5",0.025,
			"vn_sounddefault6",0.025,
			"vn_sounddefault7",0.025,
			"vn_sounddefault8",0.025,
			"vn_sounddefault9",0.025,
			"vn_sounddefault10",0.025,
			"vn_sounddefault11",0.025,
			"vn_sounddefault12",0.025,
			"vn_sounddefault13",0.025,
			"vn_sounddefault14",0.025,
			"vn_sounddefault15",0.025,
			"vn_sounddefault16",0.025,
			"vn_sounddefault17",0.025,
			"vn_sounddefault18",0.025
		};
		hitConcrete[] = {
			"vn_soundconcrete1",1.0,
			"vn_soundconcrete2",1.0,
			"vn_soundconcrete3",1.0,
			"vn_soundconcrete4",1.0,
			"vn_soundconcrete5",1.0,
			"vn_soundconcrete6",1.0,
			"vn_soundconcrete7",1.0,
			"vn_soundconcrete8",1.0,
			"vn_sounddefault1",0.5,
			"vn_sounddefault2",0.5,
			"vn_sounddefault3",0.5,
			"vn_sounddefault4",0.5,
			"vn_sounddefault5",0.5,
			"vn_sounddefault6",0.5,
			"vn_sounddefault7",0.5,
			"vn_sounddefault8",0.5,
			"vn_sounddefault9",0.5,
			"vn_sounddefault10",0.5,
			"vn_sounddefault11",0.5,
			"vn_sounddefault12",0.5,
			"vn_sounddefault13",0.5,
			"vn_sounddefault14",0.5,
			"vn_sounddefault15",0.5,
			"vn_sounddefault16",0.5,
			"vn_sounddefault17",0.5,
			"vn_sounddefault18",0.5
		};
		hitTyre[] = {
			"vn_soundtire1",0.075,
			"vn_soundtire2",0.075,
			"vn_soundtire3",0.075,
			"vn_soundtire4",0.075,
			"vn_soundtire5",0.075,
			"vn_soundtire6",0.075,
			"vn_soundtire7",0.075,
			"vn_soundtire8",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitRubber[] = {
			"vn_soundrubber1",0.075,
			"vn_soundrubber2",0.075,
			"vn_soundrubber3",0.075,
			"vn_soundrubber4",0.075,
			"vn_soundrubber5",0.075,
			"vn_soundrubber6",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitPlastic[] = {
			"vn_soundplastic1",0.075,
			"vn_soundplastic2",0.075,
			"vn_soundplastic3",0.075,
			"vn_soundplastic4",0.075,
			"vn_soundplastic5",0.075,
			"vn_soundplastic6",0.075,
			"vn_soundplastic7",0.075,
			"vn_soundplastic8",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitDefault[] = {
			"vn_sounddefault1",0.056,
			"vn_sounddefault2",0.056,
			"vn_sounddefault3",0.056,
			"vn_sounddefault4",0.056,
			"vn_sounddefault5",0.056,
			"vn_sounddefault6",0.056,
			"vn_sounddefault7",0.056,
			"vn_sounddefault8",0.056,
			"vn_sounddefault9",0.056,
			"vn_sounddefault10",0.056,
			"vn_sounddefault11",0.056,
			"vn_sounddefault12",0.056,
			"vn_sounddefault13",0.056,
			"vn_sounddefault14",0.056,
			"vn_sounddefault15",0.056,
			"vn_sounddefault16",0.056,
			"vn_sounddefault17",0.056,
			"vn_sounddefault18",0.056
		};
		hitMetal[] = {
			"vn_soundmetal1",0.075,
			"vn_soundmetal2",0.075,
			"vn_soundmetal3",0.075,
			"vn_soundmetal4",0.075,
			"vn_soundmetal5",0.075,
			"vn_soundmetal6",0.075,
			"vn_soundmetal7",0.075,
			"vn_soundmetal8",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitMetalplate[] = {
			"vn_soundvehicleplate1",0.075,
			"vn_soundvehicleplate2",0.075,
			"vn_soundvehicleplate3",0.075,
			"vn_soundvehicleplate4",0.075,
			"vn_soundvehicleplate5",0.075,
			"vn_soundvehicleplate6",0.075,
			"vn_soundvehicleplate7",0.075,
			"vn_soundvehicleplate8",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitWater[] = {
			"vn_soundwater1",0.075,
			"vn_soundwater2",0.075,
			"vn_soundwater3",0.075,
			"vn_soundwater4",0.075,
			"vn_soundwater5",0.075,
			"vn_soundwater6",0.075,
			"vn_soundwater7",0.075,
			"vn_soundwater8",0.075,
			"vn_sounddefault1",0.022,
			"vn_sounddefault2",0.022,
			"vn_sounddefault3",0.022,
			"vn_sounddefault4",0.022,
			"vn_sounddefault5",0.022,
			"vn_sounddefault6",0.022,
			"vn_sounddefault7",0.022,
			"vn_sounddefault8",0.022,
			"vn_sounddefault9",0.022,
			"vn_sounddefault10",0.022,
			"vn_sounddefault11",0.022,
			"vn_sounddefault12",0.022,
			"vn_sounddefault13",0.022,
			"vn_sounddefault14",0.022,
			"vn_sounddefault15",0.022,
			"vn_sounddefault16",0.022,
			"vn_sounddefault17",0.022,
			"vn_sounddefault18",0.022
		};
		hitBell[] = {"soundBell1",1};
	};
	class ord_ammo_base_bullet_small: ord_ammo_base_bullet{
	};
	class ord_ammo_base_bullet_heavy: ord_ammo_base_bullet{
		class HitEffects{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "BCImpactConcrete_50cal";
			hitConcrete = "BCImpactConcrete_50cal";
			hitGroundSoft = "BCImpactDirt_50cal";
			hitGroundHard = "BCImpactDirt_50cal";
			default_mat = "BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
		class CamShakeExplode{
			power = 1.73205;
			duration = 0.4;
			frequency = 20;
			distance = 5.19615;
		};
		class CamShakeHit{
			power = 3;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class ord_ammo_base_grenade: GrenadeBase{
		timeToLive = 30;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		
		ACE_damageType = "grenade";
	};
	class ord_ammo_base_flare: FlareBase{
		timeToLive = 30;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "2 + 4 + 8 + 64 + 128 + 256 + 512";
	};
	class ord_ammo_base_smoke: SmokeShell{
		timeToLive = 60;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "2 + 4 + 8 + 64 + 128 + 256 + 512";
	};
	class ord_ammo_base_shell: ShellBase{
		timeToLive = 10;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		
		ACE_damageType = "shell";
	};
	class ord_ammo_base_shell_20mm_he: ord_ammo_base_bullet{
		hit = 80;
		caliber = 1.4;
		explosive = 1.8;
		indirectHit = 12;
		indirectHitRange = 2;
		typicalSpeed = 1030;
		airFriction = -0.00078;
		
		nvgOnly = 0;
		tracerScale = 1.5;
		tracerStartTime = 0.02;
		tracersEvery = 3;
		tracerEndTime = 3.5;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		
		cost = 20;
		timeToLive = 30;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "HE";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.2;
		
		ace_rearm_caliber = 20;
		
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		weaponType = "cannon";
		muzzleEffect = "";
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",1.77828,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",1.77828,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",1.77828,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",1.77828,1,1300};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		SoundSetExplosion[] = {"jsrs_20mm_explosion_soundset","jsrs_explosion_echo_small_soundset"};
		soundsetbulletfly[] = {"jsrs_sc_bullet_flyby_soundset"};
		soundsetsoniccrack[] = {"jsrs_sc_30x90mm_soundset"};
		
		class CamShakeExplode{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_20mm";
			hitConcrete = "BCImpactConcrete_20mm";
			hitGroundSoft = "BCImpactDirt_20mm";
			hitGroundHard = "BCImpactDirt_20mm";
			default_mat = "BCImpactDirt_20mm";
			Hit_Foliage_green = "BCImpactDirt_20mm";
			Hit_Foliage_Dead = "BCImpactDirt_20mm";
			Hit_Foliage_Green_big = "BCImpactDirt_20mm";
			Hit_Foliage_Palm = "BCImpactDirt_20mm";
			Hit_Foliage_Pine = "BCImpactDirt_20mm";
		};
	};
	class ord_ammo_base_shell_30mm_ap: ord_ammo_base_bullet{
		weaponType = "cannon";
		timeToLive = 30;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "AP";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.1;
		
		hit = 80;
		caliber = 4.2;
		airFriction = -0.00042;
		deflecting = 15;
		typicalSpeed = 1120;
		
		explosive = 0;
		indirectHit = 8;
		indirectHitRange = 0.2;
		
		ace_rearm_caliber = 30;
		
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.77828,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.77828,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.77828,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.77828,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		SoundSetExplosion[] = {"jsrs_20mm_ap_soundset"};
		soundsetbulletfly[] = {"jsrs_sc_bullet_flyby_soundset"};
		soundsetsoniccrack[] = {"jsrs_sc_30x90mm_soundset"};
		
		class CamShakeExplode{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_30mm";
			hitConcrete = "BCImpactConcrete_30mm";
			hitGroundSoft = "BCImpactDirt_30mm";
			hitGroundHard = "BCImpactDirt_30mm";
			default_mat = "BCImpactDirt_30mm";
			Hit_Foliage_green = "BCImpactDirt_30mm";
			Hit_Foliage_Dead = "BCImpactDirt_30mm";
			Hit_Foliage_Green_big = "BCImpactDirt_30mm";
			Hit_Foliage_Palm = "BCImpactDirt_30mm";
			Hit_Foliage_Pine = "BCImpactDirt_30mm";
		};
	};
	class ord_ammo_base_shell_30mm_he: ord_ammo_base_bullet{
		timeToLive = 10;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "HE";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.2;
		ace_rearm_caliber = 30;
		
		weaponType = "cannon";
		
		hit = 30;
		explosive = 0.1;
		indirectHit = 8;
		indirectHitRange = 3;
		airFriction = -0.00036;
		fuseDistance = 3;
		typicalSpeed = 960;
		caliber = 1.4;
		deflecting = 5;
		
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		tracerScale = 2.5;
		
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		explosionSoundEffect = "DefaultExplosion";
		
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.77828,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.77828,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.77828,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.77828,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		SoundSetExplosion[] = {"jsrs_20mm_explosion_soundset","jsrs_explosion_echo_small_soundset"};
		soundsetbulletfly[] = {"jsrs_sc_bullet_flyby_soundset"};
		soundsetsoniccrack[] = {"jsrs_sc_30x90mm_soundset"};
		
		class CamShakeExplode{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class ord_ammo_base_shell_30mm_mp: ord_ammo_base_bullet{
		timeToLive = 10;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "HEAT";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.6;
		
		hit = 90;
		caliber = 4.4;
		explosive = 0.6;
		indirectHit = 4;
		indirectHitRange = 2;
		typicalSpeed = 1070;
		airFriction = -0.00036;
		fuseDistance = 3;
		deflecting = 5;
		
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		tracerScale = 2.5;
		
		ace_rearm_caliber = 30;
		
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		explosionSoundEffect = "DefaultExplosion";
		
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.77828,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.77828,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.77828,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.77828,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		SoundSetExplosion[] = {"jsrs_20mm_explosion_soundset","jsrs_explosion_echo_small_soundset"};
		soundsetbulletfly[] = {"jsrs_sc_bullet_flyby_soundset"};
		soundsetsoniccrack[] = {"jsrs_sc_30x90mm_soundset"};
		
		class CamShakeExplode{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 67.8178;
		};
		class CamShakeHit{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		class HitEffects{
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class ord_ammo_base_rocket: RocketBase{
		timeToLive = 100;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class ord_ammo_base_submunition: SubmunitionBase{
		timeToLive = 100;
		whistleDist = 30;
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	};
	class ord_ammo_base_missile: MissileBase{
		timeToLive = 100;
		whistleDist = 30;
		
		cost = 10;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		
		class Components;
	};
	class ord_ammo_base_missile_titan: ord_ammo_base_missile{
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 3.3;
		explosive = 1;
		
		simulationStep = 0.002;
		initTime = 0.25;
		trackOversteer = 1.5;
		trackLead = 0.9;
		timeToLive = 22;
		maneuvrability = 20;
		airFriction = 0.085;
		sideAirFriction = 1;
		maxSpeed = 180;
		typicalSpeed = 160;
		thrustTime = 5;
		thrust = 45;
		fuseDistance = 50;
		whistleDist = 4;
		
		lockType = 0;
		missileLockCone = 4.5;
		missileKeepLockedCone = 160;
		missileLockMaxDistance = 2000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 35;
		manualControl = 1;
		missileManualControlCone = 45;
		maxControlRange = 2000;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.4;
		flightProfiles[] = {"Direct","TopDown"};
		class Direct{};
		class TopDown{
			ascendHeight = 150;
			descendDistance = 180;
			minDistance = 180;
			ascendAngle = 30;
		};
		class Components: Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 3.7;
						angleRangeVertical = 2.3;
						maxTrackableATL = 50;
					};
				};
			};
		};
		
		cost = 1;
		airLock = 1;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "HEAT";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 1;
		
		ace_frag_skip = 1;
		
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
		effectsMissileInit = "";
		muzzleEffect = "";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissile = "missile2";
		
		soundFly[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\soundfly1.ogg",1,1.5,400};
		SoundSetExplosion[] = {"jsrs_rocket_explosion_soundset","jsrs_rocket_explosion_stereo_soundset","jsrs_shell_explosion_reverb_soundset"};
		soundsetsoniccrack[] = {"jsrs_sc_rocket_flyby_soundset"};
		
		class CamShakeExplode{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.3296;
		};
		class CamShakeHit{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ord_ammo_base_missile_mediumrange_antiair: ord_ammo_base_missile{
		hit = 200;
		indirectHit = 125;
		indirectHitRange = 13;
		
		proximityExplosionDistance = 30;
		fuseDistance = 750;
		
		activeSensorAlwaysOn = 0;
		airLock = 2;
		lockType = 0;
		cmimmunity = 0.95;
		weaponLockSystem = "8 + 16";
		missileLockCone = 70;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 12000;
		missileLockMinDistance = 800;
		missileLockMaxSpeed = 777.778;
		autoSeekTarget = 1;
		flightProfiles[] = {"LoalDistance"};
		class LoalDistance{
			lockSeekDistanceFromParent = 2000;
		};
		class Components: Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 12000;
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						groundNoiseDistanceCoef = 0.2;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						maxTrackableSpeed = 777.778;
						minTrackableATL = 10;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		
		maneuvrability = 23;
		airFriction = 0.07;
		sideAirFriction = 0.18;
		trackOversteer = 1.1;
		trackLead = 1.06;
		initTime = 0.6;
		timeToLive = 35;
		thrustTime = 7;
		thrust = 210;
		maxSpeed = 900;
		simulationStep = 0.002;
		
		cost = 1;
		
		aiAmmoUsageFlags = "256";
		warheadName = "HE";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.6;
		
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		
		missileFireAnim = "rocket_fire_hide";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_Missile_AA";
		muzzleEffect = "";
	};
	class ord_ammo_base_missile_longrange_antiair: ord_ammo_base_missile{
		hit = 400;
		indirectHit = 90;
		indirectHitRange = 30;
		
		maneuvrability = 25;
		airFriction = 0.09;
		sideAirFriction = 0.18;
		trackOversteer = 0.7;
		trackLead = 1.06;
		timeToLive = 55;
		initTime = 0.1;
		thrustTime = 20;
		thrust = 450;
		maxSpeed = 850;
		simulationStep = 0.001;
		
		activeSensorAlwaysOn = 0;
		airLock = 2;
		lockType = 0;
		cmimmunity = 0.95;
		weaponLockSystem = "8 + 16";
		maxcontrolRange = 16000;
		missileLockCone = 70;
		missileKeepLockedCone = 90;
		missileLockMaxDistance = 16000;
		missileLockMinDistance = 1000;
		missileLockMaxSpeed = 777.778;
		autoSeekTarget = 1;
		flightProfiles[] = {"LoalDistance"};
		class LoalDistance{
			lockSeekDistanceFromParent = 2000;
		};
		class Components: Components{
			class SensorsManagerComponent{
				class Components{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar{
						class AirTarget{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						minTrackableATL = 10;
						maxTrackableATL = 1e+010;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 777.778;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType = "DataLinkSensorComponent";
					};
				};
			};
		};
		
		proximityExplosionDistance = 40;
		fuseDistance = 100;
		
		cost = 1;
		
		aiAmmoUsageFlags = "256";
		warheadName = "HE";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.6;
		
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		
		effectsFire = "CannonFire";
		missileFireAnim = "rocket_fire_hide";
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "FX_Missile_SAM_LongRange";
		muzzleEffect = "";
		
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",0.562341,2.5};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",0.562341,1};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",0.891251,1,10};
		sounds[] = {"StandardSound"};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1,1.1,700};
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,1900};
		SoundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet","RocketsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.316228,1,50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.398107,1,20};
		class StandardSound{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
			soundBegin[] = {"begin1",1};
			soundSetShot[] = {"Static_Launcher_Titan_ATAA_Shot_SoundSet","Static_Launcher_Titan_ATAA_Tail_SoundSet"};
		};
	};
	class ord_ammo_base_missile_cruise: ord_ammo_base_missile{
		hit = 6000;
		explosive = 0.8;
		indirectHit = 2000;
		indirectHitRange = 30;
		timeToLive = 205;
		whistleDist = 64;
		
		simulationStep = 0.002;
		initTime = 0.3;
		thrustTime = 200;
		thrust = 35;
		maxSpeed = 194.444;
		maneuvrability = 16;
		maneuvDependsOnSpeedCoef = 0.4;
		fuseDistance = 100;
		trackLead = 0.5;
		trackOversteer = 1.2;
		airFriction = 0.45;
		sideAirFriction = 0.5;
		
		airLock = 0;
		lockType = 0;
		artilleryLock = 1;
		weaponLockSystem = 16;
		cmImmunity = 1;
		cameraViewAvailable = 1;
		autoSeekTarget = 0;
		lockSeekRadius = 1500;
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxSpeed = 1;
		missileLockMaxDistance = 32000;
		missileLockMinDistance = 50;
		flightProfiles[] = {"Cruise"};
		class Cruise{
			preferredFlightAltitude = 100;
			lockDistanceToTarget = 300;
		};
		class Components: Components{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 32000;
							maxRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1;
					};
				};
			};
		};
		
		dangerRadiusHit = 2000;
		suppressionRadiusHit = 200;
		audibleFire = 64;
		visibleFire = 64;
		visibleFireTime = 20;
		
		cost = 1;
		
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		warheadName = "HE";
		ace_damageType = "explosive";
		ace_vehicle_damage_incendiary = 0.5;
		
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		
		craterEffects = "HeavyBombCrater";
		explosionEffects = "HeavyBombExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "CruiseMissile";
		muzzleEffect = "BIS_fnc_effectFiredCruiseMissile";
		
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.58489,1.8,1000};
		soundEngine[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.58489,1.8,1000};
		soundSetExplosion[] = {"BombsHeavy_Exp_SoundSet","BombsHeavy_Tail_SoundSet","Explosion_Debris_SoundSet"};
		
		class CamShakeExplode{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ord_ammo_base_penetrator: ammo_Penetrator_Base{
	};
	class ord_ammo_base_mine: MineBase{
		cost = 1;
	};
	class ord_ammo_base_mine_bounding: BoundingMineBase{
		cost = 1;
	};
	class ord_ammo_base_explosivecharge: PipeBombBase{
		cost = 1;
	};
	class ord_ammo_base_bomb_directional: DirectionalBombBase{
		cost = 1;
	};
	
	// Ammo Base Classes
	class ord_ammo_base_127x99mm : ord_ammo_base_bullet_heavy{
		cartridge = "FxCartridge_127";
		hit = 18;
		caliber = 4;
		airFriction = -0.00068;
		typicalSpeed = 200;
		simulationStep = 0.05;
		deflecting = 6;
		deflectionSlowDown = 0.78;
		deflectionDirDistribution = 0.8;
		penetrationDirDistribution = 0.05;
		
		model= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale= 3;
		tracerStartTime= 0.009;
		tracerEndTime= 4;
		
		r_coef = 1.33;
		
		// Sound
		soundSetBulletFly[] = {"vn_bullet_flyby_soundset"};
		soundsetsoniccrack[] = {"vn_sc_50cal_soundset"};
		
		// AI Behavior
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		airLock = 1;
		allowAgainstInfantry = 1;
		cost = 5;
		
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 6;
		
		// ACE
		ACE_caliber=12.954;
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
		
		ace_rearm_caliber = 12.7;
	};
	
	#include "ammo\ammo_bullets.hpp"
	#include "ammo\ammo_shells.hpp"
	#include "ammo\ammo_missiles.hpp"
	#include "ammo\ammo_bombs.hpp"
	#include "ammo\ammo_throwables.hpp"
	#include "ammo\ammo_placeables.hpp"
	#include "ammo\ammo_other.hpp"
};
class CfgMagazines{
	// Base
	class CA_Magazine;
	class CA_LauncherMagazine;
	class VehicleMagazine;
	class HandGrenade;
	class SmokeShell;
	class SmokeLauncherMag;
	class DemoCharge_Remote_Mag;
	
	// Orden Classes
	class ord_mag_base: CA_Magazine{
		author = "Orden l Bohemia Interactive";
		
		deleteIfEmpty = 0;
		maxLeadSpeed = 1000;
	};
	class ord_mag_base_launcher: CA_LauncherMagazine{
		author = "Orden l Bohemia Interactive";
		
		deleteIfEmpty = 0;
		maxLeadSpeed = 500;
	};
	class ord_mag_base_vehicle: VehicleMagazine{
		author = "Orden l Bohemia Interactive";
		
		maxLeadSpeed = 2000;
	};
	class ord_mag_base_grenade: HandGrenade{
		author = "Orden l Bohemia Interactive";
		maxLeadSpeed = 2000;
		cost = 0.1;
	};
	class ord_mag_base_smoke: SmokeShell{
		author = "Orden l Bohemia Interactive";
		maxLeadSpeed = 2000;
		cost = 0.1;
	};
	class ord_mag_base_smoke_launcher: SmokeLauncherMag{
		author = "Orden l Bohemia Interactive";
		maxLeadSpeed = 2000;
		cost = 1;
	};
	class ord_mag_base_placeable: CA_Magazine{
		useAction = 0;
		weaponPoolAvailable = 1;
		type = "2*256";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		sound[] = {"A3\sounds_f\dummysound",0.000316228,1,10};
	};
	class ord_mag_base_democharge_remote_mag: DemoCharge_Remote_Mag{
		useAction = 0;
	};
	
	#include "magazines\magazines_vehicle.hpp"
	#include "magazines\magazines_infantry.hpp"
	#include "magazines\magazines_throwable.hpp"
	#include "magazines\magazines_placeable.hpp"
};
class CfgMagazineWells{
	// 12.7x99mm NATO
	class ORD_127x99mm_M2_Box{
		ORD_Magazines[]={
			// B
			"ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01",
			
			// B-T
			"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
			
			// T
			"ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01"
		};
	};
	
};
class CfgWeapons{
	class Default;
	class ItemCore;
	class ItemRadio;
	class ItemWatch;
	class UniformItem;
	class Uniform_Base;
	class Vest_Camo_Base;
	class VestItem;
	class HelmetBase;
	class HeadgearItem;
	class InventoryUavTerminalItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryUnderItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class Pistol;
	class Pistol_Base_F: Pistol{
		useFWAMGFeatures=1;
		maxZeroing = 10000;
		class Eventhandlers;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle;
	class Rifle_Base_F: Rifle{
		useFWAMGFeatures=1;
		maxZeroing = 10000;
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class Rifle_Short_Base_F: Rifle_Base_F{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher{
		class Single;
		class GunClouds;
		class GunFire;
	};
	class Launcher_Base_F;
	class MGun;
	class HMG_127;
	class GMG_F;
	class LMG_RCWS;
	class MissileLauncher;
	class RocketPods;
	class autocannon_Base_F;
	class GBU12BombLauncher;
	class CannonCore;
	class SmokeLauncher;
	
	// Orden
	class ord_weap_base_mg: MGun{};
	class ord_weap_base_hmg: HMG_127{
		maxZeroing = 5000;
	};
	class ord_weap_base_gmg: GMG_F{};
	class ord_weap_base_rcws_lmg: LMG_RCWS{};
	class ord_weap_base_autocannon: autocannon_Base_F{};
	class ord_weap_base_missilelauncher: MissileLauncher{};
	class ord_weap_base_rockedpods: RocketPods{};
	class ord_weap_base_cannon: CannonCore{};
	class ord_weap_base_smokelauncher: SmokeLauncher{};
	
	// Weapons
	#include "weapons\weapons_primary.hpp"
	#include "weapons\weapons_launchers.hpp"
	#include "weapons\weapons_secondary.hpp"
	#include "weapons\weapons_vehicles.hpp"
	#include "weapons\weapons_attachments.hpp"
	#include "weapons\weapons_bayonets.hpp"
	
	// Equipment
	#include "equipment\items.hpp"
	#include "equipment\uniforms\uniforms.hpp"
	#include "equipment\vests.hpp"
	#include "equipment\headgear.hpp"
};
class CfgVehicles{
	class Items_base_F;
    class ThingX;
	class Bag_Base;
	class Weapon_Base_F;
	class ContainerSupply;
	class SoldierWB;
	class MineBase;
	class ModuleMine_APERSMine_F;
	class ModuleExplosive_F;
	class Weapon_Bag_Base;
	class ACE_Explosives_Place: Items_base_F{
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
	
	// Mine Base
	class ord_veh_base_mine: MineBase{};
	class ord_veh_base_mine_module: ModuleMine_APERSMine_F{};
	class ord_veh_base_explosive_module: ModuleExplosive_F{};
	
	// Static Base
	class StaticWeapon;
	class StaticATWeapon: StaticWeapon{
		class Turrets;
		class ACE_Actions;
	};
	class StaticMGWeapon: StaticWeapon{
		class Turrets;
		class ACE_Actions{
			class ACE_MainActions;
		};
	};
	class ord_veh_static_base_mg: StaticMGWeapon{
		editorPreview="";
		class Components;
		class HitPoints;
		class UserActions;
		class Turrets: Turrets{
			class MainTurret;
		};
	};
	class ord_veh_static_base_tripod_csw: ThingX{
		side = 3;
		typicalCargo[] = {};
		armor = 500000;
		mapSize = 0.4;
		nameSound = "Bunker";
		accuracy = 1000;
		destrType = "DestructDefault";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,2,0};
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,2,0};
		class ACE_Actions{
			class ACE_MainActions{
				displayName = "Tripod";
				selection = "";
				distance = 2.5;
				condition = "true";
				class ace_csw_pickUp{
					displayName = "Pickup Tripod";
					condition = "call ace_csw_fnc_assemble_canPickupTripod";
					statement = "call ace_csw_fnc_assemble_pickupTripod";
				};
				class ace_csw_mountWeapon{
					displayName = "Mount Weapon";
					condition = "call ace_csw_fnc_assemble_canDeployWeapon";
					statement = "call ace_csw_fnc_assemble_deployWeapon";
					modifierFunction = "call ace_csw_fnc_assemble_deployWeaponModifier";
				};
			};
		};
	};
	
	// Back-Gear Base
	class ord_back_base_weaponbag: Weapon_Bag_Base{
		class assembleInfo;
	};
	
	#include "storage.hpp"
	#include "container_supply.hpp"
	
	// Equipment
	#include "vehicles\vehicles_placeables.hpp"
	#include "equipment\uniforms\uniform_models.hpp"
	#include "equipment\backgear.hpp"
	
	//// Vehicles
	class LandVehicle;
	// Car
	class Car: LandVehicle{
		class HitPoints;
		class ACE_Actions;
		class ACE_SelfActions;
		class Turrets;
	};
	class Car_F: Car{
		class Sounds;
		class Turrets:Turrets{
			class MainTurret;
		};
		class EventHandlers;
		class AnimationSources;
		class HitPoints: HitPoints{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			
			class HitFuel;
			class HitEngine;
			class HitBody;
			
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class ACE_Actions: ACE_Actions{
			class ACE_MainActions;
		};
		class ACE_SelfActions: ACE_SelfActions{};
	};
	class Truck_F: Car_F{
		class Turrets:Turrets{
			class MainTurret;
		};
		class ViewPilot;
		class EventHandlers: EventHandlers{};
		class AnimationSources;
		class HitPoints: HitPoints{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitRMWheel;
			
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitHull;
			
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class ACE_SelfActions: ACE_SelfActions{};
	};
	class Wheeled_Apc_F: Car_F{
		class ViewPilot;
		class ViewOptics;
		class EventHandlers: EventHandlers{};
		class AnimationSources;
		class ACE_SelfActions: ACE_SelfActions{};
		class Turrets: Turrets{
			class MainTurret: MainTurret{};
		};
		class HitPoints: HitPoints{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitRMWheel;
			
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitHull;
			
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Tank: LandVehicle{
		class Turrets;
		class HitPoints;
		class ACE_Actions;
		class ACE_SelfActions;
	};
	class Tank_F: Tank{
		class Turrets: Turrets{
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints{
			class HitLTrack;
			class HitRTrack;
			
			class HitFuel;
			class HitEngine;
			class HitHull;
		};
		class ACE_Actions: ACE_Actions{
			class ACE_MainActions;
		};
		class ACE_SelfActions: ACE_SelfActions{};
	};
	// Helicopter
	class Helicopter;
	class Helicopter_Base_F: Helicopter{
		class Turrets;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Helicopter_Base_H: Helicopter_Base_F{
		class ViewPilot;
		class ViewOptics;
		class Components;
		class EventHandlers;
		class AnimationSources;
		class RotorLibHelicopterProperties;
		class ACE_SelfActions: ACE_SelfActions{};
		class Turrets: Turrets{
			class CopilotTurret;
		};
		class HitPoints: HitPoints{
			class HitFuel;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	// Plane
	class Air;
	class Plane: Air{
		class HitPoints;
	};
	class Plane_Base_F: Plane{
		class AnimationSources;
		class NewTurret;
		class HitPoints: HitPoints{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
	
	// Include
	#include "vehicles\vehicles_csw.hpp"
};

////// Frameworks //////
class ACE_CSW_Groups{
	
	// 12.7x99mm NATO
	class ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01_csw{
		ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01 = 1;
	};
	class ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01_csw{
		ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01 = 1;
	};
	class ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01_csw{
		ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01 = 1;
	};
	
};

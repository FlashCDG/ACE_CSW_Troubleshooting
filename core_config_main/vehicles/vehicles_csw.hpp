// CfgVehicles Config
// Crew Served Weapons

	// Base Classes
	class ord_veh_csw_base_sog_us_m2hb_hmg_01_high: ord_veh_static_base_mg{
		vehicleClass = "Static";
		
		icon = "\vn\static_f_vietnam\ui\icon_vn_static_m2_high_01_ca.paa";
		picture = "\vn\static_f_vietnam\ui\pic_vn_static_m2_high_01_ca.paa";
		
		model = "\vn\static_f_vietnam\m2\vn_static_m2_high.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"vn\static_f_vietnam\m2\data\vn_static_m2_high_01_co.paa","vn\static_f_vietnam\m2\data\vn_static_m2_high_02_co.paa"};
		class Damage{
			tex[] = {};
			mat[] = {"vn\static_f_vietnam\m2\data\vn_static_m2_high_01.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_high_01_damage.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_high_01_destruct.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_high_02.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_high_02_damage.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_high_02_destruct.rvmat"};
		};
		
		getInAction = "";
		getOutAction = "";
		memoryPointsGetInGunner = "pos_gunner";
		memoryPointsGetInGunnerDir = "pos_gunner_dir";
		bounding = "mg1_usti_hlavne";
		
		class Turrets: Turrets{
			class MainTurret: MainTurret{
				weapons[] = {"ord_weap_veh_sog_us_m2hb_01"};
				magazines[] = {
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01",
					"ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01"
				};
				
				ejectDeadGunner = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				memoryPointGun = "mg1_usti_hlavne";
				gunBeg = "mg1_usti_hlavne";
				gunEnd = "mg1_konec_hlavne";
				body = "mg1_turret";
				gun = "mg1_gun";
				animationSourceBody = "mg1_turret";
				animationSourceGun = "mg1_gun";
				selectionFireAnim = "mg1_zasleh";
				gunnerLeftHandAnimName = "mg1_otochlaven_recoil";
				gunnerRightHandAnimName = "mg1_otochlaven_recoil";
				gunnerLeftLegAnimName = "mg1_gunner_leg_L";
				gunnerRightLegAnimName = "mg1_gunner_leg_R";
				memoryPointGunnerOutOptics = "mg1_gunnerview";
				memoryPointGunnerOptics = "mg1_gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerForceOptics = 0;
				gunnerAction = "vn_static_m2_high_gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				soundServo[] = {"\vn\sounds_f_vietnam\vehicles\static\shared\turret_static_horizontal.ogg",2,1,10};
				soundServoVertical[] = {"\vn\sounds_f_vietnam\vehicles\static\shared\turret_static_vertical.ogg",2,1,10};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				stabilizedInAxes = 0;
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistanceInitIndex = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
				maxZeroing = 1800;
				initElev = 0;
				minElev = -35;
				maxElev = 40;
				initTurn = 0;
				minTurn = -360;
				maxTurn = 360;
				class ViewOptics: ViewOptics{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 75;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = 1.00;
					minFov = 1.00;
					maxFov = 1.00;
				};
				class ViewGunner{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 75;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = 1.00;
					minFov = 1.00;
					maxFov = 1.00;
				};
				class Reflectors{
					class Light{
						position = "mg1_light_1_pos";
						direction = "mg1_light_1_dir";
						hitpoint = "mg1_light_1";
						selection = "mg1_light_1";
						color[] = {1600,1300,1100};
						ambient[] = {5,5,5};
						intensity = 50;
						size = 1;
						innerAngle = 15;
						outerAngle = 65;
						coneFadeCoef = 10;
						useFlare = 1;
						flareSize = 10;
						dayLight = 0;
						flareMaxDistance = 250;
						class Attenuation{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 1;
							hardLimitStart = 100;
							hardLimitEnd = 200;
						};
					};
				};
				class Hitpoints{};
			};
		};
		
		class AnimationSources{
			class mg1_reload{
				source = "reload";
				weapon = "ord_weap_veh_sog_us_m2hb_01";
			};
			class mg1_reloadmagazine: mg1_reload{
				source = "reloadmagazine";
			};
			class mg1_revolving: mg1_reload{
				source = "revolving";
			};
			class mg1_muzzleflash_rot: mg1_reload{
				source = "ammorandom";
			};
		};
		
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		
		class ACE_Actions: ACE_Actions{
			class ACE_MainActions: ACE_MainActions{
				selection = "mg1_otochlaven";
			};
		};
		class ACE_CSW{
			enabled = 1;
			proxyWeapon = "ord_weap_veh_sog_us_m2hb_01";
			magazineLocation = "_target selectionPosition 'mg1_magazine'";
			disassembleWeapon="ace_compat_sog_m2_carry";
			disassembleTurret="ace_csw_m3Tripod";
			ammoLoadTime = 4;
			ammoUnloadTime = 6;
			desiredAmmo = 100;
		};
		
		soundGetOut[] = {"vn\sounds_f_vietnam\weapons\hmgs\shared\getout.ogg",1,1,30};
		soundGetIn[] = {"vn\sounds_f_vietnam\weapons\hmgs\shared\getin.ogg",1,1,30};
	};
	class ord_veh_csw_base_sog_us_m2hb_hmg_01_low: ord_veh_csw_base_sog_us_m2hb_hmg_01_high{
		icon = "\vn\static_f_vietnam\ui\icon_vn_static_m2_low_01_ca.paa";
		picture = "\vn\static_f_vietnam\ui\pic_vn_static_m2_low_01_ca.paa";
		
		model = "\vn\static_f_vietnam\m2\vn_static_m2_low.p3d";
		hiddenSelectionsTextures[] = {"vn\static_f_vietnam\m2\data\vn_static_m2_low_01_co.paa","vn\static_f_vietnam\m2\data\vn_static_m2_low_02_co.paa"};
		class Damage{
			tex[] = {};
			mat[] = {"vn\static_f_vietnam\m2\data\vn_static_m2_low_01.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_low_01_damage.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_low_01_destruct.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_low_02.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_low_02_damage.rvmat","vn\static_f_vietnam\m2\data\vn_static_m2_low_02_destruct.rvmat"};
		};
		
		class Turrets: Turrets{
			class MainTurret: MainTurret{
				gunnerAction = "vn_static_m2_low_gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				soundServo[] = {"\vn\sounds_f_vietnam\vehicles\static\shared\turret_static_horizontal.ogg",0,1,10};
				soundServoVertical[] = {"\vn\sounds_f_vietnam\vehicles\static\shared\turret_static_vertical.ogg",0,1,10};
				minElev = -15;
				maxElev = 25;
				minTurn = -180;
				maxTurn = 180;
				class ViewOptics: ViewOptics{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
				};
			};
		};
		
		soundgetout[] = {"vn\sounds_f_vietnam\weapons\hmgs\shared\getout.ogg",1,1,30};
		soundgetin[] = {"vn\sounds_f_vietnam\weapons\hmgs\shared\getin.ogg",1,1,30};
	};
	
	// Machine-Guns
	class ord_veh_csw_us_m2hb_hmg_m3tripod_01: ord_veh_csw_base_sog_us_m2hb_hmg_01_low{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		
		side=3;
		faction="ORD_Faction_Empty_Vehicles";
		editorCategory="ORD_EdCat_Vehicles";
		editorSubcategory="ORD_EdSubCat_CSW";
		vehicleClass="ORD_VehClass_CSW";
		crew="";
		typicalCargo[]={};
		editorPreview = "";
		
		displayName="M2HB Heavy Machine-Gun (M3 Tripod)";
		
		class assembleInfo{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName="M2HB Heavy Machine-Gun (M3 Tripod)";
		};
	};
	class ord_veh_csw_us_m2hb_hmg_m3aatripod_01: ord_veh_csw_base_sog_us_m2hb_hmg_01_high{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		
		side=3;
		faction="ORD_Faction_Empty_Vehicles";
		editorCategory="ORD_EdCat_Vehicles";
		editorSubcategory="ORD_EdSubCat_CSW";
		vehicleClass="ORD_VehClass_CSW";
		crew="";
		typicalCargo[]={};
		editorPreview = "";
		
		displayName="M2HB Heavy Machine-Gun (M3AA Tripod)";
		
		class assembleInfo{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName="M2HB Heavy Machine-Gun (M3AA Tripod)";
		};
	};
	
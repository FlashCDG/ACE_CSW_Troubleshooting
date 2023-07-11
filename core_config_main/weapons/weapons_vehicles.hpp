// CfgWeapons Config
// Vehicles Weapon Config
	
	// 12.7mm M2HB
	class ord_weap_veh_sog_us_m2hb_01: ord_weap_base_hmg{
		showAimCursorInternal = 1;
		class GunParticles{
			class effect1{
				positionName = "mg1_usti_hlavne";
				directionName = "mg1_konec_hlavne";
				effectName = "vn_MachineGun_MuzzleSmoke";
			};
			class effect2{
				positionName = "mg1_machinegun_link_eject_pos";
				directionName = "mg1_machinegun_link_eject_dir";
				effectName = "vn_machineguneject";
			};
			class effect3{
				positionName = "mg1_machinegun_eject_pos";
				directionName = "mg1_machinegun_eject_dir";
				effectName = "MachineGunCartridge";
			};
			class effect4{
				positionName = "mg1_machinegun_eject_pos";
				directionName = "mg1_konec_hlavne";
				effectName = "vn_MachineGun_EjectionSmoke";
			};
		};
		
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
		discreteDistanceInitIndex = 0;
		
		modes[] = {"FullAuto","SemiAuto","AI_Close_01","AI_Close_02","AI_Medium_01","AI_Far_01"};
		class SemiAuto: Mode_SemiAuto{
			sounds[] = {"StandardSound"};
			class StandardSound{
				soundsetshot[] = {"fl_soundset_shot_127x99mm_m2hb","fl_soundset_127x99mm_reverb"};
			};
			
			showToPlayer = 0;
			
			dispersion = 0.0016624261;
			reloadTime = 0.1;
			
			minRange = 0;
			minRangeProbab = 0.001;
			midRange = 2000;
			midRangeProbab = 0.001;
			maxRange = 4500;
			maxRangeProbab = 0.001;
		};
		class FullAuto: Mode_FullAuto{
			sounds[] = {"standardsound"};
			class StandardSound{
				soundsetshot[] = {"fl_soundset_shot_127x99mm_m2hb","fl_soundset_127x99mm_reverb"};
			};
			
			dispersion = 0.0016624261;
			reloadTime = 0.1;
			
			minRange = 0;
			minRangeProbab = 0.001;
			midRange = 2000;
			midRangeProbab = 0.001;
			maxRange = 4500;
			maxRangeProbab = 0.001;
		};
		class AI_Close_01: SemiAuto{
			showToPlayer = 0;
			
			burst = 1;
			burstRangeMax = 100;
			aiBurstTerminable = 1;
			
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 500;
			
			minRange = 0;
			minRangeProbab = 1.0;
			midRange = 250;
			midRangeProbab = 1.0;
			maxRange = 500;
			maxRangeProbab = 0.5;
		};
		class AI_Close_02: SemiAuto{
			showToPlayer = 0;
			
			burst = 1;
			burstRangeMax = 100;
			aiBurstTerminable = 1;
			
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 1000;
			
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
			
			minRange = 500;
			minRangeProbab = 0.5;
			midRange = 750;
			midRangeProbab = 1.0;
			maxRange = 1000;
			maxRangeProbab = 0.5;
		};
		class AI_Medium_01: SemiAuto{
			showToPlayer = 0;
			
			burst = 1;
			burstRangeMax = 100;
			aiBurstTerminable = 1;
			
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 2000;
			
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
			
			minRange = 1000;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 1.0;
			maxRange = 2000;
			maxRangeProbab = 0.5;
		};
		class AI_Far_01: SemiAuto{
			showToPlayer = 0;
			
			burst = 1;
			burstRangeMax = 100;
			aiBurstTerminable = 1;
			
			aiRateOfFire = 10;
			aiRateOfFireDistance = 4500;
			
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			
			minRange = 2000;
			minRangeProbab = 0.5;
			midRange = 3000;
			midRangeProbab = 1.0;
			maxRange = 4500;
			maxRangeProbab = 0.5;
		};
		
		initSpeed = -0.98;
		autoReload = 0;
		magazineReloadTime = 4.5;
		
		magazines[]={};
		magazineWell[]={"ORD_127x99mm_M2_Box"};
		
		bullet1[] = {"vn\sounds_f_vietnam\null.ogg",0,1,0};
		soundbullet[] = {"bullet1",1};
		
		drysound[] = {"\vn\sounds_f_vietnam\weapons\lmgs\m60\dry.ogg",2.25,1,10};
		reloadmagazinesound[] = {"\vn\sounds_f_vietnam\weapons\hmgs\m2\reload.ogg",2.25,1,50};
	};
	
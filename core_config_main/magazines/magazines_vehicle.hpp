// CfgMagazines Config
// Vehicle Magazines
	
	//// CSW Magazines
	// 12.7x99mm / .50 BMG M2 Browning
	class ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01: ord_mag_base_vehicle{
		displayName = "12.7x99mm 100rnd B M33 M9 Belt M2A1 Box";
		displaynameshort = "B";
		descriptionShort = "M33 Ball, Mild Steel Core<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,817g<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		
		ammo="ord_ammo_127x99mm_us_m33";
		count=100;
		mass=347.974; // 2,600 (Box) + 1,800 (Links) + 11,417 (Rounds) = 15,817g
		initSpeed = 900;
		tracersEvery=0;
		lastRoundsTracer=0;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	class ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01: ord_mag_base_vehicle{
		displayName = "12.7x99mm 100rnd B-T M33/M10 M9 Belt M2A1 Box";
		displaynameshort = "B-T";
		descriptionShort = "M33 Ball, Mild Steel Core<br/>M10 Tracer, Red<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,700g<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		
		ammo="ord_ammo_127x99mm_us_m33_m10";
		count=100;
		mass=345.4132; // 2,600 (Box) + 1,800 (Links) + 8,676.92 (76-B) + 2,623.68 (24-T) = 15,700.6g
		initSpeed = 900;
		tracersEvery=5;
		lastRoundsTracer=5;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	class ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01: ord_mag_base_vehicle{
		displayName = "12.7x99mm 100rnd T M10 M9 Belt M2A1 Box";
		displaynameshort = "T";
		descriptionShort = "M10 Tracer, Red<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,332<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		
		ammo="ord_ammo_127x99mm_us_m10";
		count=100;
		mass=337.304; // 2,600 (Box) + 1,800 (Links) + 10,932 (100-T) = 15,332g
		initSpeed = 900;
		tracersEvery=1;
		lastRoundsTracer=1;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	// CSW
	class ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01_csw: ord_mag_127x99mm_100rnd_m33_m9belt_m2a1box_01{
		displayName = "12.7x99mm 100rnd B M33 M9 Belt M2A1 Box";
		displaynameshort = "B";
		descriptionShort = "M33 Ball, Mild Steel Core<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,817g<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		scopeArsenal=2;
		
		ammo="ord_ammo_127x99mm_us_m33";
		count=100;
		mass=347.974; // 2,600 (Box) + 1,800 (Links) + 11,417 (Rounds) = 15,817g
		initSpeed = 900;
		tracersEvery=0;
		lastRoundsTracer=0;
		
		ace_isbelt = 1;
		type = 256;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	class ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01_csw: ord_mag_127x99mm_100rnd_m33_m10_m9belt_m2a1box_01{
		displayName = "12.7x99mm 100rnd B-T M33/M10 M9 Belt M2A1 Box";
		displaynameshort = "B-T";
		descriptionShort = "M33 Ball, Mild Steel Core<br/>M10 Tracer, Red<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,700g<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		scopeArsenal=2;
		
		ammo="ord_ammo_127x99mm_us_m33_m10";
		count=100;
		mass=345.4132; // 2,600 (Box) + 1,800 (Links) + 8,676.92 (76-B) + 2,623.68 (24-T) = 15,700.6g
		initSpeed = 900;
		tracersEvery=5;
		lastRoundsTracer=5;
		
		ace_isbelt = 1;
		type = 256;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	class ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01_csw: ord_mag_127x99mm_100rnd_m10_m9belt_m2a1box_01{
		displayName = "12.7x99mm 100rnd T M10 M9 Belt M2A1 Box";
		displaynameshort = "T";
		descriptionShort = "M10 Tracer, Red<br/>M9 Link-Belt<br/>M2A1 Ammunition Box<br/>Available: 1951<br/>Weight: 15,332<br/><br/>Round Origin: United States (1951)<br/>Magazine Origin: United States (1933)";
		
		scope=2;
		scopeArsenal=2;
		
		ammo="ord_ammo_127x99mm_us_m10";
		count=100;
		mass=337.304; // 2,600 (Box) + 1,800 (Links) + 10,932 (100-T) = 15,332g
		initSpeed = 900;
		tracersEvery=1;
		lastRoundsTracer=1;
		
		ace_isbelt = 1;
		type = 256;
		
		muzzleImpulseFactor[] = {0.05,0.05};
		nameSound = "mgun";
		model = "\vn\objects_f_vietnam\supply\a2_ammo\macv\vn_us_can_50.p3d";
		picture = "\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		
		greenmag_ammo="ord_reammo_127x99mm_1rnd";
		greenmag_basicammo="ord_reammo_127x99mm_1rnd";
	};
	
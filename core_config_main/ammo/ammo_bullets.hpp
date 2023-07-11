// Ammunition Config
// Bullets Document (<20mm)

	// 12.7x99mm NATO
	class ord_ammo_127x99mm_us_m33: ord_ammo_base_127x99mm{
		// M33 Ball, Mild Steel Core
		
		ace_vehicle_damage_incendiary = 0.05;
		
		hit = 17;
		caliber = 4.5;
		typicalSpeed = 900;
		airFriction=-0.00056868;
	};
	class ord_ammo_127x99mm_us_m33_m10: ord_ammo_base_127x99mm{
		// M33 Ball, Mild Steel Core / M10 Tracer, Red
		
		ace_vehicle_damage_incendiary = 0.15;
		
		hit = 17;
		caliber = 4.5;
		typicalSpeed = 900;
		airFriction=-0.00056868;
		
		model= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale= 3.2;
		tracerStartTime= 0.009;
		tracerEndTime= 4;
	};
	class ord_ammo_127x99mm_us_m10: ord_ammo_base_127x99mm{
		// M10 Tracer, Red
		
		ace_vehicle_damage_incendiary = 0.2;
		
		hit = 17;
		caliber = 4.3;
		typicalSpeed = 900;
		airFriction = -0.00062;
		
		model= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale= 3.2;
		tracerStartTime= 0.009;
		tracerEndTime= 4;
	};
	
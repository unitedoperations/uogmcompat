#include "..\gm_tracked.cpp"

//tracked_APC_base found in gm_tracked.cpp
class gm_bmp1_base: gm_tracked_APC_base
{
	displayName = "BMP-1";
	displayNameShort = "BMP-1";
	nameSound = "gm_vehname_bmp_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_bmp_s"};
			speechSingular[] = {"gm_vehname_bmp_s"};
		};
	};
	wheelCircumference = 2.701;
	driverAction = "gm_bmp1_driver_01_out";
	driverInAction = "gm_bmp1_driver_01_in";
	driverDoor = "Driver_Hatch";
	driverForceOptics = 0;
	getinAction = "GetinLow";
	getOutAction = "GetOutLow";
	LODTurnedOut = 1;
	class ViewOptics: ViewOptics
	{
		visionMode[] = {"normal", "nvg"};
	};
	class Turrets: Turrets
	{
	};
	armor = 600;
	armorStructural = 6;
	damageResistance = 0.00547;
	class Damage
	{
		tex[] = {};
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\gm_bmp1sp2_wheels_01_destroyed.rvmat"};
	};
	class Hitpoints: HitPoints
	{
		class HitAmmo: gm_hitpoint_hitAmmo_base
		{
		};
		class HitHull: HitHull
		{
		};
		class hit_wheel_1_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_1_1";
			armorComponent = "fireGeo_wheel_1_1";
			visual = "wheel_1_1";
		};
		class hit_wheel_1_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_1_2";
			armorComponent = "fireGeo_wheel_1_2";
			visual = "wheel_1_2";
		};
		class hit_wheel_2_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_2_1";
			armorComponent = "fireGeo_wheel_2_1";
			visual = "wheel_2_1";
		};
		class hit_wheel_2_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_2_2";
			armorComponent = "fireGeo_wheel_2_2";
			visual = "wheel_2_2";
		};
		class hit_wheel_3_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_3_1";
			armorComponent = "fireGeo_wheel_3_1";
			visual = "wheel_3_1";
		};
		class hit_wheel_3_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_3_2";
			armorComponent = "fireGeo_wheel_3_2";
			visual = "wheel_3_2";
		};
		class hit_wheel_4_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_4_1";
			armorComponent = "fireGeo_wheel_4_1";
			visual = "wheel_4_1";
		};
		class hit_wheel_4_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_4_2";
			armorComponent = "fireGeo_wheel_4_2";
			visual = "wheel_4_2";
		};
		class hit_wheel_5_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_5_1";
			armorComponent = "fireGeo_wheel_5_1";
			visual = "wheel_5_1";
		};
		class hit_wheel_5_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_5_2";
			armorComponent = "fireGeo_wheel_5_2";
			visual = "wheel_5_2";
		};
		class hit_idler_wheel_1_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_idler_wheel_1_1";
			armorComponent = "fireGeo_idler_wheel_1_1";
			visual = "idler_wheel_1_1";
		};
		class hit_idler_wheel_1_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_idler_wheel_1_2";
			armorComponent = "fireGeo_idler_wheel_1_2";
			visual = "idler_wheel_1_2";
		};
		class hit_sprocket_wheel_1_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_sprocket_wheel_1_1";
			armorComponent = "fireGeo_sprocket_wheel_1_1";
			visual = "sprocket_wheel_1_1";
		};
		class hit_sprocket_wheel_1_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_sprocket_wheel_1_2";
			armorComponent = "fireGeo_sprocket_wheel_1_2";
			visual = "sprocket_wheel_1_2";
		};
	};
	driveOnComponent[] = {"sprocket_wheel_1_1", "sprocket_wheel_1_2", "idler_wheel_1_1", "idler_wheel_1_2", "wheel_1_1_damper", "wheel_1_2_damper", "wheel_2_1_damper", "wheel_2_2_damper", "wheel_3_1_damper", "wheel_3_2_damper", "wheel_4_1_damper", "wheel_4_2_damper", "wheel_5_1_damper", "wheel_5_2_damper", "wheel_6_1_damper", "wheel_6_2_damper", "Slide"};
	fuelCapacity = 17;
	brakeIdleSpeed = 1.78;
	maxSpeed = 65;
	normalSpeedForwardCoef = 0.75;
	slowSpeedForwardCoef = 0.25;
	tracksSpeed = 1.1;
	enginePower = 210;
	maxOmega = 320;
	minOmega = 70;
	redRpm = 2640;
	idleRpm = 700;
	peakTorque = 980;
	torqueCurve[] = {{0.0350877, 0}, {0.315789, 0.953109}, {0.526316, 1}, {0.561404, 1}, {0.631579, 0.953109}, {0.77193, 0.897044}, {0.912281, 0.826707}, {1.08807, 0}};
	thrustDelay = 0.5;
	engineMOI = 10;
	dampingRateFullThrottle = 0.5;
	dampingRateZeroThrottleClutchEngaged = 5;
	dampingRateZeroThrottleClutchDisengaged = 0.8;
	clutchStrength = 150;
	latency = 0.01;
	switchTime = 0.01;
	changeGearType = "rpmratio";
	changeGearOmegaRatios[] = {1, 0.350877, 0.350877, 0, 0.835088, 0.350877, 0.894737, 0.666667, 0.912281, 0.666667, 0.912281, 0.666667, 1, 0.666667};
	class complexGearbox
	{
		GearboxRatios[] = {"R1", -7.25, "N", 0, "D1", 5.35, "D2", 2.942, "D3", 2.012, "D4", 1.38, "D5", 0.958};
		AmphibiousRatios[] = {"R1", -9.4, "N", 0, "D1", 9.4};
		TransmissionRatios[] = {"High", 9.4};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
		transmissionDelay = 0.3;
	};
	tankTurnForce = 450000;
	tankTurnForceAngMinSpd = 0.7;
	tankTurnForceAngSpd = 0.9;
	accelAidForceCoef = 1;
	accelAidForceYOffset = -2;
	accelAidForceSpd = 0.1;
	class Wheels
	{
		class wheel_1_1
		{
			boneName = "wheel_1_1_damper";
			center = "wheel_1_1_axis";
			boundary = "wheel_1_1_bound";
			steering = 0;
			side = "left";
			latStiffX = 2;
			latStiffY = 33;
			dampingRate = 5;
			dampingRateDestroyed = 3400;
			longitudinalStiffnessPerUnitGravity = 10000;
			dampingRateInAir = 5;
			maxBrakeTorque = 2000;
			maxHandBrakeTorque = 23000;
			maxDroop = 0.18;
			maxCompression = 0.18;
			frictionVsSlipGraph[] = {{0, 0.55}, {0.3, 1.28}, {0.65, 0.55}};
			suspTravelDirection[] = {-0.125, -1, 0};
			springStrength = 49000;
			springDamperRate = 11200;
			mass = 100;
			MOI = 4.9298;
			width = 0.5;
			sprungMass = -1;
		};
		class wheel_2_1: wheel_1_1
		{
			boneName = "wheel_2_1_damper";
			center = "wheel_2_1_axis";
			boundary = "wheel_2_1_bound";
		};
		class wheel_3_1: wheel_1_1
		{
			boneName = "wheel_3_1_damper";
			center = "wheel_3_1_axis";
			boundary = "wheel_3_1_bound";
		};
		class wheel_4_1: wheel_1_1
		{
			boneName = "wheel_4_1_damper";
			center = "wheel_4_1_axis";
			boundary = "wheel_4_1_bound";
		};
		class wheel_5_1: wheel_1_1
		{
			boneName = "wheel_5_1_damper";
			center = "wheel_5_1_axis";
			boundary = "wheel_5_1_bound";
		};
		class wheel_6_1: wheel_1_1
		{
			boneName = "wheel_6_1_damper";
			center = "wheel_6_1_axis";
			boundary = "wheel_6_1_bound";
		};
		class wheel_1_2: wheel_1_1
		{
			boneName = "wheel_1_2_damper";
			center = "wheel_1_2_axis";
			boundary = "wheel_1_2_bound";
			side = "right";
			suspTravelDirection[] = {0.125, -1, 0};
		};
		class wheel_2_2: wheel_1_2
		{
			boneName = "wheel_2_2_damper";
			center = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
		};
		class wheel_3_2: wheel_1_2
		{
			boneName = "wheel_3_2_damper";
			center = "wheel_3_2_axis";
			boundary = "wheel_3_2_bound";
		};
		class wheel_4_2: wheel_1_2
		{
			boneName = "wheel_4_2_damper";
			center = "wheel_4_2_axis";
			boundary = "wheel_4_2_bound";
		};
		class wheel_5_2: wheel_1_2
		{
			boneName = "wheel_5_2_damper";
			center = "wheel_5_2_axis";
			boundary = "wheel_5_2_bound";
		};
		class wheel_6_2: wheel_1_2
		{
			boneName = "wheel_6_2_damper";
			center = "wheel_6_2_axis";
			boundary = "wheel_6_2_bound";
		};
		class sprocket_1_1: wheel_1_1
		{
			boneName = "";
			center = "sprocket_wheel_1_1_axis";
			boundary = "sprocket_wheel_1_1_bound";
			maxDroop = 0;
			maxCompression = 0;
		};
		class idler_1_1: sprocket_1_1
		{
			boneName = "";
			center = "idler_wheel_1_1_axis";
			boundary = "idler_wheel_1_1_bound";
		};
		class sprocket_1_2: wheel_1_2
		{
			boneName = "";
			center = "sprocket_wheel_1_2_axis";
			boundary = "sprocket_wheel_1_2_bound";
			maxDroop = 0;
			maxCompression = 0;
		};
		class idler_1_2: sprocket_1_2
		{
			boneName = "";
			center = "idler_wheel_1_2_axis";
			boundary = "idler_wheel_1_2_bound";
		};
	};
	class Exhausts
	{
		class Exhaust_1_1
		{
			position = "Exhaust_1_1_pos";
			direction = "Exhaust_1_1_dir";
			effect = "ExhaustEffectTankSide";
		};
	};
	canFloat = 1;
	waterAngularDampingCoef = 10;
	waterPPInVehicle = 0;
	waterResistanceCoef = 0.5;
	engineShiftY = 0.5;
	waterLeakiness = 1.5;
	waterDamageEngine = 0.2;
	insideSoundCoef = 0.9;
	attenuationEffectType = "TankAttenuation";
	soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engineOn_Int", 0.630957, 1};
	soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engineOn_Ext", 0.794328, 1, 200};
	soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engineOff_Int", 0.630957, 1};
	soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engineOff_Ext", 0.794328, 1, 200};
	class Sounds: Sounds
	{
		class ThreadsOutH0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutH1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutH2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_03_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutS0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutS1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutS2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_tracks_03_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class engine_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_01_ext", 0.794328, 1, 200};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_02_ext", 0.891251, 1, 240};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_03_ext", 1.12202, 1, 280};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_05_ext", 1.25893, 1, 320};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_05_ext", 1.41254, 1, 360};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_05_ext", 1.58489, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_07_ext", 1.77828, 1, 440};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_01_ext", 1.12202, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_02_ext", 1.41254, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_03_ext", 1.77828, 1, 230};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_04_ext", 1.99526, 1, 290};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_05_ext", 1.77828, 1, 350};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_07a_ext", 2.23872, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_07_ext", 2.51189, 1, 450};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class engine_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_01_int", 1.4, 1};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_01_int", 1.6, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_03_int", 1.3, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_04_int", 1.5, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_05_int", 1.4, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_05_int", 1.5, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_engine_07_int", 1.7, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_01_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_02_int", 0.398107, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_03_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_04_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_05_int", 0.501187, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_06_int", 0.562341, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\sounds\gm_bmp1_thrust_07_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
	};
	class UserActions: UserActions
	{
	};
	class AnimationSources: AnimationSources
	{
	};
	class EventHandlers: Eventhandlers
	{
	};
	class RenderTargets
	{
		class periscope_01
		{
			renderTarget = "rendertarget0";
			class CameraView1
			{
				pointPosition = "periscope_01_pos";
				pointDirection = "periscope_01_dir";
				renderVisionMode = 0;
				renderQuality = 2;
				fov = 0.305731;
			};
		};
		class periscope_02: periscope_01
		{
			renderTarget = "rendertarget1";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_02_pos";
				pointDirection = "periscope_02_dir";
			};
		};
		class periscope_03: periscope_01
		{
			renderTarget = "rendertarget2";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_03_pos";
				pointDirection = "periscope_03_dir";
			};
		};
		class periscope_04: periscope_01
		{
			renderTarget = "rendertarget3";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_04_pos";
				pointDirection = "periscope_04_dir";
			};
		};
		class periscope_05: periscope_01
		{
			renderTarget = "rendertarget4";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_05_pos";
				pointDirection = "periscope_05_dir";
			};
		};
		class periscope_06: periscope_01
		{
			renderTarget = "rendertarget5";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_06_pos";
				pointDirection = "periscope_06_dir";
			};
		};
		class periscope_07: periscope_01
		{
			renderTarget = "rendertarget6";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_07_pos";
				pointDirection = "periscope_07_dir";
			};
		};
		class periscope_08: periscope_01
		{
			renderTarget = "rendertarget7";
			class CameraView1: CameraView1
			{
				pointPosition = "periscope_08_pos";
				pointDirection = "periscope_08_dir";
			};
		};
	};
};
class gm_bmp1sp2_base: gm_bmp1_base
{
	displayName = "BMP-1 SP-2";
	displayNameShort = "BMP-1 SP-2";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\ui\picture_gm_bmp1sp2_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_bmp1sp2";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\data\ui\map_gm_bmp1sp2_ca";
	weapons[] = {"SmokeLauncher"};
	magazines[] = {"gm_10Rnd_engine_smoke"};
	transportSoldier = 0;
	cargoProxyIndexes[] = {};
	getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8};
	cargoAction[] = {"gm_m113_cargo_03_in"};
	cargoGetInAction[] = {"GetInLow"};
	cargoGetOutAction[] = {"GetOutLow"};
	memoryPointsGetInCargo[] = {"cargo_GetIn_pos"};
	memoryPointsGetInCargoDir[] = {"cargo_GetIn_dir"};
	memoryPointMissile[] = {"MainTurret_missile_dir", "MainTurret_Gun_dir"};
	memoryPointMissileDir[] = {"MainTurret_missile_pos", "MainTurret_Gun_pos"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			minElev = -4;
			maxElev = 15;
			selectionFireAnim = "MainTurret_Coax_muzzleflash";
			missileBeg = "MainTurret_Gun_dir";
			missileEnd = "MainTurret_Gun_pos";
			weapons[] = {"gm_73mm_2a28", "gm_maljutka_launcher", "gm_pk_coax"};
			magazines[] = {"gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_heat_pg15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_73mm_he_og15v", "gm_1Rnd_maljutka_heat_9m14m", "gm_1Rnd_maljutka_heat_9m14m", "gm_1Rnd_maljutka_heat_9m14m", "gm_1Rnd_maljutka_heat_9m14m", "gm_1000Rnd_762x54mm_api_b32_pk", "gm_1000Rnd_762x54mm_api_b32_pk"};
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
			gunnerAction = "gm_bmp1_gunner_01_out";
			gunnerInAction = "gm_bmp1_gunner_01_in";
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			forceHideGunner = 0;
			animationSourcehatch = "";
			gm_animationSourcehatch = "MainTurret_hatch_source";
			gunnerDoor = "MainTurret_hatch_source";
			memoryPointsGetInGunner = "MainTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "MainTurret_GetIn_dir";
			gunnerGetinAction = "gm_tank_hatch_01_getin_01";
			gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
			preciseGetInOut = 0;
			isPersonTurret = 1;
			memoryPointGunnerOptics = "Optic_MainTurret_pos";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 0;
			turretinfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
			discreteDistance[] = {};
			discreteDistanceInitindex = 0;
			class OpticsIn
			{
				class 1pn22m1_day_6x: gm_optics_1pn22m1_day_6x_base
				{
				};
				class 1pn22m1_nv_6_7x: gm_optics_1pn22m1_nv_6_7x_base
				{
				};
			};
			class Reflectors
			{
				class MainTurret_searchLight
				{
					color[] = {1040, 2180, 2550};
					ambient[] = {70, 75, 100};
					intensity = 2000;
					size = 1;
					innerAngle = 2;
					outerAngle = 10;
					coneFadeCoef = 10;
					position = "lightMainTurret_searchLight_pos";
					direction = "lightMainTurret_searchLight_dir";
					hitpoint = "hitPoint_MainTurret_searchLight";
					selection = "lightMainTurret_searchLight";
					useFlare = 1;
					dayLight = 1;
					FlareSize = 4;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 0;
						quadratic = 0.05;
						hardLimitStart = 400;
						hardLimitEnd = 450;
					};
				};
			};
			aggregateReflectors[] = {{"MainTurret_searchLight"}};
			armorLights = 0.01;
			class Hitpoints
			{
				class HitTurret: gm_hitpoint_hitTurret_base
				{
					name = "hitPoint_MainTurret_trav";
					armorComponent = "fireGeo_MainTurret_trav";
					visual = "damage_MainTurret_trav";
					armor = 0.3;
					minimalHit = 0.3;
				};
				class HitGun: gm_hitpoint_hitGun_base
				{
					name = "hitPoint_MainTurret_elev";
					armorComponent = "fireGeo_MainTurret_elev";
					visual = "damage_MainTurret_elev";
					armor = 0.3;
					minimalHit = 0.3;
				};
			};
			class Turrets
			{
			};
		};
		class CommanderTurret: CommanderTurret_base
		{
			gunnerName = "Commander";
			minElev = -60;
			maxElev = 60;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			weapons[] = {};
			magazines[] = {};
			gunnerHasFlares = 1;
			startEngine = 0;
			gunnerAction = "gm_bmp1_commander_01_out";
			gunnerInAction = "gm_bmp1_commander_01_in";
			allowLauncherOut = 1;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			animationSourcehatch = "";
			gm_animationSourcehatch = "CommanderTurret_hatch_source";
			gunnerDoor = "CommanderTurret_hatch_source";
			memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
			gunnerGetinAction = "gm_tank_hatch_01_getin_01";
			gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
			preciseGetInOut = 0;
			personTurretAction = "gm_bmp1_commander_01_out_ffv";
			minOutElev = -60;
			maxOutElev = 60;
			initOutElev = 0;
			minOutTurn = -360;
			maxOutTurn = 360;
			initOutTurn = 0;
			showCrewAim = 1;
			class TurnOut
			{
				limitsArrayTop[] = {{60, -135}, {60, 135}};
				limitsArrayBottom[] = {{-30, -95}, {-30, 95}};
			};
			class TurnIn: TurnOut
			{
				limitsArrayTop[] = {{25, -180}, {25, 180}};
				limitsArrayBottom[] = {{-14, -180}, {-14, 180}};
			};
			memoryPointGunnerOptics = "optic_CommanderTurret_pos";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
			gunnerForceOptics = 0;
			turretinfoType = "gm_RscUnitInfo_vehicle_commander_optics";
			class OpticsIn
			{
				class tkn3b_day_4_75x: gm_optics_tkn3b_day_4_75x_base
				{
				};
				class tkn3b_nv_3_75x: gm_optics_tkn3b_nv_3_75x_base
				{
				};
			};
			class Reflectors
			{
				class CommanderTurret_searchLight
				{
					color[] = {1040, 2180, 2550};
					ambient[] = {70, 75, 100};
					position = "lightCommanderTurret_searchLight_pos";
					direction = "lightCommanderTurret_searchLight_dir";
					hitpoint = "hitPoint_lightCommanderTurret_searchLight";
					selection = "lightCommanderTurret_searchLight";
					size = 1;
					innerAngle = 2;
					outerAngle = 10;
					coneFadeCoef = 10;
					intensity = 1000;
					useFlare = 1;
					dayLight = 1;
					FlareSize = 4;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 0;
						quadratic = 0.05;
						hardLimitStart = 400;
						hardLimitEnd = 450;
					};
				};
			};
			aggregateReflectors[] = {{"CommanderTurret_searchLight"}};
			armorLights = 0.01;
			class Hitpoints
			{
				class hitCommanderTurret_hitTurret: gm_hitpoint_hitTurret_base
				{
					name = "hitPoint_turret_trav";
					armorComponent = "fireGeo_turret_trav";
					visual = "damage_turret_trav";
				};
				class hitCommanderTurret_hitGun: gm_hitpoint_hitGun_base
				{
					name = "hitPoint_turret_elev";
					armorComponent = "fireGeo_turret_elev";
					visual = "damage_turret_elev";
				};
			};
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerName = "Cargo (Front Hatch Left)";
			proxyIndex = 1;
			gunnerCompartments = "Compartment1";
			maxTurn = 95;
			minTurn = -95;
			initTurn = 0;
			maxOutTurn = 95;
			minOutTurn = -95;
			initOutTurn = 0;
			maxElev = 60;
			minElev = -20;
			initElev = 0;
			maxOutElev = 60;
			minOutElev = -20;
			initOutElev = 0;
			LODTurnedIn = 1200;
			LODTurnedOut = 1;
			gunnerAction = "gm_bmp1_cargo_03_out";
			gunnerInAction = "gm_bmp1_cargo_03_in";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			hideWeaponsGunner = 1;
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			memoryPointsGetInGunner = "cargo_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo_GetIn_dir";
			gunnerDoor = "";
			allowLauncherIn = 0;
			allowLauncherOut = 1;
			memoryPointGunnerOptics = "";
			selectionFireAnim = "";
			canHideGunner = 1;
			animationSourceHatch = "";
			gunnerforceOptics = 0;
			gm_animationSourceHatch = "hatch_1_1_source";
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_04_out";
			gunnerInAction = "gm_bmp1_cargo_04_in";
			gunnerName = "Cargo (Front Hatch Right)";
			proxyIndex = 2;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_1_2_source";
		};
		class CargoTurret_03: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_01_out";
			gunnerInAction = "gm_bmp1_cargo_01_in";
			gunnerName = "Cargo (Front Hatch Left)";
			proxyIndex = 3;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_1_1_source";
		};
		class CargoTurret_04: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_03_out";
			gunnerInAction = "gm_bmp1_cargo_03_in";
			gunnerName = "Cargo (Front Hatch Right)";
			proxyIndex = 4;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_1_2_source";
		};
		class CargoTurret_05: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_04_out";
			gunnerInAction = "gm_bmp1_cargo_04_in";
			gunnerName = "Cargo (Rear Hatch Left)";
			proxyIndex = 5;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_2_1_source";
		};
		class CargoTurret_06: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_02_out";
			gunnerInAction = "gm_bmp1_cargo_02_in";
			gunnerName = "Cargo (Rear Hatch Right)";
			proxyIndex = 6;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_2_2_source";
		};
		class CargoTurret_07: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_02_out";
			gunnerInAction = "gm_bmp1_cargo_02_in";
			gunnerName = "Cargo (Rear Hatch Left)";
			proxyIndex = 7;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_2_1_source";
		};
		class CargoTurret_08: CargoTurret_01
		{
			gunnerAction = "gm_bmp1_cargo_01_out";
			gunnerInAction = "gm_bmp1_cargo_01_in";
			gunnerName = "Cargo (Rear Hatch Right)";
			proxyIndex = 8;
			animationSourceHatch = "";
			gm_animationSourceHatch = "hatch_2_2_source";
		};
	};
	class Reflectors
	{
		class lightFront_1_1
		{
			color[] = {2550, 2360, 1390};
			ambient[] = {255, 236, 139};
			position = "lightFront_1_1_pos";
			direction = "lightFront_1_1_dir";
			hitpoint = "hitPoint_lightFront_1_1";
			selection = "lightFront_1_1";
			size = 1;
			innerAngle = 100;
			outerAngle = 179;
			coneFadeCoef = 10;
			intensity = 1;
			useFlare = 0;
			daylight = 1;
			flareSize = 1;
			class Attenuation
			{
				start = 1;
				constant = 0;
				linear = 0;
				quadratic = 0.25;
				hardLimitStart = 60;
				hardLimitEnd = 120;
			};
		};
		class lightFront_1_1_flare: lightFront_1_1
		{
			position = "lightFront_1_1_flare_pos";
			useFlare = 1;
			innerAngle = 80;
			outerAngle = 110;
		};
	};
	class AnimationSources: AnimationSources
	{
		class MainTurret_Muzzleflash_rotation_source
		{
			source = "ammorandom";
			weapon = "gm_73mm_2a28";
		};
		class MainTurret_Recoil_source
		{
			source = "user";
			animPeriod = 1;
		};
		class MainTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "MainTurret_hatch_axis";
		};
		class CommanderTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "CommanderTurret_hatch_axis";
		};
		class hatch_1_1_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_1_1_axis";
		};
		class hatch_1_2_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_1_2_axis";
		};
		class hatch_2_1_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_2_1_axis";
		};
		class hatch_2_2_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_2_2_axis";
		};
		class spareTracks_1_1_unhide: gm_source_user_base
		{
			displayName = "Add Spare Tracks - Left";
			forceAnimatePhase = 1;
			forceAnimate[] = {"wheelChock_1_1_unhide", 0};
		};
		class spareTracks_1_2_unhide: gm_source_user_base
		{
			displayName = "Add Spare Tracks - Right";
			forceAnimatePhase = 1;
			forceAnimate[] = {"wheelChock_1_2_unhide", 0};
		};
		class spareTracks_2_1_unhide: gm_source_user_base
		{
			displayName = "Add Spare Tracks";
		};
		class wheelChock_1_1_unhide: gm_source_user_base
		{
			displayName = "Add Wheel Chock - Left";
			forceAnimatePhase = 1;
			forceAnimate[] = {"spareTracks_1_1_unhide", 0};
		};
		class wheelChock_1_2_unhide: gm_source_user_base
		{
			displayName = "Add Wheel Chock - Right";
			forceAnimatePhase = 1;
			forceAnimate[] = {"spareTracks_1_2_unhide", 0};
		};
		class woodenBeam_01_unhide: gm_source_user_base
		{
			displayName = "Add Wooden Beam";
		};
		class tarpRoll_01_unhide: gm_source_user_base
		{
			displayName = "Add Tarp Roll";
		};
		class mainTurret_maljutka_launcher_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class MainTurret_Maljutka_realodMagazine_source
		{
			source = "reloadmagazine";
			weapon = "gm_maljutka_launcher";
		};
		class MainTurret_Maljutka_revolving_source
		{
			source = "revolving";
			weapon = "gm_maljutka_launcher";
		};
	};
	class Attributes: Attributes
	{
		class gm_vehicleMarkings_tacticalNumber_Number_attribute: gm_vehicleMarkings_tacticalNumber_Number_attribute
		{
		};
		class gm_vehicleMarkings_tacticalNumber_Numberfont_attribute: gm_vehicleMarkings_tacticalNumber_Numberfont_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_MissionSmall_attribute: gm_vehicleMarkings_Insignias_MissionSmall_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_MissionLarge_attribute: gm_vehicleMarkings_Insignias_MissionLarge_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_Recon_attribute: gm_vehicleMarkings_Insignias_Recon_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_Unit_attribute: gm_vehicleMarkings_Insignias_Unit_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_Company_attribute: gm_vehicleMarkings_Insignias_Company_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_Formation_attribute: gm_vehicleMarkings_Insignias_Formation_attribute
		{
		};
		class gm_vehicleMarkings_Insignias_nation_attribute: gm_vehicleMarkings_Insignias_nation_attribute
		{
		};
	};
	class Eventhandlers: EventHandlers
	{
		class gm_bmp1
		{
			fired = "[_this,'gm_73mm_2a28','MainTurret_recoil_source'] spawn gm_core_vehicles_fnc_vehicleRecoil";
		};
	};
	class TextureSources
	{
		class gm_gc_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_ext_02_wdl_co.paa"};
		};
		class gm_gc_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_ext_02_win_co.paa"};
		};
		class gm_gc_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_02_oli_co.paa"};
		};
		class gm_gc_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_ext_02_ols_co.paa"};
		};
		class gm_gc_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_ext_02_olw_co.paa"};
		};
		class gm_gc_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_ext_02_un_co.paa"};
		};
	};
};
class gm_bvp1_base: gm_bmp1sp2_base
{
	displayName = "BVP-1";
	displayNameShort = "BVP-1";
};
class gm_gc_army_bmp1sp2_base: gm_bmp1sp2_base
{
	side = 0;
	faction = "gm_fc_gc";
	gm_InsigniasDefaultNation = "gm_insignia_gc_army_01";
	gm_LicensePlate = "gm_gc_army_blk";
	gm_LicensePlateDefaultDigits = "VA##-####";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08", "LicensePlate_09"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	gm_TacticalNumbersDefaultNumber = "####";
	gm_TacticalNumbersFontNumbers = "gm_gc_schablonier_gry";
	gm_TacticalNumbersSelectionsNumbers[] = {"nr_1", "nr_2", "nr_3", "nr_4"};
	crew = "gm_gc_army_crew_mpiaks74nk_80_blk";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ui\preview_gm_gc_army_bmp1sp2.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_02_oli_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_lp1_blk
		{
			weapon = "gm_lp1_blk";
			count = 1;
		};
		class _xx_gm_df7x40_blk
		{
			weapon = "gm_df7x40_blk";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_gm_handGrenade_frag_rgd5
		{
			magazine = "gm_handGrenade_frag_rgd5";
			count = 12;
		};
		class _xx_gm_smokeshell_wht_gc
		{
			magazine = "gm_smokeshell_wht_gc";
			count = 4;
		};
		class _xx_gm_smokeshell_grn_gc
		{
			magazine = "gm_smokeshell_grn_gc";
			count = 4;
		};
		class _xx_gm_smokeshell_red_gc
		{
			magazine = "gm_smokeshell_red_gc";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_gc
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_gc";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_gc";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_gc";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_gc";
			count = 4;
		};
		class _xx_gm_1Rnd_40mm_heat_pg7v_rpg7
		{
			magazine = "gm_1Rnd_40mm_heat_pg7v_rpg7";
			count = 2;
		};
		class _xx_gm_75Rnd_762x39mm_b_t_M43_ak47_blk
		{
			magazine = "gm_75Rnd_762x39mm_b_t_M43_ak47_blk";
			count = 4;
		};
		class _xx_gm_30Rnd_545x39mm_b_7N6_ak74_org
		{
			magazine = "gm_30Rnd_545x39mm_b_7N6_ak74_org";
			count = 20;
		};
		class _xx_gm_100Rnd_762x54mm_b_t_t46_pk_grn
		{
			magazine = "gm_100Rnd_762x54mm_b_t_t46_pk_grn";
			count = 4;
		};
	};
	class TransportItems
	{
		class _xx_gm_gc_army_gauzeBandage
		{
			name = "gm_gc_army_gauzeBandage";
			count = 4;
		};
		class _xx_gm_gc_army_medkit
		{
			name = "gm_gc_army_medkit";
			count = 4;
		};
		class _xx_gm_repairkit_01
		{
			name = "gm_repairkit_01";
			count = 1;
		};
	};
};
class gm_gc_army_bmp1sp2: gm_gc_army_bmp1sp2_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_gc_army_bmp1sp2_wdl: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\wdl\gm_gc_army_bmp1sp2_ext_02_wdl_co.paa"};
	textureList[] = {"gm_gc_army_wdl", 1};
	vehicleclass = "gm_vc_apc_wdl";
	editorSubcategory = "gm_esc_apc_wdl";
};
class gm_gc_army_bmp1sp2_win: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\win\gm_gc_army_bmp1sp2_ext_02_win_co.paa"};
	textureList[] = {"gm_gc_army_win", 1};
	vehicleclass = "gm_vc_apc_win";
	editorSubcategory = "gm_esc_apc_win";
};
class gm_gc_army_bmp1sp2_oli: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\oli\gm_gc_army_bmp1sp2_ext_02_oli_co.paa"};
	textureList[] = {"gm_gc_army_oli", 1};
	vehicleclass = "gm_vc_apc_oli";
	editorSubcategory = "gm_esc_apc_oli";
};
class gm_gc_army_bmp1sp2_ols: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\ols\gm_gc_army_bmp1sp2_ext_02_ols_co.paa"};
	textureList[] = {"gm_gc_army_ols", 1};
	vehicleclass = "gm_vc_apc_ols";
	editorSubcategory = "gm_esc_apc_ols";
};
class gm_gc_army_bmp1sp2_olw: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\olw\gm_gc_army_bmp1sp2_ext_02_olw_co.paa"};
	textureList[] = {"gm_gc_army_olw", 1};
	vehicleclass = "gm_vc_apc_olw";
	editorSubcategory = "gm_esc_apc_olw";
};
class gm_gc_army_bmp1sp2_un: gm_gc_army_bmp1sp2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bmp1\gm_gc_army_bmp1\data\un\gm_gc_army_bmp1sp2_ext_02_un_co.paa"};
	textureList[] = {"gm_gc_army_un", 1};
	vehicleclass = "gm_vc_apc_un";
	editorSubcategory = "gm_esc_apc_un";
};
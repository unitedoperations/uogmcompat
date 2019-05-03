#include "..\gm_tracked.cpp"

//tracked_Tank_base found in gm_tracked.cpp
class gm_t55_base: gm_tracked_Tank_base
{
	displayName = "T-55";
	displayNameShort = "T-55";
	nameSound = "gm_vehname_t55_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_t55_p"};
			speechSingular[] = {"gm_vehname_t55_s"};
		};
	};
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\ui\map_gm_t55a_ca";
	wheelCircumference = 2.701;
	driverAction = "driver_apctracked3_out";
	driverInAction = "gm_t55_driver_01_in";
	driverDoor = "Driver_Hatch";
	getinAction = "GetinHigh";
	getOutAction = "GetOutHigh";
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
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\gm_t55a_wheels_01_destroyed.rvmat"};
	};
	class Hitpoints: HitPoints
	{
		class HitAmmo: gm_hitpoint_hitAmmo_base
		{
		};
		class HitHull: HitHull
		{
			armor = 1;
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
	driveOnComponent[] = {"sprocket_wheel_1_1", "sprocket_wheel_1_2", "idler_wheel_1_1", "idler_wheel_1_2", "wheel_1_1_damper", "wheel_1_2_damper", "wheel_2_1_damper", "wheel_2_2_damper", "wheel_3_1_damper", "wheel_3_2_damper", "wheel_4_1_damper", "wheel_4_2_damper", "wheel_5_1_damper", "wheel_5_2_damper", "Slide"};
	fuelCapacity = 28;
	brakeIdleSpeed = 1.78;
	maxSpeed = 65;
	normalSpeedForwardCoef = 0.75;
	slowSpeedForwardCoef = 0.25;
	waterResistance = 0;
	waterResistanceCoef = 0.25;
	tracksSpeed = 1.1;
	waterDamageEngine = 0.2;
	enginePower = 400;
	maxOmega = 272;
	minOmega = 70;
	redRpm = 2640;
	idleRpm = 1000;
	peakTorque = 1600;
	torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
	thrustDelay = 0.5;
	engineMOI = 12;
	dampingRateFullThrottle = 1.4;
	dampingRateZeroThrottleClutchEngaged = 5;
	dampingRateZeroThrottleClutchDisengaged = 0.8;
	clutchStrength = 40;
	latency = 3;
	switchTime = 0.1;
	changeGearType = "rpmratio";
	changeGearOmegaRatios[] = {1, 0.333333, 0.333333, 0, 0.993333, 0.333333, 0.983333, 0.7, 0.983333, 0.733333, 0.983333, 0.733333};
	class complexGearbox
	{
		GearboxRatios[] = {"R2", -3.9, "N", 0, "D1", 4.7, "D2", 3.5, "D3", 2.6, "D4", 2.3, "D5", 1.5};
		transmissionRatios[] = {"High", 19.5};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
	};
	tankTurnForce = 950000;
	tankTurnForceAngMinSpd = 0.7;
	tankTurnForceAngSpd = 0.76;
	accelAidForceCoef = 2;
	accelAidForceYOffset = -6.5;
	accelAidForceSpd = 10;
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
			dampingRate = 2200;
			dampingRateDestroyed = 3400;
			longitudinalStiffnessPerUnitGravity = 10000;
			dampingRateInAir = 2200;
			maxBrakeTorque = 23000;
			maxHandBrakeTorque = 23000;
			maxDroop = 0.18;
			maxCompression = 0.18;
			frictionVsSlipGraph[] = {{0, 0.55}, {0.3, 1.28}, {0.65, 0.55}};
			suspTravelDirection[] = {-0.125, -1, 0};
			springStrength = 411400;
			springDamperRate = 22440;
			MOI = 10.2605;
			mass = 100;
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
		class sprocket_1_1: wheel_1_1
		{
			boneName = "sprocket_wheel_1_1_damper";
			center = "sprocket_wheel_1_1_axis";
			boundary = "sprocket_wheel_1_1_bound";
			maxDroop = 0;
			maxCompression = 0;
		};
		class idler_1_1: sprocket_1_1
		{
			boneName = "idler_wheel_1_1_damper";
			center = "idler_wheel_1_1_axis";
			boundary = "idler_wheel_1_1_bound";
		};
		class sprocket_1_2: wheel_1_2
		{
			boneName = "sprocket_wheel_1_2_damper";
			center = "sprocket_wheel_1_2_axis";
			boundary = "sprocket_wheel_1_2_bound";
			maxDroop = 0;
			maxCompression = 0;
		};
		class idler_1_2: sprocket_1_2
		{
			boneName = "idler_wheel_1_2_damper";
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
		class Exhaust_1_2: Exhaust_1_1
		{
			position = "Exhaust_1_2_pos";
			direction = "Exhaust_1_2_dir";
		};
	};
	insideSoundCoef = 0.9;
	attenuationEffectType = "TankAttenuation";
	soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engineOnInt", 0.630957, 1};
	soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engineOnExt", 0.794328, 1, 200};
	soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engineOffInt", 0.630957, 1};
	soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engineOffExt", 0.794328, 1, 200};
	class Sounds: Sounds
	{
		class ThreadsOutH0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_01_ext", 3.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutH1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_03_ext", 3.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutH2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_03_ext", 3.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutS0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_01_ext", 2.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutS1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_03_ext", 2.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutS2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_tracks_03_ext", 2.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class engine_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_01_ext", 0.794328, 1, 200};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_02_ext", 0.891251, 1, 240};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(800/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(800/	2640)]))";
		};
		class engine_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_03_ext", 1.12202, 1, 280};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_07_ext", 1.25893, 1, 320};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_04_ext", 1.41254, 1, 360};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_ext", 1.58489, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_ext", 1.77828, 1, 440};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_01_ext", 1.12202, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_02_ext", 1.41254, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_03_ext", 1.77828, 1, 230};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_04_ext", 1.99526, 1, 290};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_05_ext", 1.77828, 1, 350};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_05_ext", 2.23872, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_06_ext", 2.51189, 1, 450};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class engine_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_01_int", 0.794328, 1};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_02_int", 0.891251, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_03_int", 0.122019, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_04_int", 0.258925, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_07_int", 0.412538, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_int", 0.584893, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_engine_05_int", 0.778279, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_01_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_02_int", 0.398107, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_03_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_04_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_05_int", 0.501187, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_06_int", 0.562341, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\sounds\gm_t55_thrust_07_int", 0.630957, 1};
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
	};
};
class gm_t55a_base: gm_t55_base
{
	displayName = "T-55A";
	displayNameShort = "T-55A";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\data\ui\picture_gm_t55a_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_t55a";
	maxFordingDepth = -1.53221;
	weapons[] = {"SmokeLauncher"};
	magazines[] = {"gm_10Rnd_engine_smoke"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			minElev = -5;
			maxElev = 18;
			selectionFireAnim = "MainTurret_Coax_muzzleflash";
			weapons[] = {"gm_100mm_d10t2s", "gm_pkt_coax"};
			magazines[] = {"gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_heat_t_bk5m", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_apfsds_t_bm20", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1Rnd_100x695mm_he_of412", "gm_1000Rnd_762x54mm_api_b32_pk", "gm_1000Rnd_762x54mm_api_b32_pk"};
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
			gunnerAction = "gm_t55_commander_01_in";
			gunnerInAction = "gm_t55_commander_01_in";
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			forceHideGunner = 1;
			animationSourcehatch = "";
			gm_animationSourcehatch = "";
			gunnerDoor = "CommanderTurret_hatch_source";
			memoryPointsGetInGunner = "MainTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "MainTurret_GetIn_dir";
			gunnerGetinAction = "";
			gunnerGetOutAction = "";
			preciseGetInOut = 0;
			memoryPointGunnerOptics = "Optic_MainTurret_pos";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			turretinfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
			discreteDistanceInitindex = 5;
			class OpticsIn
			{
				class tshb32p_day_3_5x: gm_optics_tshb32p_day_3_5x_base
				{
				};
				class tshb32p_day_7x: gm_optics_tshb32p_day_7x_base
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
			class TurnOut
			{
			};
			class TurnIn: TurnOut
			{
				limitsArrayTop[] = {{18, -180}, {18, 180}};
				limitsArrayBottom[] = {{-5, -180}, {-5, 180}};
			};
			class Turrets
			{
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
					gunnerAction = "gm_t55_commander_01_out";
					gunnerInAction = "gm_t55_commander_01_in";
					animationSourcehatch = "";
					gm_animationSourcehatch = "CommanderTurret_hatch_source";
					gunnerDoor = "CommanderTurret_hatch_source";
					memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					preciseGetInOut = 1;
					outGunnerMayFire = 0;
					inGunnerMayFire = 1;
					viewGunnerInExternal = 1;
					isPersonTurret = 1;
					allowLauncherOut = 1;
					personTurretAction = "gm_t55_commander_01_out_ffv";
					minOutElev = -60;
					maxOutElev = 60;
					initOutElev = 0;
					minOutTurn = -360;
					maxOutTurn = 360;
					initOutTurn = 0;
					showCrewAim = 1;
					class TurnOut
					{
						limitsArrayTop[] = {{60, -95}, {60, 95}};
						limitsArrayBottom[] = {{-30, -95}, {-30, 95}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{25, -180}, {25, 180}};
						limitsArrayBottom[] = {{-14, -180}, {-14, 180}};
					};
					memoryPointGunnerOptics = "Optic_CommanderTurret_pos";
					gunnerOutOpticsModel = "";
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
					gunnerForceOptics = 1;
					turretinfoType = "gm_RscUnitInfo_vehicle_commander_optics";
					discreteDistance[] = {1};
					discreteDistanceInitindex = 0;
					class OpticsIn
					{
						class tpku2b_day_5x: gm_optics_tpku2b_day_5x_base
						{
						};
						class tkn1ir_nv_5x: gm_optics_tkn1ir_nv_5x_base
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
				class LoaderTurret: LoaderTurret_base
				{
					gunnerName = "Loader";
					minElev = -25;
					maxElev = 60;
					initElev = 0;
					minTurn = -360;
					maxTurn = 360;
					initTurn = 0;
					weapons[] = {};
					magazines[] = {};
					selectionFireAnim = "LoaderTurret_muzzleflash";
					gunnerAction = "gm_t55_loader_01_out";
					gunnerInAction = "gm_t55_loader_01_in";
					animationSourcehatch = "";
					gm_animationSourcehatch = "LoaderTurret_hatch_source";
					gunnerDoor = "LoaderTurret_hatch_source";
					memoryPointsGetInGunner = "LoaderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "LoaderTurret_GetIn_dir";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					preciseGetInOut = 1;
					outGunnerMayFire = 1;
					inGunnerMayFire = 0;
					viewGunnerInExternal = 1;
					isPersonTurret = 1;
					allowLauncherOut = 1;
					personTurretAction = "gm_t55_loader_01_out_ffv";
					class dynamicViewLimits
					{
						CommanderTurret[] = {-65, 90};
					};
					minOutElev = -50;
					maxOutElev = 60;
					initOutElev = 0;
					minOutTurn = -95;
					maxOutTurn = 95;
					initOutTurn = 0;
					showCrewAim = 1;
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {};
					gunnerForceOptics = 1;
					class OpticsIn
					{
						class Wispi: gm_opticsVehicles_WiSpi
						{
						};
					};
					class HitPoints
					{
					};
				};
			};
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerName = "Outside #1";
			memoryPointsGetInGunner = "cargo_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo_GetIn_dir";
			proxyIndex = 1;
			gunnerAction = "gm_extra_cargo_01_out_ffv";
			gunnerInAction = "gm_extra_cargo_01_out_ffv";
			gunnerGetInAction = "GetInHemttBack";
			gunnerGetOutAction = "GetOutHighHemtt";
			gunnerCompartments = "Compartment2";
			forceHideGunner = 0;
			canHideGunner = 0;
			ejectDeadGunner = 1;
			allowLauncherIn = 1;
			allowLauncherOut = 1;
			LODTurnedIn = 1;
			LODTurnedOut = 1;
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerName = "Outside #2";
			memoryPointsGetInGunner = "cargo_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo_GetIn_dir";
			proxyIndex = 2;
			gunnerAction = "gm_extra_cargo_02_out_ffv";
			gunnerInAction = "gm_extra_cargo_02_out_ffv";
		};
		class CargoTurret_03: CargoTurret_01
		{
			gunnerName = "Outside #3";
			proxyIndex = 3;
			gunnerAction = "gm_extra_cargo_03_out_ffv";
			gunnerInAction = "gm_extra_cargo_03_out_ffv";
		};
		class CargoTurret_04: CargoTurret_01
		{
			gunnerName = "Outside #4";
			proxyIndex = 4;
			gunnerAction = "gm_extra_cargo_04_out_ffv";
			gunnerInAction = "gm_extra_cargo_04_out_ffv";
		};
		class CargoTurret_05: CargoTurret_01
		{
			gunnerName = "Outside #5";
			proxyIndex = 5;
			gunnerAction = "gm_extra_cargo_05_out_ffv";
			gunnerInAction = "gm_extra_cargo_05_out_ffv";
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
		class lightBack_1_1
		{
			color[] = {0.75, 0, 0};
			ambient[] = {0.0005, 0, 0};
			position = "lightBack_1_1_pos";
			direction = "lightBack_1_1_dir";
			hitpoint = "hitPoint_lightBack_1_1";
			selection = "lightBack_1_1";
			size = 0.1;
			innerAngle = 100;
			outerAngle = 179;
			coneFadeCoef = 10;
			intensity = 3;
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
		class lightBack_1_1_flare: lightBack_1_1
		{
			position = "lightBack_1_2_pos";
			useFlare = 1;
		};
		class lightBack_1_2
		{
			color[] = {0.75, 0, 0};
			ambient[] = {0.0005, 0, 0};
			position = "lightBack_1_2_pos";
			direction = "lightBack_1_2_dir";
			hitpoint = "hitPoint_lightBack_1_2";
			selection = "lightBack_1_2";
			size = 0.1;
			innerAngle = 100;
			outerAngle = 179;
			coneFadeCoef = 10;
			intensity = 3;
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
		class lightBack_1_2_flare: lightBack_1_2
		{
			position = "lightBack_1_2_pos";
			useFlare = 1;
		};
	};
	class AnimationSources: AnimationSources
	{
		class LoaderTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "LoaderTurret_hatch_axis";
		};
		class CommanderTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "CommanderTurret_hatch_axis";
		};
		class MainTurret_Recoil_source
		{
			source = "user";
			animPeriod = 1;
		};
		class MainTurret_Muzzleflash_rotation_source
		{
			source = "ammorandom";
			weapon = "gm_100mm_d10t2s";
		};
		class camoNet_01_unhide: gm_source_user_base
		{
			displayName = "Add Camo Net";
			forceAnimatePhase = 0;
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
		class gm_t55
		{
			fired = "[_this,'gm_100mm_d10t2s','MainTurret_Recoil_source'] spawn gm_core_vehicles_fnc_vehicleRecoil";
		};
	};
	class TextureSources
	{
		class gm_gc_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_03_wdl_co.paa"};
		};
		class gm_gc_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_03_win_co.paa"};
		};
		class gm_gc_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_03_oli_co.paa"};
		};
		class gm_gc_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_03_ols_co.paa"};
		};
		class gm_gc_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_03_olw_co.paa"};
		};
		class gm_gc_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_03_un_co.paa"};
		};
	};
};
class gm_gc_army_t55a_base: gm_t55a_base
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
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ui\preview_gm_gc_army_t55a.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_03_oli_co.paa"};
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_gc
		{
			magazine = "gm_smokeshell_wht_gc";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_gc
		{
			magazine = "gm_smokeshell_grn_gc";
			count = 2;
		};
		class _xx_gm_smokeshell_red_gc
		{
			magazine = "gm_smokeshell_red_gc";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_gc
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_gc";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_gc";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_gc";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_gc
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_gc";
			count = 2;
		};
		class _xx_gm_30Rnd_545x39mm_b_7N6_ak74_org
		{
			magazine = "gm_30Rnd_545x39mm_b_7N6_ak74_org";
			count = 8;
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
class gm_gc_army_t55a: gm_gc_army_t55a_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_gc_army_t55a_wdl: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\wdl\gm_gc_army_t55a_ext_03_wdl_co.paa"};
	textureList[] = {"gm_gc_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_gc_army_t55a_win: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\win\gm_gc_army_t55a_ext_03_win_co.paa"};
	textureList[] = {"gm_gc_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_gc_army_t55a_oli: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\oli\gm_gc_army_t55a_ext_03_oli_co.paa"};
	textureList[] = {"gm_gc_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_gc_army_t55a_ols: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\ols\gm_gc_army_t55a_ext_03_ols_co.paa"};
	textureList[] = {"gm_gc_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_gc_army_t55a_olw: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\olw\gm_gc_army_t55a_ext_03_olw_co.paa"};
	textureList[] = {"gm_gc_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_gc_army_t55a_un: gm_gc_army_t55a_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_t55\gm_gc_army_t55\data\un\gm_gc_army_t55a_ext_03_un_co.paa"};
	textureList[] = {"gm_gc_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
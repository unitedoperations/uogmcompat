#include "..\gm_tracked.cpp"

//tracked_APC_base found in gm_tracked.cpp
class gm_m113_base: gm_tracked_APC_base
{
	displayName = "M113";
	displayNameShort = "M113";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\map_gm_m113a1g_apc_ca";
	nameSound = "gm_vehname_m113_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_m113_p"};
			speechSingular[] = {"gm_vehname_m113_s"};
		};
	};
	threat[] = {0.5, 0.1, 0.6};
	cost = 100000;
	wheelCircumference = 2.5;
	driverAction = "gm_m113_driver_01_in";
	driverInAction = "gm_m113_driver_01_in";
	gm_VehicleStartupAction[] = {"gm_startEngine", 0.52};
	driverLeftHandAnimName = "steeringStick_1_1";
	driverRightHandAnimName = "steeringStick_1_2";
	driverLeftLegAnimName = "Handler";
	driverRightLegAnimName = "Handler";
	getInAction = "GetInLow";
	getOutAction = "GetOutLow";
	memoryPointsGetInDriver = "cargo01_GetIn_pos";
	memoryPointsGetInDriverDir = "cargo01_GetIn_dir";
	driverForceOptics = 0;
	LODDriverTurnedIn = 1200;
	LODDriverTurnedOut = 1200;
	armor = 600;
	armorStructural = 6;
	damageResistance = 0.02;
	class Damage
	{
		tex[] = {};
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_apc_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_medic_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113a1g_command_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\gm_m113_wheels_01_destroyed.rvmat"};
	};
	class HitPoints: HitPoints
	{
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
	canFloat = 1;
	waterAngularDampingCoef = 10;
	waterPPInVehicle = 0;
	waterResistanceCoef = 0.5;
	engineShiftY = 0.5;
	waterLeakiness = 1.5;
	waterDamageEngine = 0.2;
	driveOnComponent[] = {"sprocket_wheel_1_1", "sprocket_wheel_1_2", "idler_wheel_1_1", "idler_wheel_1_2", "wheel_1_1_damper", "wheel_1_2_damper", "wheel_2_1_damper", "wheel_2_2_damper", "wheel_3_1_damper", "wheel_3_2_damper", "wheel_4_1_damper", "wheel_4_2_damper", "wheel_5_1_damper", "wheel_5_2_damper", "Slide"};
	fuelCapacity = 35;
	brakeIdleSpeed = 1.78;
	maxSpeed = 60;
	normalSpeedForwardCoef = 0.75;
	slowSpeedForwardCoef = 0.001;
	tracksSpeed = 1.2;
	enginePower = 212;
	maxOmega = 276;
	minOmega = 70;
	redRpm = 2640;
	idleRpm = 700;
	peakTorque = 1360;
	torqueCurve[] = {{"(700/2640)", 0}, {"(1600/2640)", "(2650/2850)"}, {"(1800/2640)", "(2800/2850)"}, {"(1900/2640)", "(2850/2850)"}, {"(2000/2640)", "(2800/2850)"}, {"(2200/2640)", "(2750/2850)"}, {"(2400/2640)", "(2600/2850)"}, {"(4900/2640)", "(0/2850)"}};
	thrustDelay = 0.2;
	engineMOI = 12;
	dampingRateFullThrottle = 1.4;
	dampingRateZeroThrottleClutchEngaged = 5;
	dampingRateZeroThrottleClutchDisengaged = 0.8;
	clutchStrength = 90;
	latency = 2;
	switchTime = 0.1;
	changeGearType = "rpmratio";
	changeGearOmegaRatios[] = {1, 0.333333, 0.333333, 0, 0.993333, 0.333333, 0.983333, 0.7, 0.983333, 0.733333, 0.983333, 0.733333};
	class complexGearbox
	{
		GearboxRatios[] = {"R2", -3.9, "N", 0, "D1", "3.5*(0.75^0)", "D2", "3.5*(0.75^1)", "D3", "3.5*(0.75^2)", "D4", "3.5*(0.75^3)", "D5", "3.5*(0.75^4)", "D6", "3.5*(0.75^5)"};
		transmissionRatios[] = {"High", 11.75};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
	};
	tankTurnForce = 95000;
	tankTurnForceAngMinSpd = 0.7;
	tankTurnForceAngSpd = 0.76;
	accelAidForceCoef = 2;
	accelAidForceYOffset = -3.2;
	accelAidForceSpd = 25;
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
			dampingRate = 50;
			dampingRateDestroyed = 3400;
			longitudinalStiffnessPerUnitGravity = 10000;
			dampingRateInAir = 50;
			maxBrakeTorque = 23000;
			maxHandBrakeTorque = 23000;
			maxDroop = 0.18;
			maxCompression = 0.18;
			frictionVsSlipGraph[] = {{0, 0.55}, {0.3, 1.28}, {0.65, 0.55}};
			suspTravelDirection[] = {-0.125, -1, 0};
			springStrength = 139150;
			springDamperRate = 7590;
			MOI = 3.1684;
			mass = 50;
			width = 0.35;
			sprungMass = -1;
		};
		class wheel_1_2: wheel_1_1
		{
			boneName = "wheel_1_2_damper";
			center = "wheel_1_2_axis";
			boundary = "wheel_1_2_bound";
			side = "right";
			suspTravelDirection[] = {0.125, -1, 0};
		};
		class wheel_2_1: wheel_1_1
		{
			boneName = "wheel_2_1_damper";
			center = "wheel_2_1_axis";
			boundary = "wheel_2_1_bound";
		};
		class wheel_2_2: wheel_1_2
		{
			boneName = "wheel_2_2_damper";
			center = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
		};
		class wheel_3_1: wheel_1_1
		{
			boneName = "wheel_3_1_damper";
			center = "wheel_3_1_axis";
			boundary = "wheel_3_1_bound";
		};
		class wheel_3_2: wheel_1_2
		{
			boneName = "wheel_3_2_damper";
			center = "wheel_3_2_axis";
			boundary = "wheel_3_2_bound";
		};
		class wheel_4_1: wheel_1_1
		{
			boneName = "wheel_4_1_damper";
			center = "wheel_4_1_axis";
			boundary = "wheel_4_1_bound";
		};
		class wheel_4_2: wheel_1_2
		{
			boneName = "wheel_4_2_damper";
			center = "wheel_4_2_axis";
			boundary = "wheel_4_2_bound";
		};
		class wheel_5_1: wheel_1_1
		{
			boneName = "wheel_5_1_damper";
			center = "wheel_5_1_axis";
			boundary = "wheel_5_1_bound";
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
	};
	insideSoundCoef = 0.9;
	attenuationEffectType = "TankAttenuation";
	soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engineOnInt", 0.630957, 1};
	soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engineOnExt", 0.794328, 1, 200};
	soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engineOffInt.63095737", 1};
	soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engineOffExt", 0.794328, 1, 200};
	class Sounds: Sounds
	{
		class engine_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_01_ext", 0.354813, 1, 200};
			frequency = "0.95+((rpm/2800) factor[(10/2300),(200/2300)])*0.15";
			volume = "engineOn*camPos*(((rpm/2800) factor[(10/2300),(200/2300)])*((rpm/2800) factor[(500/2300),(425/2300)]))";
		};
		class engine_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_02_ext", 0.398107, 1, 200};
			frequency = "0.8+((rpm/2800) factor[(430/2300),(730/2300)])*0.2";
			volume = "engineOn*camPos*(((rpm/2800) factor[(430/2300),(510/2300)])*((rpm/2800) factor[(730/2300),(620/2300)]))";
		};
		class engine_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_03_ext", 0.446684, 1, 200};
			frequency = "0.8+((rpm/2800) factor[(630/2300),(1000/2300)])*0.2";
			volume = "engineOn*camPos*(((rpm/2800) factor[(600/2300),(720/2300)])*((rpm/2800) factor[(1100/2300),(840/2300)]))";
		};
		class engine_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_04_ext", 0.501187, 1, 250};
			frequency = "0.8+((rpm/2800) factor[(850/2300),(1300/2300)])*0.2";
			volume = "engineOn*camPos*(((rpm/2800) factor[(800/2300),(1000/2300)])*((rpm/2800) factor[(1300/2300),(1100/2300)]))";
		};
		class engine_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_05_ext", 0.562341, 1, 300};
			frequency = "0.8+((rpm/2800) factor[(1100/2300),(1600/2300)])*0.1";
			volume = "engineOn*camPos*(((rpm/2800) factor[(1100/2300),(1270/2300)])*((rpm/2800) factor[(1550/2300),(1380/2300)]))";
		};
		class engine_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_06_ext", 0.630957, 1, 300};
			frequency = "0.8+((rpm/2800) factor[(1400/2300),(2000/2300)])*0.1";
			volume = "engineOn*camPos*(((rpm/2800) factor[(1380/2300),(1500/2300)])*((rpm/2800) factor[(2000/2300),(1700/2300)]))";
		};
		class engine_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_07_ext", 0.707946, 1, 300};
			frequency = "0.8+((rpm/2800) factor[(1700/2300),(2300/2300)])*0.1";
			volume = "engineOn*camPos*((rpm/2800) factor[(1600/2300),(2100/2300)])";
		};
		class thrust_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_01_ext", 0.562341, 1, 200};
			frequency = "0.8+((rpm/2800) factor[(10/2300),(200/2300)])*0.15";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(10/2300),(200/2300)])*((rpm/2800) factor[(500/2300),(425/2300)]))";
		};
		class thrust_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_02_ext", 0.630957, 1, 200};
			frequency = "0.8+((rpm/2800) factor[(430/2300),(730/2300)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(430/2300),(510/2300)])*((rpm/2800) factor[(730/2300),(620/2300)]))";
		};
		class thrust_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_03_ext", 0.630957, 1, 230};
			frequency = "0.8+((rpm/2800) factor[(630/2300),(1000/2300)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(600/2300),(720/2300)])*((rpm/2800) factor[(1100/2300),(840/2300)]))";
		};
		class thrust_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_04_ext", 0.707946, 1, 250};
			frequency = "0.8+((rpm/2800) factor[(850/2300),(1300/2300)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(800/2300),(1000/2300)])*((rpm/2800) factor[(1300/2300),(1100/2300)]))";
		};
		class thrust_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_05_ext", 0.707946, 1, 350};
			frequency = "0.8+((rpm/2800) factor[(1100/2300),(1600/2300)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(1100/2300),(1270/2300)])*((rpm/2800) factor[(1550/2300),(1380/2300)]))";
		};
		class thrust_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_06_ext", 1, 1, 350};
			frequency = "0.8+((rpm/2800) factor[(1400/2300),(2000/2300)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(1380/2300),(1500/2300)])*((rpm/2800) factor[(2000/2300),(1700/2300)]))";
		};
		class thrust_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_07_ext", 1.12202, 1, 400};
			frequency = "0.8+((rpm/2800) factor[(1700/2300),(2300/2300)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2800) factor[(1600/2300),(2100/2300)])";
		};
		class engine_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_01_int", 0.316228, 1};
			frequency = "0.8+((rpm/2800) factor[(10/2300),(200/2300)])*0.15";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(10/2300),(200/2300)])*((rpm/2800) factor[(500/2300),(425/2300)]))";
		};
		class engine_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_02_int", 0.354813, 1};
			frequency = "0.8+((rpm/2800) factor[(430/2300),(730/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(430/2300),(510/2300)])*((rpm/2800) factor[(730/2300),(620/2300)]))";
		};
		class engine_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_03_int", 0.398107, 1};
			frequency = "0.8+((rpm/2800) factor[(630/2300),(1000/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(600/2300),(720/2300)])*((rpm/2800) factor[(1100/2300),(840/2300)]))";
		};
		class engine_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_04_int", 0.446684, 1};
			frequency = "0.8+((rpm/2800) factor[(850/2300),(1300/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(800/2300),(1000/2300)])*((rpm/2800) factor[(1300/2300),(1100/2300)]))";
		};
		class engine_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_05_int", 0.501187, 1};
			frequency = "0.8+((rpm/2800) factor[(1100/2300),(1600/2300)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(1100/2300),(1270/2300)])*((rpm/2800) factor[(1550/2300),(1380/2300)]))";
		};
		class engine_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_06_int", 0.562341, 1};
			frequency = "0.8+((rpm/2800) factor[(1400/2300),(2000/2300)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2800) factor[(1380/2300),(1500/2300)])*((rpm/2800) factor[(2000/2300),(1700/2300)]))";
		};
		class engine_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_engine_07_int", 0.630957, 1};
			frequency = "0.8+((rpm/2800) factor[(1700/2300),(2300/2300)])*0.1";
			volume = "engineOn*(1-camPos)*((rpm/2800) factor[(1600/2300),(2100/2300)])";
		};
		class thrust_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_01_int", 0.354813, 1};
			frequency = "0.8+((rpm/2800) factor[(10/2300),(200/2300)])*0.15";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(10/2300),(200/2300)])*((rpm/2800) factor[(500/2300),(425/2300)]))";
		};
		class thrust_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_02_int", 0.398107, 1};
			frequency = "0.8+((rpm/2800) factor[(430/2300),(730/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(430/2300),(510/2300)])*((rpm/2800) factor[(730/2300),(620/2300)]))";
		};
		class thrust_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_03_int", 0.446684, 1};
			frequency = "0.8+((rpm/2800) factor[(630/2300),(1000/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(600/2300),(720/2300)])*((rpm/2800) factor[(1100/2300),(840/2300)]))";
		};
		class thrust_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_04_int", 0.446684, 1};
			frequency = "0.8+((rpm/2800) factor[(850/2300),(1300/2300)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(800/2300),(1000/2300)])*((rpm/2800) factor[(1300/2300),(1100/2300)]))";
		};
		class thrust_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_05_int", 0.501187, 1};
			frequency = "0.8+((rpm/2800) factor[(1100/2300),(1600/2300)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(1100/2300),(1270/2300)])*((rpm/2800) factor[(1550/2300),(1380/2300)]))";
		};
		class thrust_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_06_int", 0.562341, 1};
			frequency = "0.8+((rpm/2800) factor[(1400/2300),(2000/2300)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2800) factor[(1380/2300),(1500/2300)])*((rpm/2800) factor[(2000/2300),(1700/2300)]))";
		};
		class thrust_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\sounds\gm_m113_thrust_07_int", 0.630957, 1};
			frequency = "0.8+((rpm/2800) factor[(1700/2300),(2300/2300)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2800) factor[(1600/2300),(2100/2300)])";
		};
	};
};
class gm_m113a1_base: gm_m113_base
{
	hasCommander = 0;
	transportSoldier = 9;
	cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 9, 10, 11};
	getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 9, 10, 11, 7, 8};
	cargoAction[] = {"gm_m113_cargo_03_in", "gm_m113_cargo_02_in", "gm_m113_cargo_01_in", "gm_m113_cargo_02_in", "gm_m113_cargo_03_in", "gm_m113_cargo_02_in", "gm_m113_cargo_01_in", "gm_m113_cargo_02_in", "gm_m113_cargo_03_in"};
	cargoGetInAction[] = {"GetInLow"};
	cargoGetOutAction[] = {"GetOutLow"};
	memoryPointsGetInCargo[] = {"cargo03_GetIn_pos", "cargo02_GetIn_pos", "cargo01_GetIn_pos", "cargo02_GetIn_pos", "cargo03_GetIn_pos", "cargo02_GetIn_pos", "cargo01_GetIn_pos", "cargo02_GetIn_pos", "cargo03_GetIn_pos"};
	memoryPointsGetInCargoDir[] = {"cargo03_GetIn_dir", "cargo02_GetIn_dir", "cargo01_GetIn_dir", "cargo02_GetIn_dir", "cargo03_GetIn_dir", "cargo02_GetIn_dir", "cargo01_GetIn_dir", "cargo02_GetIn_dir", "cargo03_GetIn_dir"};
	cargoDoors[] = {};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			commanding = 1;
			gunnerName = "Gunner";
			proxyIndex = 2;
			gunnerCompartments = "Compartment1";
			minElev = -30;
			maxElev = 60;
			startEngine = 0;
			weapons[] = {};
			magazines[] = {};
			dontCreateAi = 1;
			gunnerAction = "gm_m113_gunner_01_out";
			gunnerInAction = "gm_m113_gunner_01_in";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			allowLauncherIn = 0;
			allowLauncherOut = 1;
			outGunnerMayFire = 0;
			inGunnerMayFire = 0;
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			LODTurnedIn = 1200;
			LODTurnedOut = 1201;
			memoryPointsGetInGunner = "cargo02_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo02_GetIn_dir";
			gunnerDoor = "";
			minOutElev = -30;
			maxOutElev = 60;
			initOutElev = 0;
			minOutTurn = -135;
			maxOutTurn = 135;
			initOutTurn = 0;
			showCrewAim = 1;
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 0;
			class OpticsIn
			{
				class Wispi: gm_opticsVehicles_WiSpi
				{
				};
			};
			class Turrets
			{
			};
			class Hitpoints
			{
				class HitTurret: gm_hitpoint_hitTurret_base
				{
					name = "hitPoint_MainTurret_trav";
					armorComponent = "fireGeo_MainTurret_trav";
					visual = "MainTurret_trav";
					armor = 0.3;
				};
				class HitGun: gm_hitpoint_hitGun_base
				{
					name = "hitPoint_MainTurret_elev";
					armorComponent = "fireGeo_MainTurret_elev";
					visual = "MainTurret_elev";
					armor = 0.3;
				};
			};
			animationSourceHatch = "";
			gm_animationSourceHatch = "MainTurret_hatch_source";
		};
		class MachineGunTurret_01: MachineGunTurret_base
		{
			memoryPointGunnerOptics = "Optic_MachineGunTurret_01_pos";
			memoryPointGunnerOutOptics = "OpticOut_MachineGunTurret_01_pos";
			gunBeg = "MachineGunTurret_01_Gun_dir";
			gunEnd = "MachineGunTurret_01_Gun_pos";
			memoryPointGun = "MachineGunTurret_01_Coax";
			selectionFireAnim = "MachineGunTurret_01_muzzleflash";
			missileBeg = "Spice rakety";
			missileEnd = "konec rakety";
			memoryPointMissile[] = {"MachineGunTurret_01_Gun_dir", "MachineGunTurret_01_Missile_dir"};
			memoryPointMissileDir[] = {"MachineGunTurret_01_Gun_pos", "MachineGunTurret_01_Missile_pos"};
			body = "MachineGunTurret_01_trav_anim";
			gun = "MachineGunTurret_01_elev_anim";
			animationSourceBody = "MachineGunTurret_01_trav_source";
			animationSourceGun = "MachineGunTurret_01_elev_source";
			animationSourceElevation = "MachineGunTurret_01_raise_source";
			particlesPos = "MachineGunTurret_01_Gun_dir";
			particlesDir = "MachineGunTurret_01_Gun_pos";
			ViewGunnerShadow = 1;
			ViewGunnerShadowAmb = 1;
			ViewGunnerShadowDiff = 1;
			minElev = -15;
			commanding = 2;
			proxyIndex = 1;
			gunnerCompartments = "Compartment1";
			gunnerName = "Gunner";
			dontCreateAi = 0;
			canCreateAi = 1;
			primaryGunner = 1;
			gunnerAction = "gm_m113_gunner_01_out_mg3";
			gunnerInAction = "gm_m113_gunner_01_in";
			gunnerLeftHandAnimName = "MachineGunTurret_01_elev";
			gunnerRightHandAnimName = "MachineGunTurret_01_elev";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			memoryPointsGetInGunner = "cargo02_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo02_GetIn_dir";
			gunnerDoor = "";
			class Hitpoints
			{
				class hitMachineGunTurret_01_hitTurret: gm_hitpoint_hitTurret_base
				{
					name = "hitPoint_turret_trav";
					armorComponent = "fireGeo_turret_trav";
					visual = "damage_turret_trav";
				};
				class hitMachineGunTurret_01_hitGun: gm_hitpoint_hitGun_base
				{
					name = "hitPoint_turret_elev";
					armorComponent = "fireGeo_turret_elev";
					visual = "damage_turret_elev";
				};
			};
			animationSourceHatch = "";
			gm_animationSourceHatch = "MainTurret_hatch_source";
			LODTurnedIn = 1200;
			LODTurnedOut = 1201;
			LODOpticsIn = 1201;
			LODOpticsOut = 1201;
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerName = "Cargo (Rear Hatch Right)";
			proxyIndex = 8;
			gunnerCompartments = "Compartment1";
			maxTurn = 95;
			minTurn = -95;
			initTurn = 0;
			maxOutTurn = 95;
			minOutTurn = -95;
			initOutTurn = 0;
			maxElev = 60;
			minElev = -10;
			initElev = 0;
			maxOutElev = 60;
			minOutElev = -10;
			initOutElev = 0;
			LODTurnedIn = 1200;
			LODTurnedOut = 1201;
			gunnerAction = "gm_m113_cargo_07_out";
			gunnerInAction = "gm_m113_cargo_07_in";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			memoryPointsGetInGunner = "cargo01_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo01_GetIn_dir";
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
			gunnerName = "Cargo (Rear Hatch Left)";
			proxyIndex = 7;
			gunnerCompartments = "Compartment1";
			isPersonTurret = 1;
			memoryPointsGetInGunner = "cargo02_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo02_GetIn_dir";
			gunnerDoor = "";
			animationSourceHatch = "";
		};
	};
	class AnimationSources: AnimationSources
	{
		class MainTurret_hatch_source
		{
			source = "door";
			animPeriod = 2.15;
			initPhase = 1;
			sound = "MetalBigDoorsSound";
			soundPosition = "MainTurret_hatch_axis";
		};
		class hatch_1_1_source
		{
			source = "door";
			animPeriod = 1.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_1_1_axis";
		};
		class hatch_2_1_source
		{
			source = "door";
			animPeriod = 3.285;
			initPhase = 0;
			sound = "ServoRampSound_2";
			soundPosition = "hatch_2_1_axis";
		};
		class hatch_2_1_door_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "hatch_2_1_door_axis";
		};
	};
	class Attributes: Attributes
	{
		class gm_vehicleMarkings_LicensePlates_Numbers_attribute: gm_vehicleMarkings_LicensePlates_Numbers_attribute
		{
		};
		class gm_vehicleMarkings_tacticalSign_PreIcon_attribute: gm_vehicleMarkings_tacticalSign_PreIcon_attribute
		{
		};
		class gm_vehicleMarkings_tacticalSign_Icon_attribute: gm_vehicleMarkings_tacticalSign_Icon_attribute
		{
		};
		class gm_vehicleMarkings_tacticalSign_PostIcon_attribute: gm_vehicleMarkings_tacticalSign_PostIcon_attribute
		{
		};
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
	class RenderTargets
	{
		class peri_driver_01
		{
			renderTarget = "rendertarget0";
			class CameraView1
			{
				pointPosition = "peri_driver_01_pos";
				pointDirection = "peri_driver_01_dir";
				renderVisionMode = 0;
				renderQuality = 2;
				fov = 0.305731;
				turret[] = {-1};
			};
			BBoxes[] = {"peri_driver_01_tl", "peri_driver_01_tr", "peri_driver_01_bl", "peri_driver_01_br"};
		};
		class peri_driver_02: peri_driver_01
		{
			renderTarget = "rendertarget1";
			class CameraView1: CameraView1
			{
				pointPosition = "peri_driver_02_pos";
				pointDirection = "peri_driver_02_dir";
			};
			BBoxes[] = {"peri_driver_02_tl", "peri_driver_02_tr", "peri_driver_02_bl", "peri_driver_02_br"};
		};
		class peri_driver_03: peri_driver_01
		{
			renderTarget = "rendertarget2";
			class CameraView1: CameraView1
			{
				pointPosition = "peri_driver_03_pos";
				pointDirection = "peri_driver_03_dir";
			};
			BBoxes[] = {"peri_driver_03_tl", "peri_driver_03_tr", "peri_driver_03_bl", "peri_driver_03_br"};
		};
		class peri_MainTurret_02
		{
			renderTarget = "rendertarget3";
			class CameraView1
			{
				pointPosition = "peri_MainTurret_02_pos";
				pointDirection = "peri_MainTurret_02_dir";
				renderVisionMode = 0;
				renderQuality = 2;
				fov = 0.305731;
				turret[] = {1};
			};
			BBoxes[] = {"peri_MainTurret_02_tl", "peri_MainTurret_02_tr", "peri_MainTurret_02_bl", "peri_MainTurret_02_br"};
		};
		class peri_MainTurret_03: peri_MainTurret_02
		{
			renderTarget = "rendertarget4";
			class CameraView1: CameraView1
			{
				pointPosition = "peri_MainTurret_03_pos";
				pointDirection = "peri_MainTurret_03_dir";
			};
			BBoxes[] = {"peri_MainTurret_03_tl", "peri_MainTurret_03_tr", "peri_MainTurret_03_bl", "peri_MainTurret_03_br"};
		};
		class peri_MainTurret_04: peri_MainTurret_02
		{
			renderTarget = "rendertarget5";
			class CameraView1: CameraView1
			{
				pointPosition = "peri_MainTurret_04_pos";
				pointDirection = "peri_MainTurret_04_dir";
			};
			BBoxes[] = {"peri_MainTurret_04_tl", "peri_MainTurret_04_tr", "peri_MainTurret_04_bl", "peri_MainTurret_04_br"};
		};
		class Mirror_1_1
		{
			renderTarget = "rendertarget6";
			class CameraView1
			{
				pointPosition = "Mirror_1_1_pos";
				pointDirection = "Mirror_1_1_dir";
				renderQuality = 2;
				renderVisionMode = 4;
				fov = 0.7;
			};
			BBoxes[] = {"Mirror_1_1_tl", "Mirror_1_1_tr", "Mirror_1_1_bl", "Mirror_1_1_br"};
		};
		class Mirror_1_2
		{
			renderTarget = "rendertarget7";
			class CameraView1
			{
				pointPosition = "Mirror_1_2_pos";
				pointDirection = "Mirror_1_2_dir";
				renderQuality = 2;
				renderVisionMode = 4;
				fov = 0.7;
			};
			BBoxes[] = {"Mirror_1_2_tl", "Mirror_1_2_tr", "Mirror_1_2_bl", "Mirror_1_2_br"};
		};
	};
};
class gm_m113a1g_base: gm_m113a1_base
{
	smokeLauncherGrenadeCount = 8;
	smokeLauncherVelocity = 35;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 110;
	weapons[] = {"SmokeLauncher"};
	magazines[] = {"gm_2Rnd_76mm_RP_dm35"};
	class Turrets: Turrets
	{
		class MachineGunTurret_01: MachineGunTurret_01
		{
			weapons[] = {"gm_mg3_machineGunTurret_01"};
			magazines[] = {"gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn"};
		};
		class CargoTurret_01: CargoTurret_01
		{
		};
		class CargoTurret_02: CargoTurret_02
		{
		};
		class MainTurret: MainTurret
		{
			weapons[] = {};
			magazines[] = {};
		};
	};
	class AnimationSources: AnimationSources
	{
		class CamoNet_01_unhide: gm_source_user_base
		{
			displayname = "Add Camo Net - Front";
		};
		class CamoNet_02_unhide: CamoNet_01_unhide
		{
			displayname = "Add Camo Net - Top";
		};
		class CamoNet_03_unhide: CamoNet_01_unhide
		{
			displayname = "Add Camo Net - Left";
		};
		class Tarp_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Tarpaulin - Right";
		};
		class IceCleats_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Ice Cleats";
		};
		class SupportPoles_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Camo Net Poles";
		};
		class machineGunTurret_01_reload_source
		{
			source = "reload";
			weapon = "gm_mg3_machineGunTurret_01";
		};
		class machineGunTurret_01_revolving_source
		{
			source = "revolving";
			weapon = "gm_mg3_machineGunTurret_01";
		};
		class machineGunTurret_01_reloadMagazine_source
		{
			source = "reloadMagazine";
			weapon = "gm_mg3_machineGunTurret_01";
		};
	};
};
class gm_m113a1g_apc_base: gm_m113a1g_base
{
	displayName = "M113A1G APC";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\picture_gm_m113a1g_apc_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_m113a1g_apc";
	class AnimationSources: AnimationSources
	{
		class milanturret_01_trav_source: gm_source_user_base
		{
		};
		class milanturret_01_elev_source: gm_source_user_base
		{
		};
		class milanTurret_01_unhide: gm_source_user_base
		{
		};
		class MilanRack_unhide: gm_source_user_base
		{
		};
		class milanTurret_01_tripod_unhide: gm_source_user_base
		{
		};
		class milanturret_01_store_source: gm_source_user_base
		{
		};
		class MilanTurret_01_realodMagazine_source
		{
			source = "reloadmagazine";
			weapon = "gm_milan_launcher";
		};
		class MilanTurret_01_revolving_source
		{
			source = "revolving";
			weapon = "gm_milan_launcher";
		};
	};
	class UserActions: UserActions
	{
		class gm_take_turret_weapon_01
		{
			displayName = "Take MG3 7.62x51 mm";
			position = "MachineGunTurret_01_pos";
			radius = 4;
			onlyForplayer = 0;
			condition = "[this,player,'MainTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MachineGunTurret_01',['MainTurret'],'',[]] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_01: gm_take_turret_weapon_01
		{
			displayName = "Store MG3 7.62x51 mm";
			condition = "[this,player,'MachineGunTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MainTurret',['MachineGunTurret_01'],'',['']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
	};
	class Eventhandlers: Eventhandlers
	{
		class gm_core_vehicles_advancedTurrets
		{
			getIn = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			getOut = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			Init = "[_this select 0,'MachineGunTurret_01',['MainTurret'],'',['']] call gm_core_vehicles_fnc_advancedTurrets_turretInit";
			seatSwitched = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
		};
	};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
		};
	};
};
class gm_m113a1g_apc_milan_base: gm_m113a1g_base
{
	displayName = "M113A1G APC LATGM";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\picture_gm_m113a1g_apc_milan_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_m113a1g_apc";
	threat[] = {0.9, 0.7, 0.3};
	cost = 100000;
	memoryPointMissileDir[] = {"MilanTurret_01_Missile_Pos", "MilanTurret_01_Gun_Pos"};
	memoryPointMissile[] = {"MilanTurret_01_Missile_Dir", "MilanTurret_01_Gun_Dir"};
	class AnimationSources: AnimationSources
	{
		class MilanTurret_01_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class MilanRack_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class MilanTurret_01_tripod_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class milanturret_01_store_source: gm_source_user_base
		{
		};
		class MilanTurret_01_realodMagazine_source
		{
			source = "reloadmagazine";
			weapon = "gm_milan_launcher";
		};
		class MilanTurret_01_revolving_source
		{
			source = "revolving";
			weapon = "gm_milan_launcher";
		};
	};
	class Turrets: Turrets
	{
		class MilanTurret_01: MachineGunTurret_base
		{
			memoryPointGunnerOptics = "Optic_MilanTurret_01_pos";
			memoryPointGunnerOutOptics = "OpticOut_MilanTurret_01_pos";
			gunBeg = "MilanTurret_01_Gun_dir";
			gunEnd = "MilanTurret_01_Gun_pos";
			memoryPointGun = "MilanTurret_01_Coax";
			selectionFireAnim = "MilanTurret_01_muzzleflash";
			missileBeg = "Spice rakety";
			missileEnd = "konec rakety";
			memoryPointMissile[] = {"MilanTurret_01_Gun_dir", "MilanTurret_01_Missile_dir"};
			memoryPointMissileDir[] = {"MilanTurret_01_Gun_pos", "MilanTurret_01_Missile_pos"};
			body = "MilanTurret_01_trav_anim";
			gun = "MilanTurret_01_elev_anim";
			animationSourceBody = "MilanTurret_01_trav_source";
			animationSourceGun = "MilanTurret_01_elev_source";
			animationSourceElevation = "MilanTurret_01_raise_source";
			particlesPos = "MilanTurret_01_Gun_dir";
			particlesDir = "MilanTurret_01_Gun_pos";
			ViewGunnerShadow = 1;
			ViewGunnerShadowAmb = 1;
			ViewGunnerShadowDiff = 1;
			commanding = 3;
			proxyIndex = 1;
			gunnerName = "Gunner";
			dontCreateAi = 0;
			gunnerCompartments = "Compartment1";
			minTurn = -70;
			maxTurn = 70;
			minElev = -20;
			maxElev = 20;
			gunnerAction = "gm_m113_gunner_01_out_milan";
			gunnerInAction = "gm_m113_gunner_01_in";
			gunnerLeftHandAnimName = "MilanTurret_01_handanim_elev";
			gunnerRightHandAnimName = "MilanTurret_01_handanim_trav";
			gunnerLeftLegAnimName = "Handler";
			gunnerRightLegAnimName = "Handler";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			memoryPointsGetInGunner = "cargo02_GetIn_pos";
			memoryPointsGetInGunnerDir = "cargo02_GetIn_dir";
			gunnerDoor = "";
			class Hitpoints
			{
				class hitMilanTurret_01_hitTurret: gm_hitpoint_hitTurret_base
				{
					name = "hitPoint_turret_trav";
					armorComponent = "fireGeo_turret_trav";
					visual = "damage_turret_trav";
				};
				class hitMilanTurret_01_hitGun: gm_hitpoint_hitGun_base
				{
					name = "hitPoint_turret_elev";
					armorComponent = "fireGeo_turret_elev";
					visual = "damage_turret_elev";
				};
			};
			LODTurnedIn = 1200;
			LODTurnedOut = 1201;
			weapons[] = {"gm_milan_launcher"};
			magazines[] = {"gm_1Rnd_milan_heat_dm92", "gm_1Rnd_milan_heat_dm92", "gm_1Rnd_milan_heat_dm92", "gm_1Rnd_milan_heat_dm92"};
			gunnerOutOpticsModel = "\gm\gm_weapons\gm_launchers\gm_milan\data\optics\gm_optics_milan_default_7x";
			turretinfoType = "gm_RscUnitInfo_vehicle_none";
			class ViewOptics
			{
				initAngleX = 0;
				maxAngleX = 30;
				minAngleX = -30;
				initAngleY = 0;
				maxAngleY = 100;
				minAngleY = -100;
				initFov = "0.75/7";
				maxFov = "0.75/7";
				minFov = "0.75/7";
				minMoveX = 0;
				minMoveY = 0;
				minMoveZ = 0;
				maxMoveX = 0;
				maxMoveY = 0;
				maxMoveZ = 0;
				speedZoomMaxFOV = 0;
				speedZoomMaxSpeed = 1e+010;
			};
			animationSourceHatch = "";
			gm_animationSourceHatch = "MainTurret_hatch_source";
		};
		class CargoTurret_01: CargoTurret_01
		{
		};
		class CargoTurret_02: CargoTurret_02
		{
		};
		class MachineGunTurret_01: MachineGunTurret_01
		{
			dontCreateAi = 1;
		};
		class MainTurret: MainTurret
		{
		};
	};
	class UserActions: UserActions
	{
		class gm_take_turret_weapon_01
		{
			displayName = "Take MG3 7.62x51 mm";
			position = "MachineGunTurret_01_pos";
			radius = 4;
			onlyForplayer = 0;
			condition = "[this,player,'MainTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MachineGunTurret_01',['MainTurret','MilanTurret_01'],'',['MilanTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_01: gm_take_turret_weapon_01
		{
			displayName = "Store MG3 7.62x51 mm";
			condition = "[this,player,'MachineGunTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MainTurret',['MachineGunTurret_01','MilanTurret_01'],'',['MilanTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_take_turret_weapon_02
		{
			displayName = "Take ATGM Launcher";
			position = "MachineGunTurret_01_pos";
			radius = 4;
			onlyForplayer = 0;
			condition = "[this,player,'MainTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MilanTurret_01',['MainTurret','MachineGunTurret_01'],'MilanTurret_01_store_source',['']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_02: gm_take_turret_weapon_02
		{
			displayName = "Store ATGM Launcher";
			condition = "[this,player,'MilanTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MainTurret',['MilanTurret_01','MachineGunTurret_01'],'',['MilanTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
	};
	class Eventhandlers: Eventhandlers
	{
		class gm_core_vehicles_advancedTurrets
		{
			getOut = "[_this, ['MainTurret','MachineGunTurret_01','MilanTurret_01'],['MilanTurret_01',['MainTurret','MachineGunTurret_01'],'MilanTurret_01_store_source',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			getIn = "[_this, ['MainTurret','MachineGunTurret_01','MilanTurret_01'],['MilanTurret_01',['MainTurret','MachineGunTurret_01'],'MilanTurret_01_store_source',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			Init = "[_this select 0,'MilanTurret_01',['MainTurret','MachineGunTurret_01'],'MilanTurret_01_store_source',['']] call gm_core_vehicles_fnc_advancedTurrets_turretInit";
			seatSwitched = "[_this, ['MainTurret','MachineGunTurret_01','MilanTurret_01'],['MilanTurret_01',['MainTurret','MachineGunTurret_01'],'MilanTurret_01_store_source',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
		};
		class gm_m113a1g_apc_milan_base
		{
			fired = "if (_this select 1 == 'gm_milan_launcher') then {_this spawn gm_milan_fnc_fired};";
		};
	};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
		};
	};
};
class gm_m113a1g_command_base: gm_m113a1g_base
{
	displayName = "M113A1G Command";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\picture_gm_m113a1g_command_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_m113a1g_command";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\map_gm_m113a1g_command_ca";
	threat[] = {0.5, 0.1, 0.6};
	cost = 1.5e+006;
	TransportSoldier = 4;
	cargoProxyIndexes[] = {1, 2, 3, 5};
	getInProxyOrder[] = {1, 2, 3, 5, 4};
	cargoAction[] = {"gm_m113_cargo_03_in", "gm_m113_cargo_02_in", "gm_m113_cargo_01_in", "gm_m113_cargo_02_in", "gm_m113_cargo_03_in", "gm_m113_cargo_02_in", "gm_m113_cargo_01_in", "gm_m113_cargo_02_in", "gm_m113_cargo_03_in"};
	class Turrets: Turrets
	{
		class MachineGunTurret_01: MachineGunTurret_01
		{
		};
		class MainTurret: MainTurret
		{
		};
		class CargoTurret_01: CargoTurret_01
		{
			proxyIndex = 4;
		};
	};
	class AnimationSources: AnimationSources
	{
		class CamoNet_02_unhide: CamoNet_02_unhide
		{
			displayname = "";
		};
		class antennamast_1_1_source
		{
			source = "user";
			animPeriod = 30;
			initPhase = 0;
		};
	};
	class UserActions: UserActions
	{
		class gm_take_turret_weapon_01
		{
			displayName = "Take MG3 7.62x51 mm";
			position = "MachineGunTurret_01_pos";
			radius = 4;
			onlyForplayer = 0;
			condition = "[this,player,'MainTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MachineGunTurret_01',['MainTurret'],'',[]] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_01: gm_take_turret_weapon_01
		{
			displayName = "Store MG3 7.62x51 mm";
			condition = "[this,player,'MachineGunTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MainTurret',['MachineGunTurret_01'],'',['']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
	};
	class Eventhandlers: Eventhandlers
	{
		class gm_core_vehicles_advancedTurrets
		{
			getIn = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			getOut = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			Init = "[_this select 0,'MachineGunTurret_01',['MainTurret'],'',['']] call gm_core_vehicles_fnc_advancedTurrets_turretInit";
			seatSwitched = "[_this, ['MainTurret','MachineGunTurret_01'],['MachineGunTurret_01',['MainTurret'],'',['']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
		};
	};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
		};
	};
};
class gm_m113a1g_medic_base: gm_m113a1g_base
{
	displayName = "M113A1G Medical";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\picture_gm_m113a1g_medic_ca";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\data\ui\map_gm_m113a1g_medic_ca";
	nameSound = "gm_vehname_krkw_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_krkw_s"};
			speechSingular[] = {"gm_vehname_krkw_s"};
		};
	};
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_m113a1g_medic";
	smokeLauncherGrenadeCount = 0;
	weapons[] = {};
	magazines[] = {};
	TransportSoldier = 4;
	cargoProxyIndexes[] = {1, 2, 3, 4};
	getInProxyOrder[] = {1, 2, 3, 4};
	attendant = 1;
	cargoAction[] = {"gm_stretcher_cargo_01"};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			proxyIndex = 1;
			gunnerAction = "gm_m113_cargo_07_out_wuna";
			gunnerInAction = "gm_m113_cargo_07_in";
			maxTurn = 310;
			minTurn = 50;
			initTurn = 180;
			maxOutTurn = 130;
			minOutTurn = -130;
			initOutTurn = 0;
			class ViewGunner: ViewCargo
			{
				minAngleY = "180 - 130";
				maxAngleY = "180 + 130";
				InitAngleY = 180;
			};
		};
	};
	class TextureSources
	{
		class gm_ge_oli_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
		};
		class gm_ge_ols_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
		};
		class gm_ge_olw_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
		};
		class gm_ge_wdl_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
		};
		class gm_ge_win_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
		};
		class gm_ge_wiw_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
		};
		class gm_ge_des_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
		};
		class gm_ge_trp_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
		};
		class gm_ge_un_rc: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White, Medical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
		};
	};
};
class gm_ge_army_m113a1g_apc_base: gm_m113a1g_apc_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_mechanizedInfantry";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ui\preview_gm_ge_army_m113a1g_apc.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
			count = 1;
		};
		class _xx_gm_Pzf44_2_oli
		{
			weapon = "gm_Pzf44_2_oli";
			count = 1;
		};
		class _xx_gm_ferod16_oli
		{
			weapon = "gm_ferod16_oli";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_gm_handgrenade_frag_dm51a1
		{
			magazine = "gm_handgrenade_frag_dm51a1";
			count = 12;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 4;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 4;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 4;
		};
		class _xx_gm_1Rnd_44x537mm_heat_DM32_pzf44_2
		{
			magazine = "gm_1Rnd_44x537mm_heat_DM32_pzf44_2";
			count = 2;
		};
		class _xx_gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn
		{
			magazine = "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn";
			count = 8;
		};
		class _xx_gm_20Rnd_762x51mm_b_DM41_g3_blk
		{
			magazine = "gm_20Rnd_762x51mm_b_DM41_g3_blk";
			count = 20;
		};
		class _xx_gm_32Rnd_9x19mm_b_DM11_mp2_blk
		{
			magazine = "gm_32Rnd_9x19mm_b_DM11_mp2_blk";
			count = 8;
		};
	};
	class TransportItems
	{
		class _xx_gm_ge_army_gauzeBandage
		{
			name = "gm_ge_army_gauzeBandage";
			count = 4;
		};
		class _xx_gm_ge_army_burnBandage
		{
			name = "gm_ge_army_burnBandage";
			count = 4;
		};
		class _xx_gm_repairkit_01
		{
			name = "gm_repairkit_01";
			count = 1;
		};
	};
};
class gm_ge_army_m113a1g_apc: gm_ge_army_m113a1g_apc_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_m113a1g_apc_wdl: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_apc_wdl";
	editorSubcategory = "gm_esc_apc_wdl";
};
class gm_ge_army_m113a1g_apc_win: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_apc_win";
	editorSubcategory = "gm_esc_apc_win";
};
class gm_ge_army_m113a1g_apc_wiw: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_apc_wiw";
	editorSubcategory = "gm_esc_apc_wiw";
};
class gm_ge_army_m113a1g_apc_oli: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_apc_oli";
	editorSubcategory = "gm_esc_apc_oli";
};
class gm_ge_army_m113a1g_apc_ols: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_apc_ols";
	editorSubcategory = "gm_esc_apc_ols";
};
class gm_ge_army_m113a1g_apc_olw: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_apc_olw";
	editorSubcategory = "gm_esc_apc_olw";
};
class gm_ge_army_m113a1g_apc_des: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_apc_des";
	editorSubcategory = "gm_esc_apc_des";
};
class gm_ge_army_m113a1g_apc_trp: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_apc_trp";
	editorSubcategory = "gm_esc_apc_trp";
};
class gm_ge_army_m113a1g_apc_un: gm_ge_army_m113a1g_apc_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_apc_un";
	editorSubcategory = "gm_esc_apc_un";
};
class gm_ge_army_m113a1g_apc_milan_base: gm_m113a1g_apc_milan_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_mechanizedInfantry";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ui\preview_gm_ge_army_m113a1g_apc_milan.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
			count = 1;
		};
		class _xx_gm_Pzf44_2_oli
		{
			weapon = "gm_Pzf44_2_oli";
			count = 1;
		};
		class _xx_gm_ferod16_oli
		{
			weapon = "gm_ferod16_oli";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_gm_handgrenade_frag_dm51a1
		{
			magazine = "gm_handgrenade_frag_dm51a1";
			count = 12;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 4;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 4;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 4;
		};
		class _xx_gm_1Rnd_44x537mm_heat_DM32_pzf44_2
		{
			magazine = "gm_1Rnd_44x537mm_heat_DM32_pzf44_2";
			count = 2;
		};
		class _xx_gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn
		{
			magazine = "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn";
			count = 8;
		};
		class _xx_gm_20Rnd_762x51mm_b_DM41_g3_blk
		{
			magazine = "gm_20Rnd_762x51mm_b_DM41_g3_blk";
			count = 20;
		};
		class _xx_gm_32Rnd_9x19mm_b_DM11_mp2_blk
		{
			magazine = "gm_32Rnd_9x19mm_b_DM11_mp2_blk";
			count = 8;
		};
	};
	class TransportItems
	{
		class _xx_gm_ge_army_gauzeBandage
		{
			name = "gm_ge_army_gauzeBandage";
			count = 4;
		};
		class _xx_gm_ge_army_burnBandage
		{
			name = "gm_ge_army_burnBandage";
			count = 4;
		};
		class _xx_gm_repairkit_01
		{
			name = "gm_repairkit_01";
			count = 1;
		};
	};
};
class gm_ge_army_m113a1g_apc_milan: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_m113a1g_apc_milan_wdl: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_apc_wdl";
	editorSubcategory = "gm_esc_apc_wdl";
};
class gm_ge_army_m113a1g_apc_milan_win: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_apc_win";
	editorSubcategory = "gm_esc_apc_win";
};
class gm_ge_army_m113a1g_apc_milan_wiw: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_apc_wiw";
	editorSubcategory = "gm_esc_apc_wiw";
};
class gm_ge_army_m113a1g_apc_milan_oli: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_apc_oli";
	editorSubcategory = "gm_esc_apc_oli";
};
class gm_ge_army_m113a1g_apc_milan_ols: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_apc_ols";
	editorSubcategory = "gm_esc_apc_ols";
};
class gm_ge_army_m113a1g_apc_milan_olw: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_apc_olw";
	editorSubcategory = "gm_esc_apc_olw";
};
class gm_ge_army_m113a1g_apc_milan_des: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_apc_des";
	editorSubcategory = "gm_esc_apc_des";
};
class gm_ge_army_m113a1g_apc_milan_trp: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_apc_trp";
	editorSubcategory = "gm_esc_apc_trp";
};
class gm_ge_army_m113a1g_apc_milan_un: gm_ge_army_m113a1g_apc_milan_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_apc_un";
	editorSubcategory = "gm_esc_apc_un";
};
class gm_ge_army_m113a1g_command_base: gm_m113a1g_command_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_mechanizedInfantry";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ui\preview_gm_ge_army_m113a1g_command.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
			count = 1;
		};
		class _xx_gm_Pzf44_2_oli
		{
			weapon = "gm_Pzf44_2_oli";
			count = 1;
		};
		class _xx_gm_ferod16_oli
		{
			weapon = "gm_ferod16_oli";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_gm_handgrenade_frag_dm51a1
		{
			magazine = "gm_handgrenade_frag_dm51a1";
			count = 12;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 4;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 4;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 4;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 4;
		};
		class _xx_gm_1Rnd_44x537mm_heat_DM32_pzf44_2
		{
			magazine = "gm_1Rnd_44x537mm_heat_DM32_pzf44_2";
			count = 2;
		};
		class _xx_gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn
		{
			magazine = "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn";
			count = 8;
		};
		class _xx_gm_20Rnd_762x51mm_b_DM41_g3_blk
		{
			magazine = "gm_20Rnd_762x51mm_b_DM41_g3_blk";
			count = 20;
		};
		class _xx_gm_32Rnd_9x19mm_b_DM11_mp2_blk
		{
			magazine = "gm_32Rnd_9x19mm_b_DM11_mp2_blk";
			count = 8;
		};
	};
	class TransportItems
	{
		class _xx_gm_ge_army_gauzeBandage
		{
			name = "gm_ge_army_gauzeBandage";
			count = 4;
		};
		class _xx_gm_ge_army_burnBandage
		{
			name = "gm_ge_army_burnBandage";
			count = 4;
		};
		class _xx_gm_repairkit_01
		{
			name = "gm_repairkit_01";
			count = 1;
		};
	};
};
class gm_ge_army_m113a1g_command: gm_ge_army_m113a1g_command_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_m113a1g_command_wdl: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_apc_wdl";
	editorSubcategory = "gm_esc_apc_wdl";
};
class gm_ge_army_m113a1g_command_win: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\win\gm_ge_army_m113a1g_ext_03_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_apc_win";
	editorSubcategory = "gm_esc_apc_win";
};
class gm_ge_army_m113a1g_command_wiw: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wiw\gm_ge_army_m113a1g_ext_03_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_apc_wiw";
	editorSubcategory = "gm_esc_apc_wiw";
};
class gm_ge_army_m113a1g_command_oli: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\oli\gm_ge_army_m113a1g_ext_03_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_apc_oli";
	editorSubcategory = "gm_esc_apc_oli";
};
class gm_ge_army_m113a1g_command_ols: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ols\gm_ge_army_m113a1g_ext_03_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_apc_ols";
	editorSubcategory = "gm_esc_apc_ols";
};
class gm_ge_army_m113a1g_command_olw: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\olw\gm_ge_army_m113a1g_ext_03_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_apc_olw";
	editorSubcategory = "gm_esc_apc_olw";
};
class gm_ge_army_m113a1g_command_des: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\des\gm_ge_army_m113a1g_ext_03_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_apc_des";
	editorSubcategory = "gm_esc_apc_des";
};
class gm_ge_army_m113a1g_command_trp: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\trp\gm_ge_army_m113a1g_ext_03_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_apc_trp";
	editorSubcategory = "gm_esc_apc_trp";
};
class gm_ge_army_m113a1g_command_un: gm_ge_army_m113a1g_command_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\un\gm_ge_army_m113a1g_ext_03_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_apc_un";
	editorSubcategory = "gm_esc_apc_un";
};
class gm_ge_army_m113a1g_medic_base: gm_m113a1g_medic_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_mechanizedInfantry";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\ui\preview_gm_ge_army_m113a1g_medic.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_01_wdl_rc_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_m113\gm_ge_army_m113\data\wdl\gm_ge_army_m113a1g_ext_03_wdl_co.paa"};
	class TransportMagazines
	{
		class _xx_gm_handgrenade_frag_dm51a1
		{
			magazine = "gm_handgrenade_frag_dm51a1";
			count = 4;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 1;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 1;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 1;
		};
	};
	class TransportItems
	{
		class _xx_gm_ge_army_gauzeBandage
		{
			name = "gm_ge_army_gauzeBandage";
			count = 2;
		};
		class _xx_gm_ge_army_burnBandage
		{
			name = "gm_ge_army_burnBandage";
			count = 2;
		};
		class _xx_gm_repairkit_01
		{
			name = "gm_repairkit_01";
			count = 1;
		};
	};
};
class gm_ge_army_m113a1g_medic: gm_ge_army_m113a1g_medic_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
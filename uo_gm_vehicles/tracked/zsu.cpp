#include "..\gm_tracked.cpp"

//tracked_APC_base found in gm_tracked.cpp
class gm_zsu234_base: gm_tracked_Tank_base 
{
	displayName = "ZSU-23-4";
	displayNameShort = "ZSU-23-4";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\ui\map_gm_zsu234v1_ca";
	nameSound = "gm_vehname_shilka_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_shilka_s"};
			speechSingular[] = {"gm_vehname_shilka_s"};
		};
	};
	editorSubcategory = "EdSubcat_AAs";
	wheelCircumference = 2.701;
	driverAction = "gm_zsu234_driver_01_in";
	driverInAction = "gm_zsu234_driver_01_in";
	driverDoor = "";
	canHideDriver = 0;
	getinAction = "GetinLow";
	getOutAction = "GetOutLow";
	LODTurnedOut = 1;
	class ViewOptics: ViewOptics
	{
		visionMode[] = {"normal", "nvg"};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			minElev = -4;
			maxElev = 75;
			weapons[] = {"gm_23mm_2a7_quad"};
			magazines[] = {"gm_2000Rnd_23x152mm_hei_t_ofzt"};
			memoryPointGun[] = {"MainTurret_Muzzle_1_1", "MainTurret_Muzzle_1_2", "MainTurret_Muzzle_2_1", "MainTurret_Muzzle_2_2"};
			gunBeg = "MainTurret_Muzzle_1_1";
			gunEnd = "MainTurret_Chamber_1_1";
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
			gunnerAction = "commander_mbt3_out";
			gunnerInAction = "commander_mbt3_in";
			animationSourcehatch = "";
			gm_animationSourcehatch = "MainTurret_hatch_source";
			gunnerDoor = "MainTurret_hatch_source";
			memoryPointsGetInGunner = "MainTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "MainTurret_GetIn_dir";
			gunnerGetinAction = "gm_tank_hatch_01_getin_01";
			gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
			preciseGetInOut = 1;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			allowLauncherOut = 1;
			personTurretAction = "vehicle_turnout_1";
			minOutElev = -30;
			maxOutElev = 80;
			initOutElev = 0;
			minOutTurn = -130;
			maxOutTurn = 90;
			initOutTurn = 0;
			showCrewAim = 2;
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			turretInfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900};
			discreteDistanceInitIndex = 5;
			class OpticsIn
			{
				class aa01_day_6x: gm_optics_aa01_day_6x_base
				{
				};
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
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
				{
					class Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {2000, 4000, 8000, 14000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
				{
					defaultDisplay = "SensorDisplay";
					class Components
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {2000, 4000, 8000, 14000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
			};
			class Turrets
			{
				class CommanderTurret: CommanderTurret_base
				{
					gunnerName = "Commander";
					minElev = -25;
					maxElev = 75;
					initElev = 0;
					minTurn = -360;
					maxTurn = 360;
					initTurn = 0;
					gunnerHasFlares = 1;
					startEngine = 0;
					gunnerAction = "commander_mbt3_out";
					gunnerInAction = "commander_mbt3_in";
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
					personTurretAction = "vehicle_turnout_1";
					minOutElev = -20;
					maxOutElev = 60;
					initOutElev = 0;
					minOutTurn = -360;
					maxOutTurn = 360;
					initOutTurn = 0;
					showCrewAim = 1;
					class TurnOut
					{
						limitsArrayTop[] = {{60, -135}, {60, 135}};
						limitsArrayBottom[] = {{-30, -135}, {-30, 135}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{75, -180}, {75, 180}};
						limitsArrayBottom[] = {{-14, -180}, {-14, 180}};
					};
					gunnerOutOpticsModel = "";
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {};
					gunnerForceOptics = 1;
					turretInfoType = "gm_RscUnitInfo_vehicle_commander_optics";
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
					discreteDistanceInitIndex = 2;
					class OpticsIn
					{
						class aa01_day_6x: gm_optics_aa01_day_6x_base
						{
						};
					};
					class Hitpoints
					{
					};
					class Reflectors
					{
						class CommanderTurret_searchLight
						{
							color[] = {1040, 2180, 2550};
							ambient[] = {70, 75, 100};
							intensity = 2000;
							size = 1;
							innerAngle = 2;
							outerAngle = 10;
							coneFadeCoef = 10;
							position = "lightCommanderTurret_searchLight_pos";
							direction = "lightCommanderTurret_searchLight_dir";
							hitpoint = "hitPoint_CommanderTurret_searchLight";
							selection = "lightCommanderTurret_searchLight";
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
					class Components
					{
						class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
						{
							class Components
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class SensorDisplay
								{
									componentType = "SensorsDisplayComponent";
									range[] = {2000, 4000, 8000, 14000};
									resource = "RscCustomInfoSensors";
								};
							};
						};
						class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
						{
							defaultDisplay = "SensorDisplay";
							class Components
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class SensorDisplay
								{
									componentType = "SensorsDisplayComponent";
									range[] = {2000, 4000, 8000, 14000};
									resource = "RscCustomInfoSensors";
								};
							};
						};
					};
				};
			};
		};
	};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 8000;
					angleRangeHorizontal = 360;
					angleRangeVertical = 100;
					animDirection = "mainTurret_trav";
					minSpeedThreshold = 30;
					maxSpeedThreshold = 90;
					allowsMarking = 1;
				};
			};
		};
	};
	armor = 600;
	armorStructural = 6;
	damageResistance = 0.00547;
	class Damage
	{
		tex[] = {};
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\gm_zsu234v1_wheels_01_destroyed.rvmat"};
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
	fuelCapacity = 14;
	brakeIdleSpeed = 1.78;
	maxSpeed = 50;
	normalSpeedForwardCoef = 0.75;
	slowSpeedForwardCoef = 0.25;
	waterResistance = 0;
	waterResistanceCoef = 0.25;
	tracksSpeed = 1.1;
	waterDamageEngine = 0.2;
	enginePower = 380;
	maxOmega = 272;
	minOmega = 70;
	redRpm = 2640;
	idleRpm = 700;
	peakTorque = 980;
	torqueCurve[] = {{0.0350877, 0}, {0.315789, 0.953109}, {0.526316, 1}, {0.561404, 1}, {0.631579, 0.953109}, {0.77193, 0.897044}, {0.912281, 0.826707}, {1.08807, 0}};
	thrustDelay = 0.5;
	engineMOI = 12;
	dampingRateFullThrottle = 1.4;
	dampingRateZeroThrottleClutchEngaged = 5;
	dampingRateZeroThrottleClutchDisengaged = 0.8;
	clutchStrength = 40;
	latency = 3;
	switchTime = 0.1;
	changeGearType = "rpmratio";
	changeGearOmegaRatios[] = {1, 0.350877, 0.350877, 0, 0.835088, 0.350877, 0.894737, 0.666667, 0.912281, 0.666667, 0.912281, 0.666667, 1, 0.666667};
	class complexGearbox
	{
		GearboxRatios[] = {"R1", -7.25, "N", 0, "D1", 5.35, "D2", 2.942, "D3", 2.012, "D4", 1.38, "D5", 1};
		AmphibiousRatios[] = {"R1", -9.4, "N", 0, "D1", 9.4};
		TransmissionRatios[] = {"High", 15.4};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
		transmissionDelay = 0.3;
	};
	tankTurnForce = 950000;
	tankTurnForceAngMinSpd = 0.7;
	tankTurnForceAngSpd = 0.76;
	accelAidForceCoef = 4;
	accelAidForceYOffset = -2.5;
	accelAidForceSpd = 20;
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
			dampingRateInAir = 50;
			maxBrakeTorque = 23000;
			maxHandBrakeTorque = 23000;
			maxDroop = 0.18;
			maxCompression = 0.18;
			frictionVsSlipGraph[] = {{0, 0.55}, {0.3, 1.28}, {0.65, 0.55}};
			suspTravelDirection[] = {-0.125, -1, 0};
			springStrength = 160833;
			springDamperRate = 9650;
			MOI = 8.2418;
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
	soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engineOn_Int", 0.630957, 1};
	soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engineOn_Ext", 0.794328, 1, 200};
	soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engineOff_Int", 0.630957, 1};
	soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engineOff_Ext", 0.794328, 1, 200};
	class Sounds: Sounds
	{
		class ThreadsOutH0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutH1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutH2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_03_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutS0
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutS1
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_01_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutS2
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_tracks_03_ext", 1.5, 1, 100};
			frequency = "1";
			volume = "2*engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class engine_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_01_ext", 0.794328, 0.86, 200};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_02_ext", 0.891251, 0.86, 240};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_03_ext", 1.12202, 0.86, 280};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_04_ext", 1.25893, 0.86, 320};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_05_ext", 1.41254, 0.86, 360};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_05_ext", 1.58489, 0.86, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_07_ext", 1.77828, 0.86, 440};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_01_ext", 1.12202, 0.86, 200};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_02_ext", 1.41254, 0.86, 200};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_03_ext", 1.77828, 0.86, 230};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_04_ext", 1.99526, 0.86, 290};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_05_ext", 1.77828, 0.86, 350};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_05_ext", 2.23872, 0.86, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_07_ext", 2.51189, 0.86, 450};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class engine_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_01_int", 1.4, 1};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_01_int", 1.6, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_03_int", 1.3, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_04_int", 1.5, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_05_int", 1.4, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_05_int", 1.5, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_engine_07_int", 1.7, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_01_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_02_int", 0.398107, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_03_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_04_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_05_int", 0.501187, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_06_int", 0.562341, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\sounds\gm_zsu234_thrust_07_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
	};
	class UserActions: UserActions
	{
	};
	class AnimationSources: AnimationSources
	{
		class MainTurret_Muzzleflash_ammoRandom_source
		{
			source = "ammoRandom";
			weapon = "gm_23mm_2a7_quad";
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
	};
	class EventHandlers: Eventhandlers
	{
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
	class RenderTargets
	{
	};
};
class gm_zsu234v1_base: gm_zsu234_base
{
	displayName = "ZSU-23-4V1";
	displayNameShort = "ZSU-23-4V1";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\data\ui\picture_gm_zsu234v1_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_zsu234v1";
	maxFordingDepth = -1.64321;
	class TextureSources
	{
		class gm_gc_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_03_wdl_co.paa"};
		};
		class gm_gc_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_03_win_co.paa"};
		};
		class gm_gc_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_03_oli_co.paa"};
		};
		class gm_gc_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_03_ols_co.paa"};
		};
		class gm_gc_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_03_olw_co.paa"};
		};
		class gm_gc_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_gc"};
			displayname = "East Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_03_un_co.paa"};
		};
	};
};
class gm_gc_army_zsu234v1_base: gm_zsu234v1_base
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
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ui\preview_gm_gc_army_zsu234v1.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_03_oli_co.paa"};
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
class gm_gc_army_zsu234v1: gm_gc_army_zsu234v1_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_gc_army_zsu234v1_wdl: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\wdl\gm_gc_army_zsu234v1_ext_03_wdl_co.paa"};
	textureList[] = {"gm_gc_army_wdl", 1};
	vehicleclass = "gm_vc_aa_wdl";
	editorSubcategory = "gm_esc_aa_wdl";
};
class gm_gc_army_zsu234v1_win: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\win\gm_gc_army_zsu234v1_ext_03_win_co.paa"};
	textureList[] = {"gm_gc_army_win", 1};
	vehicleclass = "gm_vc_aa_win";
	editorSubcategory = "gm_esc_aa_win";
};
class gm_gc_army_zsu234v1_oli: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\oli\gm_gc_army_zsu234v1_ext_03_oli_co.paa"};
	textureList[] = {"gm_gc_army_oli", 1};
	vehicleclass = "gm_vc_aa_oli";
	editorSubcategory = "gm_esc_aa_oli";
};
class gm_gc_army_zsu234v1_ols: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\ols\gm_gc_army_zsu234v1_ext_03_ols_co.paa"};
	textureList[] = {"gm_gc_army_ols", 1};
	vehicleclass = "gm_vc_aa_ols";
	editorSubcategory = "gm_esc_aa_ols";
};
class gm_gc_army_zsu234v1_olw: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\olw\gm_gc_army_zsu234v1_ext_03_olw_co.paa"};
	textureList[] = {"gm_gc_army_olw", 1};
	vehicleclass = "gm_vc_aa_olw";
	editorSubcategory = "gm_esc_aa_olw";
};
class gm_gc_army_zsu234v1_un: gm_gc_army_zsu234v1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_zsu234\gm_gc_army_zsu234\data\un\gm_gc_army_zsu234v1_ext_03_un_co.paa"};
	textureList[] = {"gm_gc_army_un", 1};
	vehicleclass = "gm_vc_aa_un";
	editorSubcategory = "gm_esc_aa_un";
};
#include "..\gm_tracked.cpp"

//tracked_Tank_base found in gm_tracked.cpp
class gm_Leopard1_base: gm_tracked_Tank_base
{
	displayName = "KPz 1";
	displayNameShort = "KPz 1";
	nameSound = "gm_vehname_leopard1_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_leopard1_p"};
			speechSingular[] = {"gm_vehname_leopard1_s"};
		};
	};
	accuracy = 0.3;
	threat[] = {0.6, 0.9, 0.6};
	cost = 1.5e+006;
	driverAction = "gm_leopard_1_driver_out";
	driverInAction = "gm_leopard_1_driver_in";
	driverDoor = "HatchDriver";
	getinAction = "getInLow";
	getOutAction = "getOutLow";
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
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a1a1_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1a3_ext_05_destroyed.rvmat"};
	};
	class Hitpoints: HitPoints
	{
		class HitAmmo: gm_hitpoint_hitAmmo_base
		{
		};
		class HitHull: HitHull
		{
		};
		class HitSideSkirt_1_1
		{
			simulation = "gm_armor_sideskirts";
			armorComponent = "fireGeo_sideSkirt_1_1";
			name = "hitPoint_SideSkirt_1_1";
			armor = -100;
			minimalHit = 0.3;
			passThrough = 0;
			visual = "sideSkirt_1_1";
			explosionShielding = 2;
			radius = 0.25;
		};
		class HitSideSkirt_1_2: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_1_2";
			name = "hitPoint_SideSkirt_1_2";
			visual = "sideSkirt_1_2";
		};
		class HitSideSkirt_2_1: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_2_1";
			name = "hitPoint_SideSkirt_2_1";
			visual = "sideSkirt_2_1";
		};
		class HitSideSkirt_2_2: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_2_2";
			name = "hitPoint_SideSkirt_2_2";
			visual = "sideSkirt_2_2";
		};
		class HitSideSkirt_3_1: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_3_1";
			name = "hitPoint_SideSkirt_3_1";
			visual = "sideSkirt_3_1";
		};
		class HitSideSkirt_3_2: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_3_2";
			name = "hitPoint_SideSkirt_3_2";
			visual = "sideSkirt_3_2";
		};
		class HitSideSkirt_4_1: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_4_1";
			name = "hitPoint_SideSkirt_4_1";
			visual = "sideSkirt_4_1";
		};
		class HitSideSkirt_4_2: HitSideSkirt_1_1
		{
			armorComponent = "fireGeo_sideSkirt_4_2";
			name = "hitPoint_SideSkirt_4_2";
			visual = "sideSkirt_4_2";
		};
		class HitMainTurret_addonArmor_1_1
		{
			simulation = "gm_armor_spaced";
			armorComponent = "fireGeo_MainTurret_addonArmor_1_1";
			name = "hitPoint_MainTurret_addonArmor_1_1";
			armor = -150;
			minimalHit = 0.3;
			passThrough = 0;
			visual = "damage_MainTurret_addonArmor_1_1";
			explosionShielding = 2;
			radius = 0.25;
		};
		class HitMainTurret_addonArmor_1_2: HitMainTurret_addonArmor_1_1
		{
			armorComponent = "fireGeo_MainTurret_addonArmor_1_2";
			name = "hitPoint_MainTurret_addonArmor_1_2";
			visual = "damage_MainTurret_addonArmor_1_2";
		};
		class HitMainTurret_addonArmor_2_1: HitMainTurret_addonArmor_1_1
		{
			armorComponent = "fireGeo_MainTurret_addonArmor_2_1";
			name = "hitPoint_MainTurret_addonArmor_2_1";
			visual = "damage_MainTurret_addonArmor_2_1";
		};
		class HitMainTurret_addonArmor_2_2: HitMainTurret_addonArmor_1_1
		{
			armorComponent = "fireGeo_MainTurret_addonArmor_2_2";
			name = "hitPoint_MainTurret_addonArmor_2_2";
			visual = "damage_MainTurret_addonArmor_2_2";
		};
		class HitMainTurret_addonArmor_0_0: HitMainTurret_addonArmor_1_1
		{
			armorComponent = "fireGeo_MainTurret_addonArmor_0_0";
			name = "hitPoint_MainTurret_addonArmor_0_0";
			visual = "damage_MainTurret_addonArmor_0_0";
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
		class hit_wheel_6_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_1";
			armorComponent = "fireGeo_wheel_6_1";
			visual = "wheel_6_1";
		};
		class hit_wheel_6_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_2";
			armorComponent = "fireGeo_wheel_6_2";
			visual = "wheel_6_2";
		};
		class hit_wheel_7_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_1";
			armorComponent = "fireGeo_wheel_7_1";
			visual = "wheel_7_1";
		};
		class hit_wheel_7_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_2";
			armorComponent = "fireGeo_wheel_7_2";
			visual = "wheel_7_2";
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
	LODTurnedOut = 1;
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
	soundEngineOnInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engineOnInt", 0.630957, 1};
	soundEngineOnExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engineOnExt", 0.794328, 1, 200};
	soundEngineOffInt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engineOffInt.63095737", 1};
	soundEngineOffExt[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engineOffExt", 0.794328, 1, 200};
	class Sounds: Sounds
	{
		class engine_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_01_ext", 0.794328, 1, 200};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_02_ext", 0.891251, 1, 240};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_03_ext", 1.12202, 1, 280};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_04_ext", 1.25893, 1, 320};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_05_ext", 1.41254, 1, 360};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_06_ext", 1.58489, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_07_ext", 1.77828, 1, 440};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_01_ext", 1.12202, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_02_ext", 1.41254, 1, 200};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_03_ext", 1.77828, 1, 230};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_04_ext", 1.99526, 1, 290};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_05_ext", 1.77828, 1, 350};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_06_ext", 2.23872, 1, 400};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_ext
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_07_ext", 2.51189, 1, 450};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class engine_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_01_int", 0.794328, 1};
			frequency = "0.95	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class engine_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_02_int", 0.891251, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class engine_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_03_int", 0.122019, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class engine_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_04_int", 0.258925, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class engine_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_05_int", 0.412538, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class engine_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_06_int", 0.584893, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class engine_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_engine_07_int", 0.778279, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
		class thrust_01_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_01_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(400/	2640),(900/	2640)])*0.15";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(100/	2640),(200/	2640)])	*	((rpm/2640) factor[(900/	2640),(700/	2640)]))";
		};
		class thrust_02_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_02_int", 0.398107, 1};
			frequency = "0.8	+	((rpm/2640) factor[(700/	2640),(1100/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(705/	2640),(850/	2640)])	*	((rpm/2640) factor[(1100 /	2640),(950/	2640)]))";
		};
		class thrust_03_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_03_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(950/	2640),(1400/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/2640) factor[(1400/	2640),(1200/	2640)]))";
		};
		class thrust_04_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_04_int", 0.446684, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1200/	2640),(1700/	2640)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/2640) factor[(1700/	2640),(1500/	2640)]))";
		};
		class thrust_05_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_05_int", 0.501187, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1500/	2640),(2100/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/2640) factor[(2100/	2640),(1800/	2640)]))";
		};
		class thrust_06_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_06_int", 0.562341, 1};
			frequency = "0.8	+	((rpm/2640) factor[(1800/	2640),(2300/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/2640) factor[(2450/	2640),(2200/	2640)]))";
		};
		class thrust_07_int
		{
			sound[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\sounds\gm_leopard1_thrust_07_int", 0.630957, 1};
			frequency = "0.8	+	((rpm/2640) factor[(2100/	2640),(2640/	2640)])*0.1";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2640) factor[(2150/	2640),(2500/	2640)])";
		};
	};
	driveOnComponent[] = {"Slide", "sprocket_wheel_1_1", "sprocket_wheel_1_2", "wheel_1_1_damper", "wheel_1_2_damper", "wheel_2_1_damper", "wheel_2_2_damper", "wheel_3_1_damper", "wheel_3_2_damper", "wheel_4_1_damper", "wheel_4_2_damper", "wheel_5_1_damper", "wheel_5_2_damper", "wheel_6_1_damper", "wheel_6_2_damper", "wheel_7_1_damper", "wheel_7_2_damper", "idler_wheel_1_1", "idler_wheel_1_2"};
	fuelCapacity = 26;
	brakeIdleSpeed = 1.78;
	maxSpeed = 65;
	normalSpeedForwardCoef = 0.75;
	slowSpeedForwardCoef = 0.25;
	waterResistance = 0;
	waterResistanceCoef = 0.25;
	tracksSpeed = 1.1;
	waterDamageEngine = 0.2;
	wheelCircumference = 2.5;
	enginePower = 830;
	maxOmega = 272;
	minOmega = 70;
	redRpm = 2640;
	idleRpm = 1000;
	peakTorque = 2850;
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
		GearboxRatios[] = {"R2", -3.9, "N", 0, "D1", 4.7, "D2", 3.5, "D3", 2.6, "D4", 2, "D5", 1.5, "D6", 1.125, "D7", 0.85};
		transmissionRatios[] = {"High", 11.5};
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
	accelAidForceYOffset = -5;
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
			sprungMass = 2862.14;
			springStrength = 346319;
			springDamperRate = 18890.1;
			MOI = 10.2605;
			mass = 100;
			width = 0.5;
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
		class wheel_7_1: wheel_1_1
		{
			boneName = "wheel_7_1_damper";
			center = "wheel_7_1_axis";
			boundary = "wheel_7_1_bound";
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
		class wheel_7_2: wheel_1_2
		{
			boneName = "wheel_7_2_damper";
			center = "wheel_7_2_axis";
			boundary = "wheel_7_2_bound";
		};
	};
	class AnimationSources: AnimationSources
	{
	};
	class UserActions: UserActions
	{
	};
	class EventHandlers: Eventhandlers
	{
	};
	class Attributes: Attributes
	{
	};
};
class gm_Leopard1a0_base: gm_Leopard1_base
{
	displayName = "KPz 1A0";
	displayNameShort = "KPz 1A0";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\map_gm_leopard1a1_ca";
	smokeLauncherGrenadeCount = 8;
	smokeLauncherVelocity = 35;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 110;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			minElev = -9;
			maxElev = 20;
			selectionFireAnim = "MainTurret_Coax_muzzleflash";
			startEngine = 0;
			weapons[] = {"gm_105mm_l7a3", "gm_mg3_coax"};
			magazines[] = {"gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_apfsds_t_dm33", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_1Rnd_105x617mm_heat_mp_t_dm12", "gm_500Rnd_762x51mm_b_t_DM21_mg3", "gm_500Rnd_762x51mm_b_t_DM21_mg3", "gm_500Rnd_762x51mm_b_t_DM21_mg3", "gm_500Rnd_762x51mm_b_t_DM21_mg3", "gm_500Rnd_762x51mm_b_t_DM21_mg3", "gm_500Rnd_762x51mm_b_t_DM21_mg3"};
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.562341, 1, 50};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.562341, 1, 50};
			gunnerAction = "gm_leopard_1_loader_in";
			gunnerInAction = "gm_leopard_1_loader_in";
			gunnerGetinAction = "";
			gunnerGetOutAction = "";
			memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
			allowLauncherOut = 1;
			preciseGetInOut = 0;
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			forceHideGunner = 1;
			gunnerDoor = "CommanderTurret_hatch_source";
			LODTurnedIn = 1200;
			LODTurnedOut = 1200;
			LODOpticsIn = 1;
			LODOpticsOut = 1;
			memoryPointGunnerOptics = "Optic_TEM_2A_pos";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			turretinfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
			discreteDistance[] = {200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600};
			discreteDistanceInitindex = 4;
			class OpticsIn
			{
				class tem2a_day_8x: gm_optics_tem2a_day_8x_base
				{
				};
				class tem2a_day_16x: gm_optics_tem2a_day_16x_base
				{
				};
			};
			class Reflectors
			{
				class MainTurret_searchLight
				{
					color[] = {1040, 2180, 2550};
					ambient[] = {70, 75, 100};
					position = "lightMainTurret_searchLight_pos";
					direction = "lightMainTurret_searchLight_dir";
					hitpoint = "hitPoint_MainTurret_searchLight";
					selection = "lightMainTurret_searchLight";
					size = 1;
					innerAngle = 2;
					outerAngle = 10;
					coneFadeCoef = 10;
					intensity = 3000;
					useFlare = 0;
					daylight = 1;
					flareSize = 4;
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
				limitsArrayTop[] = {{20, -180}, {20, 180}};
				limitsArrayBottom[] = {{0, -180}, {-1, -145}, {-9, -130}, {-9, 0}, {-9, 130}, {-1, 145}, {0, 180}};
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
					weapons[] = {"SmokeLauncher"};
					magazines[] = {"gm_2Rnd_76mm_RP_dm35"};
					gunnerHasFlares = 1;
					startEngine = 0;
					gunnerAction = "gm_leopard_1_loader_in";
					gunnerInAction = "gm_leopard_1_loader_in";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
					preciseGetInOut = 1;
					allowLauncherOut = 1;
					LODTurnedIn = 1200;
					LODTurnedOut = 1200;
					LODOpticsIn = 1;
					LODOpticsOut = 1;
					outGunnerMayFire = 0;
					inGunnerMayFire = 1;
					viewGunnerInExternal = 1;
					isPersonTurret = 1;
					personTurretAction = "vehicle_turnout_1";
					minOutElev = -60;
					maxOutElev = 60;
					initOutElev = 0;
					minOutTurn = -135;
					maxOutTurn = 135;
					initOutTurn = 0;
					showCrewAim = 1;
					gunnerDoor = "CommanderTurret_hatch_source";
					memoryPointGunnerOptics = "Optic_TRP_2A_pos";
					gunneropticsModel = "\gm\gm_weapons\gm_optics\gm_optics_trp2a_day_6x_20x.p3d";
					gunnerOutOpticsModel = "";
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
					gunnerForceOptics = 1;
					turretinfoType = "gm_RscUnitInfo_vehicle_commander_optics";
					discreteDistance[] = {};
					discreteDistanceInitindex = 0;
					class ViewOptics: ViewOptics
					{
						visionMode[] = {"normal", "nvg"};
						initFov = "(140*0.05625*0.0174533)";
						minFov = "(10*0.05625*0.0174533)";
						maxFov = "(140*0.05625*0.0174533)";
					};
					class TurnOut
					{
						limitsArrayTop[] = {{45, -135}, {45, 135}};
						limitsArrayBottom[] = {{-10, -135}, {-10, 135}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{25, -180}, {25, 180}};
						limitsArrayBottom[] = {{-25, -180}, {-25, 180}};
					};
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
					animationSourceHatch = "";
					gm_animationSourceHatch = "CommanderTurret_hatch_source";
				};
				class LoaderTurret: LoaderTurret_base
				{
					gunnerName = "Loader";
					weapons[] = {};
					magazines[] = {};
					gunnerCompartments = "Compartment3";
					gunnerAction = "gm_leopard_1_loader_in";
					gunnerInAction = "gm_leopard_1_loader_in";
					personTurretAction = "vehicle_turnout_1";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					memoryPointsGetInGunner = "LoaderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "LoaderTurret_GetIn_dir";
					preciseGetInOut = 1;
					outGunnerMayFire = 0;
					inGunnerMayFire = 1;
					viewGunnerInExternal = 1;
					isPersonTurret = 1;
					canHideGunner = -1;
					dontCreateAI = 0;
					allowLauncherOut = 1;
					LODTurnedIn = 1200;
					LODTurnedOut = 1200;
					LODOpticsIn = 1;
					LODOpticsOut = 1;
					gunnerDoor = "LoaderTurret_hatch_source";
					minOutElev = -10;
					maxOutElev = 45;
					initOutElev = 0;
					minOutTurn = -135;
					maxOutTurn = 135;
					initOutTurn = 0;
					minElev = -10;
					maxElev = 45;
					initElev = 0;
					minTurn = -135;
					maxTurn = 135;
					initTurn = 0;
					showCrewAim = 1;
					class TurnOut
					{
						limitsArrayTop[] = {{45, -135}, {45, 135}};
						limitsArrayBottom[] = {{-10, -135}, {-10, 135}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{0, 0}, {0, 0}};
						limitsArrayBottom[] = {{0, 0}, {0, 0}};
					};
					class Hitpoints
					{
					};
					gunnerOutOpticsModel = "";
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {};
					gunnerForceOptics = 1;
					class OpticsIn
					{
						class Wispi: gm_opticsVehicles_WiSpi
						{
						};
					};
					animationSourceHatch = "";
					gm_animationSourceHatch = "LoaderTurret_hatch_source";
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
					gunnerName = "Loader (MG)";
					proxyIndex = 3;
					gunnerCompartments = "Compartment3";
					weapons[] = {"gm_mg3_MachineGunTurret_01"};
					magazines[] = {"gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn"};
					gunnerLeftHandAnimName = "MachineGunTurret_01_elev";
					gunnerRightHandAnimName = "MachineGunTurret_01_elev";
					gunnerAction = "gm_leopard_1_loader_out_01_mg3";
					gunnerInAction = "gunner_mbt3_in";
					personTurretAction = "vehicle_turnout_1";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					memoryPointsGetInGunner = "LoaderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "LoaderTurret_GetIn_dir";
					preciseGetInOut = 1;
					LODTurnedIn = 1200;
					LODTurnedOut = 1200;
					LODOpticsIn = 1200;
					LODOpticsOut = 1200;
					class Hitpoints
					{
					};
					animationSourceHatch = "";
					gm_animationSourceHatch = "LoaderTurret_hatch_source";
					class TurnOut
					{
						limitsArrayTop[] = {{45, -135}, {45, 135}};
						limitsArrayBottom[] = {{-10, -135}, {-10, 135}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{60, -180}, {60, 180}};
						limitsArrayBottom[] = {{-8, -180}, {-8, -147}, {-13, -120}, {-13, -60}, {-20, -30}, {-20, 0}, {-20, 160}, {-8, 180}};
					};
				};
			};
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
			weapon = "gm_105mm_l7a3";
		};
		class MachineGunTurret_01_store_source: gm_source_user_base
		{
		};
		class MainTurret_emes_shutter_source: gm_source_shutter_base
		{
		};
		class mainturret_pzb200_door_1_1_source: gm_source_shutter_base
		{
		};
		class MainTurret_trav_base_source: gm_source_user_base
		{
			source = "user";
			animPeriod = "1/360";
		};
		class MainTurret_elev_base_source: MainTurret_trav_base_source
		{
		};
		class CommanderTurret_trav_base_source: MainTurret_trav_base_source
		{
		};
		class MainTurret_pzb200_unhide_source: gm_source_user_base
		{
		};
		class MainTurret_searchLight_unhide_source: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_1_1_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_2_1_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_3_1_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_4_1_unhide: gm_source_user_base
		{
			initPhase = 1;
			onPhaseChanged = "if ((_this select 1) == 1) then 													{ 														_this select 0 animate ['Sideskirt_4_2_unhide',1,true]; 													} 													else 													{ 														_this select 0 animate ['Sideskirt_4_2_unhide',0,true]; 													}; 													";
		};
		class Sideskirt_1_2_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_2_2_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_3_2_unhide: gm_source_user_base
		{
			initPhase = 1;
		};
		class Sideskirt_4_2_unhide: gm_source_user_base
		{
			initPhase = 1;
			onPhaseChanged = "if ((_this select 1) == 1) then 													{ 														_this select 0 animate ['Sideskirt_4_1_unhide',1,true]; 													} 													else 													{ 														_this select 0 animate ['Sideskirt_4_1_unhide',0,true]; 													}; 													";
		};
		class beacon_1_1_org_unhide: beacon_1_1_org_unhide
		{
			displayname = "Add Beacon - Orange";
		};
		class sideskirt_unhide: gm_source_user_base
		{
			initPhase = 1;
			displayName = "Add Side Skirts";
		};
		class CamoNet_01_unhide: gm_source_user_base
		{
		};
		class CamoNet_02_unhide: gm_source_user_base
		{
		};
		class CamoNet_03_unhide: gm_source_user_base
		{
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
	animationList[] = {};
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
	class UserActions: UserActions
	{
		class gm_take_turret_weapon_01
		{
			displayName = "Take MG3 7.62x51 mm";
			position = "MachineGunTurret_01_pos";
			radius = 4;
			onlyForplayer = 0;
			condition = "[this,player,'LoaderTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MachineGunTurret_01',['LoaderTurret'],'MachineGunTurret_01_store_source',[]] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_01: gm_take_turret_weapon_01
		{
			displayName = "Store MG3 7.62x51 mm";
			condition = "[this,player,'MachineGunTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'LoaderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
	};
	class Eventhandlers: EventHandlers
	{
		class gm_core_vehicles_advancedTurrets
		{
			getIn = "[_this, ['MachineGunTurret_01','LoaderTurret'],['LoaderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			getOut = "[_this, ['MachineGunTurret_01','LoaderTurret'],['LoaderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			Init = "[_this select 0,'LoaderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretInit";
			seatSwitched = "[_this, ['MachineGunTurret_01','LoaderTurret'],['LoaderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
		};
		class gm_leopard1
		{
			fired = "[_this,'gm_105mm_l7a3','MainTurret_Recoil_source'] spawn gm_core_vehicles_fnc_vehicleRecoil";
		};
	};
};
class gm_Leopard1a1_base: gm_Leopard1a0_base
{
	displayName = "KPz 1A1";
	displayNameShort = "KPz 1A1";
};
class gm_leopard1a1no_base: gm_Leopard1a1_base
{
	displayName = "KPz 1A1NO";
};
class gm_Leopard1a1a1_base: gm_Leopard1a1_base
{
	displayName = "KPz 1A1A1";
	displayNameShort = "KPz 1A1A1";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a1a1_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_leopard1a1a1";
	maxFordingDepth = -1.49435;
	class AnimationSources: AnimationSources
	{
		class CamoNet_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Camo Net - Left";
		};
		class CamoNet_02_unhide: CamoNet_02_unhide
		{
			displayname = "Add Tarpaulin - Right";
		};
		class CamoNet_03_unhide: CamoNet_03_unhide
		{
			displayname = "Add Camo Net - Top";
			onPhaseChanged = "if ((_this select 1) == 1) then 														{ 															_this select 0 animate ['AmmoBox_02_unhide',1,true]; 															_this select 0 animate ['AmmoBox_02_unhide',1,true]; 														}; 													";
		};
		class AmmoBox_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Ammobox - Right";
		};
		class AmmoBox_02_unhide: CamoNet_01_unhide
		{
			displayname = "Add Ammobox - Left";
		};
		class FuelCanister_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Fuel Canister - Center";
		};
		class FuelCanister_02_unhide: CamoNet_01_unhide
		{
			displayname = "Add Fuel Canister - Right";
		};
		class FuelCanister_03_unhide: CamoNet_01_unhide
		{
			displayname = "Add Fuel Canister - Left";
		};
	};
	animationList[] = {"CamoNet_01_unhide", 0.25, "CamoNet_02_unhide", 0.25, "CamoNet_03_unhide", 0.25, "AmmoBox_01_unhide", 0.25, "AmmoBox_02_unhide", 0.25, "FuelCanister_01_unhide", 0.25, "FuelCanister_02_unhide", 0.25, "FuelCanister_03_unhide", 0.25};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
		};
	};
};
class gm_Leopard1a1a2_base: gm_Leopard1a1a1_base
{
	displayName = "KPz 1A1A2";
	displayNameShort = "KPz 1A1A2";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a1a2_ca";
	class AnimationSources: AnimationSources
	{
		class MainTurret_pzb200_unhide_source: MainTurret_pzb200_unhide_source
		{
			initPhase = 1;
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn: OpticsIn
			{
				class tem2a_day_8x: tem2a_day_8x
				{
				};
				class tem2a_day_16x: tem2a_day_16x
				{
				};
				class pzb200_ti_8x: gm_optics_pzb200_ti_8x_base
				{
					visionMode[] = {"ti"};
					thermalMode[] = {0, 1};
				};
			};
		};
	};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
		};
	};
};
class gm_Leopard1a1a3_base: gm_Leopard1a1a1_base
{
	displayName = "KPz 1A1A3";
	displayNameShort = "KPz 1A1A3";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a1a1_ca";
};
class gm_Leopard1a1a4_base: gm_Leopard1a1a2_base
{
	displayName = "KPz 1A1A4";
	displayNameShort = "KPz 1A1A4";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a1a2_ca";
};
class gm_Leopard1a3_base: gm_Leopard1a0_base
{
	displayName = "KPz 1A3";
	displayNameShort = "KPz 1A3";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a3_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_leopard1a3";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\map_gm_leopard1a3_ca";
	maxFordingDepth = -1.53463;
	class AnimationSources: AnimationSources
	{
		class CamoNet_01_unhide: CamoNet_01_unhide
		{
			displayname = "Add Camo Net - Right";
		};
		class CamoNet_02_unhide: CamoNet_02_unhide
		{
			displayname = "Add Tarpaulin - Left";
		};
		class CamoNet_03_unhide: CamoNet_03_unhide
		{
			displayname = "Add Camo Net - Top";
		};
	};
	animationList[] = {"CamoNet_01_unhide", 0.25, "CamoNet_02_unhide", 0.25, "CamoNet_03_unhide", 0.25};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn: OpticsIn
			{
				class tem2a_day_8x: tem2a_day_8x
				{
				};
				class tem2a_day_16x: tem2a_day_16x
				{
				};
			};
			class Turrets: Turrets
			{
				class CommanderTurret: CommanderTurret
				{
				};
				class LoaderTurret: LoaderTurret
				{
					minTurn = -55;
					maxTurn = 55;
					class TurnOut
					{
						limitsArrayTop[] = {{45, -135}, {45, 135}};
						limitsArrayBottom[] = {{-10, -135}, {-10, 135}};
					};
					class TurnIn: TurnOut
					{
						limitsArrayTop[] = {{0, -55}, {0, 55}};
						limitsArrayBottom[] = {{0, -55}, {0, 55}};
					};
				};
				class MachineGunTurret_01: MachineGunTurret_01
				{
				};
			};
		};
	};
	class TextureSources
	{
		class gm_dk_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_05_wdl_co.paa"};
		};
		class gm_dk_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1a3_ext_05_win_co.paa"};
		};
		class gm_dk_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1a3_ext_05_un_co.paa"};
		};
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
		};
	};
};
class gm_Leopard1a3a1_base: gm_Leopard1a3_base
{
	displayName = "KPz 1A3A1";
	displayNameShort = "KPz 1A3A1";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a3a1_ca";
	class AnimationSources: AnimationSources
	{
		class MainTurret_pzb200_unhide_source: MainTurret_pzb200_unhide_source
		{
			initPhase = 1;
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn: OpticsIn
			{
				class tem2a_day_8x: tem2a_day_8x
				{
				};
				class tem2a_day_16x: tem2a_day_16x
				{
				};
				class pzb200_ti_8x: gm_optics_pzb200_ti_8x_base
				{
					visionMode[] = {"ti"};
					thermalMode[] = {0, 1};
				};
			};
		};
	};
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
		};
	};
};
class gm_Leopard1a3a2_base: gm_Leopard1a3_base
{
	displayName = "KPz 1A3A2";
	displayNameShort = "KPz 1A3A2";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a3_ca";
};
class gm_Leopard1a3a3_base: gm_Leopard1a3a1_base
{
	displayName = "KPz 1A3A3";
	displayNameShort = "KPz 1A3A3";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\ui\picture_gm_leopard1a3a1_ca";
};
class gm_leopard1a3dk_base: gm_Leopard1a3_base
{
	displayName = "KPz 1A3DK";
};
class gm_Leopard1a4_base: gm_Leopard1a3_base
{
	displayName = "KPz 1A4";
	displayNameShort = "KPz 1A4";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class emes12a1_day_8x: gm_optics_emes12a1_day_8x_base
				{
				};
				class emes12a1_day_16x: gm_optics_emes12a1_day_16x_base
				{
				};
			};
			class Turrets: Turrets
			{
				class CommanderTurret: CommanderTurret
				{
					class OpticsIn
					{
						class perir12_day_8x: gm_optics_perir12_day_8x_base
						{
						};
						class perir12_ti_8x: gm_optics_perir12_ti_8x_base
						{
						};
					};
				};
				class LoaderTurret: LoaderTurret
				{
				};
				class MachineGunTurret_01: MachineGunTurret_01
				{
				};
			};
		};
	};
};
class gm_Leopard1a4a1_base: gm_Leopard1a4_base
{
	displayName = "KPz 1A4A1";
	displayNameShort = "KPz 1A4A1";
};
class gm_leopard1a5_base: gm_Leopard1a1a1_base
{
	displayName = "KPz 1A5";
	displayNameShort = "KPz 1A5";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class emes18_day_12x: gm_optics_emes18_day_12x_base
				{
				};
				class emes18_ti_3x: gm_optics_emes18_ti_3x_base
				{
				};
				class emes18_ti_12x: gm_optics_emes18_ti_12x_base
				{
				};
			};
			class Turrets: Turrets
			{
				class CommanderTurret: CommanderTurret
				{
				};
				class LoaderTurret: LoaderTurret
				{
				};
				class MachineGunTurret_01: MachineGunTurret_01
				{
				};
			};
		};
	};
};
class gm_Leopard1a5a1_base: gm_leopard1a5_base
{
	displayName = "KPz 1A5A1";
	displayNameShort = "KPz 1A5A1";
};
class gm_leopard1a5dk_base: gm_leopard1a5_base
{
	displayName = "KPz 1A5DK";
};
class gm_leopard1a5dk1_base: gm_leopard1a5_base
{
	displayName = "KPz 1A5DK1";
	gm_AnimationSourcesParts[] = {};
};
class gm_leopard1a5no_base: gm_leopard1a5_base
{
	displayName = "KPz 1A5NO";
};
class gm_leopard1a5no2_base: gm_leopard1a5_base
{
	displayName = "KPz 1A5NO2";
	gm_AnimationSourcesParts[] = {};
};
class gm_dk_army_Leopard1a3_base: gm_Leopard1a3_base
{
	side = 1;
	faction = "gm_fc_dk";
	gm_InsigniasDefaultNation = "gm_insignia_dk_army_01";
	gm_LicensePlate = "gm_dk_army_blk";
	gm_LicensePlateDefaultDigits = "#####";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_02", "LicensePlate_03", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	gm_TacticalNumbersFontNumbers = "gm_dk_schablonier_gry";
	gm_TacticalNumbersDefaultNumber = "";
	gm_TacticalNumbersIsLicensePlate = 0;
	crew = "gm_dk_army_crew_84_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\ui\preview_gm_dk_army_Leopard1a3.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_05_wdl_co.paa"};
	gm_InsigniasSelectionNation = "Insignia_nation_02";
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_dk_army_Leopard1a3: gm_dk_army_Leopard1a3_base
{
	gm_LicensePlateDefaultDigits = "46###";
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_dk_army_leopard1a3_wdl: gm_dk_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1a3_ext_05_wdl_co.paa"};
	textureList[] = {"gm_dk_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_dk_army_leopard1a3_win: gm_dk_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1a3_ext_05_win_co.paa"};
	textureList[] = {"gm_dk_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_dk_army_leopard1a3_un: gm_dk_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1a3_ext_05_un_co.paa"};
	textureList[] = {"gm_dk_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a1a1_base: gm_Leopard1a1a1_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a1a1.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a1a1: gm_ge_army_Leopard1a1a1_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	forceInGarage = 1;
};
class gm_ge_army_leopard1a1a1_wdl: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a1a1_win: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a1a1_wiw: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a1a1_oli: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a1a1_ols: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a1a1_olw: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a1a1_des: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a1a1_trp: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a1a1_un: gm_ge_army_Leopard1a1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a1a2_base: gm_Leopard1a1a2_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a1a2.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a1a2: gm_ge_army_Leopard1a1a2_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	forceInGarage = 1;
};
class gm_ge_army_leopard1a1a2_wdl: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a1a2_win: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a1a2_wiw: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a1a2_oli: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a1a2_ols: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a1a2_olw: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a1a2_des: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a1a2_trp: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a1a2_un: gm_ge_army_Leopard1a1a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a1a3_base: gm_Leopard1a1a3_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a1a3.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a1a3: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_leopard1a1a3_wdl: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a1a3_win: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a1a3_wiw: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a1a3_oli: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a1a3_ols: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a1a3_olw: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a1a3_des: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a1a3_trp: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a1a3_un: gm_ge_army_Leopard1a1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a1a4_base: gm_Leopard1a1a4_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a1a4.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a1a4: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_leopard1a1a4_wdl: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a1a1_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a1a4_win: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a1a1_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a1a4_wiw: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a1a1_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a1a4_oli: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a1a1_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a1a4_ols: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a1a1_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a1a4_olw: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a1a1_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a1a4_des: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a1a1_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a1a4_trp: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a1a1_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a1a4_un: gm_ge_army_Leopard1a1a4_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a1a1_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a3_base: gm_Leopard1a3_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a3.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a3: gm_ge_army_Leopard1a3_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_leopard1a3_wdl: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a3_win: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a3_wiw: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a3_oli: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a3_ols: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a3_olw: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a3_des: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a3_trp: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a3_un: gm_ge_army_Leopard1a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a3a1_base: gm_Leopard1a3a1_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a3a1.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a3a1: gm_ge_army_Leopard1a3a1_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	forceInGarage = 1;
};
class gm_ge_army_leopard1a3a1_wdl: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a3a1_win: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a3a1_wiw: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a3a1_oli: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a3a1_ols: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a3a1_olw: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a3a1_des: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a3a1_trp: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a3a1_un: gm_ge_army_Leopard1a3a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a3a2_base: gm_Leopard1a3a2_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a3a2.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a3a2: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_leopard1a3a2_wdl: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a3a2_win: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a3a2_wiw: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a3a2_oli: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a3a2_ols: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a3a2_olw: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a3a2_des: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a3a2_trp: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a3a2_un: gm_ge_army_Leopard1a3a2_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_Leopard1a3a3_base: gm_Leopard1a3a3_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ui\preview_gm_ge_army_Leopard1a3a3.jpg";
	class gm_ge_oli: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	};
	class gm_ge_ols: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Mud)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	};
	class gm_ge_olw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Olive, Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	};
	class gm_ge_wdl: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Woodland)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	};
	class gm_ge_win: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	};
	class gm_ge_wiw: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Winter, Wrong)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	};
	class gm_ge_des: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Desert)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	};
	class gm_ge_trp: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (Tropical)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	};
	class gm_ge_un: gm_texturesource_base
	{
		factions[] = {"gm_fc_ge"};
		displayname = "West Germany (White)";
		textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	};
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_Leopard1a3a3: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_leopard1a3a3_wdl: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1a3_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_leopard1a3a3_win: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1a3_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_leopard1a3a3_wiw: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1a3_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_leopard1a3a3_oli: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1a3_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_leopard1a3a3_ols: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1a3_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_leopard1a3a3_olw: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1a3_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_leopard1a3a3_des: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1a3_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_leopard1a3a3_trp: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1a3_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_leopard1a3a3_un: gm_ge_army_Leopard1a3a3_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1a3_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};

//BPz 2A0s
class gm_BPz2_base: gm_Leopard1_base
{
	displayName = "BPz 2";
	displayNameShort = "BPz 2";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\ui\map_gm_bpz2a0_ca";
	getinAction = "GetinHigh";
	getOutAction = "GetOutHigh";
	nameSound = "gm_vehname_bergepz_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_bergepz_s"};
			speechSingular[] = {"gm_vehname_bergepz_s"};
		};
	};
	threat[] = {0.5, 0.1, 0.6};
	cost = 100000;
	smokeLauncherGrenadeCount = 8;
	smokeLauncherVelocity = 35;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 110;
	weapons[] = {"SmokeLauncher"};
	magazines[] = {"gm_2Rnd_76mm_RP_dm35"};
	armor = 600;
	armorStructural = 6;
	damageResistance = 0.00547;
	class Damage
	{
		tex[] = {};
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\gm_bpz2a0_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_destroyed.rvmat"};
	};
	class Hitpoints: Hitpoints
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
		class hit_wheel_6_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_1";
			armorComponent = "fireGeo_wheel_6_1";
			visual = "wheel_6_1";
		};
		class hit_wheel_6_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_2";
			armorComponent = "fireGeo_wheel_6_2";
			visual = "wheel_6_2";
		};
		class hit_wheel_7_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_1";
			armorComponent = "fireGeo_wheel_7_1";
			visual = "wheel_7_1";
		};
		class hit_wheel_7_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_2";
			armorComponent = "fireGeo_wheel_7_2";
			visual = "wheel_7_2";
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
	class Turrets: Turrets
	{
		class CommanderTurret: CommanderTurret_base
		{
			proxyType = "CPGunner";
			proxyIndex = 1;
			LODTurnedIn = 1200;
			LODTurnedOut = 1200;
			gunnerName = "Commander";
			minElev = -20;
			maxElev = 60;
			initElev = 0;
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			commanding = 4;
			weapons[] = {};
			magazines[] = {};
			gunnerCompartments = "Compartment1";
			gunnerAction = "gm_leopard_1_loader_in";
			gunnerInAction = "gm_leopard_1_loader_in";
			personTurretAction = "vehicle_turnout_1";
			animationSourcehatch = "";
			gm_animationSourceHatch = "CommanderTurret_hatch_source";
			gunnerDoor = "CommanderTurret_hatch_source";
			gunnerGetinAction = "gm_tank_hatch_01_getin_01";
			gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
			memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
			preciseGetInOut = 1;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			isPersonTurret = 1;
			canHideGunner = -1;
			maxOutElev = 60;
			minOutElev = -20;
			initOutElev = 0;
			minOutTurn = -135;
			maxOutTurn = 135;
			initOutTurn = 0;
			showCrewAim = 1;
			class Hitpoints
			{
			};
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			class OpticsIn
			{
				class Wispi: gm_opticsVehicles_WiSpi
				{
				};
			};
		};
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			proxyIndex = 2;
			commanding = 2;
			LODTurnedIn = 1200;
			LODTurnedOut = 1200;
			MinElev = -30;
			MaxElev = 30;
			MinTurn = -30;
			MaxTurn = 30;
			weapons[] = {"gm_mg3_MainTurret"};
			magazines[] = {"gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn"};
			gunnerAction = "gunner_mbt3_in";
			gunnerInAction = "gunner_mbt3_in";
			gunnerGetinAction = "GetinHigh";
			gunnerGetOutAction = "GetOutHigh";
			memoryPointsGetInGunner = "driver_GetIn_pos";
			memoryPointsGetInGunnerDir = "driver_GetIn_dir";
			inGunnerMayFire = 1;
			viewGunnerInExternal = 1;
			forceHideGunner = 1;
			gunnerDoor = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			class OpticsIn
			{
				class Wispi: gm_opticsVehicles_WiSpi
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
			class Turrets
			{
			};
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
			gunnerName = "Commander (MG)";
			proxyType = "CPGunner";
			proxyIndex = 1;
			commanding = 3;
			gunnerCompartments = "Compartment1";
			weapons[] = {"gm_mg3_MachineGunTurret_01"};
			magazines[] = {"gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn", "gm_120Rnd_762x51mm_b_t_DM21A1_mg3_grn"};
			gunnerLeftHandAnimName = "LoaderTurret_elev";
			gunnerRightHandAnimName = "LoaderTurret_elev";
			gunnerAction = "gm_leopard_1_loader_out_01_mg3";
			gunnerInAction = "gunner_mbt3_in";
			personTurretAction = "vehicle_turnout_1";
			gunnerDoor = "CommanderTurret_hatch_source";
			gunnerGetinAction = "GetinLow";
			gunnerGetOutAction = "GetOutLow";
			memoryPointsGetInGunner = "commanderTurret_GetIn_pos";
			memoryPointsGetInGunnerDir = "commanderTurret_GetIn_dir";
			class TurnOut
			{
				limitsArrayTop[] = {{45, -135}, {45, 135}};
				limitsArrayBottom[] = {{-10, -135}, {-10, 135}};
			};
			class TurnIn: TurnOut
			{
				limitsArrayTop[] = {{60, -180}, {60, 180}};
				limitsArrayBottom[] = {{-20, -180}, {-20, -145}, {-12, -125}, {-12, -85}, {-20, -45}, {-20, 180}};
			};
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
			animationSourcehatch = "";
			gm_animationSourceHatch = "CommanderTurret_hatch_source";
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
			condition = "[this,player,'CommanderTurret',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'MachineGunTurret_01',['CommanderTurret'],'MachineGunTurret_01_store_source',[]] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
		class gm_store_turret_weapon_01: gm_take_turret_weapon_01
		{
			displayName = "Store MG3 7.62x51 mm";
			condition = "[this,player,'MachineGunTurret_01',-1] call gm_core_vehicles_fnc_advancedTurrets_turretCheck";
			statement = "[this,player,'CommanderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretSwitch";
		};
	};
	class Eventhandlers: EventHandlers
	{
		class gm_core_vehicles_advancedTurrets
		{
			getOut = "[_this, ['MachineGunTurret_01','CommanderTurret'],['CommanderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			getIn = "[_this, ['MachineGunTurret_01','CommanderTurret'],['CommanderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
			Init = "[_this select 0,'CommanderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']] call gm_core_vehicles_fnc_advancedTurrets_turretInit";
			seatSwitched = "[_this, ['MachineGunTurret_01','CommanderTurret'],['CommanderTurret',['MachineGunTurret_01'],'',['MachineGunTurret_01_store_source']]] call gm_core_vehicles_fnc_advancedTurrets_reset";
		};
	};
	class AnimationSources: AnimationSources
	{
		class CommanderTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "CommanderTurret_hatch_axis";
		};
		class crane_trav_source: gm_source_user_base
		{
			animPeriod = 10;
			initPhase = 0.1;
			sound = "ServoRampSound_2";
			soundPosition = "crane_trav_axis";
		};
		class crane_elev_source: gm_source_user_base
		{
			animPeriod = 10;
			sound = "ServoRampSound_2";
			soundPosition = "crane_elev_axis";
		};
		class crane_rope_handler_source: gm_source_user_base
		{
			animPeriod = 400;
		};
		class crane_hook_source: gm_source_user_base
		{
			animPeriod = 1;
		};
		class dozer_blade_elev_source: gm_source_user_base
		{
			animPeriod = 3;
			sound = "ServoRampSound_2";
			soundPosition = "crane_elev_axis";
		};
		class searchLight_trav_source: gm_source_user_base
		{
			animPeriod = 30;
			initPhase = 0.5;
		};
		class searchLight_elev_source: gm_source_user_base
		{
			animPeriod = 15;
		};
		class MachineGunTurret_01_store_source: gm_source_user_base
		{
		};
		class beacon_1_1_org_unhide: beacon_1_1_org_unhide
		{
			displayname = "Add Beacon - Orange";
		};
		class crane_hook_unhide: gm_source_user_base
		{
			initPhase = 1;
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
	accelAidForceYOffset = -4;
};
class gm_BPz2a0_base: gm_BPz2_base
{
	displayName = "BPz 2A0";
	displayNameShort = "BPz 2A0";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\data\ui\picture_gm_bpz2a0_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_bpz2a0";
	maxFordingDepth = -1.33637;
	class TextureSources
	{
		class gm_dk_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_05_wdl_co.paa"};
		};
		class gm_dk_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_05_win_co.paa"};
		};
		class gm_dk_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_dk"};
			displayname = "Denmark (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_05_un_co.paa"};
		};
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_05_un_co.paa"};
		};
	};
};
class gm_BPz2a1_base: gm_BPz2_base
{
	displayName = "BPz 2A1";
	displayNameShort = "BPz 2A1";
};
class gm_BPz2a2_base: gm_BPz2_base
{
	displayName = "BPz 2A2";
	displayNameShort = "BPz 2A2";
};
class gm_bpz2_hook_base: gm_thingX_base
{
	displayName = "BPz2 Hook";
	displayNameShort = "Hook";
	weight = 40;
	model = "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_bpz2_hook";
	MemoryPointsRopeAttach[] = {"rope_1_1_pos", "rope_1_2_pos", "rope_2_1_pos", "rope_2_2_pos", "rope_3_1_pos", "rope_3_2_pos"};
	hiddenSelections[] = {"texWheel_01", "tex_01", "tex_02", "tex_03", "tex_04", "tex_05", "tex_06", "texAirPanel_01", "texAirPanel_02", "tactSign_Kp", "tactSign_Icon", "tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3", "LicensePlate", "LicensePlate_00", "LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08", "LicensePlate_09", "Insignia_01", "Insignia_02", "Insignia_formation", "Insignia_unit", "Insignia_cool", "Insignia_recon", "Insignia_hazardSign", "Insignia_nation_01", "Insignia_nation_02", "nr_1", "nr_2", "nr_3", "nr_4"};
};
class gm_bpz2a1_hook: gm_bpz2_hook_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_dk_army_bpz2a0_base: gm_BPz2a0_base
{
	side = 1;
	faction = "gm_fc_dk";
	gm_InsigniasDefaultNation = "gm_insignia_dk_army_01";
	gm_LicensePlate = "gm_dk_army_blk";
	gm_LicensePlateDefaultDigits = "#####";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_02", "LicensePlate_03", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	gm_TacticalNumbersFontNumbers = "gm_dk_schablonier_gry";
	gm_TacticalNumbersDefaultNumber = "";
	gm_TacticalNumbersIsLicensePlate = 0;
	crew = "gm_dk_army_crew_84_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\ui\preview_gm_dk_army_bpz2a0.jpg";
	gm_InsigniasSelectionNation = "Insignia_nation_02";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_dk_army_bpz2a0: gm_dk_army_bpz2a0_base
{
	gm_LicensePlateDefaultDigits = "46###";
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_dk_army_bpz2a0_wdl: gm_dk_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\wdl\gm_dk_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\wdl\gm_dk_army_bpz2a0_ext_05_wdl_co.paa"};
	textureList[] = {"gm_dk_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_dk_army_bpz2a0_win: gm_dk_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\win\gm_dk_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\win\gm_dk_army_bpz2a0_ext_05_win_co.paa"};
	textureList[] = {"gm_dk_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_dk_army_bpz2a0_un: gm_dk_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_dk_army_leopard1\data\un\gm_dk_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_dk_army_bpz2\data\un\gm_dk_army_bpz2a0_ext_05_un_co.paa"};
	textureList[] = {"gm_dk_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};
class gm_ge_army_bpz2a0_base: gm_BPz2a0_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_armored";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ui\preview_gm_ge_army_bpz2a0.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_bpz2a0: gm_ge_army_bpz2a0_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_bpz2a0_wdl: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wdl\gm_ge_army_bpz2a0_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_armor_wdl";
	editorSubcategory = "gm_esc_armor_wdl";
};
class gm_ge_army_bpz2a0_win: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\win\gm_ge_army_bpz2a0_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_armor_win";
	editorSubcategory = "gm_esc_armor_win";
};
class gm_ge_army_bpz2a0_wiw: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\wiw\gm_ge_army_bpz2a0_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_armor_wiw";
	editorSubcategory = "gm_esc_armor_wiw";
};
class gm_ge_army_bpz2a0_oli: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\oli\gm_ge_army_bpz2a0_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_armor_oli";
	editorSubcategory = "gm_esc_armor_oli";
};
class gm_ge_army_bpz2a0_ols: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\ols\gm_ge_army_bpz2a0_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_armor_ols";
	editorSubcategory = "gm_esc_armor_ols";
};
class gm_ge_army_bpz2a0_olw: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\olw\gm_ge_army_bpz2a0_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_armor_olw";
	editorSubcategory = "gm_esc_armor_olw";
};
class gm_ge_army_bpz2a0_des: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\des\gm_ge_army_bpz2a0_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_armor_des";
	editorSubcategory = "gm_esc_armor_des";
};
class gm_ge_army_bpz2a0_trp: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\trp\gm_ge_army_bpz2a0_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_armor_trp";
	editorSubcategory = "gm_esc_armor_trp";
};
class gm_ge_army_bpz2a0_un: gm_ge_army_bpz2a0_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_bpz2\gm_ge_army_bpz2\data\un\gm_ge_army_bpz2a0_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_armor_un";
	editorSubcategory = "gm_esc_armor_un";
};

//Gepards
class gm_Gepard_base: gm_Leopard1_base
{
	displayName = "FlakPz 1";
	displayNameShort = "FlakPz 1";
	Icon = "\gm\gm_core\gm_core_ui\data\mapicon\gm_mapicon_tracked_spaa_ca";
	editorSubcategory = "EdSubcat_AAs";
	nameSound = "gm_vehname_gepard_s";
	class SpeechVariants
	{
		class Default
		{
			speechPlural[] = {"gm_vehname_gepard_p"};
			speechSingular[] = {"gm_vehname_gepard_s"};
		};
	};
	threat[] = {0.9, 0.1, 0.5};
	cost = 1e+006;
	smokeLauncherGrenadeCount = 8;
	smokeLauncherVelocity = 35;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 110;
	armor = 600;
	armorStructural = 600;
	damageResistance = 0.02;
	class Damage
	{
		tex[] = {};
		mat[] = {"gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_01_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_02_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_03_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_04_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05_damaged_noti.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\gm_gepard1a1_ext_05_destroyed.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_damaged.rvmat", "gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\data\gm_leopard1_wheels_01_destroyed.rvmat"};
	};
	class Hitpoints: Hitpoints
	{
		class HitAmmo: gm_hitpoint_hitAmmo_base
		{
		};
		class HitHull: HitHull
		{
		};
		class HitSideSkirt_1_1
		{
			simulation = "gm_armor_sideskirts";
			armorComponent = "fireGeo_sideSkirt_1_1";
			name = "hitPoint_SideSkirt_1_1";
			armor = -100;
			minimalHit = 0.3;
			passThrough = 0;
			visual = "sideSkirt_1_1";
			explosionShielding = 2;
			radius = 0.25;
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
		class hit_wheel_6_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_1";
			armorComponent = "fireGeo_wheel_6_1";
			visual = "wheel_6_1";
		};
		class hit_wheel_6_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_6_2";
			armorComponent = "fireGeo_wheel_6_2";
			visual = "wheel_6_2";
		};
		class hit_wheel_7_1: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_1";
			armorComponent = "fireGeo_wheel_7_1";
			visual = "wheel_7_1";
		};
		class hit_wheel_7_2: gm_hitpoint_part_base
		{
			armor = -50;
			name = "hitPoint_wheel_7_2";
			armorComponent = "fireGeo_wheel_7_2";
			visual = "wheel_7_2";
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
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerName = "Gunner";
			weapons[] = {"gm_35mm_l90_dual"};
			magazines[] = {"gm_640Rnd_35x228mm_hei_t_DM21", "gm_40Rnd_35x228mm_hvapds_t_DM23"};
			memoryPointGun[] = {"MainTurret_Muzzle_1_1", "MainTurret_Muzzle_1_2"};
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
			personTurretAction = "vehicle_turnout_1";
			allowLauncherOut = 1;
			minElev = -20;
			maxElev = 75;
			minOutElev = -20;
			maxOutElev = 60;
			initOutElev = 0;
			minOutTurn = -135;
			maxOutTurn = 135;
			initOutTurn = 0;
			showCrewAim = 2;
			allowTabLock = 1;
			class TurnOut
			{
				limitsArrayTop[] = {{60, -135}, {60, 135}};
				limitsArrayBottom[] = {{-30, -135}, {-30, 135}};
			};
			class TurnIn: TurnOut
			{
				limitsArrayTop[] = {{75, -180}, {75, 180}};
				limitsArrayBottom[] = {{-4.5, -180}, {-4.5, -135}, {-12, -110}, {-12, -110}, {-4.5, 135}, {-4.5, 180}};
			};
			gunnerOutOpticsModel = "";
			gunnerOutOpticsEffect[] = {};
			gunnerOpticsEffect[] = {};
			gunnerForceOptics = 1;
			turretInfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900};
			discreteDistanceInitIndex = 5;
			class OpticsIn
			{
				class peri_day_15x: gm_optics_aa01_day_15x_base
				{
				};
				class peri_day_6x: gm_optics_aa01_day_6x_base
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
					minElev = -30;
					maxElev = 75;
					initElev = 0;
					minTurn = -360;
					maxTurn = 360;
					initTurn = 0;
					weapons[] = {"SmokeLauncher"};
					magazines[] = {"gm_2Rnd_76mm_RP_dm35"};
					gunnerHasFlares = 1;
					startEngine = 0;
					gunnerAction = "commander_mbt3_out";
					gunnerInAction = "commander_mbt3_in";
					allowLauncherOut = 1;
					animationSourcehatch = "";
					gm_animationSourcehatch = "MainTurret_hatch_source";
					gunnerDoor = "MainTurret_hatch_source";
					memoryPointsGetInGunner = "CommanderTurret_GetIn_pos";
					memoryPointsGetInGunnerDir = "CommanderTurret_GetIn_dir";
					gunnerGetinAction = "gm_tank_hatch_01_getin_01";
					gunnerGetOutAction = "gm_tank_hatch_01_getout_01";
					preciseGetInOut = 1;
					outGunnerMayFire = 0;
					inGunnerMayFire = 1;
					viewGunnerInExternal = 1;
					isPersonTurret = 1;
					personTurretAction = "vehicle_turnout_1";
					minOutElev = -30;
					maxOutElev = 60;
					initOutElev = 0;
					minOutTurn = -135;
					maxOutTurn = 135;
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
						limitsArrayBottom[] = {{-10, -180}, {-10, 180}};
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
						class peri_day_15x: gm_optics_aa01_day_15x_base
						{
						};
						class peri_day_6x: gm_optics_aa01_day_6x_base
						{
						};
					};
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
	radarType = 2;
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
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
						minRange = 15000;
						maxRange = 15000;
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
	class AnimationSources: AnimationSources
	{
		class MainTurret_hatch_source
		{
			source = "door";
			animPeriod = 0.8;
			initPhase = 0;
			sound = "MetalBigDoorsSound";
			soundPosition = "MainTurret_hatch_axis";
		};
		class MainTurret_Recoil_source
		{
			source = "reload";
			weapon = "gm_35mm_l90_dual";
		};
		class MainTurret_Muzzleflash_rotation_source
		{
			source = "ammorandom";
			weapon = "gm_35mm_l90_dual";
		};
		class MainTurret_OpticGunner_shutter_source: gm_source_shutter_base
		{
		};
		class MainTurret_OpticCommander_shutter_source: gm_source_shutter_base
		{
		};
		class MainTurret_SearchRadar_elev_source: gm_source_user_base
		{
			animPeriod = 5;
		};
		class MainTurret_SearchRadar_trav_source: gm_source_user_base
		{
			animPeriod = 1;
		};
		class MainTurret_TrackRadar_elev_source: gm_source_user_base
		{
			animPeriod = 1;
		};
		class MainTurret_TrackRadar_trav_source: gm_source_user_base
		{
			animPeriod = 1;
		};
		class CamoNet_01_unhide: gm_source_user_base
		{
			displayname = "Add Camo Net - Right";
		};
		class CamoNet_02_unhide: gm_source_user_base
		{
			displayname = "Add Camo Net - Left";
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
	accelAidForceYOffset = -2.5;
};
class gm_Gepard1a1_base: gm_Gepard_base
{
	displayName = "FlakPz 1A1";
	displayNameShort = "FlakPz 1A1";
	picture = "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\ui\picture_gm_gepard1a1_ca";
	model = "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_gepard1a1";
	icon = "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\data\ui\map_gm_gepard1a1_ca";
	maxFordingDepth = -1.34976;
	class TextureSources
	{
		class gm_ge_oli: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_05_oli_co.paa"};
		};
		class gm_ge_ols: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Mud)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_05_ols_co.paa"};
		};
		class gm_ge_olw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Olive, Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_05_olw_co.paa"};
		};
		class gm_ge_wdl: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Woodland)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_05_wdl_co.paa"};
		};
		class gm_ge_win: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_05_win_co.paa"};
		};
		class gm_ge_wiw: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Winter, Wrong)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_05_wiw_co.paa"};
		};
		class gm_ge_des: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Desert)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_05_des_co.paa"};
		};
		class gm_ge_trp: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (Tropical)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_05_trp_co.paa"};
		};
		class gm_ge_un: gm_texturesource_base
		{
			factions[] = {"gm_fc_ge"};
			displayname = "West Germany (White)";
			textures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_05_un_co.paa"};
		};
	};
};
class gm_ge_army_gepard1a1_base: gm_Gepard1a1_base
{
	side = 1;
	faction = "gm_fc_ge";
	gm_InsigniasDefaultNation = "gm_insignia_ge_army_01";
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_nato_airDefence";
	crew = "gm_ge_army_crew_mp2a1_80_oli";
	editorPreview = "gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ui\preview_gm_ge_army_Gepard1a1.jpg";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_05_wdl_co.paa"};
	class TransportWeapons
	{
		class _xx_gm_p2a1_blk
		{
			weapon = "gm_p2a1_blk";
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
			count = 8;
		};
		class _xx_gm_smokeshell_wht_dm25
		{
			magazine = "gm_smokeshell_wht_dm25";
			count = 2;
		};
		class _xx_gm_smokeshell_grn_dm21
		{
			magazine = "gm_smokeshell_grn_dm21";
			count = 2;
		};
		class _xx_gm_smokeshell_red_dm23
		{
			magazine = "gm_smokeshell_red_dm23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_red_DM23
		{
			magazine = "gm_1Rnd_265mm_flare_multi_red_DM23";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_grn_DM21
		{
			magazine = "gm_1Rnd_265mm_flare_multi_grn_DM21";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_multi_nbc_DM47
		{
			magazine = "gm_1Rnd_265mm_flare_multi_nbc_DM47";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_wht_DM15
		{
			magazine = "gm_1Rnd_265mm_flare_single_wht_DM15";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_red_DM13
		{
			magazine = "gm_1Rnd_265mm_flare_single_red_DM13";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_grn_DM11
		{
			magazine = "gm_1Rnd_265mm_flare_single_grn_DM11";
			count = 2;
		};
		class _xx_gm_1Rnd_265mm_flare_single_yel_DM10
		{
			magazine = "gm_1Rnd_265mm_flare_single_yel_DM10";
			count = 2;
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
class gm_ge_army_gepard1a1: gm_ge_army_gepard1a1_base
{
	scope = 2;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
};
class gm_ge_army_gepard1a1_wdl: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_01_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_02_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_03_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_04_wdl_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_05_wdl_co.paa"};
	textureList[] = {"gm_ge_army_wdl", 1};
	vehicleclass = "gm_vc_aa_wdl";
	editorSubcategory = "gm_esc_aa_wdl";
};
class gm_ge_army_gepard1a1_win: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\win\gm_ge_army_leopard1_wheels_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_01_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_02_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_03_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_04_win_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\win\gm_ge_army_gepard1a1_ext_05_win_co.paa"};
	textureList[] = {"gm_ge_army_win", 1};
	vehicleclass = "gm_vc_aa_win";
	editorSubcategory = "gm_esc_aa_win";
};
class gm_ge_army_gepard1a1_wiw: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wiw\gm_ge_army_leopard1_wheels_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_01_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_02_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_03_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_04_wiw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wiw\gm_ge_army_gepard1a1_ext_05_wiw_co.paa"};
	textureList[] = {"gm_ge_army_wiw", 1};
	vehicleclass = "gm_vc_aa_wiw";
	editorSubcategory = "gm_esc_aa_wiw";
};
class gm_ge_army_gepard1a1_oli: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\oli\gm_ge_army_leopard1_wheels_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_01_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_02_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_03_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_04_oli_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\oli\gm_ge_army_gepard1a1_ext_05_oli_co.paa"};
	textureList[] = {"gm_ge_army_oli", 1};
	vehicleclass = "gm_vc_aa_oli";
	editorSubcategory = "gm_esc_aa_oli";
};
class gm_ge_army_gepard1a1_ols: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\ols\gm_ge_army_leopard1_wheels_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_01_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_02_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_03_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_04_ols_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\ols\gm_ge_army_gepard1a1_ext_05_ols_co.paa"};
	textureList[] = {"gm_ge_army_ols", 1};
	vehicleclass = "gm_vc_aa_ols";
	editorSubcategory = "gm_esc_aa_ols";
};
class gm_ge_army_gepard1a1_olw: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\olw\gm_ge_army_leopard1_wheels_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_01_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_02_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_03_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_04_olw_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\olw\gm_ge_army_gepard1a1_ext_05_olw_co.paa"};
	textureList[] = {"gm_ge_army_olw", 1};
	vehicleclass = "gm_vc_aa_olw";
	editorSubcategory = "gm_esc_aa_olw";
};
class gm_ge_army_gepard1a1_des: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_01_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_02_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_03_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_04_des_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_05_des_co.paa"};
	textureList[] = {"gm_ge_army_des", 1};
	vehicleclass = "gm_vc_aa_des";
	editorSubcategory = "gm_esc_aa_des";
};
class gm_ge_army_gepard1a1_trp: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\trp\gm_ge_army_leopard1_wheels_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_01_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_02_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_03_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_04_trp_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\trp\gm_ge_army_gepard1a1_ext_05_trp_co.paa"};
	textureList[] = {"gm_ge_army_trp", 1};
	vehicleclass = "gm_vc_aa_trp";
	editorSubcategory = "gm_esc_aa_trp";
};
class gm_ge_army_gepard1a1_un: gm_ge_army_gepard1a1_base
{
	scope = 1;
	scopeCurator = 2;
	isgmContent = 1;
	dlc = "gm";
	author = "Global Mobilization";
	hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\un\gm_ge_army_leopard1_wheels_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_01_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_02_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_03_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_04_un_co.paa", "\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\un\gm_ge_army_gepard1a1_ext_05_un_co.paa"};
	textureList[] = {"gm_ge_army_un", 1};
	vehicleclass = "gm_vc_aa_un";
	editorSubcategory = "gm_esc_aa_un";
};
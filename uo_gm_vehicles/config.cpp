class BIS_AddonInfo
{
	author="TrainDoctor";
};

class CfgPatches
{
	class uo_gm_vehicles_override
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.92;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	//#include "gm_tracked.cpp"
	//#include "gm_wheeled.cpp"
	#include "tracked\bmp.cpp"
	#include "tracked\m113.cpp"
	#include "tracked\leopard.cpp"
	#include "tracked\t55.cpp"
	#include "tracked\zsu.cpp"
};
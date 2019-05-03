class Tank_F;

class gm_tracked_base: Tank_F
{
	simulation = "tankX";
	author = "Global Mobilization";
	crew = "gm_soldier_male_g36a2_wdl";
	side = 1;
	faction = "gm_fc_ge";
	Vehicleclass = "gm_vc_prototype";
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_APC_tracked_03_cannon_F.jpg";
	destrType = "DestructWreck";
	armorLights = 0.001;
	gm_VehicleStartupAction[] = {};
	memoryPointDriverOptics[] = {"Optic_Driver_pos", "Optic_Pilot_pos"};
	memoryPointsGetInCargo[] = {"Cargo_GetIn_pos"};
	memoryPointsGetInCoDriver = "CoDriver_GetIn_pos";
	memoryPointsGetInCommander = "CommanderTurret_GetIn_pos";
	memoryPointsGetInDriver = "Driver_GetIn_pos";
	memoryPointsGetInGunner = "MainTurret_GetIn_pos";
	memoryPointsGetInCargoDir[] = {"Cargo_GetIn_dir"};
	memoryPointsGetInCoDriverDir = "CoDriver_GetIn_dir";
	memoryPointsGetInCommanderDir = "CommanderTurret_GetIn_dir";
	memoryPointsGetInDriverDir = "Driver_GetIn_dir";
	memoryPointsGetInGunnerDir = "MainTurret_GetIn_dir";
	memoryPointGun = "gun_pos";
	memoryPointMissile[] = {"Missile_Dir", "Gun_Dir"};
	memoryPointMissileDir[] = {"Missile_Pos", "Gun_Pos"};
	memoryPointCargoLight = "LightCargo";
	memoryPointLDust = "Dust_2_1";
	memoryPointRDust = "Dust_2_2";
	dustFrontLeftPos = "Dust_2_1";
	dustFrontRightPos = "Dust_2_2";
	dustBackLeftPos = "Dust_1_1";
	dustBackRightPos = "Dust_1_2";
	memoryPointTrack1L = "Track_1_1_1";
	memoryPointTrack1R = "Track_1_1_2";
	memoryPointTrack2L = "Track_1_2_1";
	memoryPointTrack2R = "Track_1_2_2";
	memoryPointTrackFLL = "Track_1_1_1";
	memoryPointTrackFLR = "Track_1_1_2";
	memoryPointTrackFRL = "Track_1_2_1";
	memoryPointTrackFRR = "Track_1_2_2";
	memoryPointTrackBLL = "Track_2_1_1";
	memoryPointTrackBLR = "Track_2_1_1";
	memoryPointTrackBRL = "Track_2_2_1";
	memoryPointTrackBRR = "Track_2_2_2";
	engineEffectSpeed = 5;
	memoryPointsLeftEngineEffect = "EngineEffect_1_1";
	memoryPointsRightEngineEffect = "EngineEffect_1_2";
	memoryPointsLeftWaterEffect = "WaterEffect_1_1";
	memoryPointsRightWaterEffect = "WaterEffect_1_2";
	bounding = "bounding";
	memoryPointSupply = "supply_pos";
	slingLoadCargoMemoryPoints[] = {"SlingLoadCargo_1_1", "SlingLoadCargo_1_2", "SlingLoadCargo_2_1", "SlingLoadCargo_2_2"};
	selectionBrakeLights = "LightBrake";
	selectionSideLights = "LightSide";
	selectionConvoyLight = "LightConvoy";
	selectionBackLights = "LightBack";
	selectionLeftOffset = "Track_1";
	selectionRightOffset = "Track_2";
	selectionDamage = "damage";
	selectionFireAnim = "fireAnim";
	selectionClan = "clan";
	selectionDashboard = "lightDashboard";
	selectionShowDamage = "showDamage";
	driverLeftHandAnimName = "drivewheel";
	driverRightHandAnimName = "drivewheel";
	driverRightLegAnimName = "pedal_speed";
	driverLeftLegAnimName = "pedal_clutch";
	viewDriverInExternal = 1;
	viewGunnerInExternal = 1;
	viewCargoInExternal = 1;
	ViewDriverShadow = 1;
	ViewDriverShadowAmb = 1;
	ViewDriverShadowDiff = 1;
	ViewCargoShadow = 1;
	ViewCargoShadowAmb = 1;
	ViewCargoShadowDiff = 1;
	hiddenSelections[] = {"texWheel_01", "tex_01", "tex_02", "tex_03", "tex_04", "tex_05", "tex_06", "texAirPanel_01", "texAirPanel_02", "tactSign_Kp", "tactSign_Icon", "tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3", "LicensePlate", "LicensePlate_00", "LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08", "LicensePlate_09", "Insignia_01", "Insignia_02", "Insignia_formation", "Insignia_unit", "Insignia_cool", "Insignia_recon", "Insignia_hazardSign", "Insignia_nation_01", "Insignia_nation_02", "nr_1", "nr_2", "nr_3", "nr_4"};
	class RenderTargets
	{
		class Mirror_1_1
		{
			renderTarget = "rendertarget0";
			class CameraView1
			{
				pointPosition = "Mirror_1_1_pos";
				pointDirection = "Mirror_1_1_dir";
				renderQuality = 2;
				renderVisionMode = 4;
				fov = 0.7;
			};
		};
		class Mirror_1_2
		{
			renderTarget = "rendertarget1";
			class CameraView1
			{
				pointPosition = "Mirror_1_2_pos";
				pointDirection = "Mirror_1_2_dir";
				renderQuality = 2;
				renderVisionMode = 4;
				fov = 0.7;
			};
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
		class lightFront_1_2
		{
			color[] = {2550, 2360, 1390};
			ambient[] = {255, 236, 139};
			position = "lightFront_1_2_pos";
			direction = "lightFront_1_2_dir";
			hitpoint = "hitPoint_lightFront_1_2";
			selection = "lightFront_1_2";
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
		class lightFront_1_2_flare: lightFront_1_2
		{
			position = "lightFront_1_2_flare_pos";
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
	aggregateReflectors[] = {{"lightFront_1_1", "lightFront_1_1_flare"}, {"lightFront_1_2", "lightFront_1_2_flare"}, {"lightBack_1_1", "lightBack_1_1_flare"}, {"lightBack_1_2", "lightBack_1_2_flare"}};
	gm_LicensePlate = "gm_ge_army_blk";
	gm_LicensePlateSelectionPlate = "LicensePlate";
	gm_LicensePlateDefaultDigits = "Y-######";
	gm_LicensePlateSelectionsDigits[] = {"LicensePlate_01", "LicensePlate_02", "LicensePlate_03", "LicensePlate_04", "LicensePlate_05", "LicensePlate_06", "LicensePlate_07", "LicensePlate_08"};
	gm_TacticalSignsDefaultPreIcon = "";
	gm_TacticalSignsFontPreIcon = "gm_din_norm_gry";
	gm_TacticalSignsSelectionsPreIcon[] = {"tactSign_Kp"};
	gm_TacticalSignsDefaultIcon = "gm_tacticalSign_none";
	gm_TacticalSignsSelectionIcon = "tactSign_Icon";
	gm_TacticalSignsDefaultPostIcon = "";
	gm_TacticalSignsFontPostIcon = "gm_din_norm_gry";
	gm_TacticalSignsSelectionsPostIcon[] = {"tactSign_Btl1", "tactSign_Btl2", "tactSign_Btl3"};
	gm_TacticalNumbersDefaultNumber = "###";
	gm_TacticalNumbersFontNumbers = "gm_din_norm_blk_gry";
	gm_TacticalNumbersSelectionsNumbers[] = {"nr_1", "nr_2", "nr_3"};
	gm_TacticalNumbersIsLicensePlate = 0;
	gm_InsigniasDefaultMissionSmall = "gm_insignia_none";
	gm_InsigniasSelectionMissionSmall = "Insignia_01";
	gm_InsigniasDefaultMissionLarge = "gm_insignia_none";
	gm_InsigniasSelectionMissionLarge = "Insignia_02";
	gm_InsigniasDefaultRecon = "gm_insignia_none";
	gm_InsigniasSelectionRecon = "Insignia_recon";
	gm_InsigniasDefaultUnit = "gm_insignia_none";
	gm_InsigniasSelectionUnit = "Insignia_unit";
	gm_InsigniasDefaultCompany = "gm_insignia_none";
	gm_InsigniasSelectionCompany = "Insignia_cool";
	gm_InsigniasDefaultFormation = "gm_insignia_none";
	gm_InsigniasSelectionFormation = "Insignia_formation";
	gm_InsigniasDefaultHazardSign = "gm_insignia_none";
	gm_InsigniasSelectionHazardSign = "Insignia_hazardSign";
	gm_InsigniasDefaultNation = "gm_insignia_none";
	gm_InsigniasSelectionNation = "Insignia_nation_01";
	gm_animationSourceOdometer = "ind_odometer_source";
	gm_animationSourceWiper = "wiper_source";
	class CommanderTurret_base: NewTurret
	{
		memoryPointGunnerOptics = "Optic_CommanderTurret_pos";
		memoryPointGunnerOutOptics = "OpticOut_CommanderTurret_pos";
		gunBeg = "CommanderTurret_Gun_dir";
		gunEnd = "CommanderTurret_Gun_pos";
		memoryPointGun = "CommanderTurret_Coax";
		selectionFireAnim = "CommanderTurret_muzzleflash";
		missileBeg = "Spice rakety";
		missileEnd = "konec rakety";
		memoryPointMissile[] = {"CommanderTurret_Gun_dir", "CommanderTurret_Missile_dir"};
		memoryPointMissileDir[] = {"CommanderTurret_Gun_pos", "CommanderTurret_Missile_pos"};
		body = "CommanderTurret_trav_anim";
		gun = "CommanderTurret_elev_anim";
		animationSourceBody = "CommanderTurret_trav_source";
		animationSourceGun = "CommanderTurret_elev_source";
		animationSourceElevation = "CommanderTurret_raise_source";
		particlesPos = "CommanderTurret_Gun_dir";
		particlesDir = "CommanderTurret_Gun_pos";
		ViewGunnerShadow = 1;
		ViewGunnerShadowAmb = 1;
		ViewGunnerShadowDiff = 1;
		proxyType = "CPCommander";
		proxyIndex = 1;
		gunnerName = "Commander";
		primaryGunner = 0;
		primaryObserver = 1;
		stabilizedInAxes = 0;
		soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
		minElev = -4;
		maxElev = 20;
		initElev = 0;
		minTurn = -360;
		maxTurn = 360;
		initTurn = 0;
		commanding = 2;
		outGunnerMayFire = 1;
		inGunnerMayFire = 1;
		viewGunnerInExternal = 0;
		gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
		gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		gunnerOutOpticsColor[] = {0, 0, 0, 1};
		gunnerOutForceOptics = 0;
		gunnerOutOpticsShowCursor = 0;
		gunnerOpticsEffect[] = {};
		gunnerOutOpticsEffect[] = {};
		gunnerGetInAction = "GetInHigh";
		gunnerGetOutAction = "GetOutHigh";
		memoryPointsGetInGunner = "CommanderTurret_getin_pos";
		memoryPointsGetInGunnerDir = "CommanderTurret_getin_dir";
		turretFollowFreeLook = 2;
		turretinfoType = "gm_RscUnitInfo_vehicle_commander_optics";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
		discreteDistanceInitindex = 7;
		class ViewOptics: ViewOptics
		{
		};
		class ViewGunner: ViewCargo
		{
		};
	};
	class LoaderTurret_base: CommanderTurret_base
	{
		memoryPointGunnerOptics = "Optic_LoaderTurret_pos";
		memoryPointGunnerOutOptics = "OpticOut_LoaderTurret_pos";
		gunBeg = "LoaderTurret_Gun_dir";
		gunEnd = "LoaderTurret_Gun_pos";
		memoryPointGun = "LoaderTurret_Coax";
		selectionFireAnim = "LoaderTurret_muzzleflash";
		missileBeg = "Spice rakety";
		missileEnd = "konec rakety";
		memoryPointMissile[] = {"LoaderTurret_Gun_dir", "LoaderTurret_Missile_dir"};
		memoryPointMissileDir[] = {"LoaderTurret_Gun_pos", "LoaderTurret_Missile_pos"};
		body = "LoaderTurret_trav_anim";
		gun = "LoaderTurret_elev_anim";
		animationSourceBody = "LoaderTurret_trav_source";
		animationSourceGun = "LoaderTurret_elev_source";
		animationSourceElevation = "LoaderTurret_raise_source";
		particlesPos = "LoaderTurret_Gun_dir";
		particlesDir = "LoaderTurret_Gun_pos";
		ViewGunnerShadow = 1;
		ViewGunnerShadowAmb = 1;
		ViewGunnerShadowDiff = 1;
		proxyType = "CPGunner";
		proxyIndex = 2;
		primaryGunner = 0;
		primaryObserver = 0;
		stabilizedInAxes = 0;
		commanding = 0;
	};
	class MachineGunTurret_base: CommanderTurret_base
	{
		memoryPointGunnerOptics = "Optic_MachineGunTurret_pos";
		memoryPointGunnerOutOptics = "OpticOut_MachineGunTurret_pos";
		gunBeg = "MachineGunTurret_Gun_dir";
		gunEnd = "MachineGunTurret_Gun_pos";
		memoryPointGun = "MachineGunTurret_Coax";
		selectionFireAnim = "MachineGunTurret_muzzleflash";
		missileBeg = "Spice rakety";
		missileEnd = "konec rakety";
		memoryPointMissile[] = {"MachineGunTurret_Gun_dir", "MachineGunTurret_Missile_dir"};
		memoryPointMissileDir[] = {"MachineGunTurret_Gun_pos", "MachineGunTurret_Missile_pos"};
		body = "MachineGunTurret_trav_anim";
		gun = "MachineGunTurret_elev_anim";
		animationSourceBody = "MachineGunTurret_trav_source";
		animationSourceGun = "MachineGunTurret_elev_source";
		animationSourceElevation = "MachineGunTurret_raise_source";
		particlesPos = "MachineGunTurret_Gun_dir";
		particlesDir = "MachineGunTurret_Gun_pos";
		ViewGunnerShadow = 1;
		ViewGunnerShadowAmb = 1;
		ViewGunnerShadowDiff = 1;
		dontCreateAi = 1;
		cantCreateAI = 1;
		proxyType = "CPGunner";
		proxyIndex = 2;
		hasGunner = 1;
		primaryGunner = 0;
		primaryObserver = 0;
		canHideGunner = 0;
		stabilizedInAxes = 0;
		commanding = 0;
		startEngine = 0;
		outGunnerMayFire = 1;
		inGunnerMayFire = 0;
		viewGunnerInExternal = 1;
		isPersonTurret = 0;
		minElev = -20;
		maxElev = 60;
		initElev = 0;
		minTurn = -360;
		maxTurn = 360;
		initTurn = 0;
		minOutElev = -20;
		maxOutElev = 60;
		initOutElev = 0;
		minOutTurn = -360;
		maxOutTurn = 360;
		initOutTurn = 0;
		turretFollowFreeLook = 0;
		gunnerOutOpticsModel = "\a3\weapons_f\reticle\optics_empty.p3d";
		gunnerOutOpticsEffect[] = {};
		gunnerOpticsEffect[] = {};
		gunnerForceOptics = 0;
		turretinfoType = "gm_RscUnitInfo_vehicle_gunner_optics";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
		discreteDistanceInitindex = 7;
		class Turrets
		{
		};
		gunnerCompartments = "Compartment100";
		class ViewGunner: ViewCargo
		{
			initAngleX = 0;
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			memoryPointGunnerOptics = "Optic_MainTurret_pos";
			memoryPointGunnerOutOptics = "OpticOut_MainTurret_pos";
			gunBeg = "MainTurret_Gun_dir";
			gunEnd = "MainTurret_Gun_pos";
			memoryPointGun = "MainTurret_Coax";
			selectionFireAnim = "MainTurret_muzzleflash";
			missileBeg = "Spice rakety";
			missileEnd = "konec rakety";
			memoryPointMissile[] = {"MainTurret_Gun_dir", "MainTurret_Missile_dir"};
			memoryPointMissileDir[] = {"MainTurret_Gun_pos", "MainTurret_Missile_pos"};
			body = "MainTurret_trav_anim";
			gun = "MainTurret_elev_anim";
			animationSourceBody = "MainTurret_trav_source";
			animationSourceGun = "MainTurret_elev_source";
			animationSourceElevation = "MainTurret_raise_source";
			particlesPos = "MainTurret_Gun_dir";
			particlesDir = "MainTurret_Gun_pos";
			ViewGunnerShadow = 1;
			ViewGunnerShadowAmb = 1;
			ViewGunnerShadowDiff = 1;
			memoryPointsGetInGunner = "MainTurret_getin_pos";
			memoryPointsGetInGunnerDir = "MainTurret_getin_dir";
		};
	};
	class Hitpoints: HitPoints
	{
		class HitHull: HitHull
		{
			passthrough = 1;
			material = -1;
			name = "hitPoint_hull";
			visual = "damage_hull";
			minimalHit = 0.14;
			armor = 1.6;
			explosionShielding = 0.2;
			armorComponent = "fireGeo_hull";
			radius = 0.15;
		};
		class HitBody
		{
			passthrough = 1;
			material = -1;
			name = "hitPoint_hull";
			visual = "damage_hull";
			armor = 1.6;
			explosionShielding = 0.2;
			minimalHit = 0.14;
			armorComponent = "fireGeo_hull";
			radius = 0.15;
		};
		class HitEngine: HitEngine
		{
			material = -1;
			passthrough = 0;
			armor = 0.45;
			name = "hitPoint_engine";
			armorComponent = "fireGeo_engine";
			visual = "engine";
			minimalHit = 0.039;
			explosionShielding = 0.1;
			radius = 0.15;
			class DestructionEffects
			{
				ammoExplosionEffect = "";
				class hitEngine_effect_01
				{
					simulation = "particles";
					type = "ObjectDestructionSmoke1_2Small";
					position = "engineSmoke_01_pos";
					intensity = 0.1;
					interval = 1;
					lifeTime = 0.5;
				};
				class hitEngine_effect_02
				{
					simulation = "particles";
					type = "SmallWreckSmoke";
					position = "engineSmoke_01_pos";
					intensity = 0.5;
					interval = 1;
					lifeTime = 60;
				};
				class hitEngine_effect_03: hitEngine_effect_02
				{
					simulation = "sound";
					type = "Fire";
				};
				class hitEngine_effect_04: hitEngine_effect_02
				{
					type = "FireSparks";
					intensity = 0.1;
				};
				class hitEngine_effect_05: hitEngine_effect_02
				{
					type = "WeaponWreckSmoke";
					position = "engineSmoke_02_pos";
				};
				class hitEngine_effect_06: hitEngine_effect_05
				{
					position = "engineSmoke_03_pos";
				};
				class hitEngine_effect_07: hitEngine_effect_05
				{
					position = "engineSmoke_04_pos";
				};
			};
		};
		class HitFuel: HitFuel
		{
			material = -1;
			passthrough = 0;
			armor = 0.25;
			name = "hitPoint_fuel";
			armorComponent = "fireGeo_fuel";
			visual = "fuel";
			minimalHit = 0.7;
			explosionShielding = 0.5;
			radius = 0.25;
		};
		class HitLTrack: HitLTrack
		{
			material = -1;
			passthrough = 0;
			armor = -650;
			name = "hitPoint_track_1";
			armorComponent = "fireGeo_track_1";
			visual = "track_1";
			minimalHit = 0.15;
			explosionShielding = 0.5;
			radius = 0.3;
		};
		class HitRTrack: HitRTrack
		{
			material = -1;
			passthrough = 0;
			armor = -650;
			name = "hitPoint_track_2";
			armorComponent = "fireGeo_track_2";
			visual = "track_2";
			minimalHit = 0.15;
			explosionShielding = 0.5;
			radius = 0.3;
		};
	};
	class AnimationSources: AnimationSources
	{
		class airRecPanel_01_unhide_source: gm_source_user_base
		{
		};
		class airRecPanel_02_unhide_source: gm_source_user_base
		{
		};
		class wiper_source: gm_source_user_base
		{
		};
		class mirror_1_1_1_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 2;
		};
		class mirror_1_1_2_source: mirror_1_1_1_source
		{
		};
		class mirror_1_2_1_source: mirror_1_1_1_source
		{
		};
		class mirror_1_2_2_source: mirror_1_1_1_source
		{
		};
		class mirror_1_3_1_source: mirror_1_1_1_source
		{
		};
		class mirror_1_3_2_source: mirror_1_1_1_source
		{
		};
		class Ind_Pressure_source: gm_source_user_base
		{
			initphase = 0.5;
		};
		class ind_odometer_source: gm_source_user_base
		{
			animPeriod = 1000;
		};
		class ind_servicetime_source: gm_source_user_base
		{
			animPeriod = 1000;
		};
		class switch_light_source: gm_source_switch_base
		{
		};
		class switch_wiper_source: gm_source_switch_base
		{
		};
		class LightTurnLeft_unhide_source: gm_source_user_base
		{
		};
		class LightTurnRight_unhide_source: gm_source_user_base
		{
		};
		class LightReverse_unhide_source: gm_source_user_base
		{
		};
		class beacon_1_1_unhide: gm_source_user_base
		{
			source = "user";
			animPeriod = 1e-006;
			initPhase = 0;
			displayname = "";
			mass = 5;
		};
		class beacon_1_1_org_unhide: gm_source_user_base
		{
			source = "user";
			animPeriod = 1e-006;
			initPhase = 0;
			mass = 5;
			forceAnimatePhase = 1;
			forceAnimate[] = {"beacon_1_1_blu_unhide", 0, "beacon_1_1_unhide", 1};
			onPhaseChanged = "	if ((_this select 1) == 0) then 											{ 												if (_this select 0 animationPhase 'beacon_1_1_blu_unhide' == 0) then 												{ 													_this select 0 animate ['beacon_1_1_unhide',0,true]; 												}; 											}; 										";
		};
		class beacon_1_1_blu_unhide: gm_source_user_base
		{
			source = "user";
			animPeriod = 1e-006;
			initPhase = 0;
			mass = 5;
			forceAnimatePhase = 1;
			forceAnimate[] = {"beacon_1_1_org_unhide", 0, "beacon_1_1_unhide", 1};
			onPhaseChanged = "	if ((_this select 1) == 0) then 											{ 												if (_this select 0 animationPhase 'beacon_1_1_org_unhide' == 0) then 												{ 													_this select 0 animate ['beacon_1_1_unhide',0,true]; 												}; 											}; 										";
		};
		class beacon_light_unhide_source: gm_source_user_base
		{
		};
		class beacon_mirror_source: gm_source_user_base
		{
		};
		class LightsMain_unhide_source: gm_source_user_base
		{
			initPhase = 1;
		};
		class LightsMainBrake_unhide_source: gm_source_user_base
		{
		};
		class LightsBlackOutFront_unhide_source: gm_source_user_base
		{
		};
		class LightsBlackOutBack_unhide_source: gm_source_user_base
		{
		};
		class LightsBlackOutBrake_unhide_source: gm_source_user_base
		{
		};
		class LightsBlackOutConvoy_unhide_source: gm_source_user_base
		{
		};
		class LightsSearchLight_unhide_source: gm_source_user_base
		{
		};
		class Door_1_1_source: gm_source_door_base
		{
		};
		class Door_1_2_source: gm_source_door_base
		{
		};
		class Door_2_1_source: gm_source_door_base
		{
		};
		class Door_2_2_source: gm_source_door_base
		{
		};
		class window_1_1_source: gm_source_window_base
		{
		};
		class window_1_2_source: gm_source_window_base
		{
		};
		class window_2_1_source: gm_source_window_base
		{
		};
		class window_2_2_source: gm_source_window_base
		{
		};
		class HitWheel_1_1_source
		{
			source = "Hit";
			hitpoint = "HitWheel_1_1";
			raw = 1;
		};
		class HitWheel_1_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_1_2";
		};
		class HitWheel_2_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_2_1";
		};
		class HitWheel_2_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_2_2";
		};
		class HitWheel_3_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_3_1";
		};
		class HitWheel_3_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_3_2";
		};
		class HitWheel_4_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_4_1";
		};
		class HitWheel_4_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_4_2";
		};
		class HitWheel_5_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_5_1";
		};
		class HitWheel_5_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_5_2";
		};
		class HitWheel_6_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_6_1";
		};
		class HitWheel_6_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_6_2";
		};
		class HitWheel_7_1_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_7_1";
		};
		class HitWheel_7_2_source: HitWheel_1_1_source
		{
			hitpoint = "HitWheel_7_2";
		};
	};
	class Attributes: Attributes
	{
		class gm_vehicleMarkings_LicensePlates_Numbers_attribute
		{
			displayName = "License Plate: Number";
			tooltip = "*,# and $ function as wildcard.";
			property = "gm_vehicleMarkings_LicensePlates_Numbers_attribute";
			control = "Edit";
			expression = "[_this,_value,0,1] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "-1";
			validate = "STRING";
			typeName = "STRING";
		};
		class gm_vehicleMarkings_tacticalSign_PreIcon_attribute
		{
			displayName = "Tactical Sign: Pre Icon Number";
			tooltip = "*,# and $ function as wildcard.";
			property = "gm_vehicleMarkings_tacticalSign_PreIcon_attribute";
			control = "Edit";
			expression = "[_this,_value,1,0] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "-1";
			validate = "STRING";
			typeName = "STRING";
		};
		class gm_vehicleMarkings_tacticalSign_Icon_attribute
		{
			displayName = "Tactical Sign: Icon";
			tooltip = "Set Tactical Sign icon";
			property = "gm_vehicleMarkings_tacticalSign_Icon_attribute";
			control = "Combo";
			expression = "[_this,_value,1,2] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_tacticalSigns
			{
			};
		};
		class gm_vehicleMarkings_tacticalSign_PostIcon_attribute
		{
			displayName = "Tactical Sign: Post Icon Number";
			tooltip = "*,# and $ function as wildcard.";
			property = "gm_vehicleMarkings_tacticalSign_PostIcon_attribute";
			control = "Edit";
			expression = "[_this,_value,1,3] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "-1";
			validate = "STRING";
			typeName = "STRING";
		};
		class gm_vehicleMarkings_tacticalNumber_Number_attribute
		{
			displayName = "Tactical Number";
			tooltip = "*,# and $ function as wildcard.";
			property = "gm_vehicleMarkings_tacticalNumber_Number_attribute";
			control = "Edit";
			expression = "[_this,_value,2,0] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "-1";
			validate = "STRING";
			typeName = "STRING";
		};
		class gm_vehicleMarkings_tacticalNumber_Numberfont_attribute
		{
			displayName = "Tactical Number (Font)";
			tooltip = "Sets the font used to the tactical number.";
			property = "gm_vehicleMarkings_tacticalNumber_Numberfont_attribute";
			control = "Combo";
			expression = "[_this,_value,2,1] spawn gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "-1";
			class values: gm_VehicleInsignias_Fonts
			{
			};
		};
		class gm_vehicleMarkings_Insignias_MissionSmall_attribute
		{
			displayName = "Insignia: Mission";
			tooltip = "Small symbol.";
			property = "gm_vehicleMarkings_Insignias_MissionSmall_attribute";
			control = "Combo";
			expression = "[_this,_value,3,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_MissionSmall
			{
			};
		};
		class gm_vehicleMarkings_Insignias_MissionLarge_attribute
		{
			displayName = "Insignia: Mission (Large)";
			tooltip = "Large symbol.";
			property = "gm_vehicleMarkings_Insignias_MissionLarge_attribute";
			control = "Combo";
			expression = "[_this,_value,3,1] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_MissionLarge
			{
			};
		};
		class gm_vehicleMarkings_Insignias_Recon_attribute
		{
			displayName = "Insignia: Marking";
			tooltip = "ID Symbol.";
			property = "gm_vehicleMarkings_Insignias_Marking_attribute";
			control = "Combo";
			expression = "[_this,_value,3,2] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_Recon
			{
			};
		};
		class gm_vehicleMarkings_Insignias_Unit_attribute
		{
			displayName = "Insignia: Crest";
			tooltip = "Battalion-specific symbol.";
			property = "gm_vehicleMarkings_Insignias_Battalion_attribute";
			control = "Combo";
			expression = "[_this,_value,3,3] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_Unit
			{
			};
		};
		class gm_vehicleMarkings_Insignias_Company_attribute
		{
			displayName = "Insignia: Company";
			tooltip = "Company-specific symbol.";
			property = "gm_vehicleMarkings_Insignias_Company_attribute";
			control = "Combo";
			expression = "[_this,_value,3,4] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_Company
			{
			};
		};
		class gm_vehicleMarkings_Insignias_Formation_attribute
		{
			displayName = "Insignia: Formation";
			tooltip = "Formation symbol";
			property = "gm_vehicleMarkings_Insignias_Platoon_attribute";
			control = "Combo";
			expression = "[_this,_value,3,5] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_Formation
			{
			};
		};
		class gm_vehicleMarkings_Insignias_HazardSign_attribute
		{
			displayName = "Hazard Markings";
			tooltip = "Specifies the hazard markings.";
			property = "gm_vehicleMarkings_Insignias_HazardSign_attribute";
			control = "Combo";
			expression = "[_this,_value,4,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_HazardSign
			{
			};
		};
		class gm_vehicleMarkings_Insignias_nation_attribute
		{
			displayName = "Insignia: Nation";
			tooltip = "Nation-specific symbol.";
			property = "gm_vehicleMarkings_Insignias_nation_attribute";
			control = "Combo";
			expression = "[_this,_value,5,0] call gm_core_vehicles_fnc_vehicleMarkingsUpdateAttributes;";
			defaultValue = "";
			class values: gm_VehicleInsignias_Nations
			{
			};
		};
	};
	class Sounds: Sounds
	{
		class Waternoise_ext
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water", 0.501187, 1, 300};
			frequency = "1";
			volume = "(speed factor[0, 10]) * water * camPos + (speed factor[-0.1, -10]) * water * camPos";
		};
		class Waternoise_int
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int", 0.354813, 1, 100};
			frequency = "1";
			volume = "(speed factor[0, 10]) * water * (1-camPos)* 0.8 + (speed factor[-0.1, -10]) * water * (1-camPos) *0.8";
		};
		class NoiseInt
		{
			sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 3.16228, 1};
			frequency = "1";
			volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class NoiseExt
		{
			sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 3.16228, 1, 250};
			frequency = "1";
			volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class ThreadsOutH0
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01", 0.398107, 1, 140};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutH1
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02", 0.446684, 1, 160};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutH2
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03", 0.501187, 1, 180};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutH3
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04", 0.562341, 1, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsOutH4
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05", 0.562341, 1, 220};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsOutS0
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01", 0.316228, 1, 120};
			frequency = "1";
			volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsOutS1
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02", 0.354813, 1, 140};
			frequency = "1";
			volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsOutS2
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03", 0.398107, 1, 160};
			frequency = "1";
			volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsOutS3
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04", 0.446684, 1, 180};
			frequency = "1";
			volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsOutS4
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05", 0.501187, 1, 200};
			frequency = "1";
			volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsInH0
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01", 0.446684, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsInH1
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02", 0.501187, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsInH2
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03", 0.562341, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsInH3
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04", 0.630957, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsInH4
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05", 0.707946, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
		class ThreadsInS0
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01", 0.398107, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
		};
		class ThreadsInS1
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02", 0.446684, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
		};
		class ThreadsInS2
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03", 0.501187, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
		};
		class ThreadsInS3
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04", 0.630957, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
		};
		class ThreadsInS4
		{
			sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05", 0.707946, 1};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
		};
	};
	class UserActions: UserActions
	{
	};
	class Eventhandlers: EventHandlers
	{
		class gm_core_vehicles_Eventhandlers
		{
			init = "_this call gm_core_vehicles_fnc_init;";
			respawn = "_this call gm_core_vehicles_fnc_init;";
			getIn = "";
			getOut = "";
			engine = "_this call gm_core_vehicles_fnc_engine;";
			turnIn = "";
			turnOut = "";
		};
		class gm_core_vehicles_multicrewhatch
		{
			init = "_this spawn gm_core_vehicles_fnc_multiCrewHatch_init";
			turnIn = "[_this,'0'] spawn gm_core_vehicles_fnc_multiCrewHatch";
			turnOut = "[_this,'1'] spawn gm_core_vehicles_fnc_multiCrewHatch";
			getIn = "[_this,'2'] spawn gm_core_vehicles_fnc_multiCrewHatch";
			seatSwitched = "[_this,'3'] spawn gm_core_vehicles_fnc_multiCrewHatch";
		};
	};
	class ViewOptics: ViewOptics
	{
		initFov = 0.75;
		minFov = 0.75;
		maxFov = 0.75;
	};
};
class gm_tracked_Tank_base: gm_tracked_base
{
	editorSubcategory = "EdSubcat_Tanks";
	Icon = "\gm\gm_core\gm_core_ui\data\mapicon\gm_mapicon_tracked_mbt_ca";
	type = 1;
	attenuationEffectType = "TankAttenuation";
	buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
	buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
	buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
	buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
	soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
	WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
	WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
	WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
	WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
	WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
	WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
	soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
	ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
	ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
	ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
	ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
	soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
	class Attributes: Attributes
	{
	};
	class AnimationSources: AnimationSources
	{
	};
	class HitPoints: Hitpoints
	{
	};
	class Turrets: Turrets
	{
	};
};
class gm_tracked_APC_base: gm_tracked_base
{
	editorSubcategory = "EdSubcat_APCs";
	type = 1;
	Icon = "\gm\gm_core\gm_core_ui\data\mapicon\gm_mapicon_tracked_ifv_ca";
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {"veh_vehicle_APC_s"};
			speechPlural[] = {"veh_vehicle_APC_p"};
		};
	};
	textSingular = "APC";
	textPlural = "APCs";
	nameSound = "veh_vehicle_APC_s";
	insideSoundCoef = 0.8;
	class Attributes: Attributes
	{
	};
	class HitPoints: Hitpoints
	{
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		};
	};
};
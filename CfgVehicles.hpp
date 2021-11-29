class CfgVehicles 
{
	///-----------------------------Блок определения базовых зависимостей
    class Land;	
    class LandVehicle : Land
    {
		class Reflectors 
		{
			class Left;
			class Right;
		};
	}; 
    class Car: LandVehicle
    {
		class HitPoints;
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
    }; 
	///-----------------------------Конец блока 
	
	//Train_F - основной класс железнодорожной техники
	class Train_F: Car
	{
		author				= "$STR_RRW_mod_team";	//Авторы - RRW
		mapSize				= 16;					//Размер иконки для старого 2D редактора
		_generalMacro		= "Train_F";			//Автоматически генерируемая подсказка движку
		editorCategory		= "EdCat_RRW";			//Категория в редакторе
		
		///Прямое копирование из класса Car_F
		dammageHalf[]			= {};
		dammageFull[] 			= {};
		occludeSoundsWhenIn		= 0;
		obstructSoundsWhenIn	= 0;
		gunnerHasFlares 		= 0;
		holdOffroadFormation	= 1;	
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
				
		///БАЗОВЫЕ ПАРАМЕТРЫ ЖЕЛЕЗНОДОРОЖНОЙ ТЕХНИКИ
		//Радиообмен и текстовые сообщения
		class SpeechVariants	
		{
			class Default
			{
				speechSingular[]	= {"veh_vehicle_s"};	//Радиообмен при для одиночной техники 
				speechPlural[]		= {"veh_vehicle_p"};	//Радиообмен при для множественной техники 
			};
		};
		textSingular			= "train";			//Текст чата для одиночной техники 
		textPlural				= "trains";			//Текст чата для множественной техники
		nameSound				= "veh_vehicle_s";	//Внутренний радиообмен 
		
		terrainCoef				= 2;
		maxFordingDepth			= 0.5;
		waterResistance			= 1;
		waterLeakiness			= 10;
		
		epeImpulseDamageCoef	= 30;
		
		extCameraPosition[] 	= {0,4,-15};
		
		class Reflectors 		{};		//Ходовые огни отключены для БАЗОВОЙ ЖД ТЕХНИКИ
		class Exhausts			{};		//Эффекты выхлопа отключены для БАЗОВОЙ ЖД ТЕХНИКИ
		weapons[] 				= {};	//Вооружение отсутствует для БАЗОВОЙ ЖД ТЕХНИКИ
		magazines[]				= {};	//Магазины отсутствуют для БАЗОВОЙ ЖД ТЕХНИКИ
		aggregateReflectors[] 	= {};	//Рабочие ходовые огни отсутствуют для БАЗОВОЙ ЖД ТЕХНИКИ
		
		secondaryExplosion		= -1;	//Определение силы повторного взрыва уничтоженной техники (отключено для БАЗОВОЙ ЖД ТЕХНИКИ) https://community.bistudio.com/wiki/Config_Properties_Megalist#secondaryExplosion
		fuelExplosionPower		= -1;	//Определение силы взрыва топлива (отключено для БАЗОВОЙ ЖД ТЕХНИКИ)
		explosionEffect 		= "";	//Определение эффекта взрыва при уничтожении (отключен для БАЗОВОЙ ЖД ТЕХНИКИ)
		class DestructionEffects {};	//Определение эффектов после уничтожения (отключены для БАЗОВОЙ ЖД ТЕХНИКИ)
		
		armor 					= 300;	//Общие очки «здоровья» техники. 300 для ЖД ТЕХНИКИ
		armorStructural 		= 6;	//Делает общие очки "здоровья" устойчивыми к повреждениям. 6 для небронированной ЖД ТЕХНИКИ
		
		///INCLUDES
		//HitPoints - точки повреждения
		#include "HitPoints.hpp"
		
		//HitSounds - звуки при повреждениях и столкновениях
		#include "HitSounds.hpp"
		
		//ViewPilot - ограничение камеры игрока при виде от первого лица в кабине
		#include "ViewPilot.hpp"
		
		//Определение стандартной турели стрелка для дальнейшей работы
		#include "Turrets.hpp"
		
		//Стандартные источники анимации (повреждение стекол) для дальнейшей работы
		#include "AnimationSources.hpp"
		
		//Настройки "руля" для игрока (отключен для ЖД ТЕХНИКИ)
		#include "PlayerSteeringCoefficients.hpp"
		
		//Стандартные анимации игрока (машиниста) для использования, если иное не переопределено конфигом техники
		getInAction				= "GetInLow";
		getOutAction			= "GetOutLow";
		cargoGetInAction[]		= {"GetInLow"};
		cargoGetOutAction[] 	= {"GetOutLow"};
		driverLeftHandAnimName 	= "";
		driverRightHandAnimName = "";
		driverLeftLegAnimName 	= "";
		driverRightLegAnimName 	= "";
		
		//Настройки ИИ для управления техникой
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2;
		predictTurnSimul = 1.5;
		brakeDistance = 1;
		
		crewCrashProtection = 0.25;
		
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		accuracy = 0.25;
		
		threat[] = {0,0,0};
		insideSoundCoef = 0.9;
		//extCameraPosition[] = {0.5,2,-10};
		soundGear[] = {"",1e-005,1};
		collisionEffect = "collisionEffect";
		hideUnitInfo = 0;
		
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 1;
		tBody = 150;
		transportMaxWeapons = 12;
		transportMaxMagazines = 64;
		transportMaxBackpacks = 12;
		maximumLoad = 2000;
		supplyRadius = -1;
		memoryPointSupply = "doplnovani";
		
		brakeTorque = 6000;
		longStiff = 15000;
		latStiffX = 2000;
		latStiffY = 18000;
		
		
	};
};

/*
		class TransportBackpacks {};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		class engineStartSpeed=5;
*/
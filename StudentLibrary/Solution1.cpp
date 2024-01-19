#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	switch (_from)
	{
	case TemperatureUnits::CELSIUS:
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			return _value * 9/5 + 32.0f;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			return _value + 273.15f;
		}
		else if (_to == TemperatureUnits::CELSIUS)
		{
			return _value;
		}
		break;
	case TemperatureUnits::FAHRENHEIT:
		if (_to == TemperatureUnits::CELSIUS)
		{
			return (_value - 32.0f) * 5/9;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			return (_value + 32) *  5/9;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			return _value;
		}
		break;
	case TemperatureUnits::KELVIN:
		if (_to == TemperatureUnits::CELSIUS)
		{
			return _value - 273.15f;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			return (_value - 273.15f) * 9/5 + 32;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			return _value;
		}

		break;
	default:
		break;
	}


	return -1.0f;
}

#endif

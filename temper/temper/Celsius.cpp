#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

Celsius::Celsius(double temperature)
{
	m_temperature = temperature;
}

double Celsius::GetTemperature() const
{
	return m_temperature;
}

void Celsius::SetTemperature(double temperature)
{
	m_temperature = temperature;
}

Celsius::operator Fahrenheit() const
{
	Fahrenheit f(m_temperature * 9 / 5 + 32);
	return f;
}

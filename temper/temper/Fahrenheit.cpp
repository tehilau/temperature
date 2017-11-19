#include <iostream>
#include "Fahrenheit.h"
#include "Celsius.h"
using namespace std;
Fahrenheit::Fahrenheit(double temperature)
{
	m_temperature = temperature;
}

double Fahrenheit::GetTemperature() const
{
	return m_temperature;
}

void Fahrenheit::SetTemperature(double temperature)
{
	m_temperature = temperature;
}

Fahrenheit::operator Celsius() const
{
	Celsius c((m_temperature - 32) * 5 / 9);
	return c;
}

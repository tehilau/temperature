#pragma once
#include <iostream>
class Celsius;
class Fahrenheit
{
public:
	Fahrenheit(double temperature = 0);
	double GetTemperature() const;
	void SetTemperature(double temperature);
	operator Celsius() const;
private:
	double m_temperature;
};


#pragma once
#include <iostream>
class Fahrenheit;


class Celsius
{
public:
	Celsius(double temperature = 0);
	double GetTemperature() const;
	void SetTemperature(double temperature);
	operator Fahrenheit() const;
private:
	double m_temperature;
};

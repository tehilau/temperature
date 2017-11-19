#include <iostream>
#include <iomanip>
#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

std::ostream& operator<<(std::ostream& out, const Celsius& temp)
{
	out << temp.GetTemperature();
	return out;
}

std::ostream& operator<<(std::ostream& out, const Fahrenheit& temp)
{
	out << temp.GetTemperature();
	return out;
}

int main()
{
	Celsius boiling_temp(100);
	Celsius freezing_temp(0);
	Celsius absolute_zero(-273.15);
	Fahrenheit boil_tmp(212);
	cout << setw(7) << "Celsius" << setw(15) << "Fahrenheit" << endl;
	cout << setw(7) << boiling_temp << setw(15) << Fahrenheit(boiling_temp) << endl;
	cout << setw(7) << freezing_temp << setw(15) << Fahrenheit(freezing_temp) << endl;
	cout << setw(7) << absolute_zero << setw(15) << Fahrenheit(absolute_zero) << endl;
	cout << setw(7) << "Fahrenheit" << setw(15) << "Celsius" << endl;
	cout << setw(7) << boil_tmp << setw(15) << Celsius(boil_tmp) << endl;
	return 0;
}
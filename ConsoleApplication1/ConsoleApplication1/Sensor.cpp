#include "pch.h"
#include "Sensor.h"
#include <string>


Sensor::Sensor()
{
}


Sensor::Sensor(double d, std::string u)
{
	data = d;
	unit = u;
}



void Sensor::changeData(double d)
{
	data = d;
	return;
}



void Sensor::changeUnit(std::string u)
{
	unit = u;
	return;
}



double Sensor::getData()
{
	return data;
}



std::string Sensor::getUnit()
{
	return unit;
}


Sensor::~Sensor()
{
}

#pragma once
#include <string>

class Sensor
{
public:
	Sensor();
	Sensor(double, std::string);
	void changeData(double);
	void changeUnit(std::string);
	double getData();
	std::string getUnit();
	~Sensor();
private:
	double data;
	std::string unit;
};


#pragma once
#include "sensor.h"
#include <vector>
#include "DependantConnection.h"
#include <string>

class Node
{
public:
	Node();
	Sensor getSensor(int);
	void changeSensor(int, Sensor);
	void cascade(double, int, int);
	void addSensor(double, std::string);
	void addDependantConnection(int, int, int, int, double, double);
	void addDependantConnection();
	~Node();
private:
	std::vector<Sensor> sensorV;
	std::vector<int> controlV;
	std::vector<DependantConnection> dependantV;
};


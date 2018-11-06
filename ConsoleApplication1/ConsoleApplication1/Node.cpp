#include "pch.h"
#include "Node.h"
#include "DependantConnection.h"


Node::Node()
{
}


Sensor Node::getSensor(int sensorNum)
{
	return sensorV[sensorNum];
}



void Node::changeSensor(int sensorNum, Sensor newSensor)
{
	sensorV[sensorNum] = newSensor;
	return;
}



void Node::cascade(int nodeNum, Node& node)
{
	std::vector <DependantConnection> tempV;  //rename
	for (int i = 0; i < dependantV.size(); i++)
	{
		if (dependantV[i].getNodeNum() == nodeNum)
			tempV.push_back(dependantV[i]);
	}
	for (int i = 0; i < tempV.size(); i++)//gets and changes sensors based on node changes given
	{
		if (tempV[i].getSign == 0)
		{
			if (tempV[i].getSensorInNum() == tempV[i].getNumQue())
			{
				sensorV[tempV[i].getSensorOutNum()].changeData(tempV[i].getNumResponse());
			}
		}
		else if (tempV[i].getSign == 1)
		{
			if (tempV[i].getSensorInNum() > tempV[i].getNumQue())
			{
				sensorV[tempV[i].getSensorOutNum()].changeData(tempV[i].getNumResponse());
			}
		}
		else  
		{
			if (tempV[i].getSensorInNum() < tempV[i].getNumQue())
			{
				sensorV[tempV[i].getSensorOutNum()].changeData(tempV[i].getNumResponse());
			}
		}

	}
}


void Node::addSensor(double data, std::string unit)
{
	sensorV.push_back(Sensor(data, unit));
}


void Node::addDependantConnection(int nodeNum, int sensorInNum, int sensorOutNum, int sign, double numQue, double numResponse)
{
	dependantV.push_back(DependantConnection(nodeNum, sensorInNum, sensorOutNum, sign, numQue, numResponse));
}


void Node::addDependantConnection()
{
	dependantV.push_back(DependantConnection());
}


Node::~Node()
{
}

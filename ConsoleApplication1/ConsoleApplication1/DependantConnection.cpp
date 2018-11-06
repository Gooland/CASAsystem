#include "pch.h"
#include "DependantConnection.h"


DependantConnection::DependantConnection()
{
}


DependantConnection::DependantConnection(int iNodeNum, int iSensorInNum, int iSensorOutNum, int iSign, double iNumQue, double iNumResponse)
{

}


int DependantConnection::getNodeNum()
{
	return nodeNum;
}



int DependantConnection::getSensorInNum()
{
	return sensorInNum;
}



int DependantConnection::getSensorOutNum()
{
	return sensorOutNum;
}



int DependantConnection::getSign()
{
	return sign;
}



double DependantConnection::getNumQue()
{
	return numQue;
}



double DependantConnection::getNumResponse()
{
	return numResponse;
}


DependantConnection::~DependantConnection()
{
}

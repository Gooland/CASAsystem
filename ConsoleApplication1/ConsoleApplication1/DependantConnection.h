#pragma once
class DependantConnection
{
public:
	DependantConnection();
	DependantConnection(int, int, int, int, double, double);
	int getNodeNum();
	int getSensorInNum();
	int getSensorOutNum();
	int getSign();
	double getNumQue();
	double getNumResponse();
	~DependantConnection();
private:
	int nodeNum;
	int sensorInNum;
	int sensorOutNum;
	int sign;
	double numQue;
	double numResponse;
	
};


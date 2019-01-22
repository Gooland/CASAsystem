#include <vector>
#include "Node.h"
#include <string>

#pragma once
class System
{
public:
	System(std::string);// takes the name of the file that holds node data
	
	std::string getNodeSensor(int,int);//get sensor data from a Node (Node number, Sensor number)
	
	void changeNodeSensor(int, int, int);//change Node sensor data (Node number, Sensor number, new data)
	
	void setNodeNorm(int);//return a node to normal
	
	void systemExit();//tells class to save and close
	
	void reset();//tells class to resset all modules to normal
	~System();

private:
	void nodeChangeAlert(Node*);//allerts all other dependant nodes of a changed node (pointer to node changed)
	std::vector<Node> nodeV;
	
};


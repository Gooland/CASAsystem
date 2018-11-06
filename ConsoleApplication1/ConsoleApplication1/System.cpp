#include "pch.h"
#include "System.h"
#include <string>
#include <fstream>



System::System(std::string file)
{
	int nodeNum, sensorNum = 0;
	std::string line;
	std::ifstream fileIn;
	fileIn.open(file);
	if (fileIn.open)
	{
		while (getline(fileIn, line))
		{
			if (line.find("Node") != std::string::npos)
			{
				nodeV.push_back(Node());
				nodeNum++;
			}
			if (line.find("sensor") != std::string::npos)
			{
				std::string temp;
				for (int i=8; i < line.size(); i++)
				{
					if (line[i] != ',')
					{
						temp.push_back(line[i]);
					}
					else
					{

					}

					
				}
			}
		}
		fileIn.close();
	}
	

}

std::string System::getNodeSensor(int, int)
{
}

void System::changeNodeSensor(int, int, int)
{

}

void System::setNodeNorm(int)
{

}

void System::exit()
{

}

void System::reset()
{

}


System::~System()
{
}

void System::nodeChangeAlert(Node* nChanged)
{
	
}

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
				bool foundComa = false;
				std::string tempData, tempUnit;
				for (int i=8; i < line.size(); i++)//goes throught the line and finds unit and data and puts them in temp strings
				{
					if (line[i] != ',' || foundComa==false)
					{
						tempData.push_back(line[i]);
					}
					else if(line[i] = ',')
					{
						foundComa = true;
					}
					else if(line[i] != ')')
					{
						tempUnit.push_back(line[i]);
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

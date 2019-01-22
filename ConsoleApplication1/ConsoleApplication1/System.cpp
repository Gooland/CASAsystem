#include "pch.h"
#include "System.h"
#include <string>
#include <fstream>
#include <iostream>



System::System(std::string file)
{
	int nodeNum = -1;// this can be replaced with finding the size of  nodeV
	bool done = false;
	std::string line;
	std::ifstream fileIn;
	fileIn.open(file);
	if (fileIn.open)
	{
		int lineCount = 0;
		while (getline(fileIn, line) && done != true)
		{
			if (line.find("Node") != std::string::npos)
			{
				nodeV.push_back(Node());
				nodeNum++;
			}
			else if (line.find("sensor") != std::string::npos)// need to fix the for loop because starting at 8 is not always right with the interface
			{
				bool foundComa = false;
				std::string tempData, tempUnit;
				for (int i=10; i < line.size(); i++)//goes throught the line and finds unit and data and puts them in temp strings
				{
					if (line[i] != ',' && foundComa==false)
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
				nodeV[nodeNum].addSensor(std::stoi(tempData), tempUnit);
			}
			else if (line.find("dependant") != std::string::npos)//same problem in the for loop as sensor 
			{
				std::string nodeS, independantSensorS, signS, Que1S, dependentSensorS, que2S;
				int node, independantSensor, sign, Que1, dependentSensor, que2;
				int foundComma = 0;
				
				for (int i = 11; i < line.size(); i++)
				{
					if (line[i] == ',' || line[i] == ':')// iterates foundComma
						foundComma++;
					else
					{
						if (foundComma == 0)
						{
							nodeS.push_back(line[i]);
						}
						else if (foundComma == 1)
						{
							independantSensorS.push_back(line[i]);
						}
						else if (foundComma == 2)
						{
							signS.push_back(line[i]);
						}
						else if (foundComma == 3)
						{
							Que1S.push_back(line[i]);
						}
						else if (foundComma == 4)
						{
							dependentSensorS.push_back(line[i]);
						}
						else if (foundComma == 6)//skips 5 in order to not record the equal sign
						{
							que2S.push_back(line[i]);
						}
					}
				}
			}
			else if (line.find("control") != std::string::npos)
			{

			}
			else if (line.find("-normal") != std::string::npos)
			{
				done = true;
			}
			else
			{
				std::cout << "error in line: " << lineCount << std::endl;
			}

			lineCount++;
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

void System::systemExit()
{

}

void System::reset()
{

}


void System::nodeChangeAlert(Node* nChanged)
{
	//yote
}


System::~System()
{
}



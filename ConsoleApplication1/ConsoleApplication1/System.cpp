#include "pch.h"
#include "System.h"
#include <string>
#include <fstream>
#include <iostream>



System::System(std::string file)
{
	int nodeNum = -1;
	bool done = false;
	std::string line;
	std::ifstream fileIn;
	fileIn.open(file);
	if (fileIn.open)
	{
		int lineCount = 0;
		while (getline(fileIn, line) || done != true)
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
				int node, independantSensor, sighn1, Que1, dependentSensor, sign2, que2;
				int foundComma = 0;
				for (int i = 18; i < line.size(); i++)
				{
					if (foundComma == 0)
					{

					}
					else if (foundComma == 1)
					{

					}
					else if (foundComma == 2)
					{

					}
					else if (foundComma == 3)
					{

					}
					else if (foundComma == 4)
					{

					}
					else if (foundComma == 5)
					{

					}
					else if (foundComma == 6)
					{

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

void System::exit()
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



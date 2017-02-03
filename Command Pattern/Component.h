#pragma once

#include <string>

using namespace std;

class Component
{
public:

	void setType(string types)
	{ 
		type = types; 
	}
	void setValue(int value) 
	{ 
		newValue = value; 
	}
	int getValue()
	{ 
		return newValue; 
	}
	string getType() 
	{ 
		return type; 
	}
private:
	int newValue;
	string type;
	//Point2D posValue;
};
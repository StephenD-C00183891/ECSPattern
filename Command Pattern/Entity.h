#pragma once

#include <iostream>
#include <vector>

#include "Component.h"

using namespace std;

class Entity
{
	int id;
public:

	Entity() {};
	void addComponenet(Component c) { components.push_back(c); }
	void removeComponent(Component c) {}
	vector<Component> getComponents() { return components; }

private:
	vector<Component> components;
};
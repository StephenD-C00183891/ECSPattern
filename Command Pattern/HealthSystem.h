#pragma once

#include "Entity.h"
#include <vector>
#include <iostream>
#include "Component.h"
#include <string>

using namespace std;

class HealthSystem
{
	vector<Entity> entities;
	vector<Component> components;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		cout << "Health System Update" << endl;
		for (int i = 0; i < entities.size(); i++)
		{
			components = entities[i].getComponents();

		}
		for (int i = 0; i < components.size(); i++)
		{
			if (components[i].getType() == "health")
			{
				string health = to_string(components[i].getValue());
				//string to_string(int healh)
				cout << "Current Health of entity: " + health << endl;
			}
		}
	}
};
#pragma once

#include <vector>
#include "Entity.h"
#include "Component.h"
#include <string>

using namespace std;

class PositionSystem
{
	vector<Entity> entities;
	vector<Component> components;
	int posVal;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		cout << "Position System Update" << endl;

		for (int i = 0; i < entities.size(); i++)
		{
			components = entities[i].getComponents();

		}
		for (int i = 0; i < components.size(); i++)
		{
			if (components[i].getType() == "position")
			{
				
				posVal = components[i].getValue();

				int PosVal1 = posVal / 1000;
				int PosVal2 = posVal % 1000;

				string p1 = to_string(PosVal1);
				string p2 = to_string(PosVal2);

				cout << "Current Position of entity: X:" + p1 + " Y:" + p2 << endl;
			}
		}
	}
};
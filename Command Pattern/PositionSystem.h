#pragma once

#include <vector>
#include "Entity.h"

class PositionSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) {}
	void update() {
		cout << "Position System Update" << endl;
	}
};
#pragma once

#include "Entity.h"
#include <vector>
#include <iostream>

class HealthSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) {}
	void update() {
		cout << "Health System Update" << endl;
	}
};
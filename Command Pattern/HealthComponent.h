#pragma once

#include "Component.h"

class HealthComponent : public Component
{
public:
	HealthComponent() : health(100) {}
	
	int getHealth() { return health; }
	
	void setHealth() { this->setValue(health); }

private:
	int health;
};
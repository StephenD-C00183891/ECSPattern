// Command Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "Entity.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "HealthSystem.h"
#include "PositionSystem.h"

int main(void *)
{
	Entity player;
	HealthComponent hc;
	PositionComponent pc;

	hc.setType("health");
	pc.setType("position");

	hc.setHealth();
	pc.setPosition();

	player.addComponenet(hc);
	player.addComponenet(pc);

	HealthSystem hs;
	PositionSystem ps;

	hs.addEntity(player);
	ps.addEntity(player);

	while (true) {
		std::this_thread::sleep_for(chrono::milliseconds(1000));
		hs.update();
		std::this_thread::sleep_for(chrono::milliseconds(1000));
		ps.update();

		
	}
	return 0;
}

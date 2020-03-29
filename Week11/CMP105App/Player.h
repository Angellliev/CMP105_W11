#pragma once
#include "Framework/GameObject.h"

class Player: public GameObject
{
public:
	Player();
	void update(float dt, sf::RenderWindow* wind);
	
};


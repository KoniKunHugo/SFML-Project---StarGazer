#pragma once
#include "gameObject.h"

class Brick : public GameObject
{
public:

	Brick();
	~Brick();
	void takeDamage();

private:

	int brick_hitPoints;

};
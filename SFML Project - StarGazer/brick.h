#pragma once
#include "gameObject.h"

class Brick : public gameObject
{
public:

	Brick();
	~Brick();
	void takeDamage();

private:

	int hitPoints;

};
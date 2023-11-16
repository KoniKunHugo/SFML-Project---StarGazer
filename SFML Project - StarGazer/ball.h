#pragma once
#include "gameObject.h"

class Ball : public GameObject {
public:

	Ball();
	~Ball();

	void movement();

private:

	float ball_speed;

};
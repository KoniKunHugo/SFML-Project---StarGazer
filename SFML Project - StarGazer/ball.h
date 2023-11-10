#pragma once
#include "gameObject.h"

class Ball : public GameObject {
public:

	Ball();
	~Ball();

	void movement();

private:

	int ball_speed;

};
#pragma once
#include "gameObject.h"

class Cannon : public GameObject {
public:

	Cannon();
	~Cannon();
	void setOrientation();

private:

	int orientation;

};
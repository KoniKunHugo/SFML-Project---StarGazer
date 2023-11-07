#pragma once
#include "gameObject.h"

class Cannon : public gameObject {
public:

	Cannon();
	~Cannon();
	void setOrientation();

private:

	int orientation;

};
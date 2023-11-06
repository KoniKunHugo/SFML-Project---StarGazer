#pragma once

class gameObject
{
public:
	gameObject();

	int x;
	int y;
	int width;
	int height;

	void selectPosition();
	void selectColor();
	void convexCoords();

};
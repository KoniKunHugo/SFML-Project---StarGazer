#pragma once

class gameObject
{
public:

	void createRectangle(int x, int y);
	void selectSize(int width, int height);

	gameObject();
	~gameObject();

private:

	int x;
	int y;
	int width;
	int height;
	char graphic; //Cercle ou Rectangle

};
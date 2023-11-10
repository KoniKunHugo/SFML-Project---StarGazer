#pragma once
#include "iostream"
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	GameObject(int width, int height, int x, int y);


	/*méthode 'Draw'*/
	void draw(sf::RenderWindow& window, sf::RectangleShape& shape);

private:
	int x;
	int y;
	int width;
	int height;

	/*representation graphique*/ //=>RectangleShape
	sf::RectangleShape shape;
};




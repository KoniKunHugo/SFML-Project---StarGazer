#include "gameObject.h"
#include <SFML/Graphics.hpp>

void gameObject::selectPosition() {

}

void gameObject::selectColor() {

}

void gameObject::convexCoords() {
	sf::ConvexShape oConvex;

	oConvex.setPointCount(5);

	oConvex.setPoint(0, sf::Vector2f(0, 0));
	oConvex.setPoint(1, sf::Vector2f(150, 10));
	oConvex.setPoint(2, sf::Vector2f(120, 90));
	oConvex.setPoint(3, sf::Vector2f(30, 100));
	oConvex.setPoint(4, sf::Vector2f(0, 50));
}
/*
void gameObject::convexShow() {
	oWindow.draw(oConvex);
}
*/
#include "gameObject.h"
#include "iostream"
#include <SFML/Graphics.hpp>

GameObject::GameObject(int width, int height, int x, int y) {
	this->x;
	this->y;
	this->width;
	this->height;

}

void GameObject::draw(sf::RenderWindow& window, sf::RectangleShape& shape) {
	window.draw(shape);
}

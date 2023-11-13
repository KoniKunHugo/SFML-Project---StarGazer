#include "gameObject.h"
#include "iostream"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

GameObject::GameObject(float width, float height, float x, float y, sf::Color color)
	: x(x), y(y), height(height), width(width), color(color)
{
	shapeRect = new sf::RectangleShape;
	shapeRect->setSize(sf::Vector2f(width, height));
	shapeRect->setPosition(x, y);
	shapeRect->setFillColor(color);
	shape = shapeRect;

}

GameObject::GameObject(float radius, float x, float y, sf::Color color)
	: x(x), y(y), radius(radius), color(color)
{
	shapeCirc = new sf::CircleShape;
	shapeCirc->setRadius(radius);
	shapeCirc->setPosition(x, y);
	shapeCirc->setFillColor(color);
	shape = shapeCirc;
}

GameObject::~GameObject()
{

}

void GameObject::drawShape(sf::RenderWindow& window)
{
	window.draw(*shape);
}

void GameObject::setRotation(float fAngle, float fRatioX, float fRatioY)
{
	shape->setOrigin(fRatioX, fRatioY);
	shape->setRotation(shapeRect->getRotation() + fAngle);
}

void GameObject::setPosition(float fX, float fY, float fRatioX, float fRatioY)
{
	shape->setOrigin(fRatioX, fRatioY);
	shape->setPosition(fX, fY);
}

void GameObject::setDirection(float fX, float fY)
{
	sf::Vector2f direction(fX, fY);
}

void GameObject::move(float fDeltaTime)
{

}

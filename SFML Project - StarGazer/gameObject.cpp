#include "gameObject.h"
#include "iostream"
#include <SFML/Graphics.hpp>

GameObject::GameObject(float width, float height, float x, float y, sf::Color color)
	: x(x), y(y), height(height), width(width), color(color)
{
	shapeRect = new sf::RectangleShape;
	shapeRect->setSize(sf::Vector2f(width, height));
	shapeRect->setPosition(x, y);
	shapeRect->setFillColor(color);
	shape = shapeRect;
	speedVector = sf::Vector2f(1, 1);
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
	sf::Vector2f curPos = shape->getPosition();
	x = curPos.x;
	y = curPos.y;
	float newX = x + speed * fDeltaTime * speedVector.x;
	float newY = y + speed * fDeltaTime * speedVector.y;
	shape->setPosition(newX, newY);
}

void GameObject::checkCollisions(const GameObject& gOOther)
{
	sf::Vector2f curPos = shape->getPosition();
	x = curPos.x;
	y = curPos.y;
	sf::Vector2f curPos2 = gOOther->getPosition();
	if (x);
}
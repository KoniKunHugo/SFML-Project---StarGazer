#pragma once
#include "iostream"
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	GameObject(float width, float height, float x, float y, sf::Color color);
	GameObject(float radius, float x, float y, sf::Color color);
	~GameObject();

	void drawShape(sf::RenderWindow& window);

	void setRotation(float fAngle, float fRatioX = 0.5f, float fRatioY = 0.5f); //fRatioX et fRatioY à rajouter mais bug donc à voir de parameter Overridden

	void setPosition(float fX, float fY, float fRatioX = 0.5f, float fRatioY = 0.5f);

	void setDirection(float fX = 1.f, float fY = 1.f);

	void move(float fDeltaTime);

	void checkCollisions(const GameObject& gOOther);

	/*void OnCollisionEnter();

	void OnCollisionStay();

	void OnCollisionExit();*/

	void getBorders();

private:
	//Elements de Construction de shape
	float x;
	float y;
	float width;
	float height;
	float radius;
	//Elements temporaire
	float temp_x;
	float temp_y;
	float temp_width;
	float temp_height;
	//Elements pour la construct du DeltaTime
	sf::Vector2f speedVector = sf::Vector2f(1, 1);
	sf::Clock clock;
	float speed = 75.f;

	//Definition des differentes shapes
	sf::RectangleShape* shapeRect = NULL;
	sf::CircleShape* shapeCirc = NULL;
	sf::Shape* shape = NULL;
	sf::Color color;
};
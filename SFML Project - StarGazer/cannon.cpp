#include "cannon.h"

//Possibilité d'utilisation du Mouse Event pour récupérer la position du curseur 

Cannon::Cannon() : GameObject(60, 40, 640, 650, sf::Color::Cyan)
{
	setRotation(-90);
};
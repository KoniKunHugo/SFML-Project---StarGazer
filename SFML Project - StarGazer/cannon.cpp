#include "cannon.h"

//Possibilit� d'utilisation du Mouse Event pour r�cup�rer la position du curseur 

Cannon::Cannon() : GameObject(60, 40, 640, 650, sf::Color::Cyan)
{
	setRotation(-90);
};
#include <SFML/Graphics.hpp>
#include "gameObject.h"

int main(int argc, char** argv)
{
    /*gameObject gO;

    gO.convexCoords();*/

    //Création d'une fenêtre
    sf::RenderWindow oWindow(sf::VideoMode(1280, 720), "SFML");

    sf::ConvexShape oConvex;

    oConvex.setPointCount(5);

    oConvex.setPoint(0, sf::Vector2f(0, 0));
    oConvex.setPoint(1, sf::Vector2f(150, 10));
    oConvex.setPoint(2, sf::Vector2f(120, 90));
    oConvex.setPoint(3, sf::Vector2f(30, 100));
    oConvex.setPoint(4, sf::Vector2f(0, 50));
    //Création d'un cercle de radius 100
    sf::CircleShape oCircle(10.f);
    //A la position 0, 0
    oCircle.setPosition(0.f, 0.f);
    //Et de couleur verte
    oCircle.setFillColor(sf::Color::Green);


    //Création d'un rectangle de taille 50, 50
    sf::RectangleShape oRectangle(sf::Vector2f(50.f, 50.f));
    //A la position 100, 100
    oCircle.setPosition(100.f, 100.f);
    //Et de couleur rouge
    oRectangle.setFillColor(sf::Color::Red);

    //GameLoop
    while (oWindow.isOpen())
    {
        //EVENT
        sf::Event oEvent;
        while (oWindow.pollEvent(oEvent))
        {
            if (oEvent.type == sf::Event::Closed)
                oWindow.close();
        }

        //UPDATE

        //DRAW
        oWindow.clear();

        oWindow.draw(oCircle);
        oWindow.draw(oRectangle);
        oWindow.draw(oConvex);
        oWindow.display();
    }

    return 0;
}

#include <SFML/Graphics.hpp>
#include "gameObject.h"
#include "iostream"

void Game()
{
    GameObject gORect(50.f, 50.f, 100.f, 100.f, sf::Color::Yellow);
    GameObject gOCirc(100.f, 100.f, 100.f, sf::Color::Red);
    //Création d'une fenêtre
    gORect.setRotation(35);
    gORect.setPosition(170, 600);
    gOCirc.setPosition(700, 350);
    gORect.setDirection();
    sf::RenderWindow oWindow(sf::VideoMode(1280, 720), "Casse brique");

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

        //draw gORect
        gORect.drawShape(oWindow);
        gOCirc.drawShape(oWindow);

        oWindow.display();
    }
}
/*
void Test()
{
    gameObject gORect(50, 50, 100, 100);

    //gameObject gOCircle(10,10,50,50);

    //Création d'une fenêtre
    sf::RenderWindow oWindow(sf::VideoMode(1280, 720), "SFML");
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
        oWindow.display();
    }
}
*/

int main(int argc, char** argv)
{
    Game();
}

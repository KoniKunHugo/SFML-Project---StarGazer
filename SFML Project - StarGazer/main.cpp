#include <SFML/Graphics.hpp>
#include "gameObject.h"
#include "iostream"

void Game()
{
    float elapsedTime;
    sf::Clock clock;
    GameObject gORect(100.f, 75.f, 600.f, 360.f, sf::Color::Yellow);
    GameObject gORect2(50.f, 50.f, 333.f, 666.f, sf::Color::Blue);
    GameObject gOCirc(20.f, 420.f, 240.f, sf::Color::Red);
    GameObject gOCirc2(75.f, 10.f, 50.f, sf::Color::Green);
    //Création d'une fenêtre
    gORect.setRotation(0);
    gORect.setDirection();
    gOCirc.setDirection();
    sf::RenderWindow oWindow(sf::VideoMode(1280, 720), "Casse brique");

    /*if (rect_overlap(gORect, gORect2))
        printf("ca marche");*/

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
        elapsedTime = clock.restart().asSeconds();
        gOCirc.move(elapsedTime);
        //gORect.move(elapsedTime);

        //DRAW
        oWindow.clear();

        //draw gORect
        gORect.drawShape(oWindow);
        gORect2.drawShape(oWindow);
        gOCirc.drawShape(oWindow);
        gOCirc2.drawShape(oWindow);

        oWindow.display();
    }
}

int main(int argc, char** argv)
{
    Game();
}

#include <SFML/Graphics.hpp>
#include "gameObject.h"
#include "iostream"

bool rect_overlap(GameObject& object1, GameObject& object2)
{
    return object1.x < x2 + w2 && x1 + w1 > x2 && y1 < y2 + h2 && y1 + h1 > y2;
}

void Game()
{
    float elapsedTime;
    sf::Clock clock;
    GameObject gORect(50.f, 50.f, 100.f, 100.f, sf::Color::Yellow);
    GameObject gORect2(50.f, 50.f, 100.f, 100.f, sf::Color::Blue);
    GameObject gOCirc(100.f, 100.f, 100.f, sf::Color::Red);
    GameObject gOCirc2(10.f, 10.f, 10.f, sf::Color::Green);
    //Création d'une fenêtre
    gORect.setRotation(35);
    gORect.setDirection();
    sf::RenderWindow oWindow(sf::VideoMode(1280, 720), "Casse brique");

    if (rect_overlap(gORect, gORect2))
        printf("ca marche");

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
        gORect.move(elapsedTime);

        //DRAW
        oWindow.clear();

        //draw gORect
        gORect.drawShape(oWindow);
        gOCirc.drawShape(oWindow);

        oWindow.display();
    }
}

int main(int argc, char** argv)
{
    Game();
}

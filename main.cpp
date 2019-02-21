#include <iostream>
#include <SFML/Graphics.hpp>
#include "eventmanager.h"
#include "drawmanager.h"
#include "eventhandler.h"
#include <map>

int main()
{
    sf::RenderWindow window(sf::VideoMode(Resolution.x, Resolution.y), Title);
    sf::View view( sf::FloatRect(0,0,1600,900));

//        int counter = 0;
//        int indicator = 0;

    EventHandler eventHandler();
    EventManager eventManger();
    DrawManager drawManager();
    while(window.isOpen())
    {
        eventManger().Execute(eventHandler(),window);

//        float Velocity = 0.05;
//        int Edge = 30;

        window.clear();
        drawManager().DrawTmpText(&window, "arial.ttf", TmpText);
//        Scroll(&window, &view, 30, 0.05);
        window.setView(view);
        window.display();
    }
}

#ifndef DRAWMANAGER_H
#define DRAWMANAGER_H
#include <SFML/Graphics.hpp>




class DrawManager
{
public:
    DrawManager();

    sf::RenderWindow window;
    void drawObject();
};

#endif // DRAWMANAGER_H

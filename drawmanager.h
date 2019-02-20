#ifndef DRAWMANAGER_H
#define DRAWMANAGER_H
#include <SFML/Graphics.hpp>

class DrawManager
{
public:
    void DrawTmpText(sf::RenderWindow* window, std::string fontPath, std::string TmpText);
};

#endif // DRAWMANAGER_H

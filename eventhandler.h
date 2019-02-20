#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include <SFML/Graphics.hpp>

class EventHandler
{
public:
    void EHClose(sf::RenderWindow window);
    void TransformText(int* counter, int* indicator, std::string* AppText, std::string* TmpText);
};

#endif // EVENTHANDLER_H

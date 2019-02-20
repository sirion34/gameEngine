#include "eventhandler.h"
#include <SFML/Graphics.hpp>

EventHandler::EventHandler()
{
public:
    void EHClose(sf::RenderWindow window)
    {
        window.close();
    }

    void TransformText(int* counter, int* indicator, std::string* AppText, std::string* TmpText)
    {

        if (*indicator == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                if ((*AppText)[j + *(counter)*4] == *"\0")
                {
                    *indicator = 1;
                    break;
                }
                else
                {
                    *TmpText += (*AppText)[j + (*counter)*4];
                }
            }
            if(*indicator == 0){(*counter)++;}
        }
        fflush(0);
    }
}

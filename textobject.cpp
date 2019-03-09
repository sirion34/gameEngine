#include "textobject.h"
#include "drawmanager.h"

TextObject::TextObject()
{

}


void TextObject::DrawTextObject()
{
    if (*renderer!=0)
    {
        DrawManager.drawObject();
    }
}

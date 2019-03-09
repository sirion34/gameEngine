#ifndef RENDERER_H
#define RENDERER_H
#include<gameobject.h>

class Renderer
{
public:
    Renderer();
    Renderer(GameObject* obj) : mesh(obj)
    {}

    GameObject* mesh;
};

#endif // RENDERER_H

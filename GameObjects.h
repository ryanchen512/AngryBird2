#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <iostream>
using namespace std;

class GameObject
{
public: 
    virtual void update();
    virtual void Draw();
    virtual pair<float, float> getPosition();
};


class PhysicalObject: GameObject
{

private:
    float velocity, acceleration;
};

#endif GAMEOBJECT_H
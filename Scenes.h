#ifndef SCENE_H
#define SCENE_H
#include <vector>
#include "GameObjects.h"

using namespace std;

class Scene
{
public:
    virtual void init();
    virtual void update();
    virtual void process_event();
    virtual void draw();

};

class MenuScene: public Scene {
private:
    vector<GameObject> objects;
};

class LevelOneuScene: public Scene {
    private:
    vector<GameObject> objects;
};

class LevelTwouScene: public Scene {
    private:
    vector<GameObject> objects;
};


class LevelThreeuScene: public Scene {
    private:
    vector<GameObject> objects;
};

#endif Scene_H
#ifndef Scene_H
#define Scene_H
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

class MenuScene: Scene {
private:
    vector<GameObject> objects;
};

class LevelOneuScene: Scene {
    private:
    vector<GameObject> objects;
};

class LevelTwouScene: Scene {
    private:
    vector<GameObject> objects;
};


class LevelThreeuScene: Scene {
    private:
    vector<GameObject> objects;
};

#endif Scene_H

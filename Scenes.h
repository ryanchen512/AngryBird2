#ifndef Scene_H
#define Scene_H
#include <vector>
#include "GameObjects.h"
#include "global.h"
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
    public:
    void init();
    void update();
    void process_event();
    void draw();
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

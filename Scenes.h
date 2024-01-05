#ifndef SCENE_H
#define SCENE_H
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

<<<<<<< HEAD
class MenuScene: Scene {
    public:
    void init();
    void update();
    void process_event();
    void draw();
    private:
=======
class MenuScene: public Scene {
private:
>>>>>>> 9ce8e98a9718b1f0926be95a6bbea21d05aa6469
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
#include <vector>
#include "GameObject.h"

using namespace std;

class Scene
{
public:
    virtual void init();
    virtual void update();
    virtual void draw();
    virtual void process_event();
    virtual void destroy();
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


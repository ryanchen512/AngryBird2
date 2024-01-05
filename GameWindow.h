#include "Scene.h"

class GameWindow
{
public:
    void game_init();
    void game_play();
    void game_update();
    void game_draw();
private:
    Scene currentScene;
};

class GameModel: Model
{
public:
    bool isStopGame = false;
};



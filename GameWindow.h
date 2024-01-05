#include "Scene.h"

class GameWindow
{
public:
    void game_init();
    void game_play();
private:
    GameModel& model;
};

class GameModel: Model
{
public:
    bool isStopGame = false;
    Scene currentScene;
};



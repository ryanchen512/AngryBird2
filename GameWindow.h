#ifndef GAME_H
#define GAME_H
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
    Scene &currentScene;
};



#endif GAME_H
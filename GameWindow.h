#ifndef GAME_H
#define GAME_H
#include "Scenes.h"
#include "Model.h"
#include "GameWindow.h"
#include "global.h"
#include <vector>
#include <list>
#include <time.h>
float FPS=60.0;


class GameModel: Model
{
public:
    bool isStopGame = false;
    Scene &currentScene;
};
class GameWindow
{
public:
    void game_init();
    void game_play();
    void game_destroy();
private:
    GameModel &model= dynamic_cast<GameModel&> (ModelRepositary::shared.accessModel("game"));
};


#endif GAME_H

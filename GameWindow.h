<<<<<<< HEAD
#include "Scenes.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <vector>
#include <list>
#include <time.h>
float FPS=60.0;
=======
#ifndef GAME_H
#define GAME_H
#include "Scene.h"

>>>>>>> ef29be30758a2c1b682b1c87224ec2f3538b480e
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
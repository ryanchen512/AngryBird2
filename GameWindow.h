#ifndef GAME_H
#define GAME_H
#include "Scenes.h"
#include "Model.h"
#include "GameWindow.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

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
private:
    GameModel &model= dynamic_cast<GameModel&> (ModelRepositary::shared.accessModel("game"));
};


#endif GAME_H

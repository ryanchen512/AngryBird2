#include "Scenes.h"
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <vector>
#include <list>
#include <time.h>
float FPS=60.0;
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



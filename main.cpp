
#include <allegro5/allegro.h>
#include "GameWindow.h"


using namespace std;

int main()
{
    GameWindow game;
    game.game_init();
    game.game_play();
    game.game_destroy();
    return 0;
}

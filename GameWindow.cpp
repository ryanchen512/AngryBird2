#include <GameWindow.h>
#include "Model.h"



void GameWindow::game_init()
{
    al_init();
    al_init_primitives_addon();
}

void game_play()
{
    while (ModelRepositary.shared) {
        game_update();
        game_draw();
    }
}
void game_update()
{

}
void game_draw()
{

}


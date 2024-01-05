#include <GameWindow.h>

void GameWindow::game_init()
{
    al_init();
    al_init_primitives_addon();
}
void game_play()
{
    while (true) {
        game.GameUpdate();
        game.GameDraw();
    }
}
void game_update()
{

}
void game_draw()
{
    
}


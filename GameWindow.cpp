#include <GameWindow.h>
#include "Model.h"



void GameWindow::game_init()
{
    al_init();
    al_init_primitives_addon();
}

void game_play()
{
    GameModel& model = dynamic_cast<GameModel&> (ModelRepositary::shared.accessModel("game"));
    while (!model.isStopGame) {
        cleanWindow();
        currentScene.update();
        currentScene.draw();
    }
}


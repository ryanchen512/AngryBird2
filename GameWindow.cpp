#include <GameWindow.h>
#include "Scene.h"
#include "Model.h"



void GameWindow::game_init()
{
    model = dynamic_cast<GameModel&> (ModelRepositary::shared.accessModel("game"));
    model.currentScene = *(new MenuScene);
    model.currentScene.init();
}

void GameWindow::game_play()
{
    while (!model.isStopGame) {
        currentScene.update();
        currentScene.draw();
    }
}


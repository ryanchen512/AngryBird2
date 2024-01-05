#include "Scenes.h"

void MenuScene::process_event(){
    ALLEGRO_EVENT event;
    al_wait_for_event(event_queue, &event);
    if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        return GAME_TERMINATE;
}
void MenuScene::update(){

}
void MenuScene::draw(){

}
void MenuScene::destroy(){

}
#include "Scenes.h"

void MenuScene::process_event(){
    ALLEGRO_EVENT event;
    al_wait_for_event(event_queue, &event);
    if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
        model.isStopGame=1;
    }
        
}
void MenuScene::update(){

}
void MenuScene::draw(){

}
void MenuScene::destroy(){

}
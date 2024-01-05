#include <GameWindow.h>
#include "Model.h"
#include "global.h"


void GameWindow::game_init()
{   
    printf( "Game Initializing...\n" );
    al_init();
    // init audio
    al_install_audio();
    al_init_acodec_addon();
    // Create display
    display = al_create_display(1920, 1080);
    // create event queue
    event_queue = al_create_event_queue();
    // Initialize Allegro settings
    al_set_window_position(display, 0, 0);
    al_set_window_title(display, title);
    al_init_primitives_addon();
    al_init_font_addon(); // initialize the font addon
    al_init_ttf_addon(); // initialize the ttf (True Type Font) addon
    al_init_image_addon(); // initialize the image addon
    al_init_acodec_addon(); // initialize acodec addon
    al_install_keyboard(); // install keyboard event
    al_install_mouse();    // install mouse event
    al_install_audio();    // install audio event
    // Register event
    al_register_event_source(event_queue, al_get_display_event_source( display ));
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_mouse_event_source());
    fps  = al_create_timer( 1.0 / FPS );
    al_register_event_source(event_queue, al_get_timer_event_source( fps )) ;
    // initialize the icon on the display
    ALLEGRO_BITMAP *icon = al_load_bitmap("./image/395637DD-F8DB-4529-ACDD-80206D72189D.png");
    al_set_display_icon(display, icon);
    model = dynamic_cast<GameModel&> (ModelRepositary::shared.accessModel("game"));
    model.currentScene = *(new MenuScene);
    model.currentScene.init();
}

void GameWindow::game_play()
{
    while (!model.isStopGame){
        currentScene.process_event();
        currentScene.update();
        currentScene.draw();
    }

}


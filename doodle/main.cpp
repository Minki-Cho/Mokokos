#include "Game.h"
#include "Input.h"
#include "sfml-sound.h"
#include <doodle/window.hpp>




int main(void)
{
    doodle::create_window(1024, 1024);
    Game game;

    game.Setup();
    game_sound.pre_loadSound();
    while (!doodle::is_window_closed())
    {
        doodle::update_window();
        game.Update();
        game.Draw();
    }


    return 0;
}

void on_key_pressed(KeyboardButtons button)
{

    input.key_pressed(button);
    
}
void on_key_released(KeyboardButtons button)
{
    input.key_released(button);
    game_sound.Playsound(static_cast<int>(Sounds::collision));
}
void on_mouse_released(MouseButtons button)
{
    input.mouse_released(button);
  
}
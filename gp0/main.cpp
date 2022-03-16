#include <iostream>
#include <doodle/doodle.hpp>
#include "game.h"
using namespace doodle;

inline Game game;

int main(void)
{
    doodle::create_window(1024, 1024);
    set_frame_of_reference(FrameOfReference::RightHanded_OriginBottomLeft);
    while (!doodle::is_window_closed())
    {
        doodle::update_window();
        clear_background(0);

        if (state == GameState::Map1)
        {
            game.Update();
            game.Draw();
        }
        else
        {
            
            draw_rectangle(0, 0, 1000);
            draw_text("nextmap", 400, 0);
            game.PlayerMovement();
        }
       
    }

    return 0;
}
void on_key_pressed(KeyboardButtons button)
{
    game.key_pressed(button);
}
void on_key_released(KeyboardButtons button)
{
    game.key_released(button);
}
void on_mouse_released(MouseButtons button)
{
    game.mouse_released(button);
}


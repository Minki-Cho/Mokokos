#include <iostream>
#include <doodle/doodle.hpp>
#include "game.h"
#include "map2.h"
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
            
            game.RoomWall();
            game.Draw();
            map.TrapDoor();
            game.PlayerDraw();
            game.PlayerMovement();
            game.Room1Door();
            
            map.Door3();
            map.Picture();
            
        }
        else if (state == GameState::Map2)
        { 
            map.draw_background();
            game.RoomWall();
            game.PlayerMovement();
            game.PlayerDraw();
            game.Room2Door();
            map.itemPickup();
        }
        else if (state == GameState::Map3)
        {
            push_settings();
            set_fill_color(255);
            draw_text("Clear!", 400, 500);
            pop_settings();
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


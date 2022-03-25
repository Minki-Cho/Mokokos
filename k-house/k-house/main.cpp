#include "Game.h"
#include "Input.h"
#include <doodle/window.hpp>

int main(void)
{
    doodle::create_window(1024, 1024);
    Game game;

    game.Setup();

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
}
void on_mouse_released(MouseButtons button)
{
    input.mouse_released(button);
}

#include "Game.h"
#include <doodle/window.hpp>

int main(void)
{
    doodle::create_window(1024, 800);
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
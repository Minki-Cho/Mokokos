#include "Gameover.h"
#include <iostream>
#include <doodle/image.hpp>
#include <doodle/doodle.hpp>
Gameover::Gameover(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Gameover create!\n";
}

void Gameover::Update()
{
}

void Gameover::Draw() const
{
    doodle::push_settings();
    doodle::set_image_mode(doodle::RectMode::Center);
    doodle::draw_image(tobe, 0, 0,doodle::Width , doodle::Height);
    doodle::pop_settings();

}

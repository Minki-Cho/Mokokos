#include "GamePlay.h"
#include "GameScene.h"
#include "Player.h"
#include <doodle/doodle.hpp>

Map5::Map5(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map5 create!\n";
}
void Map5::Update()
{
    player.Update();
    ghost.Update();
    wall_collision();
    Map5_Door();
}

void Map5::Draw() const
{
    push_settings();
    apply_scale(4.0, 4.0);
    set_image_mode(doodle::RectMode::Center);
    doodle::draw_image(Basement, 0, 0);
    pop_settings();
    player.Draw();
    ghost.Draw();
}

void Map5::wall_collision()
{
    if (playMoving_x < -420) // left wall
    {
        playMoving_x += 3.5;
    }
    if (playMoving_x > 350) // right wall
    {
        playMoving_x -= 3.5;
    }
    if (playMoving_y > 330) // up wall
    {
        playMoving_y -= 3.5;
    }
    if (playMoving_y < -400) // down wall
    {
        playMoving_y += 3.5;
    }
}



void Map5::Map5_Door()
{
    if (playMoving_x <= -390)
    {
        if (playMoving_y >= 300 && playMoving_y <= 330)
        {
            GameScene::game().QueueNextPlayScene(PlayScenes::Map4);
            playMoving_x = 70;
            playMoving_y = 150;
        }
    }
}
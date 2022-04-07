#include "Map3.h"
#include "GamePlay.h"
#include "GameScene.h"
#include "Player.h"
#include <doodle/doodle.hpp>

Map3::Map3(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map3 create!\n";
}
void Map3::Update()
{
    player.Update();
    ghost.Update();
    wall_collision();
    Map3_Door();
}

void Map3::Draw() const
{
    push_settings();
    doodle::set_image_mode(doodle::RectMode ::Center);
    doodle::draw_image(library, 0, 0, 800, 600);
    pop_settings();
    player.Draw();
    ghost.Draw();
}

void Map3::wall_collision()
{
    if (playMoving_x < -390) // left wl
    {
        playMoving_x += 3.5;
    }
    if (playMoving_x > 330) // right wall
    {
        playMoving_x -= 3.5;
    }
    if (playMoving_y > 287) // up wall
    {
        playMoving_y -= 3.5;
    }
    if (playMoving_y < -340) // down wall
    {
        playMoving_y += 3.5;
    }
}

void Map3::Map3_Door()
{
    if (playMoving_x < -363 && playMoving_y < 31 && playMoving_y > -21)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map1);
        playMoving_x = 270;
        playMoving_y = 10;
    }
}
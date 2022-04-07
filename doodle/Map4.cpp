#include "GamePlay.h"
#include "GameScene.h"
#include "Map3.h"
#include "Player.h"
#include <doodle/doodle.hpp>

Map4::Map4(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map4 create!\n";
}
void Map4::Update()
{
    player.Update();
    ghost.Update();
    wall_collision();
    Map4_Door();
}

void Map4::Draw() const
{
    push_settings();

    doodle::draw_image(Frame1, -512, -512);
    pop_settings();
    player.Draw();
    ghost.Draw();
}

void Map4::wall_collision()
{
    if (playMoving_x < -390) // left wall
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

void Map4::Map4_Door()
{
    if (playMoving_y <= -337 && playMoving_x < 4 && playMoving_x > -60)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map1);
        playMoving_x = -35;
        playMoving_y = 340;
    }
}

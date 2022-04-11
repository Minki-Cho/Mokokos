#include "Map2.h"
#include <doodle/doodle.hpp>
#include "Player.h"
#include "GamePlay.h"
#include "GameScene.h"
#include "Item.h"
#include <iostream>
using namespace std;

Map2::Map2(GamePlay& game_scene) : GameScene(game_scene), object2(0, 0)
{
    std::cout << "Map2 create!\n";
}
void Map2::Update()
{
    object2.Update();
    player.Update();
    ghost.Update();
    wall_collision();
    Map2_Door();
}

void Map2::Draw() const
{
    doodle::draw_image(bed, -512, -512);
     object2.Draw();
    player.Draw();
    ghost.Draw();
}

void Map2::wall_collision()
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

void Map2::Map2_Door()
{
    if (playMoving_x > 328 && playMoving_y > -91 && playMoving_y < 35)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map1);
        playMoving_x = -325;
    }
}


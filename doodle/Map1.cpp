#include "Map1.h"
#include <iostream>
#include <doodle/doodle.hpp>
#include "Player.h"
#include "GamePlay.h"
#include "GameScene.h"
#include "Inventory.h"

Map1::Map1(GamePlay& game_scene) : GameScene(game_scene), object1(0,0)
{
	std::cout << "Map1 create!\n";
	
}

void Map1::Update()
{
    object1.Update();
	player.Update();
	wall_collision();
    ghost.Update();
    Map1_Door();
}

void Map1::Draw() const
{
	doodle::draw_image(hall, -512, -512);
	player.Draw();
    ghost.Draw();
    object1.Draw();
    inventory.Draw();
}
void Map1::wall_collision()
{
	if (playMoving_x < -340) // left wall
	{
		playMoving_x += 3.5;
	}
    if (playMoving_x > 277) // right wall
    {
        playMoving_x -= 3.5;
    }
    if (playMoving_y > 340) // up wall
    {
        playMoving_y -= 3.5;
    }
    if (playMoving_y < -322 && playMoving_x < -77 ) //down wall, left
    {
        playMoving_y += 3.5;
    }
    if (playMoving_y < -322 && playMoving_x > 10 ) //down wall, right
    {
        playMoving_y += 3.5;
    }
    if ((playMoving_y < 233 && playMoving_y > 175 && playMoving_x > 63 )) //right stair up
	{
		playMoving_y -= 3.5;
	}
    if (playMoving_y < 236 && playMoving_y > 175 && playMoving_x > 63) //right stair down
    {
        playMoving_y += 3.5;
    }
    if (playMoving_y < 233 && playMoving_y > 175 && playMoving_x < -140) // left stair up
    {
        playMoving_y -= 3.5;
	}
    if (playMoving_y < 236 && playMoving_y > 175 && playMoving_x < -140) //left stair down
    {
        playMoving_y += 3.5;
    }
}

void Map1::Map1_Door()
{
    if (playMoving_x <= -339 && playMoving_y < 31 && playMoving_y > -21)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map2);
        playMoving_x = 339;
        playMoving_y = 36;
    }

      if (playMoving_x >= 272 && playMoving_y < 31 && playMoving_y > -21)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map3);
        playMoving_x = -339;
        playMoving_y = 36;
    }

        if (playMoving_y >= 335 && playMoving_x < 4 && playMoving_x > -60)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map4);
        playMoving_x = -35;
        playMoving_y = -335;
    }
}
#include "Map1.h"
#include <iostream>
#include <doodle/doodle.hpp>
#include "Player.h"


Map1::Map1(GamePlay& game_scene)
	:GameScene(game_scene)
{
	std::cout << "Map1 create!\n";
	
}

void Map1::Update()
{
	player.Update();
	wall_collision();
    ghost.Update();
}

void Map1::Draw() const
{
	doodle::draw_image(hall, -512, -512);
	player.Draw();
    ghost.Draw();
	
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
    //if (playMoving_x < -340 && playMoving_y < )
}
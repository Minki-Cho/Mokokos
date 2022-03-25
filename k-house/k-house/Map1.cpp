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
}

void Map1::Draw() const
{
	player.Draw();
	//doodle::draw_ellipse(0, 0, 100, 100);
}
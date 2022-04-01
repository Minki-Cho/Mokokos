#pragma once
#include <doodle/doodle.hpp>
#include "GameScene.h"
#include "Ghost.h"

class Map1 final : public GameScene
{
	doodle::Image hall{ "assets/Hall.png" };
public:
	
	Map1(GamePlay& game_scene);

	void Update() override;
	void Draw() const override;
	void wall_collision();
};
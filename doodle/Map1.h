#pragma once
#include <doodle/doodle.hpp>
#include "GameScene.h"
#include "Ghost.h"
#include "Object.h"

class Map1 final : public GameScene
{
private:
    Object object1;
	doodle::Image hall{ "assets/Hall.png" };
public:
	
	Map1(GamePlay& game_scene);
	void Update() override;
	void Draw() const override;
	void wall_collision();
    void Map1_Door();
};
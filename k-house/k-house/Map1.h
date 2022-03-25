#pragma once

#include "GameScene.h"

class Map1 final : public GameScene
{
public:
	Map1(GamePlay& game_scene);

	void Update() override;
	void Draw() const override;
};
#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include <doodle/doodle.hpp>

class Map5  final : public GameScene
{
    doodle::Image Basement{ "assets/Basement.png" };

public:
    Map5(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map5_Door();
};
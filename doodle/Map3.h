#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include <doodle/doodle.hpp>
class Map3 final : public GameScene
{
    doodle::Image library{ "assets/library.png" };

public:
    Map3(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map3_Door();
};
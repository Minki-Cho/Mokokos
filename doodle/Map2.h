#pragma once
#include <doodle/doodle.hpp>
#include "GameScene.h"
#include "Ghost.h"

class Map2 final : public GameScene
{
    doodle::Image bed{ "assets/Back_Ground_-_1.png" };

public:
    Map2(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map2_Door();
};
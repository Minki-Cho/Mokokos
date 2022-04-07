#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include <doodle/doodle.hpp>
class Map4 final : public GameScene
{
    doodle::Image Frame1{ "assets/Frame_animation/Frame1.png" };

public:
    Map4(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map4_Door();
};
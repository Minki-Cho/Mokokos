#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include "Object.h"
#include <doodle/doodle.hpp>
class Map5 final : public GameScene
{
    doodle::Image hall{ "assets/Hall.png" };
    Object        object1;

public:
    Map5(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map1_Door();
};
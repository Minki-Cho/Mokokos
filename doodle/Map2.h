#pragma once
#include <doodle/doodle.hpp>
#include "GameScene.h"
#include "Ghost.h"
#include "Object.h"

inline bool Get_Frame = false;

class Map2 final : public GameScene
{
    doodle::Image bed{ "assets/Back_Ground_-_1.png" };
 
    Object object2;

public:
    Map2(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map2_Door();
};
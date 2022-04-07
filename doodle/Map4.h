#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include <doodle/doodle.hpp>

inline bool Frame_Picture = false;
inline double Timer;
class Map4 final : public GameScene
{
    doodle::Image Frame1{ "assets/Frame_animation/Frame1.png" };
    doodle::Image Frame2{ "assets/Frame_animation/Frame2.png" };
    doodle::Image Frame3{ "assets/Frame_animation/Frame3.png" };
    doodle::Image Frame4{ "assets/Frame_animation/Frame4.png" };
    doodle::Image Frame5{ "assets/Frame_animation/Frame5.png" };
    doodle::Image Frame6{ "assets/Frame_animation/Frame6.png" };
    doodle::Image Frame7{ "assets/Frame_animation/Frame7.png" };
    doodle::Image Frame8{ "assets/Frame_animation/Frame8.png" };


public:
    Map4(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map4_Door();



};
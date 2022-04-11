#pragma once
#include "GameScene.h"
#include "Ghost.h"
#include <doodle/doodle.hpp>

inline bool Lever1_Area;
inline bool Lever2_Area;
inline bool Level1_on;
inline bool Level2_on;


class Map5  final : public GameScene
{
    doodle::Image Basement{ "assets/Basement.png" };
    doodle::Image Lever_on{ "assets/Lever_on.png" };
    doodle::Image Lever_off{ "assets/Lever_off.png" };

public:
    Map5(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;
    void wall_collision();
    void Map5_Door();
};
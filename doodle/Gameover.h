#pragma once
#include "GameScene.h"
#include <doodle/doodle.hpp>

class Gameover final : public GameScene
{
    doodle::Image tobe{ "assets/tobecont.png" };

public:
    Gameover(GamePlay& game_scene);

    void Update() override;
    void Draw() const override;

};
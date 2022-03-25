#pragma once
#include <doodle/doodle.hpp>
#include "Scene.h"
#include <doodle/color.hpp>
#include "GamePlay.h"

using namespace doodle;


class PlayScreen final : public Scene
{
    GamePlay gameplay;
public:


    PlayScreen(Game& the_game);

    void Update() override;
    void Draw() const override;

};

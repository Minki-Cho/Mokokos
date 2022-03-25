#include <doodle/doodle.hpp>
#pragma once
#include "Scene.h"

#include <doodle/color.hpp>

using namespace doodle;


class PlayScreen final : public Scene
{
    
public:


    PlayScreen(Game& the_game);

    void Update() override;
    void Draw() const override;

};

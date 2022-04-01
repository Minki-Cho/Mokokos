#pragma once

#include "Button.h"
#include "Scene.h"

class MainMenu final : public Scene
{
    Button play, options, credits;

public:
    MainMenu(Game& the_game);

    void Update() override;
    void Draw() const override;
};

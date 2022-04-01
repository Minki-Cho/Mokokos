
#pragma once

#include "Button.h"
#include "Scene.h"

class OptionsScreen final : public Scene
{
    Button background;
    Button mainMenu;

public:
    OptionsScreen(Game& the_game);

    void Update() override;
    void Draw() const override;
};

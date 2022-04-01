
#pragma once

#include "Button.h"
#include "Scene.h"

class CreditsScreen final : public Scene
{
    Button mainMenu;

public:
    CreditsScreen(Game& the_game);
    ~CreditsScreen() = default;
    void Update() override;
    void Draw() const override;
};

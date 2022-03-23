#include <doodle/doodle.hpp>
#pragma once
#include "Scene.h"

#include <doodle/color.hpp>

using namespace doodle;

inline double playMoving_x{ 512 };
inline double playMoving_y{ 512 };

class PlayScreen final : public Scene
{
    bool w_key{ false };
    bool a_key{ false };
    bool s_key{ false };
    bool d_key{ false };
    bool space_key{ false };
public:


    PlayScreen(Game& the_game);

    void Update() override;
    void Draw() const override;
    void key_pressed(KeyboardButtons button);
    void key_released(KeyboardButtons button);
    void mouse_released(MouseButtons button);
};

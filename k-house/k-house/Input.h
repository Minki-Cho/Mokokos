#pragma once
#include <doodle/doodle.hpp>
#include <iostream>

using namespace doodle;
inline double playMoving_x{ 0 };
inline double playMoving_y{ 0 };

class Input
{
    double acceleration_x{ 0 };
    double acceleration_y{ 0 };
    static constexpr double player_speed{ 3.5 };
public:
    bool w_key{ false };
    bool a_key{ false };
    bool s_key{ false };
    bool d_key{ false };
    bool g_key{ false };
    void key_pressed(KeyboardButtons button);
    void key_released(KeyboardButtons button);
    void mouse_released(MouseButtons button);
    void PlayerMovement();
};

inline Input input;


#pragma once
#include "Input.h"
#include <doodle/doodle.hpp>
class Ghost
{
    doodle::Image ghost{ "assets/Ghost.png" };
    doodle::Image Ghost_Left{ "assets/Ghost_Left.png" };
    doodle::Image Ghost_Right{ "assets/Ghost_Right.png" };
   

public:
    double x{ 0 };
    double y{ 0 };
    // Ghost() = default;
    void Draw()
    {
        push_settings();
        set_image_mode(RectMode::Corner);
        set_tint_color(255, 190);
        if (x > playMoving_x)
        {
            doodle::draw_image(Ghost_Left, x, y, 100, 100);
        }
        else
        {
            doodle::draw_image(Ghost_Right, x, y, 100, 100);
        }
            


        pop_settings();
    }
    void Update()
    {
        const double chasing = 0.8 * doodle::DeltaTime;
        x += chasing * (playMoving_x - x);
        y += chasing * (playMoving_y - y);
    }
};
inline Ghost ghost;

#pragma once
#include "Input.h"
#include <doodle/doodle.hpp>
//#include "sfml-sound.h"
class Ghost
{
    doodle::Image ghost{ "assets/Ghost.png" };
    doodle::Image Ghost_Left{ "assets/Ghost_Left.png" };
    doodle::Image Ghost_Right{ "assets/Ghost_Right.png" };
    bool          ghost_collision{ false };
    double           shake     = 1.0;
    const double MaxAngle  = QUARTER_PI / 20.0;
    const double MaxOffset = 10.0;

public:
    double x{ 0 };
    double y{ 0 };
    // Ghost() = default;
    void Draw()
    {
        push_settings();
        set_image_mode(RectMode::Corner);
        set_tint_color(255, 190);
        apply_scale(1.5);
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
        const double chasing = 0.3 * doodle::DeltaTime;
        x += chasing * (playMoving_x - x);
        y += chasing * (playMoving_y - y);
        if (sqrt((x - playMoving_x ) * (x - playMoving_x ) + (y - playMoving_y ) * (y - playMoving_y)) < 70)
        {
            ghost_collision = true;
        }
        else
        {
            ghost_collision = false;
        }

        if (ghost_collision)
        {
            shake += 0.03;
            shake = std::clamp(shake, 0.0, 1.0);
            
        }
        if (shake > 0 && ghost_collision)
        {
            const double offsetX = MaxOffset * shake * random(-1.0, 1.0);
            const double offsetY = MaxOffset * shake * random(-1.0, 1.0);
            const double angle   = MaxAngle * shake * random(-1.0, 1.0);
            apply_translate(offsetX, offsetY);
            apply_rotate(angle);
            shake -= DeltaTime;
            shake = std::clamp(shake, 0.0, 1.0);
        }

    }
};
inline Ghost ghost;

#include <iostream>
#include "Object.h"
#include "Input.h"
#include <cmath>
Object::Object(double x, double y)
	:object_x(x), object_y(y)
{
	std::cout << "Object is created" << object_x << object_y << "\n";
}

Object::~Object()
{
	std::cout << "Object is destroyed ";
}

void Object::Update()
{
    Collision();
}

void Object::Draw() const
{
	doodle::push_settings();

	doodle::set_fill_color(255, 255, 255);
	doodle::draw_ellipse(object_x, object_y, 100, 100);
    if (pick_up == true)
    {
        doodle::draw_ellipse(object_x, object_y, 1100, 1100);
    }
    doodle::pop_settings();
}

void Object::Collision()
{
    distance_x = object_x - playMoving_x;
    distance_y = object_y - playMoving_y;
    distance   = std::sqrt(distance_x * distance_x + distance_y * distance_y);
    // std::cout << distance << "\n";

    if (distance <= 100)
    {
        // doodle::draw_ellipse(object_x, object_y, 1100, 1100);
        if (input.g_key == true)
        {
            pick_up = true;
        }
        else
        {
            pick_up = false;
        }
    }


}
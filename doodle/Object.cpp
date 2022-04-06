#include "ItemKey.h"
#include "Object.h"
#include "Input.h"
#include <cmath>
#include <iostream>
#include "Inventory.h"
Object::Object(double x, double y) : object_x(x), object_y(y)
{
    item = new ItemKey();
    std::cout << "Object is created" << object_x << object_y << "\n";
}

Object::~Object()
{
    std::cout << "Object is destroyed ";
    delete item;
}

void Object::Update()
{
    Collision();
}

void Object::Draw() const
{
    doodle::push_settings();
    
    //doodle::set_fill_color(255, 255, 255);
    //doodle::draw_ellipse(object_x, object_y, 100, 100);
    if (pick_up == false)
        doodle::draw_image(object,object_x,object_y,100,100);
    else
        doodle::draw_image(activated_object, object_x, object_y, 100, 100);
    
    doodle::pop_settings();
}

void Object::Collision()
{
    distance_x = object_x - playMoving_x;
    distance_y = object_y - playMoving_y;
    distance   = std::sqrt(distance_x * distance_x + distance_y * distance_y);
     //std::cout << doodle::Width << "\n";

    if (distance <= 100)
    {
        // doodle::draw_ellipse(object_x, object_y, 1100, 1100);
        if (input.g_key == true)
        {
            interaction_time += DeltaTime;
        }
        else
        {
            interaction_time = 0;
        }
    }
    //3_time_
    if (interaction_time >= 3)
    {
        pick_up = true;

    }

    if (pick_up == true && have_object == false)
    {
        std::cout << "!!\n";
        inventory.Add(item);
        have_object = true;
        // doodle::draw_ellipse(object_x, object_y, 1100, 1100);
    }
}
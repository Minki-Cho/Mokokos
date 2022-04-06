#pragma once
#include <doodle/doodle.hpp>
#include "ItemKey.h"
class Object
{
private:
    double object_x;
    double object_y;
    double distance_x = 0;
    double distance_y = 0;
    double distance   = 0;


    double interaction_time = 0;
    bool have_object = false;
    bool pick_up = false;
    Item* item;
    const doodle::Image object{ "assets/Chest.png" };
    const doodle::Image activated_object{ "assets/Chest_open.png" };


public:
    Object(double x, double y);

    ~Object();

    void Update();
    void Draw() const;

    void Collision();

    double Get_x() const { return object_x; }
    double Get_y() const { return object_y; }
};
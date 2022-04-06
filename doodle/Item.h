#pragma once
#include "doodle/doodle.hpp"
class Item
{
private:

public:
    virtual void Draw(double x, double y, double draw_width, double draw_height) const;
};
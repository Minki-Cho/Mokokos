#pragma once
#include "doodle/doodle.hpp"


class Item
{
private:

public:
    virtual void Draw(double x, double y, double draw_width, double draw_height) const;
    virtual void Update(double x, double y, double draw_width, double draw_height, bool Stats);
    virtual void Image_Draw(doodle::Image image, double x, double y, double draw_width, double draw_height);
};

inline Item item;
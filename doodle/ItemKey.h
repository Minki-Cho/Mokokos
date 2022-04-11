#pragma once
#include "Item.h"

class ItemKey : public Item
{
private:

    doodle::Image Whale{ "assets/item/Whale.png" };


public:
    void Draw(double x, double y, double draw_width, double draw_height) const;
};
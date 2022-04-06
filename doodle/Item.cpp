#include "Item.h"

void Item::Draw(double x, double y,double draw_width, double draw_height) const
{
    doodle::draw_ellipse(x, y, draw_width, draw_height);
}
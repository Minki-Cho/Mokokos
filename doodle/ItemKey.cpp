#include "ItemKey.h"

void ItemKey::Draw(double x, double y, double draw_width, double draw_height) const
{
    doodle::draw_image(image, x, y, draw_width, draw_height);
}
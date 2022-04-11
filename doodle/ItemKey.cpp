#include "ItemKey.h"

void ItemKey::Draw(double x, double y, double draw_width, double draw_height) const
{
    doodle::push_settings();

    doodle::draw_image(Whale, x, y, draw_width, draw_height);
    doodle::pop_settings();
}
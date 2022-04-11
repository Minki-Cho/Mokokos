#include "Item.h"
#include "Map2.h"
#include "Player.h"
#include <iostream>
using namespace std;
void Item::Draw(double x, double y, double draw_width, double draw_height) const
{
    doodle::draw_ellipse(x, y, draw_width, draw_height);
}


void Item::Update(double x, double y, double draw_width, double draw_height, bool& Stats)
{
    push_settings();
    set_image_mode(doodle::RectMode::Center);
    draw_rectangle(x, y, draw_width, draw_height);
    if (x - draw_width / 2 < playMoving_x && x + draw_width / 2 > playMoving_x)
    {
        if (y - draw_height / 2 < playMoving_y && y + draw_height / 2 > playMoving_y)
        {
            Stats = true;
        }
    }
    pop_settings();
}


void Item::Image_Draw(Image image, double x, double y, double draw_width, double draw_height)
{
    doodle::push_settings();
    set_image_mode(doodle::RectMode::Center);
    doodle::draw_image(image, x, y, draw_width, draw_height);
    doodle::pop_settings();
}
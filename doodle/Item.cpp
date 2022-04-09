#include "Item.h"
#include "Player.h"
#include <iostream>
using namespace std;
void Item::Draw(double x, double y,double draw_width, double draw_height) const
{

    doodle::draw_ellipse(x, y, draw_width, draw_height);
}



void Item::Update(double x, double y, double draw_width, double draw_height , bool Stats) 
{
    Stats = true;
    set_image_mode(doodle::RectMode::Center);
    if (x - draw_width / 2 < playMoving_x && x + draw_width /2 > playMoving_x)
    {
        if (y - draw_height / 2 < playMoving_y && y + draw_height / 2 > playMoving_y)
        {
            draw_ellipse(0, 0, 100);
        }
    }
}



void Item::Image_Draw(Image image, double x, double y, double draw_width, double draw_height)
{
    set_image_mode(doodle::RectMode::Center);
    doodle::draw_image(image,x, y, draw_width, draw_height);
}
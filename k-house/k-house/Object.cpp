#include <doodle/doodle.hpp>
#include <iostream>
#include "Object.h"

Object::Object(double x, double y)
	:object_x(x), object_y(y)
{
	std::cout << "Object is created" << object_x << object_y << "\n";
}

Object::~Object()
{
	std::cout << "Object is destroyed ";
}

void Object::Update()
{

}

void Object::Draw() const
{
	doodle::push_settings();

	doodle::set_fill_color(255,255,255);
	doodle::draw_ellipse(object_x, object_y, 100, 100);
	
	doodle::pop_settings();
}


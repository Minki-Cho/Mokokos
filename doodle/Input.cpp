#include "Input.h"

using namespace doodle;

void Input::PlayerMovement()
{
	playMoving_x += acceleration_x;
	playMoving_y += acceleration_y;
	if (w_key)
	{
		playMoving_y = playMoving_y + 3.5;
	}
	else
		acceleration_y = 0;

	if (s_key)
	{
		acceleration_y = -3.5;
	}
	else
		acceleration_y = 0;

	if (a_key)
	{
		playMoving_x = playMoving_x - 3.5;
	}
	else
		acceleration_x = 0;

	if (d_key)
	{
		acceleration_x = 3.5;
	}
	else
		acceleration_x = 0;
}

void Input::key_pressed(KeyboardButtons button)
{
	if (button == KeyboardButtons::W)
	{
		w_key = true;
	}
	if (button == KeyboardButtons::S)
	{
		s_key = true;
	}
	if (button == KeyboardButtons::A)
	{
		a_key = true;
	}
	if (button == KeyboardButtons::D)
	{
		d_key = true;
	}
	if (button == KeyboardButtons::G)
	{
		g_key = true;
	}
    if (button == KeyboardButtons::Tab)
    {
        tap_key = true;
	}
    if (button == KeyboardButtons::E)
    {
        e_key = true;
    }

}

void Input::key_released(KeyboardButtons button)
{
	if (button == KeyboardButtons::W)
	{
		std::cout << "w key\n";
		w_key = false;
	}
	if (button == KeyboardButtons::S)
	{
		std::cout << "s key\n";
		s_key = false;
	}
	if (button == KeyboardButtons::A)
	{
		std::cout << "a key\n";
		a_key = false;
	}
	if (button == KeyboardButtons::D)
	{
		std::cout << "d key\n";
		d_key = false;
	}
	if (button == KeyboardButtons::G)
	{
		std::cout << "g key\n";
		g_key = false;
	}
    if (button == KeyboardButtons::Tab)
    {
        std::cout << "Tap key\n";
        tap_key = false;
    }
    if (button == KeyboardButtons::E)
    {
        std::cout << "e key\n";
        e_key = false;
    }
}



void Input::mouse_released(MouseButtons button)
{
	if (button == MouseButtons::Left)
	{
		std::cout << "playMoving_x: " << playMoving_x << '\n' << "playMoving_y: " << playMoving_y << '\n';
       
	}
	
}
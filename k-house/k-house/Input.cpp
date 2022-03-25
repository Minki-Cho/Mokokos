#include "Input.h"

using namespace doodle;

void Input::PlayerMovement()
{
	playMoving_x += acceleration_x;
	playMoving_y += acceleration_y;
	if (w_key)
	{
		playMoving_y = playMoving_y + player_speed;
	}
	else
		acceleration_y = 0;

	if (s_key)
	{
		acceleration_y = player_speed;
	}
	else
		acceleration_y = 0;

	if (a_key)
	{
		playMoving_x = playMoving_x - player_speed;
	}
	else
		acceleration_x = 0;

	if (d_key)
	{
		acceleration_x = player_speed;
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
	if (button == KeyboardButtons::Space)
	{
		space_key = true;
	}


}

void Input::key_released(KeyboardButtons button)
{
	if (button == KeyboardButtons::W)
	{
		w_key = false;
	}
	if (button == KeyboardButtons::S)
	{
		s_key = false;
	}
	if (button == KeyboardButtons::A)
	{
		a_key = false;
	}
	if (button == KeyboardButtons::D)
	{
		d_key = false;
	}
	if (button == KeyboardButtons::Space)
	{
		space_key = false;
	}
}

void Input::mouse_released(MouseButtons button)
{
	if (button == MouseButtons::Left)
	{
		std::cout << "playMoving_x: " << playMoving_x << '\n' << "playMoving_y: " << playMoving_y << '\n';
	}
}
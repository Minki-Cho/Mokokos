#include "game.h"
#include <iostream>
#include <doodle/image.hpp>
#include <iostream>

void Game::Draw()
{
	doodle::draw_image(background, 9, 25);
	
}
void Game::PlayerDraw()
{
	push_settings();
	set_image_mode(RectMode::Center);


	if(w_key)
	{
		draw_image(p_back, playMoving_x, playMoving_y,120,170);
	}
	//else draw_image(p_back, playMoving_x, playMoving_y);
	else if(s_key) 
	{
		draw_image(p_front, playMoving_x, playMoving_y, 120, 170);
	}
	//else draw_image(p_front, playMoving_x, playMoving_y);
	else if(a_key)
	{
		draw_image(p_left, playMoving_x, playMoving_y, 120, 170);
	}
	//else draw_image(p_left, playMoving_x, playMoving_y);
	else if(d_key)
	{
		draw_image(p_right, playMoving_x, playMoving_y, 120, 170);
	}
	else draw_image(p_right, playMoving_x, playMoving_y,120,170);

	pop_settings();
	
}
void Game::Room1Door()
{
	if (playMoving_x < 163)
	{
		if (playMoving_y < 596 && playMoving_y > 445)
		{
			state = GameState::Map2;
			playMoving_x = 860;
		}
	}
}
void Game::Room2Door()
{
	if (playMoving_x > 870)
	{
		if (playMoving_y < 596 && playMoving_y > 445)
		{
			state = GameState::Map1;
			playMoving_x = 161;
		}
	}
}

void Game::RoomWall()
{

	if (playMoving_x < 163)
	{
		playMoving_x += 3.5;
		std::cout << "left";
	}
	if(playMoving_x < 163)
	{
		playMoving_x += 3.5;
		std::cout << "left";
	}
	else if (playMoving_x > 869)
	{
		playMoving_x -= 3.5;
		std::cout << "right";
	}
	else if (playMoving_y < 211)
	{
		playMoving_y += 3.5;
		std::cout << "down";
	}
	else if (playMoving_y > 823)
	{
		playMoving_y -= 3.5;
		std::cout << "up";
	}
}
void Game::PlayerMovement()
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

void Game::key_pressed(KeyboardButtons button)
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

void Game::key_released(KeyboardButtons button)
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

void Game::mouse_released(MouseButtons button)
{
	if (button == MouseButtons::Left)
	{
		std::cout << "playMoving_x: " << playMoving_x << '\n' << "playMoving_y: " << playMoving_y << '\n';
	}
}

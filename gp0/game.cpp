#include "game.h"
#include <iostream>
#include <doodle/image.hpp>
#include <iostream>

void Game::Draw()
{
	doodle::draw_image(background, -10, 50);
	push_settings();
	set_fill_color(100, 123, 123);
	draw_ellipse(playMoving_x, playMoving_y, 30);
	pop_settings();
}
void Game::Update()
{
	Game::PlayerMovement();

	if (playMoving_x < 163  )
	{
		if (playMoving_y < 596 && playMoving_y > 445)
		{
			state = GameState::Map2;
		}
		
	}

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

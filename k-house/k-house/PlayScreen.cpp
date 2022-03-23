
#include "PlayScreen.h"
#include "Game.h"
#include "SceneDrawing.h"

#include <doodle/doodle.hpp>
#include <iostream>

using namespace doodle;

PlayScreen::PlayScreen(Game& the_game) : Scene(the_game)
{
}

void PlayScreen::Update()
{

    
}

void PlayScreen::Draw() const
{

}
void PlayScreen::key_pressed(KeyboardButtons button)
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

void PlayScreen::key_released(KeyboardButtons button)
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

void PlayScreen::mouse_released(MouseButtons button)
{
	if (button == MouseButtons::Left)
	{
		std::cout << "playMoving_x: " << playMoving_x << '\n' << "playMoving_y: " << playMoving_y << '\n';
	}
}
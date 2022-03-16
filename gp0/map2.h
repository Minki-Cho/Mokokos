#pragma once
#include <doodle/doodle.hpp>
#include <iostream>
class Map {
	bool puzzlePiece{ false };
	bool picture{ false };
	const doodle::Image background1{ "Back_Ground_-_1.png" };
	const doodle::Image trapdoor1{ "1.png" };
	const doodle::Image trapdoor2{ "2.png" };
	const doodle::Image trapdoor3{ "3.png" };
	const doodle::Image trapdoor4{ "4.png" };
	const doodle::Image trapdoor5{ "5.png" };
	const doodle::Image trapdoor6{ "6.png" };
	const doodle::Image trapdoor7{ "7.png" };
	const doodle::Image trapdoor8{ "8.png" };
	int time{ 0 };
public:
	void draw_background()
	{
		doodle::draw_image(background1, -5, 30);
	}
	void itemPickup()
	{
		if (485 < playMoving_x && playMoving_x < 515)
		{
			if (485 < playMoving_y && playMoving_y < 515)
			{
				puzzlePiece = true;
			}
		}
		if (puzzlePiece == true)
		{
			//later we wil use
		}
		else
		{
			draw_ellipse(500, 500, 30);
		}
	}
	void Picture()
	{
		if (puzzlePiece == true && state == GameState::Map1)
		{
			if (343 < playMoving_x || playMoving_x < 570)
			{
				if (playMoving_y > 818)
				{
					picture = true;
				}
			}
		}
	}
	void TrapDoor()
	{
		if (picture == true)
		{
			time++;
			if (0 < time && time <= 10)
			{
				draw_image(trapdoor1, 9, 25);
			}
			else if (10 <= time && time <=20)
			{
				draw_image(trapdoor2, 9, 25);
			}
			else if (20 <= time && time <= 30)
			{
				draw_image(trapdoor3, 9, 25);
			}
			else if (30 <= time && time <= 40)
			{
				draw_image(trapdoor4, 9, 25);
			}
			else if (40 <= time && time <= 50)
			{
				draw_image(trapdoor5, 9, 25);
			}
			else if (50 <= time && time <= 60)
			{
				draw_image(trapdoor6, 9, 25);
			}
			else if (60 <= time && time <= 70)
			{
				draw_image(trapdoor7, 9, 25);
			}
			else if (70 <= time)
			{
				draw_image(trapdoor8, 9, 25);
			}
			
		}
	}
	void Door3()
	{
		if (picture = true && 100 < time)
		{
			if (756 < playMoving_x)
			{
				if (playMoving_y < 800 && playMoving_y> 610)
				{
					state = GameState::Map3;
				}
			}
		}
	}
};

inline Map map;

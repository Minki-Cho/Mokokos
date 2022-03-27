#include "Player.h"
Player::Player()
{
}

void Player::Draw()
{
	
	if (input.w_key == true && input.w_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 80, 64, 64);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 64, 80, 64, 64);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 128, 80, 64, 64);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 192, 80, 64, 64);
		}
	}
	else if (input.a_key == true && input.a_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 160, 64, 64);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 64, 160, 64, 64);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 128, 160, 64, 64);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 192, 160, 64, 64);
		}
	}
	else if (input.s_key == true && input.s_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25 )
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 0, 64, 64);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 64, 0, 64, 64);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 128, 0, 64, 64);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 192, 0, 64, 64);
		}
		
	}
	else if (input.d_key == true && input.d_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 240, 64, 64);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 64, 240, 64, 64);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 128, 240, 64, 64);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
			doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 192, 240, 64, 64);
		}
	}
	if (input.point_key == 0 && input.w_key == false)
	{
		doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 80, 64, 64);
	}
	else if (input.point_key == 1 && input.a_key == false)
	{
		doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 160, 64, 64);
	}
	else if (input.point_key == 2 && input.s_key == false)
	{
		doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 0, 64, 64);
	}
	else if (input.point_key == 3 && input.d_key == false)
	{
		doodle::draw_image(player, playMoving_x, playMoving_y, 64, 64, 0, 240, 64, 64);
	}
}
void Player::Update()
{
	input.PlayerMovement();
}
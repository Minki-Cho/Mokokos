#include "Player.h"
#include "sfml-sound.h"

Player::Player()
{
}

void Player::Draw()
{
    doodle::draw_image(player, playMoving_x, playMoving_y, Image_V1_X, Image_V1_Y, Image_V2_X, Image_V2_Y, Image_Width,
                       Image_Height);
	if (input.w_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
            Player_Move(64, 64, 0, 80);
            //game_sound.Playsound(static_cast<int>(Sounds::collision));
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
            Player_Move(64, 64, 64, 80);
           
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
            Player_Move(64, 64, 128, 80);
           
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
            Player_Move(64, 64, 192, 80);
            
		}
	}

	else if (input.a_key == true)
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
            Player_Move(64, 64, 0, 160);
            
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
            Player_Move(64, 64, 64, 160);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
            Player_Move(64, 64, 128, 160);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
            Player_Move(64, 64, 192, 160);
		}
	}
	else if (input.s_key == true )
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25 )
		{
            Player_Move(64, 64, 0, 0);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
            Player_Move(64, 64, 64, 0);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
            Player_Move(64, 64, 128, 0);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
            Player_Move(64, 64, 192, 0);
		}
		
	}
	else if (input.d_key == true )
	{
		if (0 <= FrameCount % 100 && FrameCount % 100 <= 25)
		{
            Player_Move(64, 64, 0, 240);
		}
		if (25 < FrameCount % 100 && FrameCount % 100 <= 50)
		{
            Player_Move(64, 64, 64, 240);
		}
		if (50 < FrameCount % 100 && FrameCount % 100 <= 75)
		{
            Player_Move(64, 64, 128, 240);
		}
		if (75 < FrameCount % 100 && FrameCount % 100 <= 100)
		{
            Player_Move(64, 64, 192, 240);
		}
	}
}
void Player::Update()
{
	input.PlayerMovement();
}






void Player::Player_Move(int Move1_X, int Move1_Y, int Move2_X, int Move2_Y)
{

    Image_V1_X = Move1_X;
    Image_V1_Y = Move1_Y;
    Image_V2_X = Move2_X;
    Image_V2_Y = Move2_Y;
}


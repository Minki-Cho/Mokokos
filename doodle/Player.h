#pragma once
#include "Input.h"
#include <doodle/doodle.hpp>

class Player {

	doodle::Image player{ "assets/player_walking/One_for_All.png" };

public:
	Player();
	void Draw();
	void Update();
    void Player_Move(int Move1_X, int Move1_Y, int Move2_X, int Move2_Y);
	
private:
    int Image_V1_X{ 64 };
    int    Image_V1_Y{ 64 };
    int    Image_V2_X{ 0 };
    int    Image_V2_Y{ 80 };
    int    Image_Width{ 64 };
    int    Image_Height{ 64 };
};
inline Player player;

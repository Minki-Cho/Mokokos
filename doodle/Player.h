#pragma once
#include "Input.h"
#include <doodle/doodle.hpp>

class Player {

	doodle::Image player{ "assets/player_walking/One_for_All.png" };
public:
	Player();
	void Draw();
	void Update();
};
inline Player player;

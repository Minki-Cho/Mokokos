#pragma once
#include "Input.h"
#include <doodle/doodle.hpp>

class Player {

	doodle::Image player_left{ "assets/player_walking/player_left_motion4.png" };
public:
	Player();
	void Draw();
	void Update();
};
inline Player player;

#pragma once
#include <doodle/doodle.hpp>

using namespace doodle;
inline double playMoving_x{ 512 };
inline double playMoving_y{ 512 };

enum class GameState
{
	Map1, Map2, Map3
};

inline GameState state = GameState::Map1;
class Game {
	bool w_key{ false };
	bool a_key{ false };
	bool s_key{ false };
	bool d_key{ false };
	bool space_key{ false };

	double acceleration_x{ 0 };
	double acceleration_y{ 0 };

	const Image background{ "1.png" };
	//const Image player{ "" };

public:
	
	void Draw();
	void RoomWall();
	void PlayerMovement();
	void PlayerDraw();
	void Room1Door();
	void Room2Door();

	void key_pressed(KeyboardButtons button);
	void key_released(KeyboardButtons button);
	void mouse_released(MouseButtons button);
};


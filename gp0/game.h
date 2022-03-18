#pragma once
#include <doodle/doodle.hpp>

using namespace doodle;
inline double playMoving_x{ 512 };
inline double playMoving_y{ 512 };

enum class GameState
{
	Map1, Map2, Map3
};
inline Image background{ "Back_Ground.png" };
inline doodle::Image p_left{ "player_left_motion1.png" };
inline doodle::Image p_right{ "player_right_motion1.png" };
inline doodle::Image p_front{ "player_front_motion1.png" };
inline doodle::Image p_back{ "player_back_motion1.png" };
inline GameState state = GameState::Map1;
class Game {

	bool w_key{ false };
	bool a_key{ false };
	bool s_key{ false };
	bool d_key{ false };

	bool w_press_key{ false };
	bool a_press_key{ false };
	bool s_press_key{ false };
	bool d_press_key{ false };

	bool space_key{ false };

	double acceleration_x{ 0 };
	double acceleration_y{ 0 };

	
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


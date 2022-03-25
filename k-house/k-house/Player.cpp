#include "Player.h"

Player::Player()
{
	
}

void Player::Draw()
{
	doodle::draw_image(player_left, playMoving_x, playMoving_y);
	//doodle::draw_ellipse(playMoving_x, playMoving_y, 100);
}
void Player::Update()
{
	input.PlayerMovement();
}
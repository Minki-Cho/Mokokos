#include "Map2.h"
#include <doodle/doodle.hpp>
#include "Player.h"
#include "GamePlay.h"
#include "GameScene.h"

Map2::Map2(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map2 create!\n";
}
void Map2::Update()
{
    player.Update();
    ghost.Update();
}

void Map2::Draw() const
{
    doodle::draw_image(bed, -512, -512);
    player.Draw();
    ghost.Draw();
}

#include "GamePlay.h"
#include "GameScene.h"
#include "Map3.h"
#include "Player.h"
#include <doodle/doodle.hpp>

Map4::Map4(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map4 create!\n";
}
void Map4::Update()
{
    player.Update();
    ghost.Update();
    wall_collision();
    Map4_Door();
}

void Map4::Draw() const
{
    push_settings();

    Timer++;
    if (0 < Timer && Timer <= 10)
    {
        draw_image(Frame1, -512, -512);
    }
    else if (10 <= Timer && Timer <= 20)
    {
        draw_image(Frame2, -512, -512);
    }
    else if (20 <= Timer && Timer <= 30)
    {
        draw_image(Frame3, -512, -512);
    }
    else if (30 <= Timer && Timer <= 40)
    {
        draw_image(Frame4, -512, -512);
    }
    else if (40 <= Timer && Timer <= 50)
    {
        draw_image(Frame5, -512, -512);
    }
    else if (50 <= Timer && Timer <= 60)
    {
        draw_image(Frame6, -512, -512);
    }
    else if (60 <= Timer && Timer <= 70)
    {
        draw_image(Frame7, -512, -512);
    }
    else if (70 <= Timer)
    {
        draw_image(Frame8, -512, -512);
    }

    doodle::draw_image(Frame1, -512, -512);
    pop_settings();
    player.Draw();
    ghost.Draw();
}

void Map4::wall_collision()
{
    if (playMoving_x < -390) // left wall
    {
        playMoving_x += 3.5;
    }
    if (playMoving_x > 330) // right wall
    {
        playMoving_x -= 3.5;
    }
    if (playMoving_y > 287) // up wall
    {
        playMoving_y -= 3.5;
    }
    if (playMoving_y < -340) // down wall
    {
        playMoving_y += 3.5;
    }
}

void Map4::Map4_Door()
{
    if (playMoving_y <= -337 && playMoving_x < 4 && playMoving_x > -60)
    {
        GameScene::game().QueueNextPlayScene(PlayScenes::Map1);
        playMoving_x = -35;
        playMoving_y = 330;
    }
}
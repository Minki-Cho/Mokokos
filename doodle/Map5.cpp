#include "GamePlay.h"
#include "GameScene.h"
#include "Player.h"
#include <doodle/doodle.hpp>

Map5::Map5(GamePlay& game_scene) : GameScene(game_scene)
{
    std::cout << "Map5 create!\n";
}
void Map5::Update()
{
    player.Update();
    ghost.Update();
    wall_collision();
    Map5_Door();
}

void Map5::Draw() const
{
    push_settings();
    apply_scale(4.0, 4.0);
    set_image_mode(doodle::RectMode::Center);
    doodle::draw_image(Basement, 0, 0);
    pop_settings();
    player.Draw();
    ghost.Draw();
}

void Map5::wall_collision()
{
    if (playMoving_x < -420) // left wall
    {
        playMoving_x += 3.5;
    }
    if (playMoving_x > 350) // right wall
    {
        playMoving_x -= 3.5;
    }
    if (playMoving_y > 330) // up wall
    {
        playMoving_y -= 3.5;
    }
    if (playMoving_y < -400) // down wall
    {
        playMoving_y += 3.5;
    }
    //Upwall
    //1
    if (playMoving_x > - 310 && playMoving_x < -305 && playMoving_y < 330 && playMoving_y > 120 )
    {
        playMoving_x -= 3.5;
    }
    //2
    if (playMoving_x > 230 && playMoving_x < 235 && playMoving_y < 250 && playMoving_y > 120)
    {
        playMoving_x += 3.5;
    }
    //3
    if (playMoving_x > -310 && playMoving_x < 235 && playMoving_y > 120 && playMoving_y < 125)
    {
        playMoving_y -= 3.5;
    }
    //4
    if (playMoving_x > -310 && playMoving_x < 235 && playMoving_y > 185 && playMoving_y < 190)
    {
        playMoving_y += 3.5;
    }
    //5
    if (playMoving_x > -220 && playMoving_x < -215 && playMoving_y < 330 && playMoving_y > 120)
    {
        playMoving_x += 3.5;
    }
    //6
    if (playMoving_x > 140 && playMoving_x < 145 && playMoving_y < 250 && playMoving_y > 120)
    {
        playMoving_x -= 3.5;
    }
    //7
    if (playMoving_x > 140 && playMoving_x < 235 && playMoving_y > 250 && playMoving_y < 255)
    {
        playMoving_y += 3.5;
    }


    //Down wall
    //1
    if (playMoving_x > -310 && playMoving_x < -305 && playMoving_y < -150 && playMoving_y > -400)
    {
        playMoving_x -= 3.5;
    }
    //2
    if (playMoving_x > -310 && playMoving_x < 290 && playMoving_y < -130 && playMoving_y > -135)
    {
        playMoving_y += 3.5;
    }
    //3
    if (playMoving_x > 285 && playMoving_x < 290 && playMoving_y < -150 && playMoving_y > -330)
    {
        playMoving_x += 3.5;
    }
    //4
    if (playMoving_x > -110 && playMoving_x < 290 && playMoving_y < -330 && playMoving_y > -335)
    {
        playMoving_y -= 3.5;
    }
    //5
    if (playMoving_x < -110 && playMoving_x > -115 && playMoving_y < -275 && playMoving_y > -330)
    {
        playMoving_x -= 3.5;
    }
    //6
    if (playMoving_x > -110 && playMoving_x < 290 && playMoving_y < -270 && playMoving_y > -275)
    {
        playMoving_y += 3.5;
    }
    //7
    if (playMoving_x > 205 && playMoving_x < 210 && playMoving_y < -150 && playMoving_y > -330)
    {
        playMoving_x -= 3.5;
    }
    //8
    if (playMoving_x > -310 && playMoving_x < 290 && playMoving_y < -200 && playMoving_y > -205)
    {
        playMoving_y -= 3.5;
    }
    //9
    if (playMoving_x > -215 && playMoving_x < -210 && playMoving_y < -150 && playMoving_y > -400)
    {
        playMoving_x += 3.5;
    }
}

void Map5::Map5_Door()
{
    if (playMoving_x <= -390)
    {
        if (playMoving_y >= 300 && playMoving_y <= 330)
        {
            GameScene::game().QueueNextPlayScene(PlayScenes::Map4);
            playMoving_x = 70;
            playMoving_y = 150;
        }
    }
}
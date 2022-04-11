#include "GamePlay.h"
#include <doodle/drawing.hpp>
#include "Inventory.h"
GamePlay::GamePlay()
{
}

void GamePlay::Setup()
{
    doodle::set_frame_of_reference(doodle::FrameOfReference::RightHanded_OriginCenter);
    game_scenes[PlayScenes::Map1] = std::make_unique<Map1>(*this);
    game_scenes[PlayScenes::Map2] = std::make_unique<Map2>(*this);
    game_scenes[PlayScenes::Map3] = std::make_unique<Map3>(*this);
    game_scenes[PlayScenes::Map4] = std::make_unique<Map4>(*this);
    game_scenes[PlayScenes::Map5] = std::make_unique<Map5>(*this);
    game_scenes[PlayScenes::Gameover] = std::make_unique<Gameover>(*this);
    /*game_scenes[PlayScenes::Map3] = std::make_unique<OptionsScreen>(*this);
    game_scenes[PlayScenes::Map4] = std::make_unique<PlayScreen>(*this);*/
    queuedScenes = game_scenes[PlayScenes::Map1].get();
    currentScenes = game_scenes[PlayScenes::Map1].get();
}

void GamePlay::Update()
{

    if (queuedScenes != currentScenes)
        currentScenes = queuedScenes;
    currentScenes->Update();
}

void GamePlay::Draw() const
{
    //doodle::clear_background(BackgroundColor);
    currentScenes->Draw();
    inventory.Draw();
}



void GamePlay::QueueNextPlayScene(PlayScenes scene)
{
    queuedScenes = game_scenes[scene].get();
}

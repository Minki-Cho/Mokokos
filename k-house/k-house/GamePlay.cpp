#include "GamePlay.h"
#include <doodle/drawing.hpp>

GamePlay::GamePlay()
{
}

void GamePlay::Setup()
{
    doodle::set_frame_of_reference(doodle::FrameOfReference::RightHanded_OriginCenter);
    game_scenes[PlayScenes::Map1] = std::make_unique<Map1>(*this);
    /*game_scenes[PlayScenes::Map2] = std::make_unique<CreditsScreen>(*this);
    game_scenes[PlayScenes::Map3] = std::make_unique<OptionsScreen>(*this);
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
    doodle::clear_background(BackgroundColor);
    currentScenes->Draw();
}

void GamePlay::QueueNextPlayScene(PlayScenes scene)
{
    queuedScenes = game_scenes[scene].get();
}

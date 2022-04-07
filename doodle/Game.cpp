
#include "Game.h"
#include <doodle/drawing.hpp>
#include "Inventory.h"
Game::Game()
{
}

void Game::Setup()
{
    doodle::set_frame_of_reference(doodle::FrameOfReference::RightHanded_OriginCenter);
    scenes[GameScenes::MAIN_MENU] = std::make_unique<MainMenu>(*this);
    scenes[GameScenes::CREDITS]   = std::make_unique<CreditsScreen>(*this);
    scenes[GameScenes::OPTIONS]   = std::make_unique<OptionsScreen>(*this);
    scenes[GameScenes::PLAY]      = std::make_unique<PlayScreen>(*this);
    queuedScene                   = scenes[GameScenes::MAIN_MENU].get();
    currentScene                  = scenes[GameScenes::MAIN_MENU].get();
}

void Game::Update()
{
    if (queuedScene != currentScene)
        currentScene = queuedScene;
    currentScene->Update();
}

void Game::Draw() const
{
    doodle::clear_background(BackgroundColor);
    currentScene->Draw();
}

void Game::QueueNextScene(GameScenes scene)
{
    queuedScene = scenes[scene].get();
}

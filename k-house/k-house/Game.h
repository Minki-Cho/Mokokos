
#pragma once
#include "Scene.h"
#include <doodle/color.hpp>
#include <map>
#include <memory>

#include "CreditsScreen.h"
#include "MainMenu.h"
#include "OptionsScreen.h"
#include "PlayScreen.h"


enum class GameScenes
{
    MAIN_MENU,
    CREDITS,
    OPTIONS,
    PLAY,
    Map1
};

class Game
{
    Scene*                                       currentScene{ nullptr };
    Scene*                                       queuedScene{ nullptr };
    std::map<GameScenes, std::unique_ptr<Scene>> scenes{};

public:
    Game();

    void          Setup();
    void          Update();
    void          Draw() const;
    doodle::Color BackgroundColor{ 120.0 };
    void          QueueNextScene(GameScenes scene);
};

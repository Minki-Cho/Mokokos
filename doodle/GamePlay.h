#pragma once
#include "GameScene.h"
#include <map>
#include <memory>
#include <doodle/doodle.hpp>

#include "Map1.h"
#include "Map2.h"

enum class PlayScenes
{
    Map1,
    Map2,
    Map3,
    Map4
};

class GamePlay
{
    GameScene* currentScenes{ nullptr };
    GameScene* queuedScenes{ nullptr };
    std::map<PlayScenes, std::unique_ptr<GameScene>> game_scenes{};

public:
    GamePlay();
    doodle::Color BackgroundColor{ 120.0 };
    void          Setup();
    void          Update();
    void          Draw() const;
    void          QueueNextPlayScene(PlayScenes scene);
};


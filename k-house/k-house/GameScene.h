#pragma once

class GamePlay;

class GameScene
{
	GamePlay* playInstance;

protected:
    GamePlay& game() { return *playInstance; }
    const GamePlay& game() const { return *playInstance; }

public:
    GameScene(GamePlay& the_game) : playInstance(&the_game) {}
    virtual void Update() = 0;
    virtual void Draw() const = 0;

    virtual ~GameScene() = default;
    GameScene(const GameScene & other) = default;
    GameScene(GameScene && other) noexcept = default;
    GameScene& operator=(const GameScene & other) = default;
    GameScene& operator=(GameScene && other) noexcept = default;

};
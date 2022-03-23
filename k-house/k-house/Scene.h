
#pragma once

class Game;

class Scene
{
    Game* gameInstance;

protected:
    Game&       game() { return *gameInstance; }
    const Game& game() const { return *gameInstance; }

public:
    Scene(Game& the_game) : gameInstance(&the_game) {}
    virtual void Update()     = 0;
    virtual void Draw() const = 0;

    virtual ~Scene()              = default;
    Scene(const Scene& other)     = default;
    Scene(Scene&& other) noexcept = default;
    Scene& operator=(const Scene& other) = default;
    Scene& operator=(Scene&& other) noexcept = default;
};
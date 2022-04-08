#pragma once
#include <vector>
#include <SFML/Audio.hpp>
enum class Sounds
{
    collision
};

class Sound
{
    std::vector<sf::SoundBuffer> soundBuffers{};
    std::vector<sf::Sound>       sounds{};
    sf::Music                    music;
public:
    void LoadSound(const std::string& file_path);
    void pre_loadSound();
    void Playsound(int buffer_index);
};
inline Sound game_sound;

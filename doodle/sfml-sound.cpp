#include "sfml-sound.h"


[[noreturn]] void error(const std::string& s)
{
    throw std::runtime_error(s);
}
void Sound::Playsound(int buffer_index)
{
    for (auto& sound : sounds)
    {
        if (sound.getStatus() != sf::SoundSource::Playing)
        {
            sound.setBuffer(soundBuffers[buffer_index]);
            sound.play();
            return;
        }
    }
    sounds.emplace_back(soundBuffers[buffer_index]);
    sounds.back().play();
}

void Sound::LoadSound(const std::string& file_path)
{
    soundBuffers.emplace_back();
    sf::SoundBuffer& buffer = soundBuffers.back();
    if (!buffer.loadFromFile(file_path))
    {
        error("Failed to load " + file_path);
    }
}
void Sound::pre_loadSound()
{

    game_sound.LoadSound("assets/sounds/bump.ogg");

}
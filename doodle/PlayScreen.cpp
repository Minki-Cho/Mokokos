
#include "PlayScreen.h"
#include "Game.h"
#include "SceneDrawing.h"



using namespace doodle;

PlayScreen::PlayScreen(Game& the_game) : Scene(the_game)
{
    
    gameplay.Setup();
}

void PlayScreen::Update()
{
    gameplay.Update();
    
}

void PlayScreen::Draw() const
{
    gameplay.Draw();

}

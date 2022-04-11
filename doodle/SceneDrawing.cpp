
#include "SceneDrawing.h"

#include <doodle/drawing.hpp>

using namespace doodle;

void Draw_Title(const std::string& title_text)
{
    push_settings();
    draw_text(title_text, 0, 290);
    pop_settings();
}

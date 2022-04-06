#include "Inventory.h"
#include "Input.h"


Inventory::~Inventory()
{
    std::cout << "Inventory is Destroyed \n";
}

void Inventory::Draw() const
{
    if (input.e_key == true)
    {
        for (int i = 0; i < 8; i++)
        {
            push_settings();
            set_outline_width(8);
            set_fill_color(255, 105);
            draw_rectangle(-Width / 2 + Width / 8 * i, -Height / 2 , Width / 8, Height / 8);
            //std::cout << inventory_vector.size();
            if (inventory_vector.size() > i)
            {
                inventory_vector[i]->Draw(-Width / 2 + Width / 8 * i, -Height / 2, Width / 8, Height / 8);
            }
            
            pop_settings();
        }
    }
}

void Inventory::Add(Item* i)
{
    inventory_vector.push_back(i);
}
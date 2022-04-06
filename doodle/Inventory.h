#pragma once
#include "Item.h"
#include <vector>

class Inventory
{
private:
    std::vector<Item*> inventory_vector;

public:
    ~Inventory();
    void Draw() const;
    void Add(Item* i);
};
inline Inventory inventory;
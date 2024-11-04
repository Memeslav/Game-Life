#include "Map.h"

Map::Map(int32_t h, int32_t w) : height(h), width(w), cells(h, std::vector<Cell>(w))
{
    srand(static_cast<unsigned>(time(0)));
    initialize();
}

void Map::initialize() 
{
    for (int32_t i = 0; i < height; ++i) 
    {
        for (int32_t j = 0; j < width; ++j) 
        {
            if (rand() % 2 == 0) 
            {
                cells[i][j].set_Alive();
            }
            else {
                cells[i][j].set_Dead();
            }
        }
    }
}

void Map::wipe_All()
{
    for (int32_t i = 0; i < height; ++i)
    {
        for (int32_t j = 0; j < width; ++j)
        {
            cells[i][j].set_Dead();
        }
    }
}

void Map::alive_cell(int32_t x, int32_t y) 
{
    if (x >= 0 && x < height && y >= 0 && y < width) 
    {
        cells[x][y].set_Alive();
    }
}

void Map::kill_cell(int32_t x, int32_t y)
{
    if (x >= 0 && x < height && y >= 0 && y < width)
    {
        cells[x][y].set_Dead();
    }
}

const std::vector<std::vector<Cell>>& Map::get_Data() const
{
    return cells;
}
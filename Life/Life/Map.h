#pragma once

#include <vector>
#include <ctime>

#include "Cell.h"

class Map
{
private:

    int32_t height, width;
    std::vector<std::vector<Cell>> cells;

public:

    Map(int32_t h, int32_t w);

    void initialize();
    void wipe_All();

    void alive_cell(int32_t x, int32_t y);
    void kill_cell (int32_t x, int32_t y);

    const std::vector<std::vector<Cell>>& get_Data() const;
};
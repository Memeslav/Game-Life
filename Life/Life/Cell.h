#pragma once

class Cell 
{
    private:

        bool is_Alive;

    public:

        Cell() : is_Alive(false) {}

        Cell(bool alive) : is_Alive(alive) {}

        void set_Alive();
        void set_Dead();

        bool is_alive() const;
};
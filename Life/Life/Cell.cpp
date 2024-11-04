#include "Cell.h"

void Cell::set_Alive() 
{ 
	is_Alive = true; 
}

void Cell::set_Dead() 
{ 
	is_Alive = false; 
}

bool Cell::is_alive() const 
{ 
	return is_Alive; 
}
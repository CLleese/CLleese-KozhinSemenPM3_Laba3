#include "Pistols.h"
#include <iostream>

Pistol::Pistol() {}


void Pistol::Attacking()
{
	std::cout << "You're shooting with pistol " << this << std::endl;
}

#include "Rifle.h"
#include <iostream>

Rifle::Rifle() {}


void Rifle::Attacking()
{
	std::cout << "You're shooting with rifle " << this << std::endl;
}

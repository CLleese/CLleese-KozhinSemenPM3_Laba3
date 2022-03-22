#include "CuttingWeapon.h"
#include <iostream>

CuttingWeapon::CuttingWeapon() {}


void CuttingWeapon::Attacking()
{
	std::cout << "You're cut the enemy with " << this << std::endl;
}

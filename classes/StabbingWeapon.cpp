#include "StabbingWeapon.h"
#include <iostream>

StabbingWeapon::StabbingWeapon() {}


void StabbingWeapon::Attacking()
{
	std::cout << "You're hit the enemy with stab " << this << std::endl;
}

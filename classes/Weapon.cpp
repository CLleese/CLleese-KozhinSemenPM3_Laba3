#include "Weapon.h"
#include <iostream>

void Weapon::Attacking()
{

	std::cout << "You're attacked with " << this << std::endl;

}

bool Weapon::isColdWeapon()
{

	return false;
}


int Weapon::GetDamage()
{
	return damage;
}

void Weapon::SetDamage(int _damage)
{
	damage = _damage;
}

int Weapon::GetRadiusPor()
{
	return radiusPor;
}

void Weapon::SetRadiusPor(int _radiusPor)
{
	radiusPor = _radiusPor;
}

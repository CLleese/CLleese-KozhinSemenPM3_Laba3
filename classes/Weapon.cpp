#include "Weapon.h"


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

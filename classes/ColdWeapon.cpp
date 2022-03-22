#include "ColdWeapon.h"
#include <iostream>

ColdWeapon::ColdWeapon() 
{
	
	damage = 50;
	radiusPor = 1;
	bladeLen = 0.32;
}

ColdWeapon::ColdWeapon(int _damage, int _radiusPor, float _bladeLen)
{
	SetDamage(_damage);
	SetRadiusPor(_radiusPor);
	SetBladeLen(_bladeLen);

}

void ColdWeapon::Attacking()
{
	std::cout << "You're hit the enemy with " << this << std::endl;
}

bool ColdWeapon::isColdWeapon()
{
	return true;
}

float ColdWeapon::GetBladeLen()
{
	return bladeLen;
}

void ColdWeapon::SetBladeLen(float _bladeLen)
{
	bladeLen = _bladeLen;
}


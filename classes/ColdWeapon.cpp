#include "ColdWeapon.h"

ColdWeapon::ColdWeapon()
{
	
	damage = 50;
	radiusPor = 1;
	bladeLen = 0.31;
}

ColdWeapon::ColdWeapon(int _damage, int _radiusPor, float _bladeLen)
{
	SetDamage(_damage);
	SetRadiusPor(_radiusPor);
	SetBladeLen(_bladeLen);

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


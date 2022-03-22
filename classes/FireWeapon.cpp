#include "FireWeapon.h"

FireWeapon::FireWeapon()
{
	damage = 80;
	radiusPor = 500;
	caliber = 7.52;
}

FireWeapon::FireWeapon(int _damage, int _radiusPor, float _caliber)
{
	SetCaliber(_caliber);
	SetDamage(_damage);
	SetRadiusPor(_radiusPor);
}

bool FireWeapon::isColdWeapon()
{
	return false;
}

float FireWeapon::GetCaliber()
{
	return caliber;
}

void FireWeapon::SetCaliber(float _caliber)
{
	caliber = _caliber;
}

bool FireWeapon::GetFireMod()
{
	return fireMod;
}

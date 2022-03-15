#pragma once
#include "Weapon.h"
class FireWeapon :	public Weapon
{
public:
	FireWeapon();
	FireWeapon(int _damage, int _radiusPor, float _caliber);
	bool isColdWeapon();

	float GetCaliber();
	void SetCaliber(float _caliber);

protected:
	float caliber;
	bool fireMod;

};


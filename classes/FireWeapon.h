#pragma once
#include "Weapon.h"
class FireWeapon :	public Weapon
{
public:
	FireWeapon();
	FireWeapon(int _damage, int _radiusPor, float _caliber);

	virtual void Attacking();

	bool isColdWeapon();

	float GetCaliber();
	void SetCaliber(float _caliber);

	bool GetFireMod();


protected:
	float caliber;
	bool fireMod = true;

};


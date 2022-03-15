#pragma once
#include "Weapon.h"
class ColdWeapon :	public Weapon
{
public:
	ColdWeapon();
	ColdWeapon(int _damage, int _radiusPor, float _bladeLen);
	bool isColdWeapon();

	float GetBladeLen();
	void SetBladeLen(float _bladeLen);

protected:
	float bladeLen; //���� ���������
};


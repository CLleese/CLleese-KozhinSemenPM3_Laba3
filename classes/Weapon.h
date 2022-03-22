#pragma once
class Weapon
{
public: 

	bool isColdWeapon();

	int GetDamage();
	void SetDamage(int _damage);

	int GetRadiusPor();
	void SetRadiusPor(int _radiusPor);


protected:
	int radiusPor;
	int damage;


};


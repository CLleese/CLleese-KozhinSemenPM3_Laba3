#pragma once
#include "Weapon.h"
class SetOfGuns
{
public:

	SetOfGuns();
	~SetOfGuns();

	void Print();

	void AddWeapon(Weapon* weapon);

private:
	Weapon** Set;
	int CountOfGuns;

};


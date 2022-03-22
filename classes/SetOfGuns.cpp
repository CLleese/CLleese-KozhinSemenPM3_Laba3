#include "SetOfGuns.h"


SetOfGuns::SetOfGuns()
{
	CountOfGuns = 0;
	Set = nullptr;
}

SetOfGuns::~SetOfGuns()
{
	if (Set != nullptr)
		delete[] Set;
}

void SetOfGuns::Print()
{
	for (int q = 0; q < CountOfGuns; q++)
	{
		Set[q]->Attacking();
	}
}

void SetOfGuns::AddWeapon(Weapon* weapon)
{
	Weapon** temporary = new Weapon * [CountOfGuns + 1];

	for (int q = 0; q < CountOfGuns; q++)
	{
		temporary[q] = Set[q];
	}

	delete Set;
	Set = temporary;
	Set[CountOfGuns] = weapon;
	CountOfGuns++;

}

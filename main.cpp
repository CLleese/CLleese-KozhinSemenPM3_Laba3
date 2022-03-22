
#include "classes/Pistols.h"
#include "classes/CuttingWeapon.h"
#include "classes/FireWeapon.h"
#include "classes/SetOfGuns.h"


int main()
{
	CuttingWeapon sword;
	Pistol makarov;

	FireWeapon bazooka(100000, 2000, 50);
	

	SetOfGuns set;

	set.AddWeapon(&sword);
	set.AddWeapon(&makarov);
	set.AddWeapon(&bazooka);

	set.Print();

	return 0;
}

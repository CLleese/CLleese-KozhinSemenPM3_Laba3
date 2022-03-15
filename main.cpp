#include "FireWeapon.h"
#include "ColdWeapon.h"
#include <iostream>

using namespace std;

int main()
{
	ColdWeapon knife(50, 1, 0.3);

	cout << knife.isColdWeapon() << " урон = " << knife.GetDamage() + knife.GetRadiusPor() - knife.GetBladeLen();
}

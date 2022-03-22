#pragma once
#include "FireWeapon.h"

class Pistol : public FireWeapon 
{
public:
	Pistol();
	

protected:
	bool fireMod = false;
};
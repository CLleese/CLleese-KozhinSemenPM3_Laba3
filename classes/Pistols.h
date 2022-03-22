#pragma once
#include "FireWeapon.h"

class Pistol : public FireWeapon 
{
public:
	Pistol();

	virtual void Attacking();
	

protected:
	bool fireMod = false;
};
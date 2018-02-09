#pragma once

#include "Plane.h"

//ÆÕÍ¨·É»ú
class Copter : public Plane{
public:
	virtual void fly();
	virtual void land();
};
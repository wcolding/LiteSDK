#pragma once

typedef void(__thiscall* _ProcessEvent)(void* pThis, void* pFunction, void* pParams, void* pReturn);

class TArray
{
public:
	void* Data;
	int Count;
	int Max;
};

struct Vector
{
	float x, y, z;
};

#ifdef _SC1_

#endif

#ifdef _SC2_

#endif

#ifdef _SC3_
#include "SC3.h"
#endif

#ifdef _SC4_

#endif

#ifdef _SC5_

#endif

#ifdef _SC6_

#endif
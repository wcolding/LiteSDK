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
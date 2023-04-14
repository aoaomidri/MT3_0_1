#pragma once
#include"NUM.h"
#include <Novice.h>
class SCPrintf
{
public:
	SCPrintf();
	~SCPrintf();

private:
	int kColumnWidth;
	int kRowHeight;
	NUM* num;
public:
	void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);
	void VectorFloatScreenPrintf(int x, int y, const float vector, const char* label);

	void Update();
};


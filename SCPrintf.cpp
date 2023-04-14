#include "SCPrintf.h"
SCPrintf::SCPrintf() {
	kColumnWidth = 60;
	kRowHeight = 20;
	num = new NUM;
}

SCPrintf::~SCPrintf() {
	delete num;
}

void SCPrintf::VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%0.2f", vector.x);
	Novice::ScreenPrintf(x + kColumnWidth, y, "%0.2f", vector.y);
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%0.2f", vector.z);
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);
}

void SCPrintf::VectorFloatScreenPrintf(int x, int y, const float vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%0.2f", vector);
	Novice::ScreenPrintf(x + kColumnWidth, y, "%s", label);
}


void SCPrintf::Update() {
	num->Update();
	VectorScreenPrintf(0, 0, num->resultAdd," : Add");
	VectorScreenPrintf(0, kRowHeight, num->resultSubtract, " : Subtract");
	VectorScreenPrintf(0, kRowHeight * 2, num->resultMultiply, " : Multiply");
	VectorFloatScreenPrintf(0, kRowHeight * 3, num->resultDot, " : Dot");
	VectorFloatScreenPrintf(0, kRowHeight * 4, num->resultLenght, " : Lenght");
	VectorScreenPrintf(0, kRowHeight * 5, num->resultNormalize, " : Normalize");
}
#pragma once
#include"Vector3.h"
#include<math.h>
class NUM
{
public:
	NUM();
private:
	Vector3 v1;
	Vector3 v2;
	float k;	
	
public:
	Vector3 resultAdd;
	Vector3 resultSubtract;
	Vector3 resultMultiply;
	float resultDot;
	float resultLenght;
	Vector3 resultNormalize;

	//‰ÁZ
	Vector3 Add(const Vector3& Vec1, const Vector3& Vec2);
	//Œ¸Z
	Vector3 Subtract(const Vector3& Vec1, const Vector3& Vec2);
	//ƒXƒJƒ‰[”{
	Vector3 Multiply(float scalar, const Vector3& Vec);
	//“àÏ
	float Dot(const Vector3& Vec1, const Vector3& Vec2);
	//’·‚³(ƒmƒ‹ƒ€)
	float Lenght(const Vector3& Vec);
	//³‹K‰»
	Vector3 Normalize(const Vector3& Vec);
	//‘ã“ü‚Ì‚½‚ß‚ÌXVˆ—
	void Update();
};


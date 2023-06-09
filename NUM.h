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

	//加算
	Vector3 Add(const Vector3& Vec1, const Vector3& Vec2);
	//減算
	Vector3 Subtract(const Vector3& Vec1, const Vector3& Vec2);
	//スカラー倍
	Vector3 Multiply(float scalar, const Vector3& Vec);
	//内積
	float Dot(const Vector3& Vec1, const Vector3& Vec2);
	//長さ(ノルム)
	float Lenght(const Vector3& Vec);
	//正規化
	Vector3 Normalize(const Vector3& Vec);
	//代入のための更新処理
	void Update();
};


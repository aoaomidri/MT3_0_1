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

	//���Z
	Vector3 Add(const Vector3& Vec1, const Vector3& Vec2);
	//���Z
	Vector3 Subtract(const Vector3& Vec1, const Vector3& Vec2);
	//�X�J���[�{
	Vector3 Multiply(float scalar, const Vector3& Vec);
	//����
	float Dot(const Vector3& Vec1, const Vector3& Vec2);
	//����(�m����)
	float Lenght(const Vector3& Vec);
	//���K��
	Vector3 Normalize(const Vector3& Vec);
	//����̂��߂̍X�V����
	void Update();
};


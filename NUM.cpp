#include "NUM.h"
NUM::NUM() {
	v1 = { 1.0f,3.0f,-5.0f };
	v2 = { 4.0f,-1.0f,2.0f };
	k = 4.0f;

	resultAdd = { 0.0f,0.0f,0.0f };
	resultSubtract = { 0.0f,0.0f,0.0f };
	resultMultiply = { 0.0f,0.0f,0.0f };
	resultDot = 0.0f;
	resultLenght = 0.0f;
	resultNormalize = { 0.0f,0.0f,0.0f };
}

Vector3 NUM::Add(const Vector3& Vec1, const Vector3& Vec2) {
	Vector3 result;
	result.x = Vec1.x + Vec2.x;
	result.y = Vec1.y + Vec2.y;
	result.z = Vec1.z + Vec2.z;
	return result;
}

Vector3 NUM::Subtract(const Vector3& Vec1, const Vector3& Vec2) {
	Vector3 result;
	result.x = Vec1.x - Vec2.x;
	result.y = Vec1.y - Vec2.y;
	result.z = Vec1.z - Vec2.z;
	return result;
}

//ÉXÉJÉâÅ[î{
Vector3 NUM::Multiply(float scalar, const Vector3& Vec) {
	Vector3 result;
	result.x = Vec.x * scalar;
	result.y = Vec.y * scalar;
	result.z = Vec.z * scalar;
	return result;
}
//ì‡êœ
float NUM::Dot(const Vector3& Vec1, const Vector3& Vec2) {
	float result;
	result = Vec1.x * Vec2.x + Vec1.y * Vec2.y + Vec1.z * Vec2.z;
	return result;
}
//í∑Ç≥(ÉmÉãÉÄ)
float NUM::Lenght(const Vector3& Vec) {
	float result;
	result = sqrtf(powf(Vec.x, 2.0f)+ powf(Vec.y, 2.0f)+ powf(Vec.z, 2.0f));
	return result;
}
//ê≥ãKâª
Vector3 NUM::Normalize(const Vector3& Vec) {
	Vector3 result;
	result.x = Vec.x / sqrtf(powf(Vec.x, 2.0f) + powf(Vec.y, 2.0f) + powf(Vec.z, 2.0f));
	result.y = Vec.y / sqrtf(powf(Vec.x, 2.0f) + powf(Vec.y, 2.0f) + powf(Vec.z, 2.0f));
	result.z = Vec.z / sqrtf(powf(Vec.x, 2.0f) + powf(Vec.y, 2.0f) + powf(Vec.z, 2.0f));
	return result;
}

void NUM::Update() {
	resultAdd = Add(v1, v2);
	resultSubtract = Subtract(v1, v2);
	resultMultiply = Multiply(k, v1);
	resultDot = Dot(v1, v2);
	resultLenght = Lenght(v1);
	resultNormalize = Normalize(v2);
}

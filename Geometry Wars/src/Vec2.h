#pragma once

#include <cmath>

class Vec2
{
public:
	double x{ 0 };
	double y{ 0 };

	Vec2();
	Vec2(double xin, double yin);

	bool operator == (Vec2 lhs);
	bool operator != (Vec2 lhs);

	Vec2 operator +  (Vec2 lhs);
	Vec2 operator -  (Vec2 lhs);
	Vec2 operator *  (Vec2 lhs);
	Vec2 operator /  (Vec2 lhs);

	void operator +=  (const Vec2& lhs);
	void operator -=  (const Vec2& lhs);
	void operator *=  (const float lhs);
	void operator /=  (const float lhs);

	void normalize();
	static Vec2 normalize(Vec2 vector);
	double lenght();
	double distance(const Vec2& v1, const Vec2& v2);
};


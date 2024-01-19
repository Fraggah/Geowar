#pragma once

#include <SFML/Graphics.hpp>
#include "Vec2.h"

class CCollision
{
public:
	float radius = 0 ;

	CCollision(float r)
		: radius(r) {}
};

class CInput
{
public:
	bool up = false;
	bool down = false;
	bool left = false;
	bool right = false;
	bool leftMouse = false;
	bool rightMouse = false;
	CInput() {}
};

class CLifeSpan
{
public:


	int remaining = 0;			
	int total = 0;				
	CLifeSpan(int total)		
		: remaining(total), total(total) {}
};

class CScore
{
public:
	int score;
	CScore(int s)
		: score(s) {}
};

class CShape
{
public:
	sf::CircleShape circle;

	CShape(float radius, int points, const sf::Color& fill, const sf::Color& outline, float thickness)
		: circle(radius, points)
	{
		circle.setOutlineColor(outline);
		circle.setFillColor(fill);
		circle.setOutlineThickness(thickness);
		circle.setOrigin(radius, radius);
	}
};

class CTransform
{
public:
	Vec2 pos{ 0.0,0.0 };
	Vec2 velocity{ 0.0,0.0 };
	float angle = 0;

	CTransform(const Vec2& p, const Vec2& s, float a)
		: pos(p),
		velocity(s),
		angle(a) {}
};

class CLife
{
public:
	int lifes;
	CLife(int l)
		: lifes(l) {}
};
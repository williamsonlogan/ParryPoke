#pragma once

template <class T>
class Vector2D
{
public:
	T x, y;

	Vector2D(T vx, T vy)
	{
		x = vx;
		y = vy;
	}
	~Vector2D() {}

	Vector2D& operator=(const Vector2D v)
	{
		x = v.x;
		y = v.y;
	}
};


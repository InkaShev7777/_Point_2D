#pragma once
#include<iostream>
class c_Point
{
	int x;
	int y;
public:
	c_Point(int, int);
	inline void Print() {
		std::cout << "X = " << this->x << "\tY = " << this->y << "\n";
	}
	int getX() const;
	int getY() const;
	inline c_Point() {
		this->x = 0;
		this->y = 0;
	}
};


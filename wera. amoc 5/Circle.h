#pragma once
#include"Shape.h"
class Circle : public Shape
{
public:
	int radious, centKoordin;
	Circle();
	Circle(int radious, int centKoordin);
	void Show();
	void Load();
};


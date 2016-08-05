#pragma once
#include "Pixel.h"

class Circle {
private:
	int fillRadius;
	Pixel pixel;
	int x;
	int y;
	int d;
public:
	void init();
	void update();
	void draw();
	void create(int xc, int yc, int radius, int red, int green, int blue);
	void createFilled(int xc, int yc, int radius, int red, int green, int blue);
};
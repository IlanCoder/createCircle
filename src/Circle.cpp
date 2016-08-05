#include "Circle.h"

void Circle::init(){
	pixel.init();
}

void Circle::update(){
	pixel.getPixel();
}

void Circle::draw(){
	pixel.draw();
}

void Circle::create(int xc, int yc, int radius, int red, int green, int blue){ //draws perimeter
	pixel.putPixel(xc, yc + radius, red, green, blue);
	pixel.putPixel(xc, yc - radius, red, green, blue);
	pixel.putPixel(xc + radius, yc, red, green, blue);
	pixel.putPixel(xc - radius, yc, red, green, blue);
	x = 0;
	y = radius;
	d = pow(x, 2) + (2 * x) - y + 1;
	while (x <= y) {
		if (d < 0) {
			d += (2 * x) + 3;
		}
		else {
			d += (2 * x) - (2 * y) + 5;
			y--;
		}
		x++;
		pixel.putPixel(xc + x, yc + y, red, green, blue);
		pixel.putPixel(xc + x, yc - y, red, green, blue);
		pixel.putPixel(xc + y, yc + x, red, green, blue);
		pixel.putPixel(xc + y, yc - x, red, green, blue);
		pixel.putPixel(xc - y, yc + x, red, green, blue);
		pixel.putPixel(xc - y, yc - x, red, green, blue);
		pixel.putPixel(xc - x, yc + y, red, green, blue);
		pixel.putPixel(xc - x, yc - y, red, green, blue);
	}
}

void Circle::createFilled(int xc, int yc, int radius, int red, int green, int blue) { //draws area
	fillRadius = radius-1;
	while (fillRadius > 0) {
		create(xc, yc, fillRadius, red, green, blue);
		fillRadius--;
	}
}

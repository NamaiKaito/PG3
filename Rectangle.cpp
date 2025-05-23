#include "Rectangle.h"
#include<cstdio>

Rectangle::Rectangle(int w, int h) :width(w), height(h) {}

void Rectangle::Size() {
	answer = width* height;
}

void Rectangle::Draw() {
	printf("短形の面積：%d\n", answer);
}

#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle(int w, int h);
	void Size() override;
	void Draw() override;
private:
	int width = 0;
	int height = 0;
	int answer = 0;
};

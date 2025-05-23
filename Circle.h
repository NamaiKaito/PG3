#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
	Circle(float r);
	void Size()override;
	void Draw()override;
private:
	float radius = 0.0f;
	float answer = 0.0f;
};


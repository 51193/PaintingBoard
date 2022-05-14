#include"MyTriangle.h"

MyTriangle::MyTriangle() :ShapeBase{} {}

MyTriangle::MyTriangle(const MyTriangle& Te) {
	for (size_t i = 0; i < Te.VectorofPointPointer.size(); i++) {
		if (!Te.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Te.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Te.VectorofPointPointer[i])));
		}
	}
	color = Te.color;
}

Type MyTriangle::getterType() {
	return TriangleType;
}

void MyTriangle::Draw() {
	assert(VectorofPointPointer[0] != nullptr);
	assert(VectorofPointPointer[1] != nullptr);
	assert(VectorofPointPointer[2] != nullptr);
	color.Apply();
	if (color.getter()) {
		int pt[] = { VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery(),VectorofPointPointer[2]->getterx(),VectorofPointPointer[2]->gettery() };
		fillpoly(3, pt);
	}
	else {
		line(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery());
		line(VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery(), VectorofPointPointer[2]->getterx(), VectorofPointPointer[2]->gettery());
		line(VectorofPointPointer[2]->getterx(), VectorofPointPointer[2]->gettery(), VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery());
	}
}

MyTriangle& MyTriangle::operator=(const MyTriangle& Te) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Te.VectorofPointPointer.size(); i++) {
		if (!Te.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Te.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Te.VectorofPointPointer[i])));
		}
	}
	this->color = Te.color;
	return *this;
}
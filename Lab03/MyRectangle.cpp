#include"MyRectangle.h"

MyRectangle::MyRectangle() :ShapeBase{} {}

MyRectangle::MyRectangle(const MyRectangle& Re) {
	for (size_t i = 0; i < Re.VectorofPointPointer.size(); i++) {
		if (!Re.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Re.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Re.VectorofPointPointer[i])));
		}
	}
	color = Re.color;
}

Type MyRectangle::getterType() {
	return RectangleType;
}

void MyRectangle::Draw() {
	assert(VectorofPointPointer[0] != nullptr);
	assert(VectorofPointPointer[1] != nullptr);
	color.Apply();
	if (color.getter()) {
		bar(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery());
		rectangle(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery());
	}
	else {
		rectangle(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery());
	}
}

MyRectangle& MyRectangle::operator=(const MyRectangle& Re) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Re.VectorofPointPointer.size(); i++) {
		if (!Re.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Re.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Re.VectorofPointPointer[i])));
		}
	}
	this->color = Re.color;
	return *this;
}
#include"MyLine.h"

MyLine::MyLine() :ShapeBase{} {}

MyLine::MyLine(const MyLine& Le) {
	for (size_t i = 0; i < Le.VectorofPointPointer.size(); i++) {
		if (!Le.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Le.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Le.VectorofPointPointer[i])));
		}
	}
	color = Le.color;
}

Type MyLine::getterType() {
	return LineType;
}

void MyLine::Draw() {
	assert(VectorofPointPointer[0] != nullptr);
	assert(VectorofPointPointer[1] != nullptr);
	color.Apply();
	line(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), VectorofPointPointer[1]->getterx(), VectorofPointPointer[1]->gettery());
}

MyLine& MyLine::operator=(const MyLine& Le) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Le.VectorofPointPointer.size(); i++) {
		if (!Le.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Le.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Le.VectorofPointPointer[i])));
		}
	}
	this->color = Le.color;
	return *this;
}
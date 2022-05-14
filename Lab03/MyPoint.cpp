#include"MyPoint.h"

MyPoint::MyPoint() :ShapeBase{} {}

MyPoint::MyPoint(const MyPoint& Pt) {
	for (size_t i = 0; i < Pt.VectorofPointPointer.size(); i++) {
		if (!Pt.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Pt.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Pt.VectorofPointPointer[i])));
		}
	}
	color = Pt.color;
}

Type MyPoint::getterType() {
	return PointType;
}

void MyPoint::Draw() {
	assert(VectorofPointPointer[0] != nullptr);
	color.ApplyLineToAll();
	fillellipse(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), 3, 3);
}

MyPoint& MyPoint::operator=(const MyPoint& Pt) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Pt.VectorofPointPointer.size(); i++) {
		if (!Pt.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Pt.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Pt.VectorofPointPointer[i])));
		}
	}
	this->color = Pt.color;
	return *this;
}
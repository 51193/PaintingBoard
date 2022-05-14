#include"MyPolygon.h"

MyPolygon::MyPolygon() :ShapeBase{} {}

MyPolygon::MyPolygon(const MyPolygon& Pn) {
	for (size_t i = 0; i < Pn.VectorofPointPointer.size(); i++) {
		if (!Pn.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Pn.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Pn.VectorofPointPointer[i])));
		}
	}
	color = Pn.color;
}

Type MyPolygon::getterType() {
	return LineType;
}

void MyPolygon::Draw() {
	NULL;
}

MyPolygon& MyPolygon::operator=(const MyPolygon& Pn) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Pn.VectorofPointPointer.size(); i++) {
		if (!Pn.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Pn.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Pn.VectorofPointPointer[i])));
		}
	}
	this->color = Pn.color;
	return *this;
}
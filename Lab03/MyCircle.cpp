#include"MyCircle.h"

MyCircle::MyCircle() :ShapeBase{} {}

MyCircle::MyCircle(const MyCircle& Ce) {
	for (size_t i = 0; i < Ce.VectorofPointPointer.size(); i++) {
		if (!Ce.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Ce.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Ce.VectorofPointPointer[i])));
		}
	}
	color = Ce.color;
}

Type MyCircle::getterType() {
	return CircleType;
}

void MyCircle::Draw() {
	assert(VectorofPointPointer[0] != nullptr);
	assert(VectorofPointPointer[1] != nullptr);
	color.Apply();
	if (color.getter()) {
		fillellipse(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), static_cast<int>(sqrt((VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) * (VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) + (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()) * (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()))), static_cast<int>(sqrt((VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) * (VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) + (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()) * (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()))));
	}
	else {
		circle(VectorofPointPointer[0]->getterx(), VectorofPointPointer[0]->gettery(), static_cast<int>(sqrt((VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) * (VectorofPointPointer[0]->getterx() - VectorofPointPointer[1]->getterx()) + (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()) * (VectorofPointPointer[0]->gettery() - VectorofPointPointer[1]->gettery()))));
	}
}

MyCircle& MyCircle::operator=(const MyCircle& Ce) {
	for (; !this->VectorofPointPointer.empty();) {
		delete* (this->VectorofPointPointer.rbegin());
		this->VectorofPointPointer.pop_back();
	}
	for (size_t i = 0; i < Ce.VectorofPointPointer.size(); i++) {
		if (!Ce.VectorofPointPointer[i]->isAngle()) {
			AddPoint(*(dynamic_cast<Point*>(Ce.VectorofPointPointer[i])));
		}
		else {
			AddAngle(*(dynamic_cast<Angle*>(Ce.VectorofPointPointer[i])));
		}
	}
	this->color = Ce.color;
	return *this;
}
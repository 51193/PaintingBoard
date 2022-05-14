#include"PointBase.h"

PointBase::PointBase() {
	Locate = new int[2]{ 0,0 };
}

PointBase::PointBase(const int x, const int y) {
	Locate = new int[2]{ x,y };
}

PointBase::~PointBase() {
	delete[]Locate;
}

int PointBase::getterx() {
	return Locate[0];
}

int PointBase::gettery() {
	return Locate[1];
}

void PointBase::setterx(const int x) {
	Locate[0] = x;
}

void PointBase::settery(const int y) {
	Locate[1] = y;
}
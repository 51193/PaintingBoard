#include"ShapeBase.h"

ShapeBase::ShapeBase() :type{}, color{}{}

ShapeBase::~ShapeBase() {
	for (; !VectorofPointPointer.empty();) {
		delete* (VectorofPointPointer.rbegin());
		VectorofPointPointer.pop_back();
	}
}

void ShapeBase::setterColor(const Color color) {
	this->color = color;
}

void ShapeBase::AddPoint(const Point Pt) {
	VectorofPointPointer.push_back(new Point(Pt));
}

void ShapeBase::AddPoint(const int x, const int y) {
	Point Pt(x, y);
	VectorofPointPointer.push_back(new Point(Pt));
}

void ShapeBase::AddPoint(const Point Pt, const unsigned int n) {
	assert(n <= VectorofPointPointer.size());
	VectorofPointPointer.push_back(nullptr);
	for (size_t i = VectorofPointPointer.size() - 2; i >= n; i--) {
		VectorofPointPointer[i + 1] = VectorofPointPointer[i];
	}
	VectorofPointPointer[n] = new Point(Pt);
}

void ShapeBase::AddPoint(const int x, const int y, const unsigned int n) {
	assert(n <= VectorofPointPointer.size());
	VectorofPointPointer.push_back(nullptr);
	for (size_t i = VectorofPointPointer.size() - 2; i >= n; i--) {
		VectorofPointPointer[i + 1] = VectorofPointPointer[i];
	}
	VectorofPointPointer[n] = new Point(x, y);
}

void ShapeBase::AddAngle(const Angle Ae) {
	VectorofPointPointer.push_back(new Angle(Ae));
}

void ShapeBase::AddAngle(const int x, const int y) {
	Angle Ae(x, y);
	VectorofPointPointer.push_back(new Angle(Ae));
}

void ShapeBase::Translation(const int x, const int y) {
	assert(!VectorofPointPointer.empty());
	for (size_t i = 0; i < VectorofPointPointer.size(); i++) {
		if (!VectorofPointPointer[i]->isAngle()) {
			VectorofPointPointer[i]->setterx(VectorofPointPointer[i]->getterx() + x);
			VectorofPointPointer[i]->settery(VectorofPointPointer[i]->gettery() + y);
		}
		else NULL;
	}
}

void ShapeBase::DeleteLast() {
	assert(!VectorofPointPointer.empty());
	delete* (VectorofPointPointer.rbegin());
	VectorofPointPointer.pop_back();
}

void ShapeBase::Delete(const unsigned int n) {
	assert(n < VectorofPointPointer.size());
	delete VectorofPointPointer[n];
	for (size_t i = n; i < VectorofPointPointer.size() - 1; i++) {
		VectorofPointPointer[i] = VectorofPointPointer[i + 1];
	}
	VectorofPointPointer.pop_back();
}

void ShapeBase::ClearAngle() {
	for (size_t i = 0; i < VectorofPointPointer.size(); i++) {
		if (VectorofPointPointer[i]->isAngle()) {
			Delete(i);
		}
	}
}

void ShapeBase::Reorganize() {
	Angle Ae;
	for (size_t i = 0; i < VectorofPointPointer.size(); i++) {
		if (VectorofPointPointer[i]->isAngle()) {
			Ae = *(dynamic_cast <Angle*> (VectorofPointPointer[i]));
			break;
		}
	}
	ClearAngle();
	AddAngle(Ae);
}

std::vector<PointBase*> ShapeBase::getter() {
	return VectorofPointPointer;
}

PointBase* ShapeBase::getterPtr(const unsigned int n) {
	return VectorofPointPointer[n];
}

unsigned int ShapeBase::getterSize() {
	return VectorofPointPointer.size();
}

Color ShapeBase::getterColor() {
	return color;
}

bool ShapeBase::isClicked(mouse_msg msg) {
	assert(VectorofPointPointer.size() >= 2);
	assert(!VectorofPointPointer[0]->isAngle());
	assert(!VectorofPointPointer[1]->isAngle());
	if (msg.x >= VectorofPointPointer[0]->getterx() && msg.x <= VectorofPointPointer[1]->getterx() && msg.y >= VectorofPointPointer[0]->gettery() && msg.y <= VectorofPointPointer[1]->gettery())return 1;
	else return 0;
}
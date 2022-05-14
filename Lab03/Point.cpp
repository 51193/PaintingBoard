#include"Point.h"

Point::Point() :PointBase{} {}

Point::Point(const int x, const int y) : PointBase{ x,y } {}

Point::Point(const Point& Pt) {
	Locate = new int[2]{ Pt.Locate[0],Pt.Locate[1] };
}

bool Point::isAngle() {
	return 0;
}

Point& Point::operator=(Point& Pt) {
	if (this->Locate != nullptr) {
		delete[]Locate;
	}
	this->Locate = new int[2]{ Pt.Locate[0],Pt.Locate[1] };
	return *this;
}
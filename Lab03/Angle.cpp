#include"Angle.h"

Angle::Angle() :PointBase{} {}

Angle::Angle(const int x, const int y) : PointBase{ x,y } {}

Angle::Angle(const Angle& Ae) {
	Locate = new int[2]{ Ae.Locate[0],Ae.Locate[1] };
}

bool Angle::isAngle() {
	return 1;
}

Angle& Angle::operator=(Angle& Ae) {
	if (this->Locate != nullptr) {
		delete[]Locate;
	}
	this->Locate = new int[2]{ Ae.Locate[0],Ae.Locate[1] };
	return *this;
}
#ifndef ANGLE_H
#define ANGLE_H
#include"PointBase.h"

class Angle :public PointBase {
protected:
public:
	Angle();
	Angle(const int x, const int y);
	Angle(const Angle& Ae);
	bool isAngle();

	Angle& operator=(Angle& Ae);
};

#endif ANGLE_H

#ifndef POINT_H
#define POINT_H
#include"PointBase.h"

class Point :public PointBase {
protected:
public:
	Point();
	Point(const int x, const int y);
	Point(const Point& Pt);
	bool isAngle();

	Point& operator=(Point& Pt);
};

#endif POINT_H

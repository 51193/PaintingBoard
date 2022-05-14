#ifndef MYPOLYGON_H
#define MYPOLYGON_H
#include"ShapeBase.h"

class MyPolygon :public ShapeBase {
protected:
public:
	MyPolygon();
	MyPolygon(const MyPolygon& Pn);
	Type getterType();
	void Draw();

	MyPolygon& operator=(const MyPolygon& Pn);
};

#endif MYPOLYGON_H

#ifndef MYPOINT_H
#define MYPOINT_H
#include"ShapeBase.h"

class MyPoint :public ShapeBase {
protected:
public:
	MyPoint();
	MyPoint(const MyPoint& Ce);
	Type getterType();
	void Draw();

	MyPoint& operator=(const MyPoint& Ce);
};

#endif MYPOINT_H

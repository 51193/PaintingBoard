#ifndef MYCIRCLE_H
#define MYCIRCLE_H
#include"ShapeBase.h"

class MyCircle :public ShapeBase {
protected:
public:
	MyCircle();
	MyCircle(const MyCircle& Ce);
	Type getterType();
	void Draw();

	MyCircle& operator=(const MyCircle& Ce);
};

#endif MYCIRCLE_H
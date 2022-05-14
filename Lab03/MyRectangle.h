#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H
#include"ShapeBase.h"

class MyRectangle :public ShapeBase {
protected:
public:
	MyRectangle();
	MyRectangle(const MyRectangle& Re);
	Type getterType();
	void Draw();

	MyRectangle& operator=(const MyRectangle& Re);
};

#endif MYRECTANGLE_H
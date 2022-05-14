#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H
#include"ShapeBase.h"

class MyTriangle :public ShapeBase {
protected:
public:
	MyTriangle();
	MyTriangle(const MyTriangle& Te);
	Type getterType();
	void Draw();

	MyTriangle& operator=(const MyTriangle& Te);
};

#endif MYTRIANGLE_H
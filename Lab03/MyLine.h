#ifndef MYLINE_H
#define MYLINE_H
#include"ShapeBase.h"

class MyLine :public ShapeBase {
protected:
public:
	MyLine();
	MyLine(const MyLine& Le);
	Type getterType();
	void Draw();

	MyLine& operator=(const MyLine& Le);
};

#endif MYLINE_H

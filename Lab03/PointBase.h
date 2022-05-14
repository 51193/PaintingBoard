#ifndef POINTBASE_H
#define POINTBASE_H
#include<assert.h>

class PointBase {
protected:
	int* Locate = nullptr;
public:
	PointBase();
	PointBase(const int x, const int y);
	~PointBase();
	int getterx();
	int gettery();
	void setterx(const int x);
	void settery(const int y);
	virtual bool isAngle() = 0;
};

#endif POINTBASE_H

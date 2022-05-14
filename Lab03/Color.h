#ifndef COLOR_H
#define COLOR_H
#include<assert.h>
#include<graphics.h>

class Color {
private:
	int FillR, FillG, FillB;
	int LineR, LineG, LineB;
	bool isFill;
public:
	Color();
	Color(const int LineR, const int LineG, const int LineB, const bool isFill);
	Color(const int LineR, const int LineG, const int LineB, const int FillR, const int FillG, const int FillB, bool isFill);
	Color(const Color& color);
	void setter(const bool isFill);
	void setterLineR(const unsigned int LineR);
	void setterLineG(const unsigned int LineG);
	void setterLineB(const unsigned int LineB);
	void setterFillR(const unsigned int FillR);
	void setterFillG(const unsigned int FillG);
	void setterFillB(const unsigned int FillB);
	bool getter();
	unsigned int getterLineR();
	unsigned int getterLineG();
	unsigned int getterLineB();
	unsigned int getterFillR();
	unsigned int getterFillG();
	unsigned int getterFillB();
	void Apply();
	void ApplyLineToAll();

	Color& operator=(const Color& color);
};

#endif COLOR_H
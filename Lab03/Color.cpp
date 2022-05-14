#include"Color.h"

Color::Color() :FillR{ 0 }, FillG{ 0 }, FillB{ 0 }, LineR{ 0 }, LineG{ 0 }, LineB{ 0 }, isFill{ 0 }{}

Color::Color(const int LineR, const int LineG, const int LineB, const bool isFill) : LineR{ LineR }, LineG{ LineG }, LineB{ LineB }, FillR{ 255 }, FillG{ 255 }, FillB{ 255 }, isFill{ isFill }{
	assert(LineR < 256);
	assert(LineG < 256);
	assert(LineB < 256);
}

Color::Color(const int LineR, const int LineG, const int LineB, const int FillR, const int FillG, const int FillB, bool isFill) :LineR{ LineR }, LineG{ LineG }, LineB{ LineB }, FillR{ FillR }, FillG{ FillG }, FillB{ FillB }, isFill{ isFill }{
	assert(LineR < 256);
	assert(LineG < 256);
	assert(LineB < 256);
	assert(FillR < 256);
	assert(FillG < 256);
	assert(FillB < 256);
}

Color::Color(const Color& color) {
	this->LineR = color.LineR;
	this->LineG = color.LineG;
	this->LineB = color.LineB;
	this->FillR = color.FillR;
	this->FillG = color.FillG;
	this->FillB = color.FillB;
	this->isFill = color.isFill;
}

void Color::setter(const bool isFill) {
	this->isFill = isFill;
}

void Color::setterLineR(const unsigned int LineR) {
	this->LineR = LineR;
}

void Color::setterLineG(const unsigned int LineG) {
	this->LineG = LineG;
}

void Color::setterLineB(const unsigned int LineB) {
	this->LineB = LineB;
}

void Color::setterFillR(const unsigned int FillR) {
	this->FillR = FillR;
}

void Color::setterFillG(const unsigned int FillG) {
	this->FillG = FillG;
}

void Color::setterFillB(const unsigned int FillB) {
	this->FillB = FillB;
} 

bool Color::getter() {
	return isFill;
}

unsigned int Color::getterLineR() {
	return LineR;
}

unsigned int Color::getterLineG() {
	return LineG;
}

unsigned int Color::getterLineB() {
	return LineB;
}

unsigned int Color::getterFillR() {
	return FillR;
}

unsigned int Color::getterFillG() {
	return FillG;
}

unsigned int Color::getterFillB() {
	return FillB;
}

void Color::Apply() {
	setcolor(EGERGB(LineR, LineG, LineB));
	if (isFill) {
		setfillcolor(EGERGB(FillR, FillG, FillB));
	}
	else setfillcolor(EGERGB(255, 255, 255));
}

void Color::ApplyLineToAll() {
	setcolor(EGERGB(LineR, LineG, LineB));
	setfillcolor(EGERGB(LineR, LineG, LineB));
}

Color& Color::operator=(const Color& color) {
	this->LineR = color.LineR;
	this->LineG = color.LineG;
	this->LineB = color.LineB;
	this->FillR = color.FillR;
	this->FillG = color.FillG;
	this->FillB = color.FillB;
	this->isFill = color.isFill;
	return *this;
}
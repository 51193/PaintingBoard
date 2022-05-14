#ifndef INPUTBOX_H
#define INPUTBOX_H
#include<graphics.h>
#include<ege/sys_edit.h>

class InputBox {
private:
	sys_edit Box;
public:
	InputBox(const int x, const int y);
	int getter();
	void setter(const char* string);
};

#endif INPUTBOX_H
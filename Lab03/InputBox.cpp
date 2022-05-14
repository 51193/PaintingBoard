#include"InputBox.h"

InputBox::InputBox(int x, int y) {
	Box.create(false);
	Box.move(x, y);
	Box.size(40, 25);
	Box.setmaxlen(3);
	Box.setbgcolor(EGERGB(255, 255, 255));
	Box.setcolor(EGERGB(0, 0, 0));
	Box.setfont(18, 0, "Consolas");
	Box.visible(true);
}

int InputBox::getter() {
	char A[4]{};
	int num{ 0 };
	Box.gettext(4, A);
	const char* p = A;
	for (p = A; *p != '\0'; p++) {
		num = 10 * num + (*p - '0');
	}
	if (num > 255)return 255;
	else return num;
}

void InputBox::setter(const char* string) {
	Box.settext(string);
}
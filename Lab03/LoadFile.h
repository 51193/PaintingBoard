#ifndef LOADFILE_H
#define LOADFILE_H
#include"File.h"

class LoadFile :public File {
protected:
public:
	LoadFile(char* string);
	void run();
	int getterErrorCode();
};

#endif LOADFILE_H
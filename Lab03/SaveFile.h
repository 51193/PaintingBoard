#ifndef SAVEFILE_H
#define SAVEFILE_H
#include"File.h"

class SaveFile:public File {
private:
public:
	SaveFile(std::vector<ShapeBase*>Vec, char* string);
	void run();
	int getterErrorCode();
};

#endif SAVEFILE_H
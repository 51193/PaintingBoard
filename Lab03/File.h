#ifndef FILE_H
#define FILE_H
#include<filesystem>
#include<fstream>
#include"MyCircle.h"
#include"MyLine.h"
#include"MyPoint.h"
#include"MyPolygon.h"
#include"MyRectangle.h"
#include"MyTriangle.h"

enum Error { Default, SaveSucceed, LoadSucceed, OpenFail, WrongShapeType, ShapeDataMissing, ColorDataMissing };

class File {
protected:
	std::filesystem::path Path{};
	std::vector<ShapeBase*>Vector;
	int ThrowError{};
public:
	File(char* string);
	File(std::vector<ShapeBase*>Vec, char* string);
	~File();
	std::vector<ShapeBase*>getterVector();
	virtual void run() = 0;
	virtual int getterErrorCode() = 0;
};

#endif FILE_H

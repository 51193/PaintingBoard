#include"File.h"

File::File(char* string) :ThrowError{ LoadSucceed } {
	Path = string;
}

File::File(std::vector<ShapeBase*>Vec, char* string) :ThrowError{ SaveSucceed } {
	for (size_t i = 0; i < Vec.size(); i++) {
		if (Vec.empty())NULL;
		else {
			switch (Vec[i]->getterType()) {
			case CircleType:
				Vector.push_back(new MyCircle(*dynamic_cast<MyCircle*>(Vec[i])));
				break;
			case RectangleType:
				Vector.push_back(new MyRectangle(*dynamic_cast<MyRectangle*>(Vec[i])));
				break;
			case TriangleType:
				Vector.push_back(new MyTriangle(*dynamic_cast<MyTriangle*>(Vec[i])));
				break;
			case LineType:
				Vector.push_back(new MyLine(*dynamic_cast<MyLine*>(Vec[i])));
				break;
			case PolygonType:
				Vector.push_back(new MyPolygon(*dynamic_cast<MyPolygon*>(Vec[i])));
				break;
			case PointType:
				Vector.push_back(new MyPoint(*dynamic_cast<MyPoint*>(Vec[i])));
				break;
			}
		}
	}
	Path = string;
}

File::~File() {
	for (; !Vector.empty();) {
		delete* Vector.rbegin();
		Vector.pop_back();
	}
}

std::vector<ShapeBase*>File::getterVector() {
	return Vector;
}
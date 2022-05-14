#include"LoadFile.h"

LoadFile::LoadFile(char* string) :File{ string } {}

void LoadFile::run() {
	int ShapeType{};
	int Ptx{}, Pty{};
	int cache{};
	bool isWrong{ 0 };
	std::ifstream fin(Path, std::ios::in);
	if (!fin.good()) {
		ThrowError = OpenFail;
	}
	else {
		for (; (cache = fin.get()) != EOF;) {
			for (; cache != 10;) {
				cache = fin.get();
			}
			if (cache = fin.get() == EOF)break;
			fin >> ShapeType;
			for (; cache = fin.get() != 10;) {}
			switch (ShapeType) {
			case CircleType: {
				MyCircle circle;
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						circle.AddPoint(pt);
					}
				}
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						circle.AddPoint(pt);
						for (; cache = fin.get() != 10;) {}
					}
				}
				Color color;
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setter(cache);
						for (; cache = fin.get() != 10;) {}
					}
				}
				if (isWrong) {
					Color color(0, 0, 0, 255, 255, 255, false);
				}
				circle.setterColor(color);
				if (isWrong && circle.getter().size() < 2)NULL;
				else Vector.push_back(new MyCircle(circle));
				isWrong = 0;
				break;
			}
			case RectangleType: {
				MyRectangle rectangle;
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						rectangle.AddPoint(pt);
					}
				}
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						rectangle.AddPoint(pt);
						for (; cache = fin.get() != 10;) {}
					}
				}
				Color color;
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setter(cache);
						for (; cache = fin.get() != 10;) {}
					}
				}
				if (isWrong) {
					Color color(0, 0, 0, 255, 255, 255, false);
				}
				rectangle.setterColor(color);
				if (isWrong && rectangle.getter().size() < 2)NULL;
				else Vector.push_back(new MyRectangle(rectangle));
				isWrong = 0;
				break;
			}
			case TriangleType: {
				MyTriangle triangle;
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						triangle.AddPoint(pt);
					}
				}
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						triangle.AddPoint(pt);
					}
				}
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						triangle.AddPoint(pt);
						for (; cache = fin.get() != 10;) {}
					}
				}
				Color color;
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setter(cache);
						for (; cache = fin.get() != 10;) {}
					}
				}
				if (isWrong) {
					Color color(0, 0, 0, 255, 255, 255, false);
				}
				triangle.setterColor(color);
				if (isWrong && triangle.getter().size() < 2)NULL;
				else Vector.push_back(new MyTriangle(triangle));
				isWrong = 0;
				break;
			}
			case LineType: {
				MyLine line;
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						line.AddPoint(pt);
					}
				}
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						line.AddPoint(pt);
						for (; cache = fin.get() != 10;) {}
					}
				}
				Color color;
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setter(cache);
						for (; cache = fin.get() != 10;) {}
					}
				}
				if (isWrong) {
					Color color(0, 0, 0, 255, 255, 255, false);
				}
				line.setterColor(color);
				if (isWrong && line.getter().size() < 2)NULL;
				else Vector.push_back(new MyLine(line));
				isWrong = 0;
				break;
			}
			case PolygonType:
				NULL;
				break;
			case PointType: {
				MyPoint point;
				if (!isWrong) {
					fin >> Ptx;
					if (Ptx == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
				}
				if (!isWrong) {
					fin >> Pty;
					if (Pty == -1) {
						ThrowError = ShapeDataMissing;
						isWrong = 1;
					}
					else {
						Point pt(Ptx, Pty);
						point.AddPoint(pt);
						for (; cache = fin.get() != 10;) {}
					}
				}
				Color color;
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterLineB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillR(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillG(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setterFillB(cache);
					}
				}
				if (!isWrong) {
					fin >> cache;
					if (cache == -1) {
						ThrowError = ColorDataMissing;
						isWrong = 1;
					}
					else {
						color.setter(cache);
						for (; cache = fin.get() != 10;) {}
					}
				}
				if (isWrong) {
					Color color(0, 0, 0, 255, 255, 255, false);
				}
				point.setterColor(color);
				if (isWrong && point.getter().size() < 2)NULL;
				else Vector.push_back(new MyPoint(point));
				isWrong = 0;
				break;
			}
			default:
				ThrowError = WrongShapeType;
				break;
			}
		}
	}
	fin.close();
}

int LoadFile::getterErrorCode() {
	return ThrowError;
}
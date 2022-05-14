#include"SaveFile.h"

SaveFile::SaveFile(std::vector<ShapeBase*>Vec, char* string) :File{ Vec, string } {}

void SaveFile::run() {
	std::ofstream fout(Path, std::ios::out);
	for (size_t i = 0; i < Vector.size(); i++) {
		switch (Vector[i]->getterType()) {
		case CircleType:
			fout << -1 << std::endl << std::endl << CircleType << std::endl
				<< Vector[i]->getterPtr(0)->getterx() << " " << Vector[i]->getterPtr(0)->gettery() << " "
				<< Vector[i]->getterPtr(1)->getterx() << " " << Vector[i]->getterPtr(1)->gettery() << std::endl
				<< Vector[i]->getterColor().getterLineR() << " " << Vector[i]->getterColor().getterLineG() << " " << Vector[i]->getterColor().getterLineB() << " "
				<< Vector[i]->getterColor().getterFillR() << " " << Vector[i]->getterColor().getterFillG() << " " << Vector[i]->getterColor().getterFillB() << " "
				<< Vector[i]->getterColor().getter() << std::endl;
			break;
		case RectangleType:
			fout << -1 << std::endl << std::endl << RectangleType << std::endl
				<< Vector[i]->getterPtr(0)->getterx() << " " << Vector[i]->getterPtr(0)->gettery() << " "
				<< Vector[i]->getterPtr(1)->getterx() << " " << Vector[i]->getterPtr(1)->gettery() << std::endl
				<< Vector[i]->getterColor().getterLineR() << " " << Vector[i]->getterColor().getterLineG() << " " << Vector[i]->getterColor().getterLineB() << " "
				<< Vector[i]->getterColor().getterFillR() << " " << Vector[i]->getterColor().getterFillG() << " " << Vector[i]->getterColor().getterFillB() << " "
				<< Vector[i]->getterColor().getter() << std::endl;
			break;
		case TriangleType:
			fout << -1 << std::endl << std::endl << TriangleType << std::endl
				<< Vector[i]->getterPtr(0)->getterx() << " " << Vector[i]->getterPtr(0)->gettery() << " "
				<< Vector[i]->getterPtr(1)->getterx() << " " << Vector[i]->getterPtr(1)->gettery() << " "
				<< Vector[i]->getterPtr(2)->getterx() << " " << Vector[i]->getterPtr(2)->gettery() << std::endl
				<< Vector[i]->getterColor().getterLineR() << " " << Vector[i]->getterColor().getterLineG() << " " << Vector[i]->getterColor().getterLineB() << " "
				<< Vector[i]->getterColor().getterFillR() << " " << Vector[i]->getterColor().getterFillG() << " " << Vector[i]->getterColor().getterFillB() << " "
				<< Vector[i]->getterColor().getter() << std::endl;
			break;
		case LineType:
			fout << -1 << std::endl << std::endl << LineType << std::endl
				<< Vector[i]->getterPtr(0)->getterx() << " " << Vector[i]->getterPtr(0)->gettery() << " "
				<< Vector[i]->getterPtr(1)->getterx() << " " << Vector[i]->getterPtr(1)->gettery() << std::endl
				<< Vector[i]->getterColor().getterLineR() << " " << Vector[i]->getterColor().getterLineG() << " " << Vector[i]->getterColor().getterLineB() << " "
				<< Vector[i]->getterColor().getterFillR() << " " << Vector[i]->getterColor().getterFillG() << " " << Vector[i]->getterColor().getterFillB() << " "
				<< Vector[i]->getterColor().getter() << std::endl;
			break;
		case PolygonType:
			NULL;//用不到的类，不写了，太麻烦
			break;
		case PointType:
			fout << -1 << std::endl << std::endl << PointType << std::endl
				<< Vector[i]->getterPtr(0)->getterx() << " " << Vector[i]->getterPtr(0)->gettery() << std::endl
				<< Vector[i]->getterColor().getterLineR() << " " << Vector[i]->getterColor().getterLineG() << " " << Vector[i]->getterColor().getterLineB() << " "
				<< Vector[i]->getterColor().getterFillR() << " " << Vector[i]->getterColor().getterFillG() << " " << Vector[i]->getterColor().getterFillB() << " "
				<< Vector[i]->getterColor().getter() << std::endl;
			break;
		}
	}
	fout << -1 << std::endl;
	fout.close();
}

int SaveFile::getterErrorCode() {
	return ThrowError;
}
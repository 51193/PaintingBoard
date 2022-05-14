#ifndef PAINTINGBOARD_H
#define PAINTINFBOARD_H
#include"MyCircle.h"
#include"MyLine.h"
#include"MyPoint.h"
#include"MyPolygon.h"
#include"MyRectangle.h"
#include"MyTriangle.h"
#include"InputBox.h"
#include"SaveFile.h"
#include"LoadFile.h"

class PaintingBoard {
private:
	std::vector<ShapeBase*>Cache;
	std::vector<ShapeBase*>TrashBin;
	std::vector<ShapeBase*>CacheToUI;
	std::vector<InputBox*>InputBoxes;
	sys_edit SavePathBox;
	sys_edit LoadPathBox;
	int message{};
public:
	PaintingBoard();
	~PaintingBoard();
	void AddShape(const MyCircle& Ce);
	void AddShape(const MyLine& Le);
	void AddShape(const MyPoint& Pt);
	void AddShape(const MyPolygon& Pn);
	void AddShape(const MyRectangle& Re);
	void AddShape(const MyTriangle& Te);
	void AddShapeToUI(const MyCircle& Ce);
	void AddShapeToUI(const MyLine& Le);
	void AddShapeToUI(const MyPoint& Pt);
	void AddShapeToUI(const MyPolygon& Pn);
	void AddShapeToUI(const MyRectangle& Re);
	void AddShapeToUI(const MyTriangle& Te);
	void ClearTrashBin();
	void run();
	void event();
	void render();
};


#endif PAINTINGBOARD_H

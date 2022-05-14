#include"PaintingBoard.h"

PaintingBoard::PaintingBoard() :message{ Default } {

	initgraph(1360, 960);
	setcaption("比微软做的还好的画板");
	setbkcolor(WHITE);
	setcolor(BLACK);
	setfont(23, 0, "Consolas");
	setfillcolor(WHITE);

	SavePathBox.create(false);
	SavePathBox.move(10, 620);
	SavePathBox.size(140, 25);
	SavePathBox.setmaxlen(50);
	SavePathBox.setbgcolor(EGERGB(255, 255, 255));
	SavePathBox.setcolor(EGERGB(0, 0, 0));
	SavePathBox.setfont(20, 0, "Consolas");
	SavePathBox.visible(true);
	SavePathBox.settext("D:\\save.txt");

	LoadPathBox.create(false);
	LoadPathBox.move(10, 720);
	LoadPathBox.size(140, 25);
	LoadPathBox.setmaxlen(50);
	LoadPathBox.setbgcolor(EGERGB(255, 255, 255));
	LoadPathBox.setcolor(EGERGB(0, 0, 0));
	LoadPathBox.setfont(20, 0, "Consolas");
	LoadPathBox.visible(true);
	LoadPathBox.settext("D:\\save.txt");

	Point MainButton1(0, 0), MainButton2(160, 960);
	Point CircleButton1(0, 0), CircleButton2(80, 80);
	Point FillCircleButton1(80, 0), FillCircleButton2(160, 80);
	Point RectangleButton1(0, 80), RectangleButton2(80, 160);
	Point FillRectangleButton1(80, 80), FillRectangleButton2(160, 160);
	Point TriangleButton1(0, 160), TriangleButton2(80, 240);
	Point FillTriangleButton1(80, 160), FillTriangleButton2(160, 240);
	Point LineButton1(0, 240), LineButton2(80, 320);
	Point PointButton1(80, 240), PointButton2(160, 320);
	Point UndoButton1(0, 800), UndoButton2(80, 880);
	Point UndoButton3(80, 800), UndoButton4(160, 880);
	Point SaveButton1(0, 880), SaveButton2(80, 960);
	Point LoadButton1(80, 880), LoadButton2(160, 960);

	MyRectangle mainbutton, circlebutton, fillcirclebutton, rectanglebutton, fillrectanglebutton, trianglebutton, filltrianglebutton, linebutton, pointbutton, undobutton1, undobutton2, savebutton, loadbutton;
	Color FillBlank(0, 0, 0, 255, 255, 255, true);

	mainbutton.AddPoint(MainButton1);
	mainbutton.AddPoint(MainButton2);
	mainbutton.setterColor(FillBlank);
	circlebutton.AddPoint(CircleButton1);
	circlebutton.AddPoint(CircleButton2);
	circlebutton.setterColor(FillBlank);
	fillcirclebutton.AddPoint(FillCircleButton1);
	fillcirclebutton.AddPoint(FillCircleButton2);
	fillcirclebutton.setterColor(FillBlank);
	rectanglebutton.AddPoint(RectangleButton1);
	rectanglebutton.AddPoint(RectangleButton2);
	rectanglebutton.setterColor(FillBlank);
	fillrectanglebutton.AddPoint(FillRectangleButton1);
	fillrectanglebutton.AddPoint(FillRectangleButton2);
	fillrectanglebutton.setterColor(FillBlank);
	trianglebutton.AddPoint(TriangleButton1);
	trianglebutton.AddPoint(TriangleButton2);
	trianglebutton.setterColor(FillBlank);
	filltrianglebutton.AddPoint(FillTriangleButton1);
	filltrianglebutton.AddPoint(FillTriangleButton2);
	filltrianglebutton.setterColor(FillBlank);
	linebutton.AddPoint(LineButton1);
	linebutton.AddPoint(LineButton2);
	linebutton.setterColor(FillBlank);
	pointbutton.AddPoint(PointButton1);
	pointbutton.AddPoint(PointButton2);
	pointbutton.setterColor(FillBlank);
	undobutton1.AddPoint(UndoButton1);
	undobutton1.AddPoint(UndoButton2);
	undobutton1.setterColor(FillBlank);
	undobutton2.AddPoint(UndoButton3);
	undobutton2.AddPoint(UndoButton4);
	undobutton2.setterColor(FillBlank);
	savebutton.AddPoint(SaveButton1);
	savebutton.AddPoint(SaveButton2);
	savebutton.setterColor(FillBlank);
	loadbutton.AddPoint(LoadButton1);
	loadbutton.AddPoint(LoadButton2);
	loadbutton.setterColor(FillBlank);
	AddShapeToUI(mainbutton);
	AddShapeToUI(circlebutton);
	AddShapeToUI(fillcirclebutton);
	AddShapeToUI(rectanglebutton);
	AddShapeToUI(fillrectanglebutton);
	AddShapeToUI(trianglebutton);
	AddShapeToUI(filltrianglebutton);
	AddShapeToUI(linebutton);
	AddShapeToUI(pointbutton);
	AddShapeToUI(undobutton1);
	AddShapeToUI(undobutton2);
	AddShapeToUI(savebutton);
	AddShapeToUI(loadbutton);

	Color Black(0, 0, 0, 0, 0, 0, true), Red(0, 0, 0, 255, 0, 0, true), Orange(0, 0, 0, 255, 165, 0, true), Yellow(0, 0, 0, 255, 255, 0, true), Green(0, 0, 0, 0, 255, 0, true), Cyan(0, 0, 0, 0, 255, 255, true), Blue(0, 0, 0, 0, 0, 255, true), Purple(0, 0, 0, 255, 0, 255, true), White(0, 0, 0, 255, 255, 255, true);

	MyRectangle r1_1;
	Point Pt1_1_1(80, 360), Pt1_1_2(100, 380);
	r1_1.AddPoint(Pt1_1_1);
	r1_1.AddPoint(Pt1_1_2);
	r1_1.setterColor(Black);
	AddShapeToUI(r1_1);

	MyRectangle r1_2;
	Point Pt1_2_1(105, 360), Pt1_2_2(125, 380);
	r1_2.AddPoint(Pt1_2_1);
	r1_2.AddPoint(Pt1_2_2);
	r1_2.setterColor(Red);
	AddShapeToUI(r1_2);

	MyRectangle r1_3;
	Point Pt1_3_1(130, 360), Pt1_3_2(150, 380);
	r1_3.AddPoint(Pt1_3_1);
	r1_3.AddPoint(Pt1_3_2);
	r1_3.setterColor(Orange);
	AddShapeToUI(r1_3);

	MyRectangle r1_4;
	Point Pt1_4_1(80, 385), Pt1_4_2(100, 405);
	r1_4.AddPoint(Pt1_4_1);
	r1_4.AddPoint(Pt1_4_2);
	r1_4.setterColor(Yellow);
	AddShapeToUI(r1_4);

	MyRectangle r1_5;
	Point Pt1_5_1(105, 385), Pt1_5_2(125, 405);
	r1_5.AddPoint(Pt1_5_1);
	r1_5.AddPoint(Pt1_5_2);
	r1_5.setterColor(Green);
	AddShapeToUI(r1_5);

	MyRectangle r1_6;
	Point Pt1_6_1(130, 385), Pt1_6_2(150, 405);
	r1_6.AddPoint(Pt1_6_1);
	r1_6.AddPoint(Pt1_6_2);
	r1_6.setterColor(Cyan);
	AddShapeToUI(r1_6);

	MyRectangle r1_7;
	Point Pt1_7_1(80, 410), Pt1_7_2(100, 430);
	r1_7.AddPoint(Pt1_7_1);
	r1_7.AddPoint(Pt1_7_2);
	r1_7.setterColor(Blue);
	AddShapeToUI(r1_7);

	MyRectangle r1_8;
	Point Pt1_8_1(105, 410), Pt1_8_2(125, 430);
	r1_8.AddPoint(Pt1_8_1);
	r1_8.AddPoint(Pt1_8_2);
	r1_8.setterColor(Purple);
	AddShapeToUI(r1_8);

	MyRectangle r1_9;
	Point Pt1_9_1(130, 410), Pt1_9_2(150, 430);
	r1_9.AddPoint(Pt1_9_1);
	r1_9.AddPoint(Pt1_9_2);
	r1_9.setterColor(White);
	AddShapeToUI(r1_9);

	MyRectangle r2_1;
	Point Pt2_1_1(80, 480), Pt2_1_2(100, 500);
	r2_1.AddPoint(Pt2_1_1);
	r2_1.AddPoint(Pt2_1_2);
	r2_1.setterColor(Black);
	AddShapeToUI(r2_1);

	MyRectangle r2_2;
	Point Pt2_2_1(105, 480), Pt2_2_2(125, 500);
	r2_2.AddPoint(Pt2_2_1);
	r2_2.AddPoint(Pt2_2_2);
	r2_2.setterColor(Red);
	AddShapeToUI(r2_2);

	MyRectangle r2_3;
	Point Pt2_3_1(130, 480), Pt2_3_2(150, 500);
	r2_3.AddPoint(Pt2_3_1);
	r2_3.AddPoint(Pt2_3_2);
	r2_3.setterColor(Orange);
	AddShapeToUI(r2_3);

	MyRectangle r2_4;
	Point Pt2_4_1(80, 505), Pt2_4_2(100, 525);
	r2_4.AddPoint(Pt2_4_1);
	r2_4.AddPoint(Pt2_4_2);
	r2_4.setterColor(Yellow);
	AddShapeToUI(r2_4);

	MyRectangle r2_5;
	Point Pt2_5_1(105, 505), Pt2_5_2(125, 525);
	r2_5.AddPoint(Pt2_5_1);
	r2_5.AddPoint(Pt2_5_2);
	r2_5.setterColor(Green);
	AddShapeToUI(r2_5);

	MyRectangle r2_6;
	Point Pt2_6_1(130, 505), Pt2_6_2(150, 525);
	r2_6.AddPoint(Pt2_6_1);
	r2_6.AddPoint(Pt2_6_2);
	r2_6.setterColor(Cyan);
	AddShapeToUI(r2_6);

	MyRectangle r2_7;
	Point Pt2_7_1(80, 530), Pt2_7_2(100, 550);
	r2_7.AddPoint(Pt2_7_1);
	r2_7.AddPoint(Pt2_7_2);
	r2_7.setterColor(Blue);
	AddShapeToUI(r2_7);

	MyRectangle r2_8;
	Point Pt2_8_1(105, 530), Pt2_8_2(125, 550);
	r2_8.AddPoint(Pt2_8_1);
	r2_8.AddPoint(Pt2_8_2);
	r2_8.setterColor(Purple);
	AddShapeToUI(r2_8);

	MyRectangle r2_9;
	Point Pt2_9_1(130, 530), Pt2_9_2(150, 550);
	r2_9.AddPoint(Pt2_9_1);
	r2_9.AddPoint(Pt2_9_2);
	r2_9.setterColor(White);
	AddShapeToUI(r2_9);

	Color FillSilver(0, 0, 0, 192, 192, 192, true);

	MyCircle circlepattern;
	Point circlepattern1(40, 40), circlepattern2(40, 60);
	circlepattern.AddPoint(circlepattern1);
	circlepattern.AddPoint(circlepattern2);
	circlepattern.setterColor(FillBlank);
	AddShapeToUI(circlepattern);
	MyCircle fillcirclepattern;
	Point fillcirclepattern1(120, 40), fillcirclepattern2(120, 60);
	fillcirclepattern.AddPoint(fillcirclepattern1);
	fillcirclepattern.AddPoint(fillcirclepattern2);
	fillcirclepattern.setterColor(FillSilver);
	AddShapeToUI(fillcirclepattern);

	MyRectangle rectanglepattern;
	Point rectanglepattern1(20, 100), rectanglepattern2(60, 140);
	rectanglepattern.AddPoint(rectanglepattern1);
	rectanglepattern.AddPoint(rectanglepattern2);
	rectanglepattern.setterColor(FillBlank);
	AddShapeToUI(rectanglepattern);
	MyRectangle fillrectanglepattern;
	Point fillrectanglepattern1(100, 100), fillrectanglepattern2(140, 140);
	fillrectanglepattern.AddPoint(fillrectanglepattern1);
	fillrectanglepattern.AddPoint(fillrectanglepattern2);
	fillrectanglepattern.setterColor(FillSilver);
	AddShapeToUI(fillrectanglepattern);

	MyTriangle trianglepattern;
	Point trianglepattern1(40, 180), trianglepattern2(20, 210), trianglepattern3(60, 210);
	trianglepattern.AddPoint(trianglepattern1);
	trianglepattern.AddPoint(trianglepattern2);
	trianglepattern.AddPoint(trianglepattern3);
	trianglepattern.setterColor(FillBlank);
	AddShapeToUI(trianglepattern);
	MyTriangle filltrianglepattern;
	Point filltrianglepattern1(120, 180), filltrianglepattern2(100, 210), filltrianglepattern3(140, 210);
	filltrianglepattern.AddPoint(filltrianglepattern1);
	filltrianglepattern.AddPoint(filltrianglepattern2);
	filltrianglepattern.AddPoint(filltrianglepattern3);
	filltrianglepattern.setterColor(FillSilver);
	AddShapeToUI(filltrianglepattern);

	MyLine linepattern;
	Point linepattern1(25, 260), linepattern2(55, 300);
	linepattern.AddPoint(linepattern1);
	linepattern.AddPoint(linepattern2);
	linepattern.setterColor(FillBlank);
	AddShapeToUI(linepattern);

	MyPoint pointpattern;
	Point pointpattern1(120, 280);
	pointpattern.AddPoint(pointpattern1);
	linepattern.setterColor(FillBlank);
	AddShapeToUI(pointpattern);

	Color ArrowColor(169, 169, 169, 169, 169, 169, true);

	MyTriangle arrow1;
	Point Arrow1Pt1(20, 840), Arrow1Pt2(30, 826), Arrow1Pt3(30, 854);
	arrow1.AddPoint(Arrow1Pt1);
	arrow1.AddPoint(Arrow1Pt2);
	arrow1.AddPoint(Arrow1Pt3);
	arrow1.setterColor(ArrowColor);
	AddShapeToUI(arrow1);
	MyRectangle bar1;
	Point Bar1Pt1(30, 835), Bar1Pt2(60, 845);
	bar1.AddPoint(Bar1Pt1);
	bar1.AddPoint(Bar1Pt2);
	bar1.setterColor(ArrowColor);
	AddShapeToUI(bar1);

	MyTriangle arrow2;
	Point Arrow2Pt1(140, 840), Arrow2Pt2(130, 826), Arrow2Pt3(130, 854);
	arrow2.AddPoint(Arrow2Pt1);
	arrow2.AddPoint(Arrow2Pt2);
	arrow2.AddPoint(Arrow2Pt3);
	arrow2.setterColor(ArrowColor);
	AddShapeToUI(arrow2);
	MyRectangle bar2;
	Point Bar2Pt1(130, 835), Bar2Pt2(100, 845);
	bar2.AddPoint(Bar2Pt1);
	bar2.AddPoint(Bar2Pt2);
	bar2.setterColor(ArrowColor);
	AddShapeToUI(bar2);
}

PaintingBoard::~PaintingBoard() {
	for (; !Cache.empty();) {
		delete* Cache.rbegin();
		Cache.pop_back();
	}
	for (; !TrashBin.empty();) {
		delete* TrashBin.rbegin();
		TrashBin.pop_back();
	}
	for (; !CacheToUI.empty();) {
		delete* CacheToUI.rbegin();
		CacheToUI.pop_back();
	}
	for (; !InputBoxes.empty();) {
		delete* InputBoxes.rbegin();
		InputBoxes.pop_back();
	}
}

void PaintingBoard::AddShape(const MyCircle& Ce) {
	Cache.push_back(new MyCircle(Ce));
}
void PaintingBoard::AddShape(const MyLine& Le) {
	Cache.push_back(new MyLine(Le));
}
void PaintingBoard::AddShape(const MyPoint& Pt) {
	Cache.push_back(new MyPoint(Pt));
}
void PaintingBoard::AddShape(const MyPolygon& Pn) {
	Cache.push_back(new MyPolygon(Pn));
}
void PaintingBoard::AddShape(const MyRectangle& Re) {
	Cache.push_back(new MyRectangle(Re));
}
void PaintingBoard::AddShape(const MyTriangle& Te) {
	Cache.push_back(new MyTriangle(Te));
}

void PaintingBoard::AddShapeToUI(const MyCircle& Ce) {
	CacheToUI.push_back(new MyCircle(Ce));
}
void PaintingBoard::AddShapeToUI(const MyLine& Le) {
	CacheToUI.push_back(new MyLine(Le));
}
void PaintingBoard::AddShapeToUI(const MyPoint& Pt) {
	CacheToUI.push_back(new MyPoint(Pt));
}
void PaintingBoard::AddShapeToUI(const MyPolygon& Pn) {
	CacheToUI.push_back(new MyPolygon(Pn));
}
void PaintingBoard::AddShapeToUI(const MyRectangle& Re) {
	CacheToUI.push_back(new MyRectangle(Re));
}
void PaintingBoard::AddShapeToUI(const MyTriangle& Te) {
	CacheToUI.push_back(new MyTriangle(Te));
}

void PaintingBoard::ClearTrashBin() {
	for (; !TrashBin.empty();) {
		delete* TrashBin.rbegin();
		TrashBin.pop_back();
	}
}

void PaintingBoard::run() {
	InputBox LineR(30, 360);
	InputBox LineG(30, 380);
	InputBox LineB(30, 400);
	InputBox FillR(30, 480);
	InputBox FillG(30, 500);
	InputBox FillB(30, 520);
	InputBoxes.push_back(new InputBox(LineR));
	InputBoxes.push_back(new InputBox(LineG));
	InputBoxes.push_back(new InputBox(LineB));
	InputBoxes.push_back(new InputBox(FillR));
	InputBoxes.push_back(new InputBox(FillG));
	InputBoxes.push_back(new InputBox(FillB));
	for (; is_run(); delay_fps(60)) {
		event();
		render();
	}
}

void PaintingBoard::event() {
	mouse_msg msg{};
	while (mousemsg()) {
		msg = getmouse();
	}
	if (msg.is_up()) {
		if (CacheToUI[1]->isClicked(msg)) {
			ClearTrashBin();
			MyCircle circle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					circle.AddPoint(Pt);
					if (circle.getterSize() == 2) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), false);
						circle.setterColor(color);
						AddShape(circle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[2]->isClicked(msg)) {
			ClearTrashBin();
			MyCircle fillcircle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					fillcircle.AddPoint(Pt);
					if (fillcircle.getterSize() == 2) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), true);
						fillcircle.setterColor(color);
						AddShape(fillcircle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[3]->isClicked(msg)) {
			ClearTrashBin();
			MyRectangle rectangle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					rectangle.AddPoint(Pt);
					if (rectangle.getterSize() == 2) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), false);
						rectangle.setterColor(color);
						AddShape(rectangle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[4]->isClicked(msg)) {
			ClearTrashBin();
			MyRectangle fillrectangle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					fillrectangle.AddPoint(Pt);
					if (fillrectangle.getterSize() == 2) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), true);
						fillrectangle.setterColor(color);
						AddShape(fillrectangle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[5]->isClicked(msg)) {
			ClearTrashBin();
			MyTriangle triangle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					triangle.AddPoint(Pt);
					if (triangle.getterSize() == 3) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), false);
						triangle.setterColor(color);
						AddShape(triangle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[6]->isClicked(msg)) {
			ClearTrashBin();
			MyTriangle filltriangle;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					filltriangle.AddPoint(Pt);
					if (filltriangle.getterSize() == 3) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), true);
						filltriangle.setterColor(color);
						AddShape(filltriangle);
						break;
					}
				}
			}
		}
		else if (CacheToUI[7]->isClicked(msg)) {
			ClearTrashBin();
			MyLine line;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					line.AddPoint(Pt);
					if (line.getterSize() == 2) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), false);
						line.setterColor(color);
						AddShape(line);
						break;
					}
				}
			}
		}
		else if (CacheToUI[8]->isClicked(msg)) {
			ClearTrashBin();
			MyPoint point;
			for (; is_run(); delay_fps(60)) {
				mouse_msg msg{};
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.is_down()) {
					Point Pt(msg.x, msg.y);
					point.AddPoint(Pt);
					if (point.getterSize() == 1) {
						Color color(InputBoxes[0]->getter(), InputBoxes[1]->getter(), InputBoxes[2]->getter(), InputBoxes[3]->getter(), InputBoxes[4]->getter(), InputBoxes[5]->getter(), false);
						point.setterColor(color);
						AddShape(point);
						break;
					}
				}
			}
		}
		else if (CacheToUI[9]->isClicked(msg)) {
			if (Cache.empty())NULL;
			else {
				switch ((*Cache.rbegin())->getterType()) {
				case CircleType:
					TrashBin.push_back(new MyCircle(*dynamic_cast<MyCircle*>(*Cache.rbegin())));
					break;
				case RectangleType:
					TrashBin.push_back(new MyRectangle(*dynamic_cast<MyRectangle*>(*Cache.rbegin())));
					break;
				case TriangleType:
					TrashBin.push_back(new MyTriangle(*dynamic_cast<MyTriangle*>(*Cache.rbegin())));
					break;
				case LineType:
					TrashBin.push_back(new MyLine(*dynamic_cast<MyLine*>(*Cache.rbegin())));
					break;
				case PolygonType:
					TrashBin.push_back(new MyPolygon(*dynamic_cast<MyPolygon*>(*Cache.rbegin())));
					break;
				case PointType:
					TrashBin.push_back(new MyPoint(*dynamic_cast<MyPoint*>(*Cache.rbegin())));
					break;
				}
				delete(*Cache.rbegin());
				Cache.pop_back();
			}
		}
		else if (CacheToUI[10]->isClicked(msg)) {
			if (TrashBin.empty())NULL;
			else {
				switch ((*TrashBin.rbegin())->getterType()) {
				case CircleType:
					Cache.push_back(new MyCircle(*dynamic_cast<MyCircle*>(*TrashBin.rbegin())));
					break;
				case RectangleType:
					Cache.push_back(new MyRectangle(*dynamic_cast<MyRectangle*>(*TrashBin.rbegin())));
					break;
				case TriangleType:
					Cache.push_back(new MyTriangle(*dynamic_cast<MyTriangle*>(*TrashBin.rbegin())));
					break;
				case LineType:
					Cache.push_back(new MyLine(*dynamic_cast<MyLine*>(*TrashBin.rbegin())));
					break;
				case PolygonType:
					Cache.push_back(new MyPolygon(*dynamic_cast<MyPolygon*>(*TrashBin.rbegin())));
					break;
				case PointType:
					Cache.push_back(new MyPoint(*dynamic_cast<MyPoint*>(*TrashBin.rbegin())));
					break;
				}
				delete(*TrashBin.rbegin());
				TrashBin.pop_back();
			}
		}
		else if (CacheToUI[11]->isClicked(msg)) {
			char string[51]{};
			SavePathBox.gettext(51, string);
			SaveFile SF(Cache, string);
			SF.run();
			message = SF.getterErrorCode();
		}
		else if (CacheToUI[12]->isClicked(msg)) {
			char string[51]{};
			LoadPathBox.gettext(51, string);
			LoadFile LF(string);
			LF.run();
			for (; !Cache.empty();) {
				delete* Cache.rbegin();
				Cache.pop_back();
			}
			for (size_t i = 0; i < LF.getterVector().size(); i++) {
				switch (LF.getterVector()[i]->getterType()) {
				case CircleType:
					Cache.push_back(new MyCircle(*dynamic_cast<MyCircle*>(LF.getterVector()[i])));
					break;
				case RectangleType:
					Cache.push_back(new MyRectangle(*dynamic_cast<MyRectangle*>(LF.getterVector()[i])));
					break;
				case TriangleType:
					Cache.push_back(new MyTriangle(*dynamic_cast<MyTriangle*>(LF.getterVector()[i])));
					break;
				case LineType:
					Cache.push_back(new MyLine(*dynamic_cast<MyLine*>(LF.getterVector()[i])));
					break;
				case PolygonType:
					NULL;
					break;
				case PointType:
					Cache.push_back(new MyPoint(*dynamic_cast<MyPoint*>(LF.getterVector()[i])));
					break;
				}
			}
			message = LF.getterErrorCode();
		}
		else if (CacheToUI[13]->isClicked(msg)) {
			InputBoxes[0]->setter("0");
			InputBoxes[1]->setter("0");
			InputBoxes[2]->setter("0");
		}
		else if (CacheToUI[14]->isClicked(msg)) {
			InputBoxes[0]->setter("255");
			InputBoxes[1]->setter("0");
			InputBoxes[2]->setter("0");
		}
		else if (CacheToUI[15]->isClicked(msg)) {
			InputBoxes[0]->setter("255");
			InputBoxes[1]->setter("165");
			InputBoxes[2]->setter("0");
		}
		else if (CacheToUI[16]->isClicked(msg)) {
			InputBoxes[0]->setter("255");
			InputBoxes[1]->setter("255");
			InputBoxes[2]->setter("0");
		}
		else if (CacheToUI[17]->isClicked(msg)) {
			InputBoxes[0]->setter("0");
			InputBoxes[1]->setter("255");
			InputBoxes[2]->setter("0");
		}
		else if (CacheToUI[18]->isClicked(msg)) {
			InputBoxes[0]->setter("0");
			InputBoxes[1]->setter("255");
			InputBoxes[2]->setter("255");
		}
		else if (CacheToUI[19]->isClicked(msg)) {
			InputBoxes[0]->setter("0");
			InputBoxes[1]->setter("0");
			InputBoxes[2]->setter("255");
		}
		else if (CacheToUI[20]->isClicked(msg)) {
			InputBoxes[0]->setter("255");
			InputBoxes[1]->setter("0");
			InputBoxes[2]->setter("255");
		}
		else if (CacheToUI[21]->isClicked(msg)) {
			InputBoxes[0]->setter("255");
			InputBoxes[1]->setter("255");
			InputBoxes[2]->setter("255");
		}

		else if (CacheToUI[22]->isClicked(msg)) {
		InputBoxes[3]->setter("0");
		InputBoxes[4]->setter("0");
		InputBoxes[5]->setter("0");
		}
		else if (CacheToUI[23]->isClicked(msg)) {
		InputBoxes[3]->setter("255");
		InputBoxes[4]->setter("0");
		InputBoxes[5]->setter("0");
		}
		else if (CacheToUI[24]->isClicked(msg)) {
		InputBoxes[3]->setter("255");
		InputBoxes[4]->setter("165");
		InputBoxes[5]->setter("0");
		}
		else if (CacheToUI[25]->isClicked(msg)) {
		InputBoxes[3]->setter("255");
		InputBoxes[4]->setter("255");
		InputBoxes[5]->setter("0");
		}
		else if (CacheToUI[26]->isClicked(msg)) {
		InputBoxes[3]->setter("0");
		InputBoxes[4]->setter("255");
		InputBoxes[5]->setter("0");
		}
		else if (CacheToUI[27]->isClicked(msg)) {
		InputBoxes[3]->setter("0");
		InputBoxes[4]->setter("255");
		InputBoxes[5]->setter("255");
		}
		else if (CacheToUI[28]->isClicked(msg)) {
		InputBoxes[3]->setter("0");
		InputBoxes[4]->setter("0");
		InputBoxes[5]->setter("255");
		}
		else if (CacheToUI[29]->isClicked(msg)) {
		InputBoxes[3]->setter("255");
		InputBoxes[4]->setter("0");
		InputBoxes[5]->setter("255");
		}
		else if (CacheToUI[30]->isClicked(msg)) {
		InputBoxes[3]->setter("255");
		InputBoxes[4]->setter("255");
		InputBoxes[5]->setter("255");
		}
	}
	else NULL;
}

void PaintingBoard::render() {
	clearviewport();
	for (size_t i = 0; i < Cache.size(); i++) {
		Cache[i]->Draw();
	}
	for (size_t i = 0; i < CacheToUI.size(); i++) {
		CacheToUI[i]->Draw();
	}

	setcolor(BLACK);

	outtextxy(20, 330, "↓LineColor↓");
	outtextxy(10, 360, 'R');
	outtextxy(10, 380, 'G');
	outtextxy(10, 400, 'B');


	outtextxy(20, 450, "↓FillColor↓");
	outtextxy(10, 480, 'R');
	outtextxy(10, 500, 'G');
	outtextxy(10, 520, 'B');

	outtextxy(25, 590, "↓SavePath↓");
	outtextxy(25, 690, "↓LoadPath↓");

	switch (message) {
	case OpenFail:
		outtextxy(10, 760, "OpenFail");
		break;
	case SaveSucceed:
		outtextxy(10, 760, "SaveSucceed");
		break;
	case LoadSucceed:
		outtextxy(10, 760, "LoadSucceed");
		break;
	case WrongShapeType:
		outtextxy(10, 760, "WrongShapeType");
		break;
	case ColorDataMissing:
		outtextxy(10, 760, "ColorMissing");
		break;
	case ShapeDataMissing:
		outtextxy(10, 760, "PointMissing");
		break;
	case Default:
		break;
	}

	outtextxy(20, 910, "Save");
	outtextxy(100, 910, "Load");

}
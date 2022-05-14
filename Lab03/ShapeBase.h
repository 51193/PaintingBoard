#ifndef SHAPEBASE_H
#define SHAPEBASE_H
#include<vector>
#include"Color.h"
#include"Point.h"
#include"Angle.h"
enum Type { CircleType, RectangleType, TriangleType, LineType, PolygonType, PointType };

class ShapeBase {
protected:
	Color color;
	Type type;
	std::vector<PointBase*>VectorofPointPointer;
public:
	ShapeBase();
	~ShapeBase();
	void setterColor(const Color color);
	void AddPoint(const Point Pt);//向Vector最后添加一个Point*元素
	void AddPoint(const int x, const int y);//调用Point的构造函数并添加在Vector最后
	void AddPoint(const Point Pt, const unsigned int n);//在Vector[n]添加一个point*元素，原本Vector[n]及以后元素后移1位
	void AddPoint(const int x, const int y, const unsigned int n);//与上面类似
	void AddAngle(const Angle Ae);//向Vector最后添加一个Angle*元素
	void AddAngle(const int x, const int y);//与上面类似
	void Translation(const int x, const int y);//X与Y分别平移x和y格
	void DeleteLast();//删除Vector最后一个元素
	void Delete(const unsigned int n);//删除Vector[n]，其后元素前移1位
	void ClearAngle();//删除Vector中所有Angle*元素
	void Reorganize();//将Vector里第一个Angle指针放到最后，删除其余所有Angle指针
	std::vector<PointBase*> getter();//返回整个Vector
	PointBase* getterPtr(const unsigned int n);//返回Vector[n]
	unsigned int getterSize();//返回Vector的大小
	Color getterColor();
	bool isClicked(mouse_msg msg);
	virtual Type getterType() = 0;
	virtual void Draw() = 0;
};

#endif SHAPEBASE_H
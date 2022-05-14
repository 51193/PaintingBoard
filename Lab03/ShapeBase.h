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
	void AddPoint(const Point Pt);//��Vector������һ��Point*Ԫ��
	void AddPoint(const int x, const int y);//����Point�Ĺ��캯���������Vector���
	void AddPoint(const Point Pt, const unsigned int n);//��Vector[n]���һ��point*Ԫ�أ�ԭ��Vector[n]���Ժ�Ԫ�غ���1λ
	void AddPoint(const int x, const int y, const unsigned int n);//����������
	void AddAngle(const Angle Ae);//��Vector������һ��Angle*Ԫ��
	void AddAngle(const int x, const int y);//����������
	void Translation(const int x, const int y);//X��Y�ֱ�ƽ��x��y��
	void DeleteLast();//ɾ��Vector���һ��Ԫ��
	void Delete(const unsigned int n);//ɾ��Vector[n]�����Ԫ��ǰ��1λ
	void ClearAngle();//ɾ��Vector������Angle*Ԫ��
	void Reorganize();//��Vector���һ��Angleָ��ŵ����ɾ����������Angleָ��
	std::vector<PointBase*> getter();//��������Vector
	PointBase* getterPtr(const unsigned int n);//����Vector[n]
	unsigned int getterSize();//����Vector�Ĵ�С
	Color getterColor();
	bool isClicked(mouse_msg msg);
	virtual Type getterType() = 0;
	virtual void Draw() = 0;
};

#endif SHAPEBASE_H

#include "CPoint.h"
using namespace std;

CPoint::CPoint(int valueX, int valueY) {
	x = valueX;
	y = valueY;
}
CPoint::CPoint() {
	x = 0;
	y = 0;
}
CPoint::CPoint(const CPoint &other) {
	this->x = other.x;
	this->y = other.y;;
}
int CPoint::GetX() {
	return x;
}
void CPoint::SetX(int valueX) {
	x = valueX;
}
int CPoint::GetY() {
	return y;
}
void CPoint::SetY(int valueY) {
	y = valueY;
}
void CPoint::SetXY(int valueX, int valueY) {
	x = valueX;
	y = valueY;
}
void CPoint::print() {
	printf("P = (%d,%d)\n", x, y);
}
CPoint& CPoint::operator =(const CPoint& second) {
	this->x = second.x;
	this->y = second.y;

	return *this;
}

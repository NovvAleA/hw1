#include "CDist.h"
using namespace std;


CDist::CDist() {
	x = 0;
	y = 0;
}
CDist::CDist(int valueX, int valueY) {
	x = valueX;
	y = valueY;
}
CDist::CDist(const CDist &other) {
	this->x = other.x;
	this->y = other.y;;
}
int CDist::GetX() {
	return x;
}
void CDist::SetX(int valueX) {
	x = valueX;
}
int CDist::GetY() {
	return y;
}
void CDist::SetY(int valueY) {
	y = valueY;
}
void CDist::SetXY(int valueX, int valueY) {
	x = valueX;
	y = valueY;
}
void CDist::print() {
	printf("r = (%d, %d)\n", x, y);
}
CDist CDist:: operator=(const CDist& second) {
	this->x = second.x;
	this->y = second.y;

	return *this;
}
CDist CDist:: operator+(const CDist& second) {
	this->x = this->x + second.x;
	this->y = this->y + second.y;
	return *this;
}



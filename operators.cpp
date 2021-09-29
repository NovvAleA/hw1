
#include "operators.h"

CDist  operator-(CPoint A, CPoint B) {
	CDist MN;
	MN.SetXY(A.GetX() - B.GetX(), A.GetY() - B.GetY());
	return MN;
}
CPoint operator+(CPoint A, CDist v) {
	A.SetX(A.GetX() + v.GetX());
	A.SetY(A.GetY() + v.GetY());
	return A;
}

CPoint operator+(CDist v, CPoint A) {
	A.SetX(A.GetX() + v.GetX());
	A.SetY(A.GetY() + v.GetY());
	return A;
}
CDist  operator*(int a, CDist v) {
	v.SetX(a * v.GetX());
	v.SetY(a * v.GetY());
	return v;
}
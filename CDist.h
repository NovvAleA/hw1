#pragma once
#include "CPoint.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class CDist {
private:
	int x;
	int y;
public:
	CDist();
	CDist(int valueX, int valueY);
	CDist(const CDist& other);

	int GetX();
	void SetX(int valueX);
	int GetY();
	void SetY(int valueY);
	void SetXY(int valueX, int valueY);
	void print();

	CDist operator+(const CDist& second);
	CDist operator=(const CDist& second);
	
	
};
//CDist operator-(CPoint A, CPoint B);
//CDist operator-(CPoint& N, CPoint& M);




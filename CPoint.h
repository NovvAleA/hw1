#pragma once
#include "stdio.h" 
#include "CDist.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class CPoint{
private:
	int x;
	int y;
public:
	CPoint();
	CPoint(int valueX, int valueY);
	CPoint(const CPoint& other);

	int GetX();
	void SetX(int valueX);
    int GetY();
	void SetY(int valueY);
	void SetXY(int valueX, int valueY);

	void print();

	CPoint& operator =(const CPoint& other);
	
};
// CPoint operator+(CPoint A, CDist v);
// CPoint operator+(CDist v, CPoint A);

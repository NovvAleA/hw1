//#include "Source1.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "CPoint.h" 
#include "At.h"
#include "operators.h"

using namespace std;


CPoint mode_1() {
	CPoint A;
	CDist v;
	int tmp_x;
	int tmp_y;
	printf("Enter coordinate of point A:\nfor example 2 6\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	A.SetXY(tmp_x, tmp_y);
	printf("Enter coordinate of vector A:\nfor example 1 2\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	v.SetXY(tmp_x, tmp_y);
	A = A + v;
	return A;
}
CDist mode_2() {
	CDist u;
	CDist v;
	int tmp_x;
	int tmp_y;
	printf("Enter coordinate of vector u:\nfor example 2 6\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	u.SetXY(tmp_x, tmp_y);
	printf("Enter coordinate of vector v:\nfor example 1 2\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	v.SetXY(tmp_x, tmp_y);
	u = u + v;
	return u;
}
CDist mode_3() {
	CDist u;
	CPoint A;
	CPoint B;
	int tmp_x;
	int tmp_y;
	printf("Enter coordinate of point A:\nfor example 2 6\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	A.SetXY(tmp_x, tmp_y);
	printf("Enter coordinate of point B:\nfor example 1 2\n");
	scanf("%d%d", &tmp_x, &tmp_y);
	B.SetXY(tmp_x, tmp_y);
	u = B - A;
	
	return u;
}



int main() {
	CDist u;
	CPoint A;
	int a;
	int b;
	if (AT() == 1) {
		return 1;
	}
	printf("Hellow1\nChoose operation:\n");
	printf("1) P = A + v   or   B = v + A\n");
	printf("2) r = u + v\n");
	printf("3) v = B - A\n");
	scanf("%i", &a);
	if (a == 1) {
		printf("mode_1:\n");
		A = mode_1();
		A.print();
		return 0;
	}
	if (a == 2) {
		printf("mode_2:\n");
		u = mode_2();
		u.print();
		return 0;
	}
	if (a == 3) {
		printf("mode_3:\n");
		u = mode_3();
		u.print();
		return 0;
	}
	else {
		printf("Invalid data!");
		return 1;
	}

	return 0;
}
#include "At.h"

int test_1() {
	CPoint A(2, 2);
	CDist v(3, 3);
	A = A + v;
	if (A.GetX() == 5) {
		if (A.GetY() == 5) {
			return 0;
		}
		else {
			return 1;
		}
	}
	return 2;
}

int test_2() {
	CDist u(2, 2);
	CDist v(3, 3);
	u = u + v;
	if (u.GetX() == 5) {
		if (u.GetY() == 5) {
			return 0;
		}
		else {
			return 1;
		}
	}
	return 2;
}

int test_3() {
	CPoint A(2, 2);
	CPoint B(3, 3);
	CDist v;
	v = B - A;
	if (v.GetX() == 1) {
		if (v.GetY() == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
	return 2;
}

int AT() {
	if (test_1() + test_2() + test_3() == 0) {
		printf("Autotest passed!\n\n\n");
		return 0;
	}
	else {
		printf("Autotest failled! Error numbers are %d, %d, %d", test_1(), test_2(), test_3());
		return 1;
	}
}


#pragma once
#include "CPoint.h"

CDist  operator-(CPoint A, CPoint B);
CPoint operator+(CPoint A, CDist v);
CPoint operator+(CDist v, CPoint A);
CDist  operator*(int a, CDist v);
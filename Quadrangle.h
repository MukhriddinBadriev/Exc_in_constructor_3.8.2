#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Quadrangle :public Figure {
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle(string name1, int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D);
	void print_info() override;
};
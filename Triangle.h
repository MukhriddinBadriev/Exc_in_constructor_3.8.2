#pragma once
#include <string>
#include <iostream>
#include "Figure.h"
class Triangle :
	public Figure
{
	int a, b, c, A, B, C;
public:
	Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B, int new_C);
	void print_info() override;
};
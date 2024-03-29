﻿#include <iostream>
#include <Windows.h>

#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Rectangles.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Square.h"

#include "Own_exception_class.h"

using namespace std;

int main()
{
	
	try {
		Triangle triangle("Triangle", 10, 20, 30, 50, 60, 70);
		print(&triangle);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Right_Triangle r_t("Right triangle", 10, 20, 30, 50, 60);
		print(&r_t);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Isosceles_Triangle i_t("Isosceles triangle", 10, 20, 50, 60);
		print(&i_t);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Equilateral_Triangle e_t("Equilateral Triangle", 30);
		print(&e_t);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Quadrangle quadrangle("Quadrangle", 10, 20, 30, 40, 50, 60, 70, 80);
		print(&quadrangle);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Parallelogram parallelogram("Parallelogram", 20, 30, 30, 40);
		print(&parallelogram);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };

	try {
		Rectangles rectangle("Rectangle", 10, 20);
		print(&rectangle);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };
		
	try {
		Rhombus rhombus("Rhombus", 30, 30, 40);
		print(&rhombus);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };
		
	try {
		Square square("Square", 20);
		print(&square);
	}
	catch (Own_exception_class& e) { cerr << e.what() << endl; };
		
	return 0;
}
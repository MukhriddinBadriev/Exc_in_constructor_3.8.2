#include "Figure.h"
#include <iostream>
using namespace std;

	string Figure::get_name() {
		return name;
	}

	void Figure::print_info() {
		cout << get_name() << "\n";
	}
	void print(Figure* figure) {
		figure->print_info();
	}
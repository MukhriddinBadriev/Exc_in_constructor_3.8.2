#pragma once
#include <string>
#include <iostream>
using namespace std;
class Figure
{
protected:
	int sides_count = 0;
	string name;
public:
	string get_name();
	virtual void print_info();
};
void print(Figure* figure);

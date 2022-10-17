#include "Isosceles_Triangle.h"
using namespace std;

Isosceles_Triangle::Isosceles_Triangle(string name1, int new_a, int new_b, int new_A, int new_B) 
	:Triangle(name1, new_a, new_b, new_a, new_A, new_B, new_A) {}
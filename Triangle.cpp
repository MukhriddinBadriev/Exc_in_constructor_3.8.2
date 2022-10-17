#include "Triangle.h"
#include <iostream>
#include "Own_exception_class.h"
using namespace std;

	
	Triangle::Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B, int new_C) {
		sides_count = 3;
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = new_C;
		if ((new_A + new_B + new_C) !=180) {
			cout << get_name() << "(стороны " << a << " ," << b << " ," << c
				<< "; углы " << A << " ," << B << " ," << C << ")" ;
			throw Own_exception_class(" не был создан. ѕричина: сумма углов не равна 180\n");
		}
		if (sides_count != 3) {
			cout << get_name() << "(стороны " << a << " ," << b << " ," << c
				<< "; углы " << A << " ," << B << " ," << C << ")";
			throw Own_exception_class(" не был создан. ѕричина: количество сторон не равно 3\n");
		}
	}
	void Triangle::print_info()  {
		cout << get_name() << "(стороны " << a << " ," << b << " ," << c
			<< "; углы " << A << " ," << B << " ," << C << ") создан"<< "\n\n";
	}
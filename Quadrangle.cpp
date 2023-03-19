#include "Quadrangle.h"
#include "Own_exception_class.h"

	Quadrangle::Quadrangle(string name1, int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D) {
		sides_count = 4;
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		d = new_d;
		A = new_A;
		B = new_B;
		C = new_C;
		D = new_D;
		if ((new_A + new_B + new_C+new_D) != 360) {
			cout << get_name() << "(sides: " << a << " ," << b << " ," << c << " ," << d
				<< "; corners: " << A << " ," << B << " ," << C << " ," << D << ") ";
			throw Own_exception_class(" was not created. Reason: sum of angles is not equal to 360\n");
		}
		if (sides_count != 4) {
			cout << get_name() << "(sides: " << a << " ," << b << " ," << c << " ," << d
				<< "; corners: " << A << " ," << B << " ," << C << " ," << D << ") ";
			throw Own_exception_class(" was not created. Reason: number of sides not equal to 4\n");
		}
	}
	void Quadrangle::print_info() {
		cout << get_name() << "(sides: " << a << " ," << b << " ," << c << " ," << d
			<< "; corners: " << A << " ," << B << " ," << C << " ," << D << ") created" << "\n\n";
	}
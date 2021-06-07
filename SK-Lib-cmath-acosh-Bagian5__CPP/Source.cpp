// C++ program to demonstrate
// the acosh() function
// value less than 1
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = -50.0;

	// Function call to calculate acosh(x) value
	double result = acosh(x);

	cout << "acosh(-50.0) = " << result << " radians" << endl;
	cout << "acosh(-50.0) = " << result * 180 / 3.141592 << " degrees" << endl;

	return 0;
	_getch();
}

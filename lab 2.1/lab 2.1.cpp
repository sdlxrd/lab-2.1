#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	cout << "a = "; cin >> a;
	const double Pi = 3.141592653589793238463;
	double z1;
	double z2;
	double x = ((3.0 / 2.0 * Pi) - a);
	double ctg = cos(x) / (sin(x));
	z1 = ((sin(4 * a)) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
	z2 = ctg;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
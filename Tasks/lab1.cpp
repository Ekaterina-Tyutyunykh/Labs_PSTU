#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	float a1, b1, x1, x2, x3, x4, x5, x6, x7, x8;
	double a2, b2, y1, y2, y3, y4, y5, y6, y7, y8;
	float res1, res2; //числитель дроби, значение дроби
	double res3, res4;

	a1 = 1000;
	a2 = 1000;
	b1 = 0.0001;
	b2 = 0.0001;

	///float
	x1 = a1 - b1;
	x2 = pow(x1, 3); // возведение в степень
	x3 = a1 * a1 * a1;
	x4 = 3 * a1 * a1 * b1;
	x5 = x3 - x4;
	x6 = b1 * b1 * b1;
	x7 = 3 * a1 * b1 * b1;
	x8 = x6 - x7;
	res1 = x2 - x5;
	res2 = res1 / x8;
	cout  << res2 << endl;

	///double
	y1 = a2 - b2;
	y2 = pow(y1, 3);
	y3 = a2 * a2 * a2;
	y4 = 3 * a2 * a2 * b2;
	y5 = y3 - y4;
	y6 = b2 * b2 * b2;
	y7 = 3 * a2 * b2 * b2;
	y8 = y6 - y7;
	res3 = y2 - y5;
	res4 = res3 / y8;
	cout  << res4 << endl;

	return 0;
}
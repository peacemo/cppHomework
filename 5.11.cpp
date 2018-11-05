#include <iostream>
using namespace std;

void intfrac(float a, int* integer, float* decimal);

int main()
{
	float var, b;
	int a;

	cout << "pleace input a number: ";
	cin >> var;
	cout << endl;
	intfrac(var, &a, &b);

	cout << "integer part of it is " << a << "\ndecimal part of it is " << b << endl;

	return 0;
}

void intfrac(float a, int* integer, float* decimal)
{
	*integer = (int)a;
	*decimal = a - *integer;
}
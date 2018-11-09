#include <iostream>
using namespace std;
int adder(int, int);
int main()
{
	int a, b, sum = 0;
	int(*fpt)(int, int);
	fpt = adder;
	cin >> a;
	cin >> b;
	sum = fpt(a, b);
	cout << a << "+" << b << "=" << sum << endl;

	return 0;
}
int adder(int a, int b)
{
	return a + b;

}
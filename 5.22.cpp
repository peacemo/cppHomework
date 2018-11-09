#include <iostream>
using namespace std;
template<class T>
T adder(T a, T b)
{
	return a + b;
}

int main()
{
	int a, b;
	float m, n;
	double x, y;

	cout << "输入两个整数：";
	cin >> a >> b;
	cout << a << "+" << b << "=" << adder(a, b) << endl;

	cout << "输入两个实数：";
	cin >> m >> n;
	cout << m << "+" << n << "=" << adder(m, n) << endl;

	cout << "输入两个实数：";
	cin >> x >> y;
	cout << x << "+" << y << "=" << adder(x, y) << endl;

	return 0;
}
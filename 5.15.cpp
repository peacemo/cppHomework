//���Լ��
#include <iostream>
using namespace std;
void Gcd(int, int);
int main()
{
	int x, y;
	cout << "plz input the first number: ";
	cin >> x;
	cout << "plz input the second number: ";
	cin >> y;
	Gcd(x, y);

	return 0;
}

void Gcd(int x, int y)
{
	if (0 == y)
		cout << "���Լ��Ϊ" << x << endl;
	else
	{
		Gcd(y, x%y);
	}
}
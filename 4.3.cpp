/******有序数组逆序存放******/
#include <iostream>
using namespace std;
int main()
{
	float a[10] = { 0 }, b[10] = { 0 };

	for (int i = 0; i<10; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j<10; j++)
	{
		b[9 - j] = a[j];
	}
	for (int k = 0; k<10; k++)
	{
		cout << b[k] << endl;
	}



	return 0;
}
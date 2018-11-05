/***矩阵上下三角转置***/
#include<iostream>
using namespace std;

int main()
{
	int* temp = 0;
	int a[4][4] = { { 1, 2, 3, 4 }, { 9, 8, 7, 6 }, { 6, 5, 4, 3 }, { 3, 6, 9, 1 } };
	int(*p)[4];
	p = a;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 10)
				cout << " ";
			cout << *(*(p + i) + j);
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <4 ; j++)
		{
			if (i<j)
			{
				int temp = *(*(p + i) + j);
				*(*(p + i) + j) = *(*(p + j) + i);
				*(*(p + j) + i) = temp;
			}
		}

	}

	cout << "--------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 10)
				cout << " ";
			cout << *(*(p + i) + j);
		}
		cout << endl;
	}

}

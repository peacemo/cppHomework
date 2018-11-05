/****无序一维数组排序*****/
#include <iostream>
using namespace std;

void bubblesort(float* a, int n)
{
	int i, j;
	float temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (*(a + j)>*(a + j + 1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j +1) = temp;

			}
		}
	}
}

int main()
{
	int n;
	float a[10] = { 45.20, 89.34, 98.98, 87.62, 67.89,
		98.34, 76.24, 9.34, 56.21, 22.65 };

	n = sizeof(a)/sizeof(int);
	bubblesort(a, n);//排序
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	
	return 0;
}
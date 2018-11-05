/************二维数组的最大值*************/
#include <iostream>
using namespace std;
int main()
{
	float a[4][3] = { 0 };
	float max = 0;

	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<3; j++)
			cin >> a[i][j];
	}

	for (int k = 0; k<4; k++)
	{
		for (int l = 0; l<3; l++)
		{
			if (a[k][l] >= max)
				max = a[k][l];
		}
	}

	cout << "the biggest number is " << max << endl;


	return 0;
}
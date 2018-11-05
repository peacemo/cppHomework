#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int i, j;
	char s[30], *p;
	p = s;
	cout << "input: ";
	gets_s(s);
	j = strlen(p) - 1;
	for (i = 0; i < j / 2; i++)
	{
		if (*(p + i) != *(p + (j - i)))
			break;
	}
	if (i == j / 2)
		cout << "是回文" << endl;
	else
		cout << "不是回文" << endl;
	

	return 0;

}
/*******    别把i写成1   ！！！！********/
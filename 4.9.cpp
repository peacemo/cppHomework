#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[20], s2[20];
	char *a, *b;
	int size1, size2;

	cout << "Pleace input the first string: ";
	cin >> s1;
	cout << "Pleace input the second string: ";
	cin >> s2;
	a = s1;
	b = s2;
	
	size1 = strlen(a);
	size2 = strlen(b);
	
		if (size1 == size2)
		{
			cout << "两字符串相等" << endl;
		}
		else if (size1 > size2)
		{
			cout << "第一个字符串大于第二个字符串" << endl;

		}
		else
		{
			cout << "第一个字符串小于第二个字符串" << endl;

		}

	return 0;
}
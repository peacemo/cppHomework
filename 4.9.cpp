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
			cout << "���ַ������" << endl;
		}
		else if (size1 > size2)
		{
			cout << "��һ���ַ������ڵڶ����ַ���" << endl;

		}
		else
		{
			cout << "��һ���ַ���С�ڵڶ����ַ���" << endl;

		}

	return 0;
}
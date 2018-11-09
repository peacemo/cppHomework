#include <iostream>
#include <string.h>
using namespace std;
void strbac(char*);
int main()
{
	char sp[100];
	gets_s(sp);
	strbac(sp);
	puts(sp);

	return 0;
}
void strbac(char* sp)
{
	int len = strlen(sp);
	int i, n;
	n = len / 2;
	char temp;
	for (i = 0; i < n; i++)
	{
		temp = sp[i];
		sp[i] = sp[len - 1 - i];
		sp[len - 1 - i] = temp;
	}
}
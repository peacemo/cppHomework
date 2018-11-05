/*****È¥³ı·Ç×ÖÄ¸Ïî******/
#include <iostream>
#include"turnCap.h"
using namespace std;
int main()
{
	int i, j;
	char c[100] = { 0 };
	gets_s(c);

	for (i = j = 0; c[i]; i++)

	{
		if ((c[i] >= 'a'&&c[i] <= 'z') || (c[i] >= 'A'&&c[i] <= 'Z'))
			c[j++] = c[i];
	}
	c[j] = '\0';
	turn(c);
	puts(c);

	return 0;
}
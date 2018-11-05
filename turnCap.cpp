//turnCap.cpp
#include"turnCap.h"

void turn(char *s)
{
	int i; 

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 64 && s[i] < 91)
		{
			s[i] += 32;
			continue;
		}
	}
}
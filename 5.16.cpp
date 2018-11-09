#include <iostream>
using namespace std;
void strcon(char*, char*);

int main()
{
	char sp1[100], sp2[100];
	char *a, *b;
	cout << "plz input the first string: ";
	cin >> sp1;
	cout << "plz input the second string: ";
	cin >> sp2;
	a = sp1;
	b = sp2;
	strcon(a, b);
	cout << sp1 << endl;
	
	return 0;
}

void strcon(char* sp1, char* sp2)
{
	int i, j;
	for (i = 0; sp1[i] != '\0'; i++);
	for (j = 0; sp2[j] != '\0'; i++, j++)
		sp1[i] = sp2[j];
	sp1[i] = '\0';
}
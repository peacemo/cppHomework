#include <iostream>
using namespace std;
void back(int);
int main()
{
	int num;
	cout << "Please input a number: " << endl;
	cin >> num;
	back(num);
	cout << endl;
	return 0;
}

void back(int num)
{
	if (num > 0 && num < 10)
	{
		cout<< num;
	}
	else
	{
		cout << num % 10;
		back(num/10);
	}
}
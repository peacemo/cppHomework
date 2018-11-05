#include <iostream>
using namespace std;

struct student
{
	char name[20];
	int num;
	int sex;
	int age;
};
void getInfo(student& a)
{


	cout << "name: ";
	cin >> a.name;
	cout << "num: ";
	cin >> a.num;
	cout << "sex: ";
	cin >> a.sex;
	cout << "age: ";
	cin >> a.age;
	
}

int main()
{
	student info[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i + 1 << endl;
		getInfo(info[i]);
		system("cls");
	}

	system("cls");

	cout << "---------VIEW--------" << endl;

	for (int j = 0; j < 3; j++)
	{
		cout << "student " << j + 1 << endl;
		cout << "name: " << info[j].name << endl;
		cout << "num: " << info[j].num << endl;
		cout << "sex: " << info[j].sex << endl;
		cout << "age: " << info[j].age << endl;
		cout << "----------------"<<endl;
	}

	return 0;
}
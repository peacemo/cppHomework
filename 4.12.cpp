#include<iostream>
using namespace std;
struct employee
{
	char name[20];
	int number;
	float salary;
	float hourlyPay;
	int workHours;
};

int main()
{
	int count;
	cout << "����Ա������" << endl;
	cin >> count;
	system("cls");

	struct employee* emp;
	emp = new employee[count];

	for (int i = 0; i < count; i++)
	{
		cout << "*********Ա����Ϣ����**********"<<endl;
		cout << "��" << i + 1 << "��Ա����������";
		cin >> emp[i].name;
		cout << "��" << i + 1 << "��Ա���Ĺ���ʱ����";
		cin >> emp[i].workHours;
		emp[i].number = i + 1;
		emp[i].hourlyPay = 50.0;
		emp[i].salary = emp[i].hourlyPay*emp[i].workHours;
		system("cls");
	}

	cout << "----------VIEW----------" << endl;
	cout << "����" << "\t����" << "\t��н" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << emp[i].number << "\t" << emp[i].name << "\t" << emp[i].salary << endl;
	}
	cout << "----------VIEW----------" << endl;
	return 0;
	
}
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
	cout << "输入员工数：" << endl;
	cin >> count;
	system("cls");

	struct employee* emp;
	emp = new employee[count];

	for (int i = 0; i < count; i++)
	{
		cout << "*********员工信息输入**********"<<endl;
		cout << "第" << i + 1 << "个员工的姓名：";
		cin >> emp[i].name;
		cout << "第" << i + 1 << "个员工的工作时长：";
		cin >> emp[i].workHours;
		emp[i].number = i + 1;
		emp[i].hourlyPay = 50.0;
		emp[i].salary = emp[i].hourlyPay*emp[i].workHours;
		system("cls");
	}

	cout << "----------VIEW----------" << endl;
	cout << "工号" << "\t姓名" << "\t月薪" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << emp[i].number << "\t" << emp[i].name << "\t" << emp[i].salary << endl;
	}
	cout << "----------VIEW----------" << endl;
	return 0;
	
}
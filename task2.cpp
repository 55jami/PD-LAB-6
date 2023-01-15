#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float obtained_marks;
	int num1, num2, num3, num4, num5;
	int total = 100;
	string name;
	float percentage;
	float per;
	cout << "Enter the num1:";
	cin >> num1;
	cout << "Enter the num1:";
	cin >> num2;
	cout << "Enter the num3:";
	cin >> num3;
	cout << "Enter the num1:";
	cin >> num4;
	cout << "Enter the num1:";
	cin >> num5;
	obtained_marks = num1 + num2 + num3 + num4 + num5;
	cout << "Enter the student name:";
	cin >> name;
	percentage = (obtained_marks / total);
	per = percentage * 100;
	cout << "Enter percentage is:" << per << endl;

	if (per >= 90 && per < 100)
	{
		cout << "A+";
	}
	else if (per >= 80 && per < 90)
	{
		cout << "A";
	}
	else if (per >= 70 && per <80)
	{
		cout << "B+";
	}
	else if (per >= 60 && per < 70)
	{
		cout << "B";
	}
	else if (per >= 50 && per <60)
	{
		cout << "C";
	}
	else if (per < 50)
	{
		cout << "U are fail";
	}

}
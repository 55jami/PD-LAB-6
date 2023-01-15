#include<iostream>
using namespace std;
float working_days(string fruit, string day, int quantity);
int main()
{
	string fruit;
	cout << "Enter fruit is:";
	cin >> fruit;
	string day;
	cout << "Enter the day is:";
	cin >> day;
	float quantity;
	cout << "Enter quantity is:";
	cin >> quantity;
	float output=working_days(fruit, day, quantity);
	cout << "Output is:" << output;
}
float working_days(string fruit, string day, int quantity)
{
	float result;
	if (day == "saturday" || day == "sunday")
	{
		if (fruit == "banana")
		{
			result = quantity * 2.70;
			return result;
		}
		else if (fruit == "apple")
		{
			result = quantity * 1.25;
			return result;
		}
		else if (fruit == "orange")
		{
			result = quantity * 0.90;
			return result;
		}
		else if (fruit == "grapefruit")
		{
			result = quantity * 1.60;
			return result;
		}
		else if (fruit == "kiwi")
		{
			result = quantity * 3.00;
			return result;
		}
		else if (fruit == "pineapple")
		{
			result = quantity * 5.60;
			return result;
		}
		else if (fruit == "grapes")
		{
			result = quantity * 4.20;
			return result;
		}
	}
	if (day != "saturday" || day != "sunday")
	{
		if (fruit == "banana")
		{
			result = quantity * 2.50;
			return result;
		}
		else if (fruit == "apple")
		{
			result = quantity * 1.20;
			return result;
		}
		else if (fruit == "orange")
		{
			result = quantity * 0.85;
			return result;
		}
		else if (fruit == "grapefruit")
		{
			result = quantity * 1.45;
			return result;
		}
		else if (fruit == "kiwi")
		{
			result = quantity * 2.70;
			return result;
		}
		else if (fruit == "pineapple")
		{
			result = quantity * 5.50;
			return result;
		}
		else if (fruit == "grapes")
		{
			result = quantity * 3.85;
			return result;
		}
	}
return 0;
}
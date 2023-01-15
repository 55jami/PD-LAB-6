#include<iostream>
using namespace std;
float payment(string person, string time, int minutes);
int main()
{
	float output;
	string person;
	cout << "Enter the type of person:";
	cin >> person;
	string time;
	cout << "Enter the time:";
	cin >> time;
	int minutes;
	cout << "Enter the minutes:";
	cin >> minutes;
	output = payment(person, time, minutes);
	cout << "Output is:" << output;
}
float payment(string person, string time ,int minutes)
{
	float relief;
	float result;
	if (person == "mediocre")
	{
		if (minutes < 50)
		{
			relief = 10;
			result = relief;
			return result;
		}
		else if (minutes > 50)
		{
			relief = minutes * 0.20;
			result = relief + 10;
			return result;
		}
	}
	if (person == "upper_class")
	{
		cout << "Enter the type of service(d for day_time and n for night_time)";
		if (time == "day")
		{
			if (minutes < 75)
			{
				relief = 25;
				result = relief;
				return result;
			}
			else if (minutes > 75)
			{
				relief = minutes * 0.10;
				result = relief + 25;
				return result;
			}
		}
		if (time == "night")
		{
			if (minutes < 100)
			{
				relief = 25;
				result = relief;
				return result;
			}
			else if (minutes > 100)
			{
				relief = minutes * 0.05;
				result = relief + 25;
				return result;
			}


		}
	}
return 0;
}
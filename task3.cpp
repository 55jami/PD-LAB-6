#include<iostream>
using namespace std;
string zodaic_sign(int day, string month);
int main()
{
	int date;
	cout << "Enter date is:";
	cin >> date;
	string month;
	cout << "Enter month is:";
	cin >> month;
	string result = zodaic_sign(date, month);
	cout << "Zodaic_sign is:" << result;
}
string zodaic_sign(int day, string month)
{
	string sign;
	if ((day >= 21 && month == "march") || (day < 19 && month == "april"))
	{
		sign = "The Ram";
		return sign;
	}
	else if ((day >= 20 && month == "april") || (day < 20 && month == "may"))
	{
		sign = "The bull";
		return sign;
	}
	else if ((day >= 21 && month == "may") || (day < 20 && month == "June"))
	{
		sign = "The Twins";
		return sign;
	}
	else if ((day >= 21 && month == "june") || (day < 22 && month == "july"))
	{
		sign = "The Crab";
		return sign;
	}
	else if ((day >= 23 && month == "july") || (day < 22 && month == "august"))
	{
		sign = "The Lion";
		return sign;
	
	}
	else if ((day >= 23 && month == "august") || (day < 23 && month == "september"))
	{
		sign = "The Virgin";
		return sign;
	}
	else if ((day >= 23 && month == "september") || (day < 22 && month == "october"))
	{
		sign = "The scales";
		return sign;
	}
	else if ((day >= 23 && month == "october") || (day < 21 && month == "november"))
	{
		sign = "The Scorpion";
		return sign;
	}
	else if ((day >= 22 && month == "november") || (day < 21 && month == "december"))
	{
		sign = "The Archer";
		return sign;
	}
	else if ((day >= 22 && month == "december")|| (day < 19 && month == "january"))
	{
		sign = "The Goat";
		return sign;
	}
	else if ((day >= 20 && month == "january") || (day < 18 && month == "february"))
	{
		sign = "The Water Bearer";
		return sign;
	}
	else if ((day >= 19 && month == "february") || (day < 20 && month == "march"))
	{
		sign = "The Fishes";
		return sign;
	}
	return "";
}



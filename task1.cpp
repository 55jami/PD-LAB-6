#include<iostream>
using namespace std;
string actitvity(string tem, string hum);
int main()
{
	string tem;
	cout << "Enter temperature is:";
	cin >> tem;
	string hum;
	cout<<"Enter humidity is:";
	cin >> hum;
	string result;
	result = actitvity(tem, hum);
	cout << "Activity is:" << result;
}
string actitvity(string tem, string hum)
{
	string act;
	if (tem == "warm" && hum == "dry")
	{
		act = "play tennis";
		return act;
	}
	else if (tem == "warm" && hum == "humid")
	{
		act = "swim";
		return act;
	}
	else if (tem == "cold" && hum == "dry")
	{
		act = "play basketball";
		return act;
	}
	else if (tem == "cold"&& hum == "humid")
	{
		act = "Watch tv";
		return act;
	}
}
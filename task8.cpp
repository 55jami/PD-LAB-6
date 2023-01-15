#include<iostream>
using namespace std;
string coordinates(int h, int x, int y);
int main()
{
	int h;
	int x;
	int y;
	string output;
	cout << "Enter the value of h:";
	cin >> h;
	cout << "Enter the value of x:";
	cin >> x;
	cout << "Enter the value of y:";
	cin >> y;
	output = coordinates(h, x, y);
	cout << output;

}
string coordinates(int h, int x, int y)
{
	string result;
	if (x >= 2 && x <= 4)
	{
		if (y >= 0 && y <= 8)
		{
			result = "inside";
			return result;
		}
		
	}


	if (x >= 0 && x <= 2)
	{
		if (y >= 0 && y <= 2)
		{
			result = "inside";
				return result;
		}
	}
	if (x >= 4&& x <= 6)
	{
		if (y >= 0 && y <= 2)
		{
			result = "inside";
				return result;
		}
	}
	if (x > 6 && y>8)
		{
			result = "outside";
			return result;
		}


	{
		result = "outside";
		return result;
	}

	if (x >= 0 && x <= 2)
	{
		if (y >= 2)
		{
			result = "outside";
			return result;
		}
	}
	if (x >= 2 && x <= 4)
	{
		if (y >= 8)
		{
			result = "outside";
			return result;
		}
	}
	if (x >= 4 && x <= 6)
	{
		if (y >= 2)
		{
			result = "outside";
			return result;
		}
	}

	if ((x == 0 || x == 2) || (x == 4 || x == 6))
	{
		if (y == 0 || y == 2)
		{
			result = "Border";
			return result;
		}
	}
return 0;
}

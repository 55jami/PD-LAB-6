#include<iostream>
using namespace std;
//int time(int starting_hours, int starting_minutes, int arriving_hours, int arriving_minutes);
int main()
{
	int starting_hours;
	int starting_minutes;
	int arriving_hours;
	int arriving_minutes;
	int result;                                       //for hour
	string output;
	int result2;                                      //for minutes
	string output2;
	cout << "Enter the starting hours:";
	cin >> starting_hours;
	cout << "Enter the starting minutes:";
	cin >> starting_minutes;
	cout << "Enter the arriving hours:";
	cin >> arriving_hours;
	cout << "Enter the arriving minutes:";
	cin >> arriving_minutes;

	if (arriving_hours == starting_hours)                                  
		
		if (arriving_minutes == starting_minutes)
		{
			cout << "ON TIME!";
		}
	
	if (arriving_hours == starting_hours)                                                           
	{
		result = 0;
		if (starting_minutes > arriving_minutes)
		{
			result2 = starting_minutes - arriving_minutes;
			cout << result << ":" << result2 << " minutes early";
		}
		
	}
	if (arriving_hours == starting_hours)                                 
	{
		result = 0;
		if (starting_minutes < arriving_minutes)
		{
			result2 =  arriving_minutes- starting_minutes;
			cout << result << ":" << result2 << " minutes late";
		}

	}
	
	if (starting_hours < arriving_hours)                                 
	{
		result = arriving_hours - starting_hours;
		if (starting_minutes <= arriving_minutes)
		{
			result2 = arriving_minutes-starting_minutes;
			cout << result << ":" << result2 << "min late";
		}

	}
	if (starting_hours > arriving_hours)                                 
	{
		result = starting_hours-arriving_hours;
		if (starting_minutes >= arriving_minutes)
		{
			result2 = starting_minutes-arriving_minutes;
			cout << result << ":" << result2 << " min early";
		}

	}
	if (starting_hours > arriving_hours)                                                       
	{
		result = starting_hours - arriving_hours;
		if (starting_minutes < arriving_minutes)
		{
			
			if (starting_minutes == 0)
			{
				result--;
				result2 = 60-arriving_minutes;
			}
			else
			{
				result2 = arriving_minutes-starting_minutes;
			}
		    cout << result << ":" << result2 << " min early";
		}

	}


	return 0;
}
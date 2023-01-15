#include<iostream>
using namespace std;
float studio(string month, int num_of_stays);
float appartment(int num_of_stays, float any_appartment);
int main()
{
	string month;
	cout << "Enter the month:";
	cin >> month;
	int num_of_stays;
	cout << "Enter the number of stays:";
	cin >> num_of_stays;
	float any_appartment;
	cout << "Enter the value of appartment:";
	cin >> any_appartment;
	float output;
	output = studio(month, num_of_stays);
	cout << "Studio:" << output << "$" << endl;
	float output2;
	output2 = appartment(num_of_stays, any_appartment);
	cout << "appartment" << output2 << "$";


}
float studio(string month, int num_of_stays)
{
	float studio;
	float appartment;
	float studio_discount;
	float studio_result;
	if (month == "may"||month == "october")
	{

		studio = 50;
		appartment = 65;
		if (num_of_stays > 7 && num_of_stays<14)
		{
			studio_result=studio - (studio * 0.05);
			studio_discount = studio_result * num_of_stays;
			return studio_discount;
		}
		else if (num_of_stays > 14)
		{
			studio_result = studio - (studio * 0.30);
			studio_discount = studio_result * num_of_stays;
			return studio_discount;
		}
	}
	if (month == "june"||month == "September")
	{
		studio = 75.20;
		appartment = 68.70;
		if (num_of_stays > 14)
		{
			studio_result = studio - (studio * 0.20);
			studio_discount = studio_result * num_of_stays;
			return studio_discount;
		}
	}
return 0;
}
float appartment(int num_of_stays, float any_appartment)
{
	float appartment_discount;
	float appartment_result;
	if (num_of_stays > 14)
	{
		appartment_result= any_appartment - (any_appartment * 0.10);
		appartment_discount = appartment_result * num_of_stays;
		return appartment_discount;
	}
return 0;
}
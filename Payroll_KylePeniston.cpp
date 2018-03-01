//Payroll
#include<iostream>
using namespace std;
int main()
{
	const int size = 7;
	int empId[size] =	{5658845, 4520125, 7895122,
						8777541,8451277,1302850,
						7580489};
	int hours[size];
	double payRate[size];
	double wages[size];

	cout	<< "This program simulates a payroll program using\n"
			<< "employee's ID numbers stored in arrays.\n\n";
			
	for(int i = 0; i < size; i++)
	{
			cout << "Enter the number of hours worked by the employee whose ID is " << empId[i] << ": ";
			cin >> hours[i];
			
		while(hours[i] < 0)
			{
				cout << "\nYou cannot enter negative numbers. Please re-enter: ";
				cin >> hours[i];
			}
				cout << "Enter the hourly pay rate of the employee whose ID is " << empId[i] << " ";
				cin >> payRate[i];
				cout << endl;
			
		while(payRate[i] < 0)
			{
				cout << "\nYou cannot enter negative numbers. Please re-enter: ";
				cin >> hours[i];
			}
				wages[i] = hours[i] * payRate[i];
	}

	for(int x = 0; x < size; x++)
		{
			cout << "\nEmployee: " << empId[x] << "\t\tHours: " << hours[x] << "\t\tGross Wages:" << wages[x];
		}
			cout << endl;
			
	return 0;
}

// Mobile Service Provider
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
	//Dim variables
	char package;
	double gigabytes;
	double price;
	
	//Display
	cout << "This Program calculates a customer's monthly bill\n";
	cout << "Select which package you have purchased\n\n";
	cout << "Package A\n" << "For $39.99 per month, 4 gigabytes are provided. Additional data costs $10 per gigabyte.\n\n"; // package A
	cout << "Package B\n" << "For $59.99 per month, 8 gigabytes are provided. Additional data costs $5 per gigabyte.\n\n"; 	// package B
	cout << "Package C\n" << "For $69.99 per month, unlimited data is provided.\n\n";										// package C
	cout << "Please type A, B or C\n";
	cin >> package;
	
	switch (package)
	{
		case 'A': cout << "\nYou've chosen Package A.\n";
					cout << "How many gigabytes did you use?\n";
						cin >> gigabytes;
						if (gigabytes > 4)
						{
							price = (39.99 + (gigabytes - 4) * 10);
						}
						else
						{
							price = 39.99;
						}
							cout << "\nYour total amount due is: $" << price;
			break;
			
		case 'B': cout << "\nYou've chosen Package B.\n";
					cout << "How many gigabytes did you use?\n";
						cin >> gigabytes;
						if (gigabytes > 8)
						{
							price = (59.99 + (gigabytes - 8) * 5);
						}
						else
						{
							price = 59.99;
						}
							cout << "\nYour total amount due is: $" << price;
			break;
			
		case 'C': cout << "\nYou've chosen Package C.\n";
					cout << "You have unlimited data\n";
						price = 69.99;
							cout << "\nYour total amount due is: $" << price;
			break;
			
		default: cout << "\nYou did not enter A, B, or C!\n";						// Input Validation User must chose A, B, or C.
	}
	
	return 0;
}

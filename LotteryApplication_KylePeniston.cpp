#include <cstdlib>
#include <ctime>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

const int lotteryDigits = 10;
const int SIZE = 5;

int Lottery(int[], int, int);
int User(int[], int);
int Match(int[], int[], int);
void Win(int);
void Display(int[], int[]);

int main()
{

	int lottery[5] = {0, 0, 0, 0, 0};
	int user[5] = {0, 0, 0, 0, 0};
	int matches = 0;


	Lottery(lottery, SIZE, lotteryDigits);

	User(user, SIZE);

	matches = Match(lottery, user, matches);

	Display(lottery, user);

	Win(matches);
	return 0;
}

int Lottery(int lottery[], int, int)
{
	unsigned seed = time(0);
	srand(seed);

	for (int y=0; y<SIZE; y++)
	{
		lottery[y] = rand() % lotteryDigits;
	}
	
	return lottery[0], lottery[1], lottery[2], lottery[3], lottery[4];
}

int User(int user[], int)
{	
	cout << "This program will simulate a lottery. Please enter 5 digits\n\n";

	for (int y=0; y<SIZE; y++)
	{
		cout << "Enter a digit between 0 and 9: ";
		cin >> user[y];

		while (user[y]<0 || user[y]>9)
		{
		cout << "You must enter a digit between 0 and 9: ";
		cin >> user[y];
		}
	}

	return user[0], user[1], user[2], user[3], user[4];
}

int Match(int lotto[], int input[], int)
{
	int match = 0;

	for (int x = 0; x < SIZE; ++x)
	{
		if (lotto[x] == input[x])
			match = match + 1;
	}

	return match;
}

void Display(int lottery[], int user[])
{
	cout << "\nThe winning lottery numbers are: " << lottery[0] << " " << lottery[1] << " " << lottery[2] << " " << lottery[3] << " " << lottery[4] << endl;
	cout << "Your lottery numbers are: " << user[0] << " " << user[1] << " " << user[2] << " " << user[3] << " " << user[4] << endl;
}

void Win(int matches)
{
	cout << "\nYou matched " << matches << " numbers!";

	if (matches != SIZE)
		cout << "\n\nSorry you lost please try again.\n";
	else
		cout << "\nCongrats! You are the grand prize winner!\n";
		
}


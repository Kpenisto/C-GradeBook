#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int size=5;

	string StudentNames[size];

	cout << "This program simulates a Grade Book\n";
	cout << "Please enter 5 student's names.\n";
	
	for(int i = 0; i < 5; i++)
		{
			cout << "\nEnter a student's name: ";
			cin >> StudentNames[i];
		}

	double StudentsScore[size][4], Average[size], sum[size] = {0, 0, 0, 0, 0};
	
	cout << endl << "Please now enter 4 scores for each student\n";
	
	for(int x = 0; x < 5; x++)
	{
		cout << endl;
		
			for(int y = 0; y < 4; y++)
		{

		
			cout << "Enter score for student " << (x + 1) << " ";
			cin >> StudentsScore[x][y];

				while(StudentsScore[x][y] < 0 || StudentsScore[x][y] > 100)
					{
						cout << "Please keep scores in range of 0 to 100. Please re-enter";
						cin >> StudentsScore[x][y];
					}
							sum[x] += StudentsScore[x][y];
		}
	}


	for(int c = 0; c < 5; c++)
		{
			Average[c] = (sum[c] / 4.0);
		}

	char grade[size];
	
	for(int d = 0; d < 5; d++)
		{
			if(Average[d] > 89) grade[d] = 'A';
	
				else if(Average[d] > 79) grade[d] = 'B';
		
					else if(Average[d] > 69) grade[d] = 'C';
			
						else if(Average[d] > 59) grade[d] = 'D';
				
							else grade[d] = 'F';
					
								cout << "\nThe student " << StudentNames[d] << " gets " << grade[d];
		}
		
	cout << endl;
	
	return 0;
}

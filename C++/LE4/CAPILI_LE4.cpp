/*
   Copyright 2016 Nash Ivan Capili
   
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   
       http://www.apache.org/licenses/LICENSE-2.0
       
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
// === Original program starts below this line. Written 2016-05-18 ===
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD max_size = GetLargestConsoleWindowSize(screen);

	char s[] = "STUDENTNUM - NAME";

	COORD pos;
	pos.X = (max_size.X - sizeof(s)) / 2;
	pos.Y = 0;
	SetConsoleCursorPosition(screen, pos);
	LPDWORD written;
	WriteConsole(screen, s, sizeof(s), written, 0);

	double weight;
	double day;
	double price;

	cout << endl;

	cout << "Bone Jour Dog Day Care Center" << endl;
	cout << "This program will compute for the amount to be paid in our dog day care center." << endl;
	cout << "Please enter the dog's weight: ";
		cin >> weight;
	cout << "Please enter the number of days needing care: ";
		cin >> day;

	cin.ignore();
	cout << endl;

	cout.precision(2);
	
	if (weight < 10)
		{
			if (weight > 0)
				{
					if (day <= 10)
						{
							if (day >= 1)
								{
									price = day * 12;

									cout << "The daily rate is 12 dollars." << endl;
									cout << "The total for the month is " << fixed << price << " dollars.";
								}
							else
								{
									cout << "The number of days is invalid.";
								}
						}
					else
						{
							price = day * 16;
				
							cout << "The daily rate is 16 dollars." << endl;
							cout << "The total for the month is " << fixed << price << " dollars.";
						}
				}
			else
				{
					cout << "The number you entered is invalid.";
				}
		}
	else if (weight >= 10)
		{
			if (weight < 35)
				{
					if (day <= 10)
						{
							if (day >= 1)
								{
									price = day * 16;
					
									cout << "The daily rate is 16 dollars." << endl;
									cout << "The total for the month is " << fixed << price << " dollars.";
								}
							else
								{
									cout << "The number of days is invalid.";
								}
						}
					else
						{
							price = day * 13;
				
							cout << "The daily rate is 13 dollars." << endl;
							cout << "The total for the month is " << fixed << price << " dollars.";
						}
				}
			else
				{
					if (day <= 10)
						{
							if (day >= 1)
								{
									price = day * 19;
									
									cout << "The daily rate is 19 dollars." << endl;
									cout << "The total for the month is " << fixed << price << " dollars.";
								}
							else
								{
									cout << "The number of days is invalid.";
								}
						}
					else
						{
							price = day * 17;
				
							cout << "The daily rate is 17 dollars." << endl;
							cout << "The total for the month is " << fixed << price << " dollars.";
						}
				}
		}
	else
		{
			cout << "The number that you entered is invalid.";
		}

	cin.get();
}

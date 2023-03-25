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
// === Original program starts below this line. Written 2016-05-23 ===
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//This identifies the variables to be used in the program.
		int n;
		int x;
			x = 69;
		int q = 7;
		int p;

	//This shows the instructions for the program
		cout << "This is a guessing game. Guess the number from 1-100. You have 7 attempts." << endl;
	
	//This is the main function of the program
		for (p = 0; p<q; p++)
			{
				cout << "Enter number from 1 - 100: ";
					cin >> n;
				if (n != x)
					{
						if (n < x)
							{
								cout << "The number is too low.";
								if (n < 0)
									{
										cout << "The number is invalid.";
										cout << endl;
									}
							}
						else if (n > x)
							{
								cout << "The number is too high.";
								if (n > 100)
									{
										cout << "The number is invalid.";
										cout << endl;
									}
							}
						else
							{
							}
						if (p < 6)
							{
								cout << "Try again." << endl;
								cout << endl;
							}
						else
							{
							}
					}
				else
					{
						cout << "You've guessed the number.";
						break;
					}
			}
		for (p = 7; p = q; p = q)
			{
				cout << "Game over.";
				break;
			}

	//This pauses the program
		cin.ignore();

	//This prevents the program to close upon displaying the output.
		cin.get();
}
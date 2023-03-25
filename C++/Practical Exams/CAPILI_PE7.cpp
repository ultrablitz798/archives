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
// === Original program starts below this line. Written 2016-06-06 ===
#include <iostream>
using namespace std;

int main()
{
	//This identifies the variables to be used in the program.
		int num;
		int rem;
		int div400;
		int div4;

	//This shows the instructions for the program
		cout << "This program identifies a year if it is a leap year or not." << endl;
		cout << "If the program displays" << endl;
		cout << "\t 1 --- then it is a leap year" << endl;
		cout << "\t 0 --- then it is not" << endl;

		cout << "Enter year number: ";
		cin >> num;
	
	//This is the main function of the program
		rem = num % 2;
		div400 = num % 400;
		div4 = num % 4;
	
		cin.ignore();

		if (rem == 0)
			{
				if (div400 == 0)
					{
						cout << "1";
						cout << endl;
					}
				else if (div4 == 0)
					{
						cout << "1";
						cout << endl;
					}
				else
					{
						cout << "0";
						cout << endl;
					}
			}
		else
			{
				cout << "0";
				cout << endl;
			}

	//This prevents the program to close upon displaying the output.
		cin.get();
}
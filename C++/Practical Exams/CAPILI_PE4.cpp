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
// === Original program starts below this line. Written 2016-05-11 ===
#include <iostream>
using namespace std;

int main()
{
	//This identifies the variables to be used in the program.
		double first;
		double second;

	//This tells the user on what the program does.
		cout << "This program will compare the value of two numbers." << endl;

	//This tells the user on what to be inputed in the program.
		cout << "Enter the first number: ";
			cin >> first;
		cout << "Enter the second number: ";
			cin >> second;
	
	//This prevents the program to close upon input of the value.
		cin.ignore();

		cout << endl;

	//This part decides on what to tell the user based on the given value
		if (first >= second)
			{
				cout << "This first number is greater.";

			}
		else if (first == second)
			{
				cout << "The numbers are equal.";
			}
		else
			{
				cout << "The first number is smaller.";
			}
	
	//This prevents the program to close upon displaying the output.
		cin.get();
}
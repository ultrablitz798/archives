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
		int f;
		int c;
		int q = 6;
		int p;

	//This tells the user about the program
		cout << "This program will convert temperature values from degrees Fahrenheit to degrees Celcius.";

	//This part is the main part of the program
		for (p = 0; p < q; p++)
			{
				cout << endl;
				cout << "Enter temperature: ";
				cin >> f;

				c = (5 * (f - 32)) / 9;
				cout << endl;
				cout << "The temperature is " << c << " degrees Celcius.";
			}
		cin.ignore();
		for (p = 6; p = q; p = q)
			{
				break;
			}
	//This prevents the program to close
		cin.ignore();
	//This prevents the program to close upon displaying the output.
		cin.get();
}
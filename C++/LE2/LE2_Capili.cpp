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
// === Original program starts below this line. Written 2016-05-02 ===
// COPYRIGHT 2016 BY NASH IVAN F. CAPILI
#include <iostream>
using namespace std;

int main()
{
	//This part identifies the variables used in the program
		double l;
		double w;
		double d;
		double p;
		double a;
		double sa;
		double v;

	//This part displays the concept of the program
		cout << "This program computes the perimeter, volume, and underground surface area." << endl;

	//This part shows the user on what to input to the program
		cout << "Enter the length of the ground pool: ";
		cin >> l;

		cout << "Enter the width of the ground pool: ";
		cin >> w;

		cout << "Enter the depth of the ground pool: ";
		cin >> d;

	//This part is where the program solves the given data
		p = 2 * (l + w);
		v = l*w*d;
		sa = 2 * (l + w)*d + l*w;

	//This part prevents the progam from closing after it executes the above instructions
		cin.ignore();

	//This part shows the value obtained from the formula
		cout << endl;
		cout << "The perimeter is " << p << " units." << endl;
		cout << "The volume is " << v << " cubic units." << endl;
		cout << "The undergraound surface area is " << sa << " square units." << endl;
	
	//This part prevents the progam from closing after it shows the output
		cin.get();
}
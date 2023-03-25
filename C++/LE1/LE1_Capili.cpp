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
//The following block is the preprocessor commands
#include <iostream>
#include <cmath>
using namespace std;

//This is the main program
int main()
{
	//This block identifies all variables in the program
		double hour;
		double fee;
		double day;

	//The following line shows the description of the program
		cout << "This program will compute the total cost of installing a hardwood floor.\n" << endl;

	//This block asks the user on what to do
		cout << "Enter the number of hours: ";
		cin >> hour;

	//This block tells on what the program do with the following values inputed by the user
		if (hour == '8')
			{
				fee = 350;
				day = 1;
			}
		else if (hour <= '8')
			{
				fee = 350;
				day = 1;
				if (hour == '0')
					{
						fee = 0;
						day = 0;
					}
			}
		else if (hour >= '8')
			{
				fee = 350 + (hour - 8)*(50);
				day = hour / 8;
			}
		else
			{
				cout << "The value that you entered is invalid.";
			}

	//The following line pauses the program to prevent closure upon execution
		cin.ignore();

	//This block shows the output of the program
		cout << "The total cost is " << fee << "." << endl;

	//This sub block defines the difference of one day and many days
			if (day == 1)
				cout << "Number of days required to finish the task is " << day << " day.";
			else
				cout << "Number of days required to finish the task is " << day << " days.";

	//The following line prevents the termination of program
		cin.get();
}

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

int cylvol(int, int); //This is the function prototype.
int main()
{
	//This identifies the variables to be used in the program.
		int radius;
		int length;
		int volume;

	//This shows the instructions for the program.
		cout << "This is program computes for the volume of a right cylinder." << endl;
		cout << "Enter the radius: ";
			cin >> radius;
		cout << "Enter the length: ";
			cin >> length;

	//This is the function call of the program.
		volume = cylvol(radius, length);

	//This displays the output of the function definition
		cout << "The volume is " << volume << " cubic units.";
	return 0;
}

int cylvol(int p, int q) //This is the function definition.
{
	int volume;

	cin.ignore();

	volume = 3.1416*p*p*q;
	return volume;

	cin.get();
}
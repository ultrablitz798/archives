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
// === Original program starts below this line. Written 2016-05-26 ===
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//This identifies the variables to be used in the program.
		char c;
		int num;
		int l;
		int a;
		int r;
		int a1;

	//This shows the instructions for the program
		cout << "Character is ";
			cin >> c;
		cout << "Number is ";
			cin >> num;

	//This shows the output of the program
		cout << endl;
		cout << "Output";
		cout << endl;

		l = num - 1;

		for (a = 0; a < num; ++a)
			{
				if (toupper(c) == 'L')
					{
						for (a1 = 0; a1 < l; ++a1)
							{
								cout << " ";
							}
							--l;
					}
				if (toupper(c) == 'L' || toupper(c) == 'R')
					{
						for (r = 0; r < a + 1; ++r)
							{
								cout << "X";
							}
							cout << endl;
					}
			}

	//This pauses the program
		cin.ignore();

	//This prevents the program to close upon displaying the output.
		cin.get();
}
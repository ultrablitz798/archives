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
using namespace std;

int main()
{
	//This identifies the variables to be used in the program.
		int n;
		int l;
		int os;
		int op;
		int es;
		int ep;

		//This initializes local variables to be used
			es = 0;
			ep = 0;
			os = 0;
			op = 1;

	//This shows the instructions for the program
		cout << "Input a number: ";
			cin >> n;

	//This is the main part of the program
		//Displays odd numbers
			cout << "Odd Numbers: ";
			for (l = 1; l <= n; l++)
				{
					if (l % 2 != 0)
						{
							cout << l << " ";
							os += l;
							op *= l;
						}
				}

		//Displays even numbers
			cout << endl;
			cout << "Even Numbers: ";
			for (l = 1; l <= n; l++)
				{
					if (l % 2 == 0)
						{
							cout << l << " ";
							es += l;
							ep *= l;
						}
				}

		//Displays sum and product
			cout << endl;
			cout << "Sum of Even Numbers: " << es << endl;
			cout << "Product of Odd Numbers: " << op << endl;

	//This pauses the program
		cin.ignore();

	//This prevents the program to close upon displaying the output.
		cin.get();
}
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
// === Original program starts below this line. Written 2016-04-25 ===
#include <iostream>
using namespace std;

int main()
{
	double base;
	double height;
	double area;

	cout << "Enter base:";
	cin >> base;

	cout << "Enter height:";
	cin >> height;

	cin.ignore();

	area = (base*height) / 2;

	cout << "The area of triangle is " << area << endl;
	cin.get();
}
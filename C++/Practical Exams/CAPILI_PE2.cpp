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
	double degC;
	double degF;

	cout << "Enter temperature in degrees Celsius: ";
	cin >> degC;

	cin.ignore();

	degF = ((9.0/5.0)*degC)+32.0;

	cout << "The temperature is " << degF << " degrees Fahrenheit." << endl;
	cin.get();
}
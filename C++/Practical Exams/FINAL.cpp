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
// === Original program starts below this line. Written 2016-06-15 ===
/*
	Capili, Nash Ivan
	June 15, 2016
	
	Description of each process
		int main() = This process shows the main controls of the program. It contains the menus for the program.
		int nifcsumdigits(int num) = This is part of the main Happy number program which collects data from the user.
		bool nifchappynum(int num, set<int> & lr) and void nifcprintfirstnum(int num, int firstnum) = Analyzes the data.
		int output() = Shows the output to the user.
*/
//Program Start
#include <iostream>
#include <string>
#include <set>
using namespace std;

int nifcsumdigit(int num) 
	{
     	int nifcsum = 0; 
    	while (num)
			{	 
				int nifcdigit = num % 10; 
        		num = num / 10; 
      			nifcsum += nifcdigit * nifcdigit; 
   			} 
   			return nifcsum; 
 	}
double nifchappynum(int num, set<int> & lr) 
	{ 
     	while (num > 1 && lr.find(num) == lr.end()) 
			{ 
       			lr.insert(num); 
        		num = nifcsumdigit(num); 
   			} 
    	if (num == 1) 
			{
				return true; 
			}
 			return false; 
 	} 
void nifcfirstnum(int num, int firstnum) 
	{  
		set<int> lrr; 
    	int count = 0; 
     	while (count < firstnum)
			{ 
         		if (nifchappynum(num, lrr))
					{  
            			count++; 
             			cout << num <<endl; 
        			}          
    				num++; 
        			lrr.clear(); 
     				} 
 			}
int main()
	{
		string nifcmain;
	
		cout << "Welcome, this program identifies a number if it is a happy number or not." << endl;
		cout << endl;
		
		cout << "Please use this following commands to control the program." << endl;	
		cout << "Command \t Descrption" << endl;
		cout << "About \t\t This shows the information about the program." << endl;
		cout << "Happy_Number \t This starts the main part of the program" << endl;
		cout << "Exit \t\t This brings back to the original screen" << endl;
		cout << endl;
		
		cout << "To begin, please enter your command: ";
			cin >> nifcmain;
		
		if (nifcmain == "About")
			{
				cout << "About" << endl;
				cout << "This program was created by:" << endl;
				cout << "\t Nash Ivan F. capili" << endl;
				cout << "\t 2015100638" << endl;
				cout << "\t June 15, 2016" << endl;
				cout << endl;
				cout << endl;
				return main();
			}
		else if (nifcmain == "Happy_Number")
			{
				int num; 
				cout << "Please enter a number: ";
    				cin	>>	num;
    			set<int> lr; 
    			double res = nifchappynum(num, lr); 
    			if (res)
					{ 
        				cout << num <<" is a happy number"<< endl; 
    				}
				else
					{ 
         				cout << num <<" is not a happy number"<< endl; 
    				} 
     			int firstnum = 8; 
     			cout<<"The next " << firstnum <<" happy number from "<< num <<" is: "<<endl; 
    			nifcfirstnum(num, firstnum);
				cout << endl;
				cout << endl; 
    			return main(); 			
			}
		else if (nifcmain == "Exit")
			{
				return main();
			}
		else
			{
				cout << "The command that you entered is incorrect." << endl;
				cout << endl;
				cout << endl;
				return main();
			}
	}
	

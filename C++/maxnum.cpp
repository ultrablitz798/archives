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
#include<iostream>
using namespace std;

int findmax (int, int); // function prototype
                       //syntax: functionType functionName (parameter list)

int main()

{
    int firstnum, secnum, max;
    cout<<"Enter first number:";
    cin>>firstnum;
    cout<<"Enter second number:";
    cin>>secnum;
    
    max=findmax(firstnum, secnum); // function call : functionName(parameter)
    
    cout<<"The maximum of two numbers is:"<<max<<endl;
    return 0;
    return 0;
    
}

int findmax(int x, int y) //function definition

{ 
    int max;
    
    if(x>=y)
    max=x;
    else
    max=y;

    return max;
    
    
}                      
                       

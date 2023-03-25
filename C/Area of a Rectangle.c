/*
   Copyright 2013 Nash Ivan Capili

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

/*This Program calculates the area of a rectangle*/
#include <stdio.h>
int main()
{
 double A,B,C;
 /*Read in the value of A and B*/
 printf("Enter the base of the rectangle: ");
 scanf("%lf",&A);

 printf("Enter the height of the rectangle: ");
 scanf("%lf",&B);

/*Calculate C*/
C = (A * B);

/*Display the value of C*/
printf("The area of the rectangle is %lf sq. units.\n",C);
return 0;

}

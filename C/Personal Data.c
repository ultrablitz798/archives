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

#include <stdio.h>
main ()
{
 char A [25];
 char B[25];
 int C;
   printf("What is your first name?");
   scanf("%s",&A);

   printf(" \n");

   printf("What is your last name?");
   scanf("%s",&B);

   printf(" \n");

   printf("How old are you?");
   scanf("%d",&C);

   printf(" \n");

   printf("Here is the information you entered.\n");
   scanf("Here is the information you entered.\n");

   printf(" \n");

   printf("First Name: %s\n",A);
   scanf("First Name: %s\n",A);

   printf("Last Name: %s\n",B);
   scanf("Lastt Name: %s\n",B);

   printf("Age: %d\n",C);
   scanf("Age: %d\n",C);
 return 0;
}

/*
   Copyright 2014 Nash Ivan Capili

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
main()
{
 printf("PRIME OR NOT PRIME\n");
 printf("by NASH IVAN CAPILI\n");
 printf(" \n");
 printf("Version 1.0.111813\n");
 printf(" \n");
 printf(" \n");

 int n, c;

   printf("Enter a Number\n");
   scanf("%d", &n);

  if ( n == 2 )
   printf("Prime Number.\n");

  else
   {
     for ( c = 2 ; c <= n - 1 ; c++ )
     {
      if ( n % c == 0 )
        break;
     }
     if ( c != n )
      printf("Not a Prime Number.\n");
     else
      printf("Prime Number.\n");
    }
  printf(" \n");
}

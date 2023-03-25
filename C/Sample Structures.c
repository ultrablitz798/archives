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

#include<stdio.h>

struct programming
{
  float constant;
  char *pointer;
};

main()
{
  struct programming variable;
  char string[]= "Programming in Software Development.";

  variable.constant = 1.23;
  variable.pointer = string;


  printf("%f\n", variable.constant);
  printf("%f\n", variable.pointer);

  return 0;
}

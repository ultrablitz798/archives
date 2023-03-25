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
// === Original program starts below this line. Written 2016-05-18 ===
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD max_size = GetLargestConsoleWindowSize(screen);

	char s[] = "STUDENTNUM - NAME";

	COORD pos;
	pos.X = (max_size.X - sizeof(s)) / 2;
	pos.Y = 0;
	SetConsoleCursorPosition(screen, pos);
	LPDWORD written;
	WriteConsole(screen, s, sizeof(s), written, 0);

	int verse;
	
	cout << endl;

	cout << "The Twelve Days of Christmas" << endl;
	cout << "Please enter the verse number of the song: ";
		cin >> verse;

	cin.ignore();
	cout << endl;

	if (verse == 1)
		{
			cout << "On the first day of Christmas, my true love gave to me" << endl;
			cout << "a Partridge in a Pear Tree.";
		}
	else if (verse == 2)
		{
			cout << "On the second day of Christmas, my true love gave to me" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 3)
		{
			cout << "On the third day of Christmas, my true love gave to me" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 4)
		{
			cout << "On the fourth day of Christmas, my true love gave to me" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 5)
		{
			cout << "On the fifth day of Christmas, my true love gave to me" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 6)
		{
			cout << "On the sixth day of Christmas, my true love gave to me" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 7)
		{
			cout << "On the seventh day of Christmas, my true love gave to me" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 8)
		{
			cout << "On the eighth day of Christmas, my true love gave to me" << endl;
			cout << "8 Maids-a-Milking" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 9)
		{
			cout << "On the ninth day of Christmas, my true love gave to me" << endl;
			cout << "9 Ladies Dancing" << endl;
			cout << "8 Maids-a-Milking" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 10)
		{
			cout << "On the tenth day of Christmas, my true love gave to me" << endl;
			cout << "10 Lords-a-Leaping" << endl;
			cout << "9 Ladies Dancing" << endl;
			cout << "8 Maids-a-Milking" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 11)
		{
			cout << "On the eleventh day of Christmas, my true love gave to me" << endl;
			cout << "11 Pipers Piping" << endl;
			cout << "10 Lords-a-Leaping" << endl;
			cout << "9 Ladies Dancing" << endl;
			cout << "8 Maids-a-Milking" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else if (verse == 12)
		{
			cout << "On the twelfth day of Christmas, my true love gave to me" << endl;
			cout << "12 Drummers Drumming" << endl;
			cout << "11 Pipers Piping" << endl;
			cout << "10 Lords-a-Leaping" << endl;
			cout << "9 Ladies Dancing" << endl;
			cout << "8 Maids-a-Milking" << endl;
			cout << "7 Swans-a-Swimming" << endl;
			cout << "6 Geese-a-Laying" << endl;
			cout << "5 Gold Rings" << endl;
			cout << "4 Colly Birds" << endl;
			cout << "3 French Hens" << endl;
			cout << "2 Turtle Doves" << endl;
			cout << "and a Partridge in a Pear Tree.";
		}
	else
		{
			cout << "The number that you entered is invalid.";
		}

	cin.get();
}
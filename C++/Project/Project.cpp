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
// === Original program starts below this line. Written 2016-06-20 ===
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
using namespace std;

class Library
{
public:
	int number;
	char course[40];
	char name[40];
	char section[40];
	int year;

	//get number for ADD
	int num_check()//Function to arrange stored information
	{
		ifstream in("Database.txt");
		if (!in)
		{
			cout << "Cannot open ""Database.txt"" file.\n";
			return 1;
		}
		int i = 1;
		while (in >> number >> course >> name >> section >> year)
		{
			i = i + 1;
		}
		number = i;
		in.close();
		return number;
	}
	void Search()//Function to read contents of the database
	{
		int m = 0;
		char Input_course[40];
		char Input_name[40];
		int Input_year;
		Library s;
		ifstream in("Database.txt");//Reads the file
		if (!in)
		{
			return;
		}
		cout << "\t 1. Course" << endl;
		cout << "\t 2. Name/ Section" << endl;
		cout << "\t 3. Year started" << endl;
		cout << endl << "Select:";
		cin >> m;
		switch (m)
		{
		case 1:
			cout << "Input the course title :";
			cin >> Input_course;
			while (in >> s.number >> s.course >> s.name >> s.section >> s.year)//get every class
			{
				if (!strcmp(Input_course, s.course))
				{
					//if found
					cout << "\nNO: " << s.number << endl;
					cout << "\nCourse : " << s.course << endl;
					cout << "Name/ Section : " << s.name << "/" << s.section << endl;
					cout << "Year started: " << s.year << endl << endl;
				}
			}
			break;
		case 2:
			cout << "Input the name of the professor :";
			cin >> Input_name;
			while (in >> s.number >> s.course >> s.name >> s.section >> s.year)//get every class
			{
				if ((!strcmp(Input_name, s.name)) || !strcmp(Input_name, s.section))
				{
					//if found
					cout << "\nNO: " << s.number << endl;
					cout << "\nCourse : " << s.course << endl;
					cout << "Name /Section : " << s.name << "/" << s.section << endl;
					cout << "Year started : " << s.year << endl << endl;
				}
			}
			break;
		case 3:
			cout << "Input the year started teaching :";
			cin >> Input_year;
			while (in >> s.number >> s.course >> s.name >> s.section >> s.year)//get every class
			{
				{
					if (Input_year == s.year)//when find
					{
						cout << "\nNO: " << s.number << endl;
						cout << "\nCourse : " << s.course << endl;
						cout << "Name/ Section : " << s.name << "/" << s.section << endl;
						cout << "Year : " << s.year << endl << endl;
					}
				}
				break;
		default:
			cout << "Error! use only 1~3";
			break;
			}
			//error handling for character
			fflush(stdin);
			cin.clear();//resets the value of m
			cout << endl << endl << "1. Search again" << endl << "2. Return to main menu" << endl << "Select: ";
			cin >> m;
			switch (m)
			{
			case 1:
				Search();
				break;
			default:
				break;
			}
			//error handling for charator
			fflush(stdin);
			cin.clear();
		}
	}
	int ADD()//Function to write new information to database
		{
			char m;
			Library s;
			ofstream out;

			out.open("Database.txt", ios::app);//Writing data to file
			if (!out)
			{
				cout << "Can't open file.\n";
				return 1;
			}

			cout << "Add the new record" << endl;
			cout << "Enter course code:";
			cin >> s.course;
			cout << "Enter name:";
			cin >> s.name;
			cout << "Enter section:";
			cin >> s.section;
			cout << "Enter year started:";
			number = num_check();
			cin >> year;

			//Writes the information to the file
			out << number << endl;
			out << s.course << endl;
			out << s.name << endl;
			out << s.section << endl;
			out << year << endl << endl;
			out.close();

			cout << endl << endl << "1. Search again" << endl << "2. Return to main menu" << endl << "Select: ";
			cin >> m;

			switch (m)
			{
			case 1:
				ADD();
				break;
			}

			//error handling for charater
			fflush(stdin);
			cin.clear();
			return 0;
		}
	int Show_database()//Shows the values inputed in the database
		{
			ifstream in("Database.txt");
			if (!in)
			{
				cout << "Can't open ""Database.txt"" file.\n";
				return 1;
			}
			while (in >> number >> course >> name >> section >> year)
			{
				cout << "No: " << number << endl;
				cout << "Course :" << course << endl;
				cout << "Name/ Section : " << name << " / " << section << endl;
				cout << "Year started : " << year << endl << endl;
			}
			in.close();
			return 0;
		}

	void Exit()//Function to terminate the program
		{
			return;
			cin.get();
		}

	void startscreen()//Function to show the description to the user
	{
		cout << "Mathematics Course Catalog of Professors" << endl;
		cout << "Main Menu" << endl;
		cout << "Please choose one of the following options :" << endl;
		cout << "\t 1. Search" << endl;
		cout << "\t 2. Add the new record" << endl;
		cout << "\t 3. Display the full database" << endl;
		cout << "\t 4. Exit" << endl;
	}
};

int main()
{
	int last;
	int n = 0;
	Library a;
	while (1)
	{
		a.startscreen();
		cout << endl << "Select: ";
			cin >> n;
		switch (n)
		{
		case 1:
			a.Search();
			break;
		case 2:
			a.ADD();
			break;
		case 3:
			a.Show_database();
			break;
		case 4:
			a.Exit();
			break;
		default:
			cout << "Error!! Enter 1~4" << endl;
			break;
		}

		fflush(stdin);
		cin.clear();
	}
	cin >> last;
	return 0;
}
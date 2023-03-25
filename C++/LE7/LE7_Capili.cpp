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
// === Original program starts below this line. Written 2016-06-08 ===
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

using namespace std;
string winner(string, string); //This is the function prototype

int main()
{
	//This identifies the variables to be used in the program.
		string main;
		string p1;
		string p2;
		string p1c;
		string p2c;
		int computer;

	//This shows the instructions for the program
		cout << "Rock, paper, or scissors?" << endl;
		cout << endl;
		cout << "Commands:" << endl;
		cout << "  P \t Paper" << endl;
		cout << "  R \t Rock" << endl;
		cout << "  S \t scissors" << endl;
		cout << "  1P \t one player" << endl;
		cout << "  2P \t two players" << endl;
		cout << "  exit \t quits the application" << endl;
		cout << endl;
		cout << "Please choose the number of players: ";
			cin >> main;

	//This is the main part of the program
		if (main == "1P")
			{
				cout << "Please enter the name of player 1: ";
					cin >> p1;
				do
					{
						cout << p1 << ", please enter your command: ";
							cin >> p1c;
						string winner(string p1c, string p1); //This is the function definition.
							{
								srand(time(NULL));
								computer = rand() % 10 + 1;
								//This is the "brain" of the computer
									if (computer <= 3)
										{
											cout << "Computer chose: Rock" << endl;
											cout << endl;
										}
									else if (computer <= 6)
										{
											cout << "Computer chose: Paper" << endl;
											cout << endl;
										}
									else if (computer >= 7)
										{
											cout << "Computer chose: Scissors" << endl;
											cout << endl;
										}
								//This part determines the winner
									//for rock
									if (p1c == "R" || p1c == "r")
										{
											if (computer <= 3)
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											else if (computer <= 6)
												{
													cout << "You lose!" << endl;
													cout << endl;
												}
											else if (computer >= 7)
												{
													cout << "You win!" << endl;
													cout << endl;
												}
										}
									//for paper
									if (p1c == "P" || p1c == "p")
										{
											if (computer <= 3)
												{
													cout << "You win!" << endl;
													cout << endl;
												}
											else if (computer <= 6)
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											else if (computer >= 7)
												{
													cout << "You lose!" << endl;
													cout << endl;
												}
										}
									//for scissors
									if (p1c == "S" || p1c == "s")
										{
											if (computer <= 3)
												{
													cout << "You lose!" << endl;
													cout << endl;
												}
											else if (computer <= 6)
												{
													cout << "You win!" << endl;
													cout << endl;
												}
											else if (computer >= 7)
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											}
									else if (p1c == "exit") //Quits the application
										{
											break;
										}
							}
					}
					while (cin.get());
			}

		else if (main == "2P")
			{
				cout << "Please enter the name of player 1: ";
					cin >> p1;
				cout << "Please enter the name of player 2: ";
					cin >> p2;
				cout << endl;
				do
					{
						string winner(string p1c, string p2c); //This is the function definition.
							{
								cout << p1 << ", please enter your command: ";
									cin >> p1c;
								cout << p2 << ", please enter your command: ";
									cin >> p2c;
								//This part determines the winner
									//for rock
									if (p1c == "R" || p1c == "r")
										{
											if (p2c == "R" || p2c == "r")
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											else if (p2c == "S" || p2c == "s")
												{
													cout << p1 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "P" || p2c == "p")
												{
													cout << p2 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "quit") //Quits the application
												{
													break;
												}
										}
									//for paper
									else if (p1c == "P" || p1c == "p")
										{
											if (p2c == "R" || p2c == "r")
												{
													cout << p1 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "P" || p2c == "p")
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											else if (p2c == "S" || p2c == "s")
												{
													cout << p2 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "quit") //Quits the application
												{
													break;
												}
										}
									//for scissors
									else if (p1c == "S" || p1c == "s")
										{
											if (p2c == "R" || p2c == "r")
												{
													cout << p2 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "P" || p2c == "p")
												{
													cout << p1 << " wins." << endl;
													cout << endl;
												}
											else if (p2c == "S" || p2c == "s")
												{
													cout << "It's a tie!" << endl;
													cout << endl;
												}
											else if (p2c == "quit") //Quits the application
												{
													break;
												}
										}
									else if (p1c == "exit") //Quits the application
										{
											break;
										}
							}
					}
					while (cin.get());
			}
		else
			{
				cout << "The command you entered is invalid." << endl;
			}
	
	//This terminates the program
		cin.get();
		return 0;
}
#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include <array>
using namespace std;
#include "processor.h"
//globally defined integer values for array indexing.
#define R 5 
#define C 5 

/*
object defined from the processor class to access the 
methods from within.*/
processor process;
/*
This way of accessing functions/methods through a separate class
seems to be the best way to implement separation for readability
purposes.

you should always have an interface class ready for each new program.
The interface is how the user will interact, so it should be intuitive
and easy to follow. 

*/
class userInterface {
public:
	/*
	This class runs the menu for the program in a while loop
	that repeats the menu after each action until you either
	exit explicitly or choose no after you're done your choice.
	*/
	
	//
	void clearScreen() {
		int i;
		for (i = 0; i < 10; i++)
			printf("\n\n\n\n\n\n\n\n\n\n");
	}
	//
	void program() {		
		//Created to cleanup the main function	
		bool papi = true, choice = true;
		string ans = "";
		//sentinel loop that runs the menu.
		while (papi) {
			cout << "Welcome to learning activities 3.1 to 3.7!\nAll the programs are listed below.\n";
			cout << "Please choose from our menu of learning activities listed below.\n";
			cout << "-------------------";
			cout << "\n|(1) 3.1 || (2) 3.2|\n|(3) 3.3 || (4) 3.4|\n|(5) 3.5 || (6) 3.6|\n|(7) 3.7 || (8)Exit|\n";
			cout << "-------------------\n";
			cin >> ans;
			char an = ans[0];
			switch (an) {
			case '1':
				process.activity3_1();
				break;
			case '2':
				process.activity3_2();
				break;
			case '3':
				process.activity3_3();
				break;
			case '4':
				process.activity3_4();
				break;
			case '5':
				process.activity3_5();
				break;
			case '6':
				process.activity3_6();
				break;
			case '7':
				process.activity3_7();
				break;
			case '8':
				cout << "Thanks for using our program!\nWe hope to see you again!\n\n\n\n\n";
				exit(0);
			default:
				cout << "That's not the right input, please select from 1-6.";
			}
			string choice = "";
			cout << "\nIs that all today?\nY or N\n";
			cin >> choice;
			char chc = choice[0];
			if (chc == 'n' || chc == 'N') {
				process.clearScreen();
				cout << "\nAlright, back to the main menu.\n\n\n\n\n";
			}
			else if (chc == 'y' || chc == 'Y') {
				cout << "\nAlright, we hope to see you again!\n\n\n\n\n";
				papi = false;
			}
		}
	}
	//		
private:
};
#endif
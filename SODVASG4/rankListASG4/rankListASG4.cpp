// rankListASG4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include <array>
#include <string.h>
using namespace std;
#define R 5
#define C 5
#define	MAXINDEX 25
bool pass = true; bool fail = false;
/*
class studs {
	int rollNum;
	string name;
	char subject[R];
public:
	void set_roll(int);
	void set_name(string);
	void set_subject(char[R]);
};
void studs::set_roll(int r) {
	rollNum = r;
}
void studs::set_name(string n) {
	name = n;
}
void studs::set_subject(char b[R]) {
	strcpy_s(subject,5,b);
}
*/

class zeStudentz {	

	//initialized variables for Ze Studentz
	int rollNum = 0;	
	string name = "";
	char subEnter1 = ' ';
	char subEnter2 = ' ';
	char subEnter3 = ' ';
	char subEnter4 = ' ';
	char subEnter5 = ' ';
	bool sub1 = true;	
	bool sub2 = true;	
	bool sub3 = true;	
	bool sub4 = true;
	bool sub5 = true;

public:

	bool chooseFP(char a) {
		if (a == 'f') {		
			return false;
		}
		else if (a == 'p') {		
			return true;
		}
	}

	void setStudent() {
		cout << "\nEnter roll#\n";
		cin >> rollNum;
		
		cout << "\nEnter Name\n";
		cin >> name;
		
		cout << "\nEnter p/f for Math\n";
		cin >> subEnter1;
		if (subEnter1 == 'f') {
			sub1 = false;
		}		
		else if (subEnter1 == 'p') {
			sub1 = true;
		}
		
		cout << "\nEnter p/f for Gym\n";
		cin >> subEnter2;
		if (subEnter2 == 'f') {
			sub2 = false;
		}
		else if (subEnter2 == 'p') {
			sub2 = true;
		}
		
		cout << "\nEnter p/f for Science\n";
		cin >> subEnter3;
		if (subEnter3 == 'f') {
			sub3 = false;
		}
		else if (subEnter3 == 'p') {
			sub3 = true;
		}
		
		cout << "\nEnter p/f for English\n";
		cin >> subEnter4;
		if (subEnter4 == 'f') {
			sub4 = false;
		}
		else if (subEnter4 == 'p') {
			sub4 = true;
		}
		
		cout << "\nEnter p/f for Social Studies\n";
		cin >> subEnter5;	
		if (subEnter5 == 'f') {
			sub5 = false;
		}
		else if (subEnter5 == 'p') {
			sub5 = true;
		}
		
	}
		string subOut(bool a) {
			string pass = "Pass";
			string fail = "Fail";
			if (a == false) {
				return fail;
			}
			else if(a == true) {
				return pass;		
			}	
			return pass = "";
		}

	void getStudent() {		
		cout << "\n";
		cout << rollNum << "     " << name << "  " << subOut(sub1) << "  " << subOut(sub2) << " " << subOut(sub3) << " " << subOut(sub4) << " " << subOut(sub5);
		cout << "\n";
	}

	int getRollNum() { return rollNum; }
	int setRollNum(int a) { return a = rollNum; }
	

	string getName() { return name; }
	string setName(string b) { return b = name; }
	
	char getSub1() { return sub1; }
	char setSub1(char c) { return c = sub1; }
	

	char getSub2() { return sub2; }
	char setSub2(char d) { return d = sub2; }
	

	char getSub3() { return sub3; }
	char setSub3(char e) { return e = sub3; }
	

	char getSub4() { return sub4; }
	char setSub4(char f) { return f = sub4; }
	

	char getSub5() { return sub5; }
	char setSub5(char g) { return g = sub5; }
		

	bool checkFail() {
		int count = 0;
		const int FAILURELIMIT = 1;
		//adds a counter if you failed.
		if (sub1 == false) {
			count++;
		}
		if (sub2 == false) {
			count++;
		}
		if (sub3 == false) {
			count++;
		}
		if (sub4 == false) {
			count++;
		}
		if (sub1 == false) {
			count++;
		}

		//if the counter is greater than 1, return fail.
		if (count > FAILURELIMIT) {
			return true;
		}
		else {
			return false;
		}
	}

	//minimal methods to output specifics about the students.
	void printStudent() {
		cout << "\n---------------------------------------------------------------------------------------------";
		cout << "\nRoll#||Name||Math||Gym||Sci||Eng||Social\n";
		cout << rollNum << " " << name << " " << subOut(sub1);
		cout << subOut(sub2) << " " << subOut(sub3) << " " << subOut(sub4) << " " << subOut(sub5) << "\n";
		cout << "---------------------------------------------------------------------------------------------\n";
	}

	void runFailCheck() {
		//if you return a fail, print out the student that failed. 
		//cout << "\nStudent's Failing More Than 2 Classes\n";
		if (checkFail() == true) {
			
			cout << "\nStudent ID#: " << rollNum << " Name: " << name << "\n";
		}
		//else
			//cout << "\nNo Fail!\n";
	}	

private:
	int a = 0;
	string b = "";
	bool c = true, d = true, e = true, f = true, g = true;	
};


class process {
	
	zeStudentz students[R][C] = {
		student1, student2, student3, student4, student5
	};

	zeStudentz student1; zeStudentz student2; zeStudentz student3; zeStudentz student4; zeStudentz student5;
	zeStudentz student6; zeStudentz student7; zeStudentz student8; zeStudentz student9; zeStudentz student10;
	zeStudentz student11; zeStudentz student12; zeStudentz student13; zeStudentz student14; zeStudentz student15;
	zeStudentz student16; zeStudentz student17; zeStudentz student18; zeStudentz student19; zeStudentz student20;
	zeStudentz student21; zeStudentz student22; zeStudentz student23; zeStudentz student24; zeStudentz student25;
	
	
	
public:

	void clearScreen() {
		int i;
		for (i = 0; i < 10; i++)
			printf("\n\n\n\n\n\n\n\n\n\n");
	}

	void failCheck() {
		cout << "\n---------------------------------------------------------------------------------------------\n";
		cout << "\nRoll#||Name||Math||Gym||Sci||Eng||Social\n";		
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << "\n"; students[i][j].runFailCheck(); cout << "\n";				
			}
		}
		cout << "\n---------------------------------------------------------------------------------------------\n";
	}

	void printFive() {
		cout << "\n---------------------------------------------------------------------------------------------\n";
		cout << "\nRoll#||Name||Math||Gym||Sci||Eng||Social\n";
		for (int i = 0; i < R; i++) {
			cout << "\n"; students[0][i].getStudent(); cout << "\n";			
		}
		cout << "\n---------------------------------------------------------------------------------------------\n";
	}

	void printTen() {
		cout << "\n---------------------------------------------------------------------------------------------\n";
		cout << "\nRoll#||Name||Math||Gym||Sci||Eng||Social\n";
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "\n"; students[i][j].getStudent(); cout << "\n";				
			}
		}
		cout << "\n---------------------------------------------------------------------------------------------\n";
	}

	void printAll() {		
		cout << "\n---------------------------------------------------------------------------------------------\n";
		cout << "\nRoll#||Name||Math||Gym||Sci||Eng||Social\n";

		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cout << "\n"; students[i][j].getStudent(); cout << "\n";								
				//cout << "\nThere's nothing to print!\n";
			}			
		}
		cout << "\n---------------------------------------------------------------------------------------------\n";
	}

	void addStuds() {
		//student1.setStudent();		
		student1.runFailCheck();
	}

	void choice1() {
		bool papi = true;
		bool menu = true;
		string choice = "";
		cout << "\nThe menu for adding 5 students. Choose 1 to set, 2 to print, 3 to run the fail check on the array.\n";
		while (papi) {
			cin >> choice;
			char an = choice[0];
			switch (an) {
			case '1':
				cout << "\nEnter the students data below.\n";
				for (int i = 0; i < R; i++) {
					cout << "\nAdding student # : " << (i + 1) << " now.\n";
					cout << "\n"; students[0][i].setStudent(); cout << "\n";					
				}				
				papi = false;
				break;
			case '2':
				printFive();
				papi = false;
				break;
			case '3':
				for (int i = 0; i < R; i++) {
					cout << "\nShowing student # : " << (i + 1) << " now.\n";
					cout << "\n"; students[0][i].runFailCheck(); cout << "\n";
				}
				papi = false;
				break;
			default:
				cout << "\nThat was incorrect.\n";
			}
		}
		
	}

	void choice2() {
		bool papi = true;
		bool menu = true;
		int count = 0;
		string choice = "";
		cout << "\nThe menu for adding 10 students. Choose 1 to set, 2 to print, 3 to run the fail check on the array.\n";
		while (papi) {
			cin >> choice;
			char an = choice[0];
			switch (an) {
			case '1':
				cout << "\nEnter the students data below.\n";				
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 2; j++) {
						cout << "\nAdding student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].setStudent(); cout << "\n";
					}
				}
				papi = false;
				break;
			case '2':
				printTen();
				papi = false;
				break;
			case '3':
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 2; j++) {
						cout << "\nShowing student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].runFailCheck(); cout << "\n";
					}
				}
				papi = false;
				break;
			default:
				cout << "\nThat was incorrect.\n";
			}
		}
	}

	void choice3() {
		bool papi = true;
		bool menu = true;
		int count = 0;
		string choice = "";
		cout << "\nThe menu for adding 15 students. Choose 1 to set, 2 to print, 3 to run the fail check on the array.\n";
		while (papi) {
			cin >> choice;
			char an = choice[0];
			switch (an) {
			case '1':
				cout << "\nEnter the students data below.\n";
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 3; j++) {
						cout << "\nAdding student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].setStudent(); cout << "\n";
					}
				}
				papi = false;
				break;
			case '2':
				printFive();
				papi = false;
				break;
			case '3':
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 3; j++) {
						cout << "\nShowing student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].runFailCheck(); cout << "\n";
					}
				}
				papi = false;
				break;
			default:
				cout << "\nThat was incorrect.\n";
			}
		}
	}

	void choice4() {
		bool papi = true;
		bool menu = true;
		int count = 0;
		string choice = "";
		cout << "\nThe menu for adding 20 students. Choose 1 to set, 2 to print, 3 to run the fail check on the array.\n";
		while (papi) {
			cin >> choice;
			char an = choice[0];
			switch (an) {
			case '1':
				cout << "\nEnter the students data below.\n";
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 4; j++) {
						cout << "\nAdding student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].setStudent(); cout << "\n";
					}
				}
				papi = false;
				break;
			case '2':
				printFive();
				papi = false;
				break;
			case '3':
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < 4; j++) {
						cout << "\nShowing student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].runFailCheck(); cout << "\n";
					}
				}
				papi = false;
				break;
			default:
				cout << "\nThat was incorrect.\n";
			}
		}
	}

	void choice5() {
		bool papi = true;
		bool menu = true;
		int count = 0;
		string choice = "";
		cout << "\nThe menu for adding 25 students. Choose 1 to set, 2 to print, 3 to run the fail check on the array.\n";
		while (papi) {
			cin >> choice;
			char an = choice[0];
			switch (an) {
			case '1':
				cout << "\nEnter the students data below.\n";
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < C; j++) {
						cout << "\nAdding student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].setStudent(); cout << "\n";
					}
				}
				papi = false;
				break;
			case '2':
				printFive();
				papi = false;
				break;
			case '3':
				for (int i = 0; i < R; i++) {
					for (int j = 0; j < C; j++) {
						cout << "\nShowing student # : " << (count + 1) << " now.\n";
						cout << "\n"; students[j][i].runFailCheck(); cout << "\n";
					}
				}
				papi = false;
				break;
			default:
				cout << "\nThat was incorrect.\n";
			}
		}
	}

	
	void mainProgram() {		
		bool papi = true;
		bool menu = true;
		string choice = "";
		while (papi) {			
			//loop for the if statement to continue to run the program
			while (menu) {
				//loop for the menu
				cout << "The";
				cout << "How many student's are we doing today?\n(1) 5 Students -- (2) 10 Students\n(3) 15 Students-- (4) 20 Students\n(5) 25 Students-- (6) Print Whole Array\n";				
				cout << "(7) Fail Check -- (8) Exit\n";
				cin >> choice;
				char an = choice[0];
				switch (an) {
				case '1':
					choice1();
					menu = false;
					break;
				case '2':
					choice2();
					menu = false;
					break;
				case '3':
					choice3();
					menu = false;
					break;
				case '4':
					choice4();
					menu = false;
					break;
				case '5':
					choice5();
					menu = false;
					break;
				case '6':
					printAll();
					menu = false;
					break;
				case '7':
					failCheck();
					menu = false;
					break;
				case '8':
					cout << "\nThanks for using our program!\nWe hope to see you again!\n\n\n\n\n";
					exit(0);
				default:
					cout << "\nWoah, that's the wrong choice buddy!\n";
				}
			}	
			string ans = "";
			cout << "\nIs that all today?(1 for yes, 2 for no)\n";
			cin >> ans;
			char as = ans[0];
			switch (as) {
			case '1':
				cout << "\nAlright, thank you!\n";
				papi = false;
				break;
			case '2':
				cout << "\nAlright then, let's go back to the main menu.\n";
				menu = true;
				clearScreen();
				break;
			default:
				cout << "\nWoah, that's the wrong choice buddy!\n";
			}
		}
	}

};

process run;

int main()
{
	run.mainProgram();		
	return 0;
}
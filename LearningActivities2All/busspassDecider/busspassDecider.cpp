// QuadraticEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void seniorChoice() {
	char ch = ',';
	bool huh = true;
	string ans = "";
	cout << "Is your income less than 30,000 annually?(Don't lie now! Y for yes, N for no.)\n";
	cin >> ans;
	ch = ans[0];
	while (huh) {
		if (ch == 'Y' || ch == 'y') {
			cout << "\n\n\nYour bus pass is $70! Life is tough isn't it?!\n\n";
			huh = false;
		}
		else if (ch == 'N' || ch == 'n') {
			cout << "\n\n\nYour bus pass is $100! Have a nice day!!\n\n";
			huh = false;
		}
		else {
			cout << "\nWoah that must be a wrong input. Try again!\n\n";
		}
	}
}

void generalChoice() {
	char ch = ',';
	bool huh = true;
	string ans = "";	
	cout << "Is your income less than $15,000 annually?(Don't lie now! Y for yes, N for no.)\n";		
	while (huh) {
		cin >> ans;
		ch = ans[0];
		if (ch == 'Y' || ch == 'y') {
			cout << "\nStatus: Low Income\nCitizen Type: Poor\nYour bus pass is $30! Life is tough isn't it?!\n\n";
			huh = false;
		}
		else if (ch == 'N' || ch == 'n') {
			cout << "\nStatus: General\nCitizen Type: Person\nYour bus pass is $100! Have a nice day!!\n\n";
			huh = false;
		}
		else {
			cout << "\nWoah that must be a wrong input. Try again!\n\n";		
		}
	}
}

void outputData(char choose) {	
	switch (choose) {
	case 'a': cout << "\nStatus: Baby\nCitizen Type: Baby\nYour bus pass is free! Where's your mommy?!\n\n";
		break;
	case 'b':cout << "\nStatus: Youth\nCitizen Type: Youth\nYour bus pass is $80! Get to school now!\n\n";
		break;
	case 'c': generalChoice();
		break;
	case 'd':seniorChoice();
		break;
	case 'e':cout << "\nStatus: Not Working\nCitizen Type: City Employee\nYour bus pass is $50! \nThanks for your services to our city but get back to work!!\n\n";
		break;
	default: "woah";
	}
}
 //Handles input values for the program
void inputData(double X1, double Z1, double Y1) {
	//Function for receiving data from user or file	
	cout << "Welcome to the buspass decider!\n\n";
	/*Inputs collected here */
	cout << "We are going to collect the inputs now. \n";
	bool why = true;
	int chc = 0;
	char choose = '.';
	string ans = "";
	while (why) {
		cout << "Please select your age group from the following. \n(1)--(0-5) \n(2)--(1-17) \n(3)--(18+) \n(4)--(65+) \n(5)--(City Employee)\n";
		cin >> chc;
		switch (chc) {
		case 1: choose = 'a';
			outputData(choose);
			why = false;
			break;
		case 2:choose = 'b';
			outputData(choose);
			why = false;
			break;
		case 3: choose = 'c';
			outputData(choose);
			why = false;
			break;
		case 4:choose = 'd';
			outputData(choose);
			why = false;
			break;
		case 5:choose = 'e';
			outputData(choose);
			why = false;
			break;
		default: "Woah that's a wrong input \n\n";
		}
	}
	//Values passed to the processData function	
}//**********************************************
 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function
	int X1 = 0, Z1 = 0, Y1 = 0;
	inputData(X1, Z1, Y1);
}//**********************************************

void loopMe() {
	bool woah = true;
	string ans = "";
	while (woah) {
		cout << "Would you like to run the buspass decider today?(Y for yes, N for no.) \n";
		cin >> ans;
		char an = ans[0];
		if (an == 'Y' || an == 'y') {
			runSpecialProgram();
		}
		else {
			cout << "\nAlright, bye! \n";
			woah = false;
		}
	}
}
int main() {
	loopMe();
	return 0;
}

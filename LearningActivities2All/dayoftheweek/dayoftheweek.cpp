// dayoftheweek.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <regex>
#include <ctype.h>
#include "dayoftheweek.h"
using namespace std;

enum Days {
	Monday = 1, 
	Tuesday, 
	Wednesday, 
	Thursday, 
	Friday, 
	Saturday, 
	Sunday
};

void outputData(char choose) {
	//switch statement for outputs
	switch (choose) {
	case 'a': 
		cout << "\nDay: Monday\nNumber: #--" << Days::Monday <<"\n\nWoah!\n\n";
		break;
	case 'b':
		cout << "\nDay: Tuesday\nNumber: #--"<< Days::Tuesday <<"\n\nWoah!\n\n";
		break;
	case 'c':
		cout << "\nDay: Wednesday\nNumber: #--"<<Days::Wednesday<<"\n\nWoah!\n\n";
		break;
	case 'd':
		cout << "\nDay: Thursday\nNumber: #--"<<Days::Thursday<<"\n\nWoah!\n\n";
		break;
	case 'e':
		cout << "\nDay: Friday\nNumber: #--"<<Days::Friday<<"\n\nWoah!\n\n";
		break;
	case 'f':
		cout << "\nDay: Saturday\nNumber: #--"<<Days::Saturday<<"\n\nWoah!\n\n";
		break;
	case 'g':
		cout << "\nDay: Sunday\nNumber: #--"<<Days::Sunday<<"\n\nWoah!\n\n";
		break;
	default: "woah";
	}
}

void inputData() {	
	//Function for receiving data from user or file	
	cout << "Welcome to the buspass decider!\n\n";
	/*Inputs collected here */
	cout << "We are going to collect the inputs now. \n";	
	bool why = true;
	bool hm = true;
	int chc = 0;
	char choose = '.';
	char s = 'l';
	while (why) {
		cout << "Please select a number for the day of the week you want me to print. \n(1)--(Mon) \n(2)--(Tue) \n(3)--(Wed) \n(4)--(Thu) \n(5)--(Fri)\n(6)--(Sat)\n(7)--(Sun)\n";
		cin >> s;		
		switch (s) {
		case '1': 
			choose = 'a';
			outputData(choose);
			why = false;
			break;
		case '2':
			choose = 'b';
			outputData(choose);
			why = false;
			break;
		case '3': 
			choose = 'c';
			outputData(choose);
			why = false;
			break;
		case '4':
			choose = 'd';
			outputData(choose);
			why = false;
			break;
		case '5':
			choose = 'e';
			outputData(choose);
			why = false;
			break;
		case '6':
			choose = 'f';
			outputData(choose);
			why = false;
			break;
		case '7': 
			choose = 'g';
			outputData(choose);
			why = false;
			break;
		default: 
			cout << "Woah that's a wrong input. Please pick from 1-7. \n\n";
		}
	}
	//Values passed to the processData function	
}//**********************************************

 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function	
	inputData();
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

void isVowel(char s) {
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s== 'u') {
		cout << "\nYou chose the letter: " << (char)toupper(s);
		cout << "\nThat's a vowel! Woah!\n\n";
	}
	else if (s == 'y') {
		cout << "\nYou chose the letter: " << (char)toupper(s);
		cout << "\nThat's sometimes a vowel! Woah!!\n\n";
	}
	else {
		cout << "\nYou chose the letter: " << (char)toupper(s);
		cout << "\nThat's a consonant! Woooah!!\n\n";
	}
}
void vowelFinder() {
	char s = 'a';
	bool woah = true;
	cout << "Enter a single, lower case letter only.\n";
	while (woah) {
		cin >> s;
		if (islower(s)) {
			cout << "\nYay! Here we go!\n\n";
			isVowel(s);
			woah = false;
		}
		else {
			cout << "That's not a lowercase letter. Try again.";
		}	
	}
}

int main() {
	//loopMe();
	vowelFinder();
	
	return 0;
}
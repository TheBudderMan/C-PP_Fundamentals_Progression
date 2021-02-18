// monthlyPhoneBill.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
using namespace std;

/*
the two functions additive charge and chooseBill are the main drivers for this program.

as per usual inputData collects the inputs to distribute to the rest of the program.

This time there's only one value to collect which is sent to additiveCharge to select
the charge rate. callCount is also sent too chooseBill which selects the max bill increments 
and handles multiplication and subtraction needed to get the isolated integers for
100 - 150, and 150 - 200.

*/




void clearScreen() {
	int i;
	for (i = 0; i < 10; i++)
		printf("\n\n\n\n\n\n\n\n\n\n");
}

double additiveCharge(int callCount) {
	const double chargeRate1 = 0.40, chargeRate2 = 0.50, chargeRate3 = 0.60, chargeRate4 = 0;
	if (callCount >= 200) {
		return chargeRate1;
	}
	else if (callCount >= 150) {
		return chargeRate2;
	}
	else if (callCount >= 100) {
		return chargeRate3;
	}
	else
		return chargeRate4;
}

void outputMessage(int callCount) {
	const double INITBILL = 200, BILLINCREMENTONE = 230, BILLINCREMENTTWO = 255, FRSTFDY = 100, SCNDFDY = 150, FIDDY = 50;
	string message = "";
	double firstFiddy = 0;
	double conversion = 0;
	double conversion2 = 0;
	double billOut = 0;
	int callOut = 0;
	if (callCount > INITBILL) {
		//should multiply 0.4
		firstFiddy = callCount - INITBILL;
		cout << "\n---------------------------------\n";
		cout << "You are at the max rate available this month!!";
		cout << "\n---------------------------------\n";
	}
	else if (callCount > SCNDFDY && callCount < INITBILL) {
		//should multiply 0.5
		firstFiddy = callCount - SCNDFDY;
		cout << "\n---------------------------------\n";
		cout << "You have: " << (INITBILL - callCount) << " calls left before \nyour rate changes this month.";
		cout << "\n---------------------------------\n";
	}
	else if (callCount > FRSTFDY && callCount < SCNDFDY) {
		callOut = firstFiddy = callCount - FRSTFDY;
		cout << "\n---------------------------------\n";
		cout << "You have: " << (SCNDFDY - callCount) << " calls left before \nyour rate changes this month.";
		cout << "\n---------------------------------\n";
	}
	else if (callCount < FRSTFDY) {
		//outputs initialized bill of 200
		cout << "\n---------------------------------\n";
		cout << "You have: " << (FRSTFDY - callCount) << " calls left before \nyour rate changes this month.";
		cout << "\n---------------------------------\n";
	}

}
double chooseBill(int callCount) {
	const double INITBILL = 200, BILLINCREMENTONE = 230, BILLINCREMENTTWO = 255, FRSTFDY = 100, SCNDFDY = 150, FIDDY = 50;
	string message = "";
	double firstFiddy = 0;
	double conversion = 0;
	double conversion2 = 0;
	double billOut = 0;
	int callOut = 0;
	if (callCount > INITBILL) {
		//should multiply 0.4
		firstFiddy = callCount - INITBILL;
		conversion = firstFiddy * additiveCharge(callCount);
		return billOut = BILLINCREMENTTWO + conversion;
	}
	else if (callCount > SCNDFDY && callCount < INITBILL) {
		//should multiply 0.5
		firstFiddy = callCount - SCNDFDY;
		
		conversion = firstFiddy * additiveCharge(callCount);
		
		return billOut = BILLINCREMENTONE + conversion;
	}
	else if (callCount > FRSTFDY && callCount < SCNDFDY) {
		//should multiply 0.6
		callOut = firstFiddy = callCount - FRSTFDY;
		conversion = firstFiddy * additiveCharge(callCount);
		
		return billOut = INITBILL + conversion;
	}
	else if (callCount < FRSTFDY) {
		//outputs initialized bill of 200
		return billOut = INITBILL;
	}
	return 0;
}

void stringMeSilly(int callCount) {
	//Values added together for output
	clearScreen();
	cout << "\n\nYour bill below!\n\n";
	cout << " \\****************************//\n";
	cout << "  \\**************************//\n";
	cout << "  //**************************\\ \n";
	cout << " //****************************\\ \n";
	cout << "---------------------------------\n";
	cout << "Amount of calls: " << callCount;
	cout << "\nAdditional rate charged:$" << additiveCharge(callCount);
	outputMessage(callCount);
	cout << "Bill Total:$" << chooseBill(callCount) << "\n";
	cout << "---------------------------------\n";
	cout << " \\****************************//\n";
	cout << "  \\**************************//\n";
	cout << "  //**************************\\ \n";
	cout << " //****************************\\ \n";
}

string q2b(char a, int b, bool c) {
	string ret = "The ";
	if (b % 3 > 0){
		ret += "quick ";
	}
	else {
		ret += "slow ";
	}
	c = (!c || c) && (a >= 'A' && a <= 'Z');
	if (c){
		ret += "brown ";
	}
	else {
		ret += "blue ";
	}
	switch (b) {
	case 4:
		ret += "fox.";
		break;
	case 5:
		ret += "penguin.";
		break;
	case 6:
		ret += "bear.";
		break;
	default:
		ret += "cat.";
		break;
	}
	return ret;
}

void inputData(int callCount) {
	//Function for receiving data from user or file	
	cout << "Welcome to the monthly phone bill writer!\n\n";
	/*Inputs collected here */
	
	cout << "We are going to collect the inputs now. \n";
	cout << "Please input the amount of calls for the month. \n\n";
	cin >> callCount;
	
	stringMeSilly(callCount);
	
	//Values passed to the processData function	
}//**********************************************

 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function	
	int callCount = 0;
	inputData(callCount);
}//**********************************************

void loopMe() {
	/*Loop that runs the program until you choose no.*/
	bool woah = true;
	string ans = "";
	while (woah) {
		cout << "Would you like to run the monthly phone bill writer today?(Y for yes, N for no.) \n";
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
	//loopMe();
	cout << q2b('R',5,false);
	return 0;
}

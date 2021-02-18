// DateValidator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
using namespace std;

/*
	There is nothing specified in the assignment to validate the day's of the month
	ie: if the the day in september input is the 23rd, it doesn't know of it's supposed
	to be monday or tuesday for that year.
	It does validate through year though.

	enum variables used for the days and months, switch statements used for
	input and conversion for the output.
	Stringstream was used to convert string to int as	i can only think of checking
	if the input is an integer or not to validate the date.

	Error trapping on the day and month inputs don't allow those values to be wrong.

*/
void clearScreen() {
	int i;
	for (i = 0; i < 10; i++)
		printf("\n\n\n\n\n\n\n\n\n\n");
}


enum Days {
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
enum Months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};


void leapCheck(int chooseYear) {
	if (chooseYear % 400 == 0) {
		cout << "\n\nThat's divisible by 400 so, it is a leap year!\n";
	}
	else if (chooseYear % 100 == 0) {
		cout << "\n\nThat's divisible by 100 so, it is not a leap year!\n";
	}
	else if (chooseYear % 4 == 0) {
		cout << "\n\nThat's divisible by 4 so, it is a leap year!\n";
	}
	else {
		cout << "\n\nThat's not a leap year!\n";
	}
}
void dateCheck(string yearOut) {
	regex integer("(\\+|-)?[[:digit:]]+");
	/*
	Decides if a date is valid by detecting
	if the input value for year is an integer or not
	with regex and string conversion.
	*/
	if (regex_match(yearOut, integer)) {
		cout << "\nThis date is valid! \n" << endl;
	}
	else {
		cout << "\nThis date is NOT valid! \n" << endl;
	}
}

void stringMeSilly(string daysOut, string monthsOut, int dayNum, int chooseYear, string yearOut, int monthNum) {
	//Values added together for output
	cout << "\nDay = " << daysOut; cout << "\nDayNum = " << dayNum;
	cout << "\nMonth = " << monthsOut; cout << "\nMonthNum = " << monthNum;
	cout << "\nYear string = " << yearOut; cout << "\nYear int = " << chooseYear;

	cout << "\n\nYour date below!\n\n";

	cout << monthsOut << ", " << daysOut << " Day: " << dayNum << ". ";
	cout << "Year: " << yearOut << ".\n\n" << endl;
}

void dateCreator(char chooseDay, char chooseMonth, int chooseYear, string yearOut) {
	/*
	This here date creator was made for the sole purpose of converting
	the values input from the input switch statements into strings and
	integers for conversion, manipulation and output.
	*/

	int dayNum = 0;
	int monthNum = 0;
	string daysOut = "";
	string monthsOut = "";
	switch (chooseDay) {
	case 'm':
		daysOut = "Monday";
		dayNum = Days::Monday;
		cout << "\nDay: Monday\nNumber: #--" << Days::Monday << "\n\nWoah!\n\n";
		break;
	case 'n':
		daysOut = "Tuesday";
		dayNum = Days::Tuesday;
		cout << "\nDay: Tuesday\nNumber: #--" << Days::Tuesday << "\n\nWoah!\n\n";
		break;
	case 'o':
		daysOut = "Wednesday";
		dayNum = Days::Wednesday;
		cout << "\nDay: Wednesday\nNumber: #--" << Days::Wednesday << "\n\nWoah!\n\n";
		break;
	case 'p':
		daysOut = "Thursday";
		dayNum = Days::Thursday;
		cout << "\nDay: Thursday\nNumber: #--" << Days::Thursday << "\n\nWoah!\n\n";
		break;
	case 'q':
		daysOut = "Friday";
		dayNum = Days::Friday;
		cout << "\nDay: Friday\nNumber: #--" << Days::Friday << "\n\nWoah!\n\n";
		break;
	case 'r':
		daysOut = "Saturday";
		dayNum = Days::Saturday;
		cout << "\nDay: Saturday\nNumber: #--" << Days::Saturday << "\n\nWoah!\n\n";
		break;
	case 's':
		daysOut = "Sunday";
		dayNum = Days::Sunday;
		cout << "\nDay: Sunday\nNumber: #--" << Days::Sunday << "\n\nWoah!\n\n";
		break;
	default: cout << "woah";
	}
	//Months
	switch (chooseMonth) {
	case 'a':
		monthsOut = "January";
		monthNum = Months::January;
		cout << "\nMonth: January\nNumber: #--" << Months::January << "\n\nWoah!\n\n";
		break;
	case 'b':
		monthsOut = "February";
		monthNum = Months::February;
		cout << "\nMonth: February\nNumber: #--" << Months::February << "\n\nWoah!\n\n";
		break;
	case 'c':
		monthsOut = "March";
		monthNum = Months::March;
		cout << "\nMonth: March\nNumber: #--" << Months::March << "\n\nWoah!\n\n";
		break;
	case 'd':
		monthsOut = "April";
		monthNum = Months::April;
		cout << "\nMonth: April\nNumber: #--" << Months::April << "\n\nWoah!\n\n";
		break;
	case 'e':
		monthsOut = "May";
		monthNum = Months::May;
		cout << "\nMonth: May\nNumber: #--" << Months::May << "\n\nWoah!\n\n";
		break;
	case 'f':
		monthsOut = "June";
		monthNum = Months::June;
		cout << "\nMonth: June\nNumber: #--" << Months::June << "\n\nWoah!\n\n";
		break;
	case 'g':
		monthsOut = "July";
		monthNum = Months::July;
		cout << "\nMonth: July\nNumber: #--" << Months::July << "\n\nWoah!\n\n";
		break;
	case 'h':
		monthsOut = "August";
		monthNum = Months::August;
		cout << "\nMonth: August\nNumber: #--" << Months::August << "\n\nWoah!\n\n";
		break;
	case 'i':
		monthsOut = "September";
		monthNum = Months::September;
		cout << "\nMonth: September\nNumber: #--" << Months::September << "\n\nWoah!\n\n";
		break;
	case 'j':
		monthsOut = "October";
		monthNum = Months::October;
		cout << "\nMonth: October\nNumber: #--" << Months::October << "\n\nWoah!\n\n";
		break;
	case 'k':
		monthsOut = "November";
		monthNum = Months::November;
		cout << "\nMonth: November\nNumber: #--" << Months::November << "\n\nWoah!\n\n";
		break;
	case 'l':
		monthsOut = "December";
		monthNum = Months::December;
		cout << "\nMonth: December\nNumber: #--" << Months::December << "\n\nWoah!\n\n";
		break;
	default: cout << "woah";
	}
	clearScreen();
	leapCheck(chooseYear);
	dateCheck(yearOut);
	//sent to output method 
	stringMeSilly(daysOut, monthsOut, dayNum, chooseYear, yearOut, monthNum);
}

void inputData(bool why, bool hm, int chc, int chooseYear, char chooseDay, char chooseMonth, char s, string yearOut) {
	//Function for receiving data from user or file	
	cout << "Welcome to the date validator!\n\n";
	/*Inputs collected here */
	cout << "We are going to collect the inputs now. \n";
	while (why) {
		cout << "Please select a key for the day of the week you want me to print. \n(1)--(Mon) (2)--(Tue) \n(3)--(Wed) (4)--(Thu) \n(5)--(Fri) (6)--(Sat)\n(7)--(Sun)\n";
		cin >> s;
		switch (s) {
		case '1':
			chooseDay = 'm';
			why = false;
			break;
		case '2':
			chooseDay = 'n';
			why = false;
			break;
		case '3':
			chooseDay = 'o';
			why = false;
			break;
		case '4':
			chooseDay = 'p';
			why = false;
			break;
		case '5':
			chooseDay = 'q';
			why = false;
			break;
		case '6':
			chooseDay = 'r';
			why = false;
			break;
		case '7':
			chooseDay = 's';
			why = false;
			break;
		default:
			cout << "That is an invalid input. Please pick from 1-7. \n\n";
		}
	}
	why = true;
	while (why) {
		cout << "Please select a key for the month you want me to validate.";
		cout << " \n(1)--(Jan) (2)--(Feb) \n(3)--(Mar) (4)--(Apr)";
		cout << "\n(5)--(May) (6)--(Jun)\n(7)--(Jul) (8)--(Aug)\n(9)--(Sep)";
		cout << " (0)--(Oct)\n(-)--(Nov) (=)--(Dec)\n";
		cin >> s;
		switch (s) {
		case '1':
			chooseMonth = 'a';
			why = false;
			break;
		case '2':
			chooseMonth = 'b';
			why = false;
			break;
		case '3':
			chooseMonth = 'c';
			why = false;
			break;
		case '4':
			chooseMonth = 'd';
			why = false;
			break;
		case '5':
			chooseMonth = 'e';
			why = false;
			break;
		case '6':
			chooseMonth = 'f';
			why = false;
			break;
		case '7':
			chooseMonth = 'g';
			why = false;
			break;
		case '8':
			chooseMonth = 'h';
			why = false;
			break;
		case '9':
			chooseMonth = 'i';
			why = false;
			break;
		case '0':
			chooseMonth = 'j';
			why = false;
			break;
		case '-':
			chooseMonth = 'k';
			why = false;
			break;
		case '=':
			chooseMonth = 'l';
			why = false;
			break;
		default:
			cout << "That is an invalid input. Please pick from 1-0 and (-,=). \n\n";
		}
		cout << "\n\n";
	}
	//input taken as string
	cout << "Please enter a year.\n\n";
	cin >> yearOut;
	//throw string into stringstream
	stringstream intConvert(yearOut);
	//converts string to int
	intConvert >> chooseYear;
	dateCreator(chooseDay, chooseMonth, chooseYear, yearOut);
	//Values passed to the processData function	
}//**********************************************

 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function	
	bool why = true;
	bool hm = true;
	int chc = 0;
	int chooseYear = 0;
	string yearOut = "";
	char chooseDay = '.';
	char chooseMonth = '.';
	char s = ',';
	inputData(why, hm, chc, chooseYear, chooseDay, chooseMonth, s, yearOut);
}//**********************************************

void loopMe() {
	/*Loop that runs the program until you choose no.*/
	bool woah = true;
	string ans = "";
	while (woah) {
		cout << "Would you like to run the date validator today?(Y for yes, N for no.) \n";
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
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>
#include <vector> 
#include <ctype.h>
#include <string>
using namespace std;
#define MAXINDEX 256

void stringThing() {	
	char s[MAXINDEX];//max index
	string input = "";
	
	cout << "The string capitalizer is in session!\n";	
	cout << "Write dat string baby!\n";
	//input collection	
	cin.ignore();
	getline(cin, input);	
	// copying the contents of the 
	// string to char array	
	strcpy(s, input.c_str());
	
	cout << "\nThe string you have input is:";
	cout << "\n-------------------------------------\n";
	cout << s;
	cout << "\n-------------------------------------\n";
	
	int j = strlen(s);	

	if (j) {
		s[0] = toupper(s[0]);		
		s[j - 1] = toupper(s[j - 1]);		
	}
	cout <<"The current index is:"<< j << "\nwhile the max index is:" << MAXINDEX << "\n";
	cout << "\n" <<"The string changed: "<< s;
	cout << "\n" << endl;
}

/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////

void searchMe() {
	int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	size_t myArraySize = sizeof(myArray) / sizeof(int);
	int* end = myArray + myArraySize;
	// find the value 0:
	int input;
	cout << "Let's input a number to search from 1-9! ";
	cin >> input;
	//this initiates the if statement
	int* result = find(myArray, end, input);
	if (result != end) {
		// found value at "result" pointer location...
		cout << "\n-------------------------------------\n";
		cout << "\nThe number " << input << " that you have input was found in our array.\n\n";
		cout << "-------------------------------------\n";
	}
	else {
		cout << "\nThe number " << input << " that you have input was not found in our array.\nThe values you can choose are listed below.\n";
		cout << "-------------------------------------\n";
		for (int i = 0; i < myArraySize; i++) {
			cout << "[" << myArray[i] << "] ";
		}
		cout << "\n-------------------------------------\n";
	}
	cout << "\n" << endl;
}

/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////

struct theThing{
	double num;
	double deno;
};

theThing sum(theThing, theThing);

double outDbl(theThing f1, theThing f2) {
	//manipulates the struct data to output a sum	
	double s1 = f1.num * f2.num;	
	double s2 = f1.deno * f2.deno;	
	double s3 = s1 / s2;	
	return s3;
}

void runStuff() {
	double num1, deno1, num2, deno2;
	cout << "Enter fraction 1: numerator: ";
	cin >> num1;
	cout << "\nEnter fraction 1: denominator: ";
	cin >> deno1;
	cout << "Enter fraction 2:numerator: ";
	cin >> num2;
	cout << "Enter fraction 2: denominator: ";
	cin >> deno2;
	theThing f1 = { num1, deno1 };//combines the inputs into the struct
	theThing f2 = { num2, deno2 };//and again
	theThing result = sum(f1, f2);//result for the sum
	cout << result.num << "/" << result.deno;  //displays the sum in a fraction	
	cout << "\n" << "Decimal result: " << outDbl(f1, f2);// displays the sum as a double.	
	
}
void clearScreen() {
	int i;
	for (i = 0; i < 10; i++)
		printf("\n\n\n\n\n\n\n\n\n\n");
}
void runProgram() {
	//Created to cleanup the main function	
	bool papi = true, choice = true;
	string ans = "";
	//sentinel loop that runs the menu.
	while (papi) {
		cout << "Learning activities 4.1 to 4.3\n";
		cout << "Please choose from our Menu listed below.\n";
		cout << "\n(1) Fraction Sum  (2) Search Array\n(3) String editor (4) Exit\n";
		cin >> ans;
		char an = ans[0];
		switch (an) {
		case '1':
			clearScreen();
			cout << "\nLearning activity 4.1.\n";
			runStuff();
			break;
		case '2':
			clearScreen();
			cout << "\nLearning activity 4.2\n";
			searchMe();
			break;
		case '3':
			clearScreen();
			cout << "\nLearning activity 4.3\n";
			stringThing();
			break;
		case '4':
			clearScreen();
			cout << "Thanks for using our program!\nWe hope to see you again!\n\n\n\n\n";
			exit(0);
		default:
			cout << "\nThat's not the right input, please select from 1-4.\n";
		}
		string choice = "";
		cout << "\nIs that all today?\nY or N\n";
		cin >> choice;
		char chc = choice[0];
		if (chc == 'n' || chc == 'N') {			
			cout << "\nAlright, back to the main menu.\n\n\n\n\n";
		}
		else if (chc == 'y' || chc == 'Y') {
			cout << "\nAlright, we hope to see you again!\n\n\n\n\n";
			papi = false;
		}
	}
}

int main(){
	runProgram();
	return 0;
}

theThing sum(theThing f1, theThing f2){
	theThing result = { (f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno };
	return result;
}
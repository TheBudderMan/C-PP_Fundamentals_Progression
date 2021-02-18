// asg5sodv1101Tyler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector> 
#include <ctype.h>
using namespace std;

string content, token, token2;
char cont2[64];
char cont3[64];
//library of commonly used words with verbs lowercase start
string e1 = "and", e2 = "one",e3 = "about", e4 = "on", e5 = "it";
string q1 = "overcoat", q2 = "under", q3 = "umbrella", q4 = "is";
string w1 = "else", w2 = "at", w3 = "end", w4 = "all", w5 = "as", w6 = "in";
string vWords[15] = { e1, e2, e3, e4, e5, q1, q2, q3, q4, w1, w2, w3, w4, w5, w6 };
//
size_t pos = 0;
string delimiter = " ";

void fileReader() {
	//opens the file
	ifstream inFile("first.txt");
	//checks
	if (!inFile) {
		cout << "\n----------------\n";
		cerr << "Cannot open input file";
		cout << "\n----------------\n";
		exit(1);
	}
	else {
		cout << "\n----------------\n";
		cout << "File opened.";
		cout << "\n----------------";
	}
	//creates the usable string named content.
	content.assign((istreambuf_iterator<char>(inFile)),
		(istreambuf_iterator<char>()));
	//copies string content to character array cont2
	strcpy(cont2, content.c_str());	
	//closes the file.
	inFile.close();
}

void fileWriter() {
	//opens the file
	ofstream outFile("second.txt", ofstream::binary);
	//checks
	if (!outFile){
		cout << "\n----------------\n";
		cerr << "Cannot open output file";
		cout << "\n----------------\n";
		exit(1);
	}
	else {
		cout << "\n----------------\n";
		cout << "File opened.";
		cout << "\n----------------\n";
	}
	//writes the new char array to the output file
	outFile << token2;
	//closes the file.
	outFile.close();
}
void greetings() {
	cout << "Welcome to the file reading program.\nReading files now...";
}
void printOutput() {
	int j = strlen(cont2);
	//prints cont2
	
	cout << "\nString from file read in and coverted to char array printed here";
	cout << "\n----------------\n";
	for (int i = 0; i < j; i++) {
		cout << cont2[i];
	}	
	cout << "\n----------------\n";	
	//shows the newly created token2	
	cout << "\nCompleted, new char array";
	cout << "\n----------------\n";
	cout << token2;
	cout << "\n----------------\n";
}

void vowelWords() {			
	//removes any words not within the array of commonly used vowel words	
	while ((pos = content.find(delimiter)) != std::string::npos) {
		token = content.substr(0, pos);
		for (int i = 0; i < 15; i++) {
			if (token == vWords[i]) {
				token2 = token2 + token + delimiter;				
			}
		}		
		content.erase(0, pos + delimiter.length());		
	}	
}

int main(){
	greetings();
	fileReader();
	vowelWords();
	fileWriter();
	printOutput();
	return 0;    
}
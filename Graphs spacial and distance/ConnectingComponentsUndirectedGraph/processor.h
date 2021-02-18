#pragma once
//File processor.h
/*
I am implementing a 2D array within a class defined as theIsland
in a separate header file called 'mainIsland.h'
That class has 11 major functions as defined below.
\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
--------------------------------------------
Functions' #1-#4)							|
*************Print Row1 to Row4*************|
-- Prints row of choice --				    |
--------------------------------------------
\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
--------------------------------------------
Functions' #5-#8)							|
*************Print col5 to col8*************|
-- Prints column of choice --				|
--------------------------------------------
\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
--------------------------------------------
Function #9)								|
*****************printIsland()**************|
Prints the entire island/array that was		|
input by the user through a forloop scanner |
--------------------------------------------
\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
--------------------------------------------|
Function #10)
****************showPerimetre()*************|
shows the perimetre of the shape that		|
was input by the user.						|
--------------------------------------------
\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
--------------------------------------------
Function #11)								|
***************showArea()*******************|
shows the area of the shape input			|
by the user.								|
--------------------------------------------
*/
#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include <array>
#include"mainIsland.h"
using namespace std;
//globally defined integer values for array indexing.
#define R 4 
#define C 4 
/*
object created for island class is defined globally
so every function within this header has access
to the ourIsland object from the mainIsland file.
*/
theIsland ourIsland;
class processor {
public://values initialized here so no need for function to do so.
	//inputs initialized. 
	int input1 = 0, input2 = 0, input3 = 0, input4 = 0;
	int input5 = 0, input6 = 1, input7 = 1, input8 = 0;
	int input9 = 0, input10 = 1, input11 = 1, input12 = 0;
	int input13 = 0, input14 = 0, input15 = 0, input16 = 0;
	//
	void clearScreen() {
		int i;
		for (i = 0; i < 10; i++)
			printf("\n\n\n\n\n\n\n\n\n\n");
	}
	//
	int proPass(int a) {
		/*adds inputs to array if correct*/
		bool pro = false;
		while (!pro) {
			cin >> a;
			if (a == 0 || a == 1) {
				return a;
				pro = true;
			}
			else
				cout << "\nWoah, that wasn't right. Choose 0 or 1.\n";
			return a;
		}
	}
	//
	void printIsland() {
		clearScreen();
		ourIsland.showIsland();
	}
	//
	void printPerim() {
		clearScreen();
		ourIsland.showPerimetre();
	}
	//
	void printArea() {
		clearScreen();
		ourIsland.showArea();
	}
	//
	void fullReport() {
		clearScreen();
		ourIsland.showIsland();
		ourIsland.showArea();
		ourIsland.showPerimetre();	
	}
	void inputData() {
		clearScreen();
		//Inputs collected by user after they choose to run the program.
		cout << "\nSo we're going to go row by row.\n";
		cout << "\nPlease enter the values for row 1. (1 or 0 please)\n";
		ourIsland.setA(proPass(input1));//proPass is passed through to ourIsland object to return a 0 or 1 row by row
		ourIsland.setB(proPass(input2));
		ourIsland.setC(proPass(input3));
		ourIsland.setD(proPass(input4));
		cout << "\nPlease enter the values for row 2. (1 or 0 please)\n";
		ourIsland.setE(proPass(input5));
		ourIsland.setF(proPass(input6));
		ourIsland.setG(proPass(input7));
		ourIsland.setH(proPass(input8));
		cout << "\nPlease enter the values for row 3. (1 or 0 please)\n";
		ourIsland.setI(proPass(input9));
		ourIsland.setJ(proPass(input10));
		ourIsland.setK(proPass(input11));
		ourIsland.setL(proPass(input12));
		cout << "\nPlease enter the values for row 1. (1 or 0 please)\n";
		ourIsland.setM(proPass(input13));
		ourIsland.setN(proPass(input14));
		ourIsland.setO(proPass(input15));
		ourIsland.setP(proPass(input16));
	}
	//
	void rowMenu() {
		clearScreen();
		bool grumpy = true;
		string ans = "";
		while (grumpy) {
			cout << "Welcome to the row menu.\n";
			cout << "Please choose a row.\n";
			cout << "\n(1) Row 1 --- (2) Row 2\n(3) Row 3 --- (4) Row 4\n";
			cin >> ans;
			char an = ans[0];
			switch (an) {
			case '1':
				ourIsland.showRow1();
				grumpy = false;
				break;
			case '2':
				ourIsland.showRow2();
				grumpy = false;
				break;
			case '3':
				ourIsland.showRow3();
				grumpy = false;
				break;
			case '4':
				ourIsland.showRow4();
				grumpy = false;
				break;
			default:
				cout << "That's not the right input, please select from 1-4.";
			}
		}
	}
	//
	void colMenu() {
		clearScreen();
		bool grumpy = true;
		string ans = "";
		while (grumpy) {
			cout << "Welcome to the column menu.\nPlease choose a column to print.\n";
			cout << "\n(1) Column 1 --- (2) Column 2\n(3) Column 3 --- (4) Column 4\n";
			cin >> ans;
			char an = ans[0];
			switch (an) {
			case '1':
				ourIsland.showCol1();
				grumpy = false;
				break;
			case '2':
				ourIsland.showCol2();
				grumpy = false;
				break;
			case '3':
				ourIsland.showCol3();
				grumpy = false;
				break;
			case '4':
				ourIsland.showCol4();
				grumpy = false;
				break;
			default:
				cout << "That's not the right input, please select from 1-4.";
			}
		}
	}
private:	
};
#endif
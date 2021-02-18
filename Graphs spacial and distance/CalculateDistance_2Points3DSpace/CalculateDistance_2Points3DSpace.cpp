// Calculate_Distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;



void outputData(double opP1, double opP2, double twoPoints) {
	cout << "\nThe information you've added was calculated as follows..\n";
	cout << "\nThe distance between the original point and point 1 is: " << opP1 << "\n"; 
	cout << "The distance between the original point and point 2 is: " << opP2 << "\n";
	cout << "The distance between point 1 and point 2 is: " << twoPoints << "\n" ;
	//Now here are all the variables added together to display the original messaged with manipulated datatypes from the processData function
	cout << "\nYay, we can do math!\n" << endl;
}//**********************************************

 //Processes the data that was input from the user
void processData(double X1, double X2, double Y1, double Y2, double Z1, double Z2) {
	cout << "\nLets do some math mkayy....\n";
	const double ZERO = 0;
	const double TWO = 2;
	double D = 0;

	//this does math for the distance between OP and P1
	// i believe technically it's X1 - X0 , Y1 - Y0, Z1 - Z0

	double opP1 = sqrt(pow(X1, 2) + pow(Y1, 2) + pow(Z1, 2));

	//this does math for the distance between OP and P2

	double opP2 = sqrt(pow(X2, 2) + pow(Y2, 2) + pow(Z2, 2));

	//This does math for the distance between the two points. 

	double twoPoints = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2) + pow(Z2 - Z1, 2));

	//Processes and calculates the data through parameters sent from other functions.
	outputData(opP1, opP2, twoPoints);//And finally all of the manipulated variables are being sent to the outputData function to be printed.
}//**********************************************

 //Handles input values for the program
void inputData(double X1, double X2, double Y1, double Y2, double Z1, double Z2) {
	/*
	getting the values for x1,y1,z1 as one point (P1) and x2,y2,z2 as another (P2).
	there must be another initialized value as x0,y0,z0 (OP) as the origin point.
	and the D value is the distance between P1 and P2.
	*/
	//Function for receiving data from user or file	
	cout << "Welcome to daddy's number cruncher 2.0!\n\n\n";

	/* These are now the inputs for one point */
	cout << "We are now collecting the values for point 1..\n";
	//Value for X1 created
	cout << "X1: ";
	cin >> X1;
	//Value for Y1 created
	cout << "Y1: ";
	cin >> Y1;
	//Value for Z1 created
	cout << "Z1: ";
	cin >> Z1;

	/* These are now the inputs for another point */
	cout << "We are now collecting the values for point 2..\n";	
	//Value for X2 created
	cout << "X2: ";
	cin >> X2;
	//Value for Y2 created
	cout << "Y2: ";
	cin >> Y2;
	//Value for Z2 created
	cout << "Z2: ";
	cin >> Z2;

	//Values passed to the processData function
	processData(X1, X2, Y1, Y2, Z1, Z2);
}//**********************************************

 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function
	int X1 = 0, X2 = 0, Y1 = 0, Y2 = 0, Z1 = 0, Z2 = 0;
	inputData(X1, X2, Y1, Y2, Z1, Z2);
}//**********************************************

int main() {
	runSpecialProgram();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
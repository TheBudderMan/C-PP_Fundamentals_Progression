// SODV1101_Class_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std; // <-- You don't need to add std:: before printouts.
//----------------------------------------------
//---Function declaration for the program-------
//----------------------------------------------
//You can apparently sequence the functions and methods in reverse order from first used to output
//without claiming separate function declaration on the top. It's fussy but clearly it makes 
//readability easier as there's no reason to match up the datatypes from declaration to block as it's all together.

/*
conditional operators 
if p1 evaluates to true, then p2 is evaluated.
if p1 is false, then p3 is evaluated.
--syntax--
(p1)?(p2):(p3)
int p1, p2, p3;
p3 = (a>b)?a:b

(p1)? p2:p3
syntax broken down
(a==1)? | cout<<"True" | : |cout << "Not true";
(-p1-)? | (---p2---)   |:  | (--p3---);

if a is not true then output b.

Boolean logic  -- AND, OR, NOT

Logic Gate

AND = && 
OR = ||
NOT = ! -- actually means NOT , not notEqual


Bitwise Operators
bitlevel AND operation
0000 0101 - 5
0000 0011
____________
(f)(f)(f)(f)(f)(f)(f)(t);


result = b * b / (2 * (A) * (C))

*/

void outputData(double heightInMetre, double weightInKilo, double bmiOut) {

	//Displays the final, processed data in a neat, listed format received from the processData function.
	
	int a = 1;
	int b = 2; // ++ after the value (a++) changes value for b - postfix :: ++ before the value (++a) changes that actual value pre-fix
	int c = 3;
	int result = (b * b) / (2 * (a) * (c));

	//post-fix use the value and change :: pre-fix change the value then use 
	//c = a++ + b++   cout << a << b << c :: a=1,b=2,
	cout << "A is: " << a << "\nB is: " << b << "\nC is: " << c << "The result of B^2 / (2ac): " << result;
	cout << "\nThe information you've added was calculated as follows..\n";
	cout << "Height(m): " << heightInMetre << "\n" << "Weight(kg): " << weightInKilo << "\n" << "BMI:: " << bmiOut << endl;
	//Now here are all the variables added together to display the original messaged with manipulated datatypes from the processData function
	cout << "\nYay, we can do math!\n";
}//**********************************************

 //Processes the data that was input from the user
void processData(int num1Out, int num2Out, double weightOut) {
	cout << "Mkay\n";
	const double fInM = 3.28084, PiKil = 2.20462, foot = 12, inchToMetre = 0.0254; // Magic values for processing
	double heightInInches = (num1Out * foot) + num2Out; // Converts height from feet to inches
	double heightInMetre = heightInInches * inchToMetre; // converts inches to metre
	double squareMetre = (heightInMetre * heightInMetre); // squares metre for bmi calc
	double weightInKilo = (weightOut / PiKil);
	double bmiOut = weightInKilo / squareMetre;
	//Processes and calculates the data through parameters sent from other functions.
	outputData(heightInMetre, weightInKilo, bmiOut);//And finally all of the manipulated variables are being sent to the outputData function to be printed.
}//**********************************************

//Handles input values for the program
void inputData(int num1Out, int num2Out, double weightOut) {
	//Function for receiving data from user or file	
	cout << "Can you please tell me how tall you are?\n";
	//Value for X created
	cout << "Please enter a value for feet: ";
	cin >> num1Out;
	//Value for Y created
	cout << "Please enter a value for inches: ";
	cin >> num2Out;
	cout << "Please enter your weight in pounds(lbs): ";
	cin >> weightOut;
	//Values passed to the processData function
	processData(num1Out, num2Out, weightOut);
}//**********************************************

 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function
	int num1Out = 0, num2Out = 0, weightOut = 0;
	inputData(num1Out, num2Out, weightOut);
}//**********************************************

int main(){
	runSpecialProgram();
}
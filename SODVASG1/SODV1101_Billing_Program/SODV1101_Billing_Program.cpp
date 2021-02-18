// SODV1101_Billing_Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std; // <-- You don't need to add std:: before printouts.
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds


void outputData(double billOut, double billCalc, double tipTotalOut, double billPerPerson) {	

	cout << "\nThe information you've added was calculated as follows..\n";
	cout << "Your bill before tax: $" << setprecision(5) << showpoint << billOut << "\nYour bill after tax: $" << setprecision(5) << billCalc;
	cout << "\nYour bill after tip: $" << setprecision(5) << tipTotalOut << "\nBill per person: $" << setprecision(5) << billPerPerson;
	
	//Now here are all the variables added together to display the original messaged with manipulated datatypes from the processData function
	cout << "\nYay, we can do math!\n\n";
}//**********************************************

 //Processes the data that was input from the user
void processData(double taxOut, double tipOut, double billOut, double peeps) {
	cout << "\nMkay\n";
	const double DAWAN = 0.01; // Magic values for processing
	double taxPerc = taxOut*(DAWAN), tipPerc = tipOut * (DAWAN);
	double taxTotal = (taxPerc * billOut);
	double billCalc = billOut + taxTotal; // for bill with tax added output
	double tipTotal = (tipPerc * billCalc); // gives value to calculate tip amount with tax 
	double tipTotalOut = billCalc + tipTotal; // creates value for the total bill with tip and tax.
	double billTotal = billCalc + tipTotal;  // bill total created for use
	double billPerPerson = billTotal / peeps; // value created for per person output
	//Processes and calculates the data through parameters sent from other functions.
	outputData(billOut, billCalc, tipTotalOut, billPerPerson);//And finally all of the manipulated variables are being sent to the outputData function to be printed.
}//**********************************************

//Handles input values for the program
void inputData(double taxOut, double tipOut, double billOut, double peeps) {
	//Function for receiving data from user or file	
	cout << "Welcome to my special program\n......\n.....\n....\n...\n..\n.\n\n";
	//Value for bill before tax created
	cout << "How much is the bill?: ";
	cin >> billOut;
	//Value for tax amount created
	cout << "How much is the tax?(%): ";
	cin >> taxOut;
	//value for tip amount created
	cout << "How much is the tip?(%): ";
	cin >> tipOut;
	//value for amount of people 
	cout << "How many people are paying?: ";
	cin >> peeps;
	cout << "\n";
	//Values passed to the processData function
	processData(taxOut, tipOut, billOut, peeps);
}//**********************************************
 //---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function
	double taxOut = 0, tipOut = 0, billOut = 0, peeps = 0;
	string ans = "";
	inputData(taxOut, tipOut, billOut, peeps);
	for (;;) {
		cout << "\nWould you like to run my special program again? (y for yes, n for no. \n";
		cin >> ans;		
		if(ans == "y" || ans == "Y" || ans == "yes" || ans == "Yes") {
			inputData(taxOut, tipOut, billOut, peeps);
		} else if (ans == "n" || ans == "N" || ans == "no" || ans == "No"){
			cout << "\nAlrighty then. Thanks for using my special program!\n";
			exit(0);
		}
	}	
}//**********************************************
// 
void joboiGraphic() {
	const int WOAH = 0, JOH = 5;
	int x = WOAH, endX = JOH, endY = JOH, y = WOAH;
	cout << "hi there\n\n";
	system("pause");
	string titties2 = "--MMMMMKKKKKKAAAAAAAAAAYYY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	string titties0 = "-------------------------------------------------/\------/\----";
	string titties1 = "------------------------------------------------/--\----/--\---";
	string titties3 = "--------------------------------\\\\\\\\\\\\---/-/\-\--/-/\-\--";
	string titties4 = "----.,*/\%%%(%%%%--/-*/(#%%%%%%%%%\\\\\\\\\\--/-/--\-\/-/--\-\-";
	string titties5 = "----*\\*%%%%------/(\\\##%%%%%%%%%%%%#\\\\\\--|-|--/-/---------";
	string titties6 = "----.-%%%%%/#%%%%%%%%((%%%%%%%%%%%%%%%%\/-----|-|-/-/----------";
	string titties7 = "----.%%%%%/%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\-----|-|-\-\----------";
	string titties8 = "----.,#%%%%%%%%%%%%##%%%%##(((/-#%%%%%%%%\----|-|--\-\---------";
	string titties9 = "-----/%%%%%%%%,-,(#%%%%%%/,*/--#%%%%%%(*/##%##----/-\----------";
	string titties10 = "----#%%%%%%%%%%#*#&&%*#,&@&&&&&/((,/%%%%%#%#%---/---\-------";
	string titties11 = "----#%%%%%%%%%*&&&&&&&**%/&&&&&&((%%%%%%%#%|---/-/_\-\------";
	string titties12 = "----/%%###((/,%&&&&&&&*%*&&&&&&@/#%%%%%%%#%#|-/-/___\-\-----";
	string titties13 = "*#(###%%%%%%%/#&&&&&&*%%%%/-\(**#%%%%%%%%#%/--\-\----/-/----";
	string titties14 = ".\((#%#%%%%%%%%/,(#/-#%%%%%%%%%%%%%%%%%%%%/----\-\--/-/-----";
	string titties15 = "--\#(##%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#/------\-\/-/------";
	string titties16 = "---.####%%%%%%%%%%%%%%%%(%/%%%%%%%%%%%%%/--------\--/-------";
	string titties17 = "----./(\/%%%%%%%%%%%%%%%%##%%%%%%%%%%%%/---------/-/--------";
	string titties18 = "=========.#%%%%%%%%%%%%%%%#(((%%(%%%%#/---------/-/---------";
	string titties19 = "===========.(%%%%%%%%(%%/.---/%%%%%%/------------_----------";
	string titties20 = "==============*#%%%%%%%%%%%%%%%%%%//((((((((----| |---------";
	string titties21 = "------------------.,/#%%%#%%%%##/((((((---------| |---------";
	string titties22 = "-----------------------.*(%(###(----****--------| |---------";
	string titties23 = "---------------------- - ...,\/--------/((((----|_|---------";
	string titties24 = "---------------------.,***,,,,,***/(((((((-------_----------";
	string titties25 = "---------------------.*****,.,**********/(((----|_|---------";
	int count = 0;
	string tOut = "titties" + count;
	cout << "\n";
	for (char& c : titties3) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties4) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties5) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties6) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties7) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties8) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties9) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties10) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties11) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties12) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties13) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties14) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties15) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties16) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	//---8
	for (char& c : titties17) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties18) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties19) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties20) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties21) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties22) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties23) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	for (char& c : titties24) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;
	}
	cout << "\n";
	//---8 
	for (char& c : titties25) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(1));
		count++;	}
	cout << "\n";
	for (char& c : titties2) {
		cout << c;
		this_thread::sleep_for(std::chrono::milliseconds(10));
		count++;
	}
	//--------------------------------
	cout << "\n\n\n";

	for (int y = 0; y < endY; y++) {

		if (y % 2 == 0) {
			for (x = 0; x < endX; x++) {
				cout << "|.";
				this_thread::sleep_for(std::chrono::milliseconds(125));

				//std:this_thread::sleep_for(std::chrono::milliseconds(250));
			}
		}
		else if (y % 2 == 1) {
			for (x = 0; x < endX; x++) {
				cout << "-.";
				this_thread::sleep_for(std::chrono::milliseconds(125));

				//std:this_thread::sleep_for(std::chrono::milliseconds(250));
			}
		}		
		if (x = endX) {
			cout << "|\n";
			x = 0;
		}
	}
}



double q2(double x = 0, double y = 0, double z = 0) {
	x /= z;
	y /= z;

	return x + y;
}

int squareArea(double width = 0) {
	return width * width;
}

int main(){
	cout<< "The values with 5, 5, 2 = " << q2(5,5,2);
	cout << "The values of squareArea = " << squareArea(5.32);
	
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

/*
This version of this assignment goes beyond the scope of the assignment but I don't really know 
a more simple solution than this. The class separation is necessary for 
simplicities sake as writing it the way I had it before was messy and really frustrating to read through.
I now have 2 header files working together to handle the processes. 
*/
#include"processor.h"
/* Object defined to access processor methods */
processor process;
//---Run Program function ----------------------
void runSpecialProgram() {
	//Created to cleanup the main function	
	bool papi = true, choice = true;
	string ans = "";	
	//sentinel loop that runs the menu.
	while (papi) {
		cout << "Welcome to The Island Counter!\nWe can check for the area of a shape, input by you!\nI think that's neat, don't you?\n";
		cout << "We should always have an initialized shape of the 4 center blocks filled.\n";
		cout << "Please choose from our Menu listed below.\n";
		cout << "\n(1) Input island     (2) Print Row Menu\n(3) Print Column Menu(4) Show Island\n(5) Show Perimetre   (6) Show Area\n(7) Full Report      (8) Exit\n";
		cin >> ans;
		char an = ans[0];
		switch (an) {
		case '1':
			process.inputData();
			break;
		case '2':
			process.rowMenu();
			break;
		case '3':
			process.colMenu();
			break;
		case '4':
			process.printIsland();
			break;
		case '5':
			process.printPerim();
			break;
		case '6':
			process.printArea();
			break;
		case '7':
			process.fullReport();
			break;
		case '8':
			cout << "Thanks for using our program!\nWe hope to see you again!\n\n\n\n\n";
			exit(0);
		default:
			cout << "That's not the right input, please select from 1-6.";
		}
		string choice = "";
		cout << "\nIs that all today?\nY or N\n";
		cin >> choice;
		char chc = choice[0];		
		if (chc == 'n' || chc == 'N') {
			process.clearScreen();
			cout << "\nAlright, back to the main menu.\n\n\n\n\n"; 
		}
		else if (chc == 'y' || chc == 'Y') {
			cout << "\nAlright, we hope to see you again!\n\n\n\n\n";
			papi = false;
		}
	}		
}
//
int main() {
	runSpecialProgram();
	return 0;
}
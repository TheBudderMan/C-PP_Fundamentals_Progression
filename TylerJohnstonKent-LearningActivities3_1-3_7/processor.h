#pragma once
#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include <string.h>
#include <array>
using namespace std;
/*
This way of accessing functions/methods through a separate class
seems to be the best way to implement separation for readability
purposes. 

This is my processor class. I keep the bulk of the mathematical processing and 
input collection through here. 
*/

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
	void activity3_7() {
		//then we add the new edited string, into the parser.
		string sTag = "<html>", bTag = "<body>", bEnd = "</body>", hTag = "<head>", hEnd = "</head>";
		string eTag = "</html>", brekT = "</b>", tTag = "<title>", tEnd = "</title>";
		
		//made an array for all the general html tags.
		//cannot add anything with the "" within the tags atm, but this works for general tags.
		string tags[9] = {sTag, bTag, bEnd, hTag, hEnd, brekT, tTag, tEnd};
		string zeString = "<html> <head> <title> My Page! </title> </head> <body> under.. </b> construction.. </b> </body> </html>";
		string delimiter = " ";
		string oString = "<html> <head> <title> My Page! </title> </head> <body> under.. </b> construction.. </b> </body> </html>";
		
		//Original string output
		cout << "\nThis is the original string\n" << zeString << "\n";
		//
		//
		size_t pos = 0;
		string token;
		//
		cout << "\n-----------------------------------------\n";
		cout << "This is the parsed string without deleting the words\n";
		while ((pos = oString.find(delimiter)) != std::string::npos) {
			token = oString.substr(0, pos);
			cout << token << endl;
			oString.erase(0, pos + delimiter.length());
		}
		cout << oString << endl; //the final string output
		cout << "\n-----------------------------------------\n";
		//		
		cout << "\n-----------------------------------------\n";
		cout << "This is the edited/parsed string\n";
		while ((pos = zeString.find(delimiter)) != std::string::npos) {
			token = zeString.substr(0, pos);
			for (int i = 0; i < 9; i++) {
				if (token == tags[i]) {
					cout << token << endl;
				}
			}			
			zeString.erase(0, pos + delimiter.length());			
		}
		cout << zeString << endl; //the final string output
		//
	}
	int getMedian(int a, int b) {
		int calcMedian = (a + b) / 2;
		return calcMedian;	
	}
	//
	int getMode(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
		if (a > b&&
			a > c&&
			a > d&&
			a > e&&
			a > f&&
			a > g&&
			a > h&&
			a > i&&
			a > j) {
			return a;
		}
		else if (b > a &&
			b > c &&
			b > d &&
			b > e &&
			b > f &&
			b > g &&
			b > h &&
			b > i &&
			b > j) {
			return b;
		}
		else if (c > a &&
			c > b &&
			c > d &&
			c > e &&
			c > f &&
			c > g &&
			c > h &&
			c > i &&
			c > j) {
			return c;
		}
		else if (d > a&&
			d > b&&
			d > c&& 
			d > e&& 
			d > f&& 
			d > g&& 
			d > h&& 
			d > i&& 
			d > j) {
			return d;
		}
		else if (e > a&&
			e > b&&
			e > c&&
			e > e&&
			e > f&&
			e > g&&
			e > h&&
			e > i&&
			e > j) {
			return e;
		}
		else if (f > a&&
			f > b&&
			f > c&&
			f > d&&
			f > e&&
			f > g&&
			f > h&&
			f > i&&
			f > j) {
			return f;
		}
		else if (g > a&&
			g > b&&
			g > c&&
			g > d&&
			g > e&&
			g > f&&
			g > h&&
			g > i&&
			g > j) {
			return g;
		}
		else if(h > a&&
				h > b&&
				h > c&&
				h > d&&
				h > e&&
				h > f&&
				h > g&&
				h > i&&
				h > j) {
				return h;
		}
		else if(i > a&&
				i > b&&
				i > c&&
				i > d&&
				i > e&&
				i > f&&
				i > g&&
				i > h&&
				i > j) {
				return i;
		}
		else if(j > a&&
				j > b&&
				j > c&&
				j > d&&
				j > e&&
				j > f&&
				j > g&&
				j > h&& 
				j > i) {
				return j;
		}	
	}
	int getOddMode(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
					
		if(j > a&&
				j > b&&
				j > c&&
				j > d&&
				j > e&&
				j > f&&
				j > g&&
				j > h&&
				j > i) {
				return j;
		}
		else if (i > a&&
			i > b&&
			i > c&&
			i > d&&
			i > e&&
			i > f&&
			i > g&&
			i > h&&
			i > j) {
			return i;
		}
		else if (h > a&&
			h > b&&
			h > c&&
			h > d&&
			h > e&&
			h > f&&
			h > g&&
			h > i&&
			h > j) {
			return h;
		}
		else if (g > a&&
			g > b&&
			g > c&&
			g > d&&
			g > e&&
			g > f&&
			g > h&&
			g > i&&
			g > j) {
			return g;
		}
		else if (f > a&&
			f > b&&
			f > c&&
			f > d&&
			f > e&&
			f > g&&
			f > h&&
			f > i&&
			f > j) {
			return f;
		}
		else if (e > a&&
			e > b&&
			e > c&&
			e > e&&
			e > f&&
			e > g&&
			e > h&&
			e > i&&
			e > j) {
			return e;
		}
				
		else if (d > a&&
			d > b&&
			d > c&&
			d > e&&
			d > f&&
			d > g&&
			d > h&&
			d > i&&
			d > j) {
			return d;
		}
		else if (c > a&&
			c > b&&
			c > d&&
			c > e&&
			c > f&&
			c > g&&
			c > h&&
			c > i&&
			c > j) {
			return c;
		}
		else if (b > a&&
			b > c&&
			b > d&&
			b > e&&
			b > f&&
			b > g&&
			b > h&&
			b > i&&
			b > j) {
			return b;
		}
		else if (a > b&&
			a > c&&
			a > d&&
			a > e&&
			a > f&&
			a > g&&
			a > h&&
			a > i&&
			a > j) {
			return a;
		}
	}
	
	void activity3_6() {
		/*
		Calculate mean, median, mode.
		1)mean is the sum of numbers divided by how many numbers.

		2)median is the number right in the middle of all the numbers
		if there is an even amount of numbers, the median is the average of the middle two.

		3)the mode is the number within the set that repeats the most.

		To make it easier to manage, each number can only between 1-10

		we will say 
		if (arrOfInts[i] == 1) {
			for (int i = 0; i < 10; i++) {
			sum += arrOfInts[i];			
			inputCount = inputCount + 1;
			}		
		}
		*/
		clearScreen();
		int c1 = 0; int c2 = 0; int c3 = 0; int c4 = 0; int c5 = 0;
		int c6 = 0; int c7 = 0; int c8 = 0; int c9 = 0; int c10 = 0;
		int count1 = 0; int count2 = 0; int count3 = 0; int count4 = 0; int count5 = 0;
		int count6 = 0; int count7 = 0; int count8 = 0; int count9 = 0; int count10 = 0;
		int arrOfEven[10] = {3,3,2,1,5,4,7,6,9,3};
		int arrOfOdd[11] = {3,3,2,1,7,9,7,6,9,7,7};
		bool papi = true;
		cout << "We are going to calculate the mean, median and mode of integers input to this program.\n";
		cout << "The data is coming from the 2 hardcoded array arrOfInts.\n";
		int ans = 0; int inputCount = 0; int inputCount2 = 0;
		int sum = 0; int oddSum = 0;
		int an = ans;
		for (int i = 0; i < 10; i++) {
			sum += arrOfEven[i];			
			inputCount = inputCount + 1;
			////////////////////////
			if (arrOfEven[i] == 1) {
				count1++;
			}
			if (arrOfEven[i] == 2) {
				count2++;
			}
			if (arrOfEven[i] == 3) {
				count3++;
			}
			if (arrOfEven[i] == 4) {
				count4++;
			}
			if (arrOfEven[i] == 5) {
				count5++;
			}
			if (arrOfEven[i] == 6) {
				count6++;
			}
			if (arrOfEven[i] == 7) {
				count7++;
			}
			if (arrOfEven[i] == 8) {
				count8++;
			}
			if (arrOfEven[i] == 9) {
				count9++;
			}
			if (arrOfEven[i] == 10) {
				count10++;
			}
			////////////////////////			
		}
		
		////////////////////////
		for (int i = 0; i < 11; i++) {
			oddSum += arrOfOdd[i];
			inputCount2 = inputCount2 + 1;
			if (arrOfOdd[i] == 1) {
				c1++;
			}
			if (arrOfOdd[i] == 2) {
				c2++;
			}
			if (arrOfOdd[i] == 3) {
				c3++;
			}
			if (arrOfOdd[i] == 4) {
				c4++;
			}
			if (arrOfOdd[i] == 5) {
				c5++;
			}
			if (arrOfOdd[i] == 6) {
				c6++;
			}
			if (arrOfOdd[i] == 7) {
				c7++;
			}
			if (arrOfOdd[i] == 8) {
				c8++;
			}
			if (arrOfOdd[i] == 9) {
				c9++;
			}
			if (arrOfOdd[i] == 10) {
				c10++;
			}
		}
		cout << "\nSum = " << sum << "\n";
		int meanSum = sum / inputCount; 
		int meanSum2 = oddSum / inputCount2;
		int max = std::max({c1, c2, c3, c4, c5, c6, c7, c8, c9, c10});
		cout << "The Mean of the even array is: " << meanSum << "\n";
		cout << "The Mean of the odd array is: " << meanSum2 << "\n";
		cout << "The Median for the even array index of 10 is: " << getMedian(arrOfEven[4], arrOfEven[5]) << "\n";
		cout << "The Median for the odd array index of 11 is: " << arrOfOdd[5] << "\n";
		cout << "The Mode for the even array is: " << count3;
		cout << " with a count of: " << getMode(count1, count2, count3, count4, count5, count6, count7, count8, count9, count10);
		cout << "\n";
		cout << "\nThe Mode for the odd array is: ";
		cout << 7 << " with a count of: " << getOddMode(c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
		cout << "\n";
	}
	//
	void activity3_5() {
		clearScreen();
		int rows, coef = 1;
		cout << "Enter number of rows: ";
		cin >> rows;
		for (int i = 0; i < rows; i++){
			for (int space = 1; space <= rows - i; space++)
				cout << "  ";
			for (int j = 0; j <= i; j++){
				if (j == 0 || i == 0)
					coef = 1;
				else
					coef = coef * (i - j + 1) / j;
				cout << coef << "   ";
			}
			cout << endl;
		}
	}
	//
	void activity3_4() {
		// Function to demonstrate printing pattern 
		clearScreen();
		int rows; int count = 0;
		cout << "Please enter a number up to 5.\n";
		cin >> rows;
		while (rows < 1 || rows > 5) {
			cout << "Enter a reasonable number of rows(1-5)";
			cin >> rows;
		}
				
		//uses the input to dynamically size the triangle up to 5 rows.		
		// initialising starting number 
		int num = 1;

		// outer loop to handle number of rows 
		// rows handle the limit
		for (int i = 0; i < rows; i++) {
			//  inner loop to handle number of columns 
			for (int space = 1; space <= rows - i; ++space) {
				cout << "  ";
				++count;
			}
			for (int j = 0; j <= i; j++) {
				// printing number 
				cout << "  "<< num << " ";

				// incrementing number at each column 
				num = num + 1;
			}
			count = 0;
			// ending line after each row 
			cout << endl;
		}		
	}	
	//
	void activity3_3() {
		int num;
		double pi;
		const double FOUR_D = 4.0, TWO_D = 2.0;
		clearScreen();
		cout << "Enter a positive integer: ";
		cin >> num;
		//
		while (num < 1) {
			cout << "Error: Enter a positive integer: ";
			cin >> num;
		}
		//
		for (int count = 1; count <= num; count++) {
			
			if (count == 1) {
				pi = 4;
				cout << count << ":" << pi << endl;
			}
			else if (count % 2 == 1) {
				pi = 4 + (FOUR_D / ((TWO_D * count) - 1));
				cout << count << ":" << pi << endl;
			}
			else {
				pi = 4 - (FOUR_D / ((TWO_D * count) - 1));
				cout << count << ":" << pi << endl;
			}
		}
	}
	//
	void activity3_2() {
		int num1 = 1, num2 = 1, sum = 0;
		clearScreen();
		cout << "\nWe are going to find the perfect numbers between 1 and 500:\n";
		cout << "------------------------------------------------";		
		cout << "\nThose numbers are...\n";
		while (num1 <= 500) {
			while (num2 <= 500) {
				if (num2 < num1) {
					if (num1 % num2 == 0)
						sum = sum + num2;
				}
				num2++;
			}
			if (sum == num1) {
				cout << num1 << "  " << "\n";
			}
			num1++;
			num2 = 1;
			sum = 0;
		}
	}
	//
	//
	void activity3_1() {
		bool papi = true;
		clearScreen();
		cout << "Please enter a single integer.\nIf you want to stop, enter 0.\n";
		int ans = 0;
		int sum = 0;
		int an = ans;
		while (papi) {
			cin >> an;
			sum += an;
			cout << "\nSum = " << sum << "\n";
			if (an == 0) {
				papi = false;
			}
		}
	}
	//		
private:
};
#endif
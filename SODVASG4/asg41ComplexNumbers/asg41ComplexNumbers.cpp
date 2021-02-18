#include <iostream>
#include <complex>

using namespace std;

//the addition function
void add(complex<double>& c1, complex<double>& c2){
	cout << "The sum of " << c1 << " and " << c2 << " complex numbers = " << c1 + c2; //we directly add the two complex nubmers to obtain the sum
}

//the subtraction function
void subtract(complex<double>& c1, complex<double>& c2){
	cout << "\n\nThe subtraction of " << c1 << " and " << c2 << " complex numbers = " << c1 - c2; //we directly subtract the two complex nubmers to obtain the subtraction
}

//the multiplication function
void multiply(complex<double>& c1, complex<double>& c2){
	cout << "\n\nThe multiplication of " << c1 << " and " << c2 << " complex numbers = " << c1 * c2; //we directly multiply the two complex nubmers to obtain the product
}

//the division function
void divide(complex<double>& c1, complex<double>& c2){
	cout << "\n\nThe division of " << c1 << " and " << c2 << " complex numbers = " << c1 / c2; //we directly divide the two complex nubmers to obtain the value
}
//more simple complex number program
void runComplex() {
	complex<double> c1, c2; //a complex number type declaration
	double c1R, c1I, c2R, c2I;
	cout << "Enter the real and imaginary value of the first complex number \n";
	cin >> c1R >> c1I;
	cin.ignore();
	c1.real(c1R); //Assign the real value of c1 complex as c1R
	c1.imag(c1I); //Assign the imaginary value of c1 complex as c1I
	cout << "Enter the real and imaginary value of the second complex number \n";
	cin >> c2R >> c2I;
	cin.ignore();
	c2.real(c2R); //Assign the real value of c2 complex as c2R
	c2.imag(c2I); //Assign the imaginary value of c2 complex as c2I
	//adding two complex number
	add(c1, c2);
	//Subtracting two complex numbers
	subtract(c1, c2);
	//Multiplying two complex numbers
	multiply(c1, c2);
	//Dividing two complex numbers
	divide(c1, c2);
	cin.get();	
}

//
//The structure that holds the complex number
struct ComplexNumber {
	double real1, real2, img1, img2;
};
//
//does the add
void add(ComplexNumber& cn){
	cout << "\nThe sum of the two complex numbers : \n";
	cout << "(" << cn.real1 << " + " << cn.img1 << "i) + (" << cn.real2 << " + " << cn.img2 << "i) ";
	cout << " = " << cn.real1 + cn.real2 << " + " << cn.img1 + cn.img2 << "i";
}
//does the subtract
void subtract(ComplexNumber& cn){
	cout << "\n\nThe subtraction of the two complex numbers : \n";
	cout << "(" << cn.real1 << " + " << cn.img1 << "i) -(" << cn.real2 << " + " << cn.img2 << "i) ";

	if (cn.img1 - cn.img2 < 0) {
		cout << " = " << cn.real1 - cn.real2 << " + (" << cn.img1 - cn.img2 << ")i";
	}
	else {
		cout << " = " << cn.real1 - cn.real2 << " + " << cn.img1 - cn.img2 << "i";
	}
}
//does the multiply
void multiply(ComplexNumber& cn){
	cout << "\n\nThe product of the two complex numbers : \n";
	cout << "(" << cn.real1 << " + " << cn.img1 << "i) * (" << cn.real2 << " + " << cn.img2 << "i) ";
	cout << " = " << (cn.real1 * cn.real2) - (cn.img1 * cn.img2) << " + " << (cn.img1 * cn.real2) + (cn.img2 * cn.real1) << "i";
}

//does the divide
void divide(ComplexNumber& cn){
	cout << "\n\nThe division of the two complex numbers : \n";
	cout << "(" << cn.real1 << " + " << cn.img1 << "i) / (" << cn.real2 << " + " << cn.img2 << "i) ";
	cout << " = (" << (cn.real1 * cn.real2) + (cn.img1 * cn.img2) << " / " << pow(cn.real2, 2) + pow(cn.img2, 2);
	cout << ") + (" << (cn.img1 * cn.real2) - (cn.img2 * cn.real1) << " / " << pow(cn.real2, 2) + pow(cn.img2, 2) << ")i";///sqrt() function included in <cmath> library
}
//more work
void complexNumbers() {
	//too access the struct for the variables
	ComplexNumber cn;
	//collects inputs 1 and 2 for complex number 1
	cout << "Enter the real and imaginary value of the first complex number\n";
	cin >> cn.real1;
	cin >> cn.img1;
	cin.ignore();

	//collects inputs 1 and 2 for complex number 2
	cout << "\nEnter the real and imaginary value of the second complex number\n";
	cin >> cn.real2;
	cin >> cn.img2;
	cin.ignore();

	//sending the inputs off for processing
	add(cn); //adds the numbers
	subtract(cn); //subtracts the numbers
	multiply(cn); //multiplies the numbers
	divide(cn); //divides the numbers (without conquer)

	cin.get();
}

//the main fucntion
int main(){
	complexNumbers();	
	return 0;
}

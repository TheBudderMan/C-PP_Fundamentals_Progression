// LearningAct1-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const float PI = 3.14159f;
float degreesToRadians(float degrees) {
	return degrees * PI / 180.0f;
}
float calcTriangleEdge(float a, float b, float gamma) {
	return sqrt((a * a) + (b * b) - (2 * a * b * cos(gamma)));
}

void runMe() {
	auto a = 0, b = 0, gamma = 0;
	cout << "Enter side A: ";
	cin >> a;
	cout << "Enter side B: ";
	cin >> b;
	cout << "Enter the angle gamma: ";
	cin >> gamma;
	cout << "The length of side c is: " << calcTriangleEdge(a, b, degreesToRadians(gamma)) << endl;
}

int main(){
	runMe();
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

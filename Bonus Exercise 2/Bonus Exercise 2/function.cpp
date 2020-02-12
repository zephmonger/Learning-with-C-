#include "pch.h"
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <math.h>
#include <cstdlib>
using namespace std;
double *myPtr{};

void menu() {
	string name{}; int choice{};
	cout << "Hello, user. Please give me your name!" << endl; cin >> name;
	cout << "Dear " << name << " ," << endl;
	cout << "************** MAIN MENU ****************" << endl;
	cout << "Please enter one of the following choices" << endl;
	cout << "************** MAIN MENU ****************" << endl;

	cout << "1. Initialize your Stack" << endl;
	cout << "2. Push a value in Stack" << endl;
	cout << "3. Pop a value from Stack" << endl;
	cout << "4. Print Stack" << endl;
	cout << "5: Exit The Program" << endl;
	switch (choice) {
	case 1: { double sizeOf{};
			cout << "What will be the size of your stack?" << endl; cin >> sizeOf;

			initial(&sizeOf);


			break; }		
	case 2:


		break;
	case 3:


		break;
	case 4:


		break;
	case 5:
		exit(5);
		break;
	default :
		cout << "Enter one of given options plez, thx." << endl;
	}



}


//Initialize stack
void initial(double *siuzuru) {
	
	myPtr = new double[*siuzuru];

	for (size_t i = 0; i < *siuzuru; i++) {
		myPtr[i] = 0;
	}
	cout << "Stack is initialized with " << *siuzuru << " zeroes!" << endl;
	menu();
}

//Push an element into stack
void addValue(double *add) {


}

//Pop an element from stack
void remuveValue() {


}

//Print the Stack
void printSta() {

	for (auto i : *myPtr) { // we can use the auto data type
		cout << i << endl;
	}
}
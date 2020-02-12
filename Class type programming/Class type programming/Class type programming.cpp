#include "pch.h"
//#include <iostream>
//#include <string>
//
//using namespace std;
//class Player {
//	
//	public:		
//			   
//
//	//Attributes
//	string name;
//	int hp;
//	int xp;
//	
//	//Method
//	void talk(string message) { cout << name << " says: " << message << endl; }
//	bool isDead();
//
//};
//
//
//int main()
//{
//	//Manually creating and initializing an Object
//
//	Player* raminPtr = new Player();  //() <-- constructor
//	raminPtr->name = "Ramin";
//	raminPtr->hp = 100;
//	raminPtr->xp = 50;
//
//	cout << "This is my Player's info" << endl;
//	cout << raminPtr->name << endl;
//	cout << "Hp:  " << raminPtr->hp << endl;
//	cout << "Xp:  " << raminPtr->xp << endl;
//
//
//	string message{};
//	cout << "What is the message from player  " << raminPtr->name << "?" << endl;
//	getline(cin, message);
//
//	raminPtr->talk(message);
//
//
//	return 0;
//}
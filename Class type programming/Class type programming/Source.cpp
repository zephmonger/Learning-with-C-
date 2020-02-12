#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
void menuchoice();
class account {


private:
	//Attributes
	string CustomerName;
	double balance{0};


	
public:
	//Methods
	void setName(string name) { CustomerName = name; };
	string getName() { return CustomerName; };
	void setBalance(double Balance) { balance = Balance; };
	double getBalance() { return balance; };

	void Print() {cout << "Hello " <<getName() << ",		Your current balance is " << getBalance() << endl;};

	void deposit(double amount) { balance += amount; Print(); }
	void withdrawal(double amount) { balance -= amount; Print(); }


};
account * accountNamePtr = new account;

int main() {
	double choice{}; string names{};
	cout << "Good day, " << endl;
	cout << "Welcome to the Bank of Thieves" << endl;
	cout << "Press 1 to Continue Or any other key to exit" << endl; cin >> choice;
	if (choice != 1) {
		exit(0);
	}
	cout << "Enter your given first name" << endl; cin >> names;

	//account * accountNamePtr = new account;
	accountNamePtr->setName(names);

	cout << "Hello "<< accountNamePtr->getName() <<" Your account has been created" << endl;
	menuchoice();
	return 0;
}

void menuchoice() {

	int decision{};
		double moneyDeposit{}, moneyWithdrawal{};
	cout << "-----------Menu---------------" << endl;
	cout << "Press 1 to deposit" << endl;
	cout << "Press 2 to withdraw" << endl;
	cout << "Press 3 to print balance" << endl;
	cout << "Press 4 to exit" << endl;
	cin >> decision;
	switch (decision) {
	case 1: 	cout << "Please enter amount to be Deposited" << endl;
		cin >> moneyDeposit;
		if (moneyDeposit <= 0) {
			cout << "You cannot deposit negative money" << endl;
			menuchoice();
		}
		accountNamePtr->setBalance(moneyDeposit);
		accountNamePtr->Print();
				//cout << "Hello " << accountNamePtr->getName() << ", Your current balance is " << accountNamePtr->deposit(moneyDeposit)<< endl;
				menuchoice();
		break;
	case 2:	
		cout << "Please enter amount to be Withdrawn" << endl;
		cin >> moneyWithdrawal;

		accountNamePtr->withdrawal(moneyWithdrawal);
		menuchoice();
		break;
	case 3:cout << "Your current balance is:  " << accountNamePtr->getBalance() << endl;
		menuchoice();
				break;
	case 4:
		exit(5);
		break;
	default:
		cout << "Please enter a valid menu option!" << endl;
	}
}
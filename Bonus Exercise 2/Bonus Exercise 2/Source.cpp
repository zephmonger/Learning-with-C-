#include <iostream>
using namespace std;
bool Push(int);
int Pop();
void PrintStack();
struct MyStack
{
	int * StackAddr;
	int StackSize;
};
MyStack Stack;
int* Tos;
void InitStack();
void main()
{

	int Choice;
	int MaxChoices;
	char Username[10];
	// set up your Maximum Choice here
	MaxChoices = 4;
	// It creates a menu with 10 items
	Choice = 0;
	int val = 0;
	cout << "Please Enter your name?";
	cin >> Username;
	while (Choice < MaxChoices)
	{
		cout << "Welcome ";
		cout << Username << endl;
		cout << "************** MAIN MENU ****************" << endl;
		cout << "Please Enter one of the following Choices" << endl;
		cout << "************** MAIN MENU ****************" << endl << endl;;
		cout << "0. Initialize your Stack" << endl;
		cout << "1. Push a value in Stack" << endl;
		cout << "2. Pop a value from Stack" << endl;
		cout << "3. Print Stack" << endl;
		cout << "4: Exit The Program" << endl;
		// Print Your choices here
		cin >> Choice;
		switch (Choice)
		{
		case 0:
			InitStack();
			break;
		case 1:
			cout << "Please give me an integer value to push?";
			cin >> val;
			Push(val);
			break;
		case 2:
			cout << "The popped value is " << Pop() << endl;
			break;

		case 3:
			cout << "Content of Stack the way it is in the memory is" << endl;
			PrintStack();
			break;

		case 4:
			return;
		}
	}



}
void InitStack()
{
	cout << "What is your desired array size? " << endl;
	cin >> Stack.StackSize;
	Stack.StackAddr = (int *)malloc(sizeof(int)* Stack.StackSize);
	Tos = Stack.StackAddr;
	int * CurrentElement;
	CurrentElement = Stack.StackAddr;
	for (int i = 0; i < Stack.StackSize; i++)
	{
		*CurrentElement = 0;
		CurrentElement++;
	}
	cout << "Your Stack is Initialized with " << Stack.StackSize << " zeros" << endl;
}
bool Push(int Value)
{
	if (Tos == Stack.StackAddr + Stack.StackSize)
	{
		cout << "Stack is Full" << endl;
		return false;
	}
	*Tos = Value;
	Tos++;
	return true;
}
int Pop()
{
	int PoppedValue = 0;
	if (Tos == Stack.StackAddr)
	{
		cout << "Stack is Empty" << endl;
		return PoppedValue;
	}
	PoppedValue = *(Tos - 1);
	*(Tos - 1) = 0;
	Tos--;
	return PoppedValue;
}
void PrintStack()
{
	if (Tos == Stack.StackAddr)
	{
		cout << "Stack is Empty" << endl;
		return;
	}
	int * CurrentElement;
	CurrentElement = Stack.StackAddr + Stack.StackSize - 1;
	while (CurrentElement >= Stack.StackAddr)
	{
		if (*CurrentElement != 0)
		{
			cout << *CurrentElement << endl;
		}
		CurrentElement--;
	}
}
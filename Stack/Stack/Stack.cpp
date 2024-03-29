#include <iostream>
#include <string>
#include "Stack.hpp"

using std::cout;
using std::endl;

//Stack default constructor that intializes the top index to -1 as it's empty.
Stack::Stack()
{
	topIndex = -1;
}


//Add the value to the stack and checks if it is full before adding.
//Input: Accepts integer values only

void Stack::push(int value)
{
	if (!full()) {
		stack[++topIndex] = value;
	}
}


//Pops the value out of the stack by decrementing the top index.
void Stack::pop() 
{
	if (!empty()) {
		topIndex--;
	}
}

//Returns the value on top of the stack.

int Stack::top() const
{
	return stack[topIndex];
}

//Checks if the stack is empty or not.
//Returns true if the stack is empty and false if it is not.
bool Stack::empty() const
{
	if (topIndex == -1) {
		return true;
	}
	return false;
}


//Checks if the stack is full and return true otherwise return false.
bool Stack::full() const
{
	if (topIndex == 9) {
		return true;
	}
	return false;
}


//Print the contents in the stack.
void Stack::print() const
{
	int tempTopIndex = topIndex;
	if (empty()) {
		cout << "The stack is currently empty." << endl;
	}
	else {
		while (tempTopIndex != -1) {
			cout << stack[tempTopIndex--] << endl;
		}
	}
}
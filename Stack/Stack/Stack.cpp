#include <iostream>
#include <string>
#include "Stack.hpp"

using std::cout;
using std::endl;

Stack::Stack()
{
	topIndex = -1;
}

void Stack::push(int value)
{
	stack[++topIndex] = value;
}

void Stack::pop() 
{
	topIndex--;
}

int Stack::top() const
{
	return stack[topIndex];
}

bool Stack::empty() const
{
	if (topIndex == -1) {
		return true;
	}
	return false;
}

void Stack::print() 
{
	if (empty()) {
		cout << "The stack is currently empty." << endl;
	}
	else {
		cout << "The contents in the stack: " << endl;
		while (!empty()) {
			int value = top();
			cout << value << endl;
			pop();
		}
	}
}


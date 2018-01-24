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
	if (!empty()) {
		topIndex--;
	}
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
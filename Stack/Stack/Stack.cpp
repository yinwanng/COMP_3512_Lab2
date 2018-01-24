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
	if (!full()) {
		stack[++topIndex] = value;
	}

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

bool Stack::full() const
{
	if (topIndex == 9) {
		return true;
	}
	return false;
}

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